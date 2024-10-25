using Mono.Data.Sqlite;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class LocationSceneManager : MonoBehaviour
{
    public GameObject imagePrefab;  // Prefab cho mỗi hình ảnh trong ScrollView
    public Transform content;       // Content của ScrollView để chứa các Image

    private List<Sprite> imageSprites = new List<Sprite>(); // Danh sách các sprite từ DB
    private List<Sprite> imageSpritesOriginal = new List<Sprite>(); // Danh sách các sprite từ DB chưa xữ lý cover
    private string dbPath;

    public GameObject largeImagePanel; // Panel bao quanh image lớn (nền tối)
    public Image largeImage; // UI Image lớn hiển thị ảnh

    private int currentImageIndex; // Chỉ số của ảnh hiện tại trong danh sách

    private Vector2 startTouchPosition;
    private Vector2 endTouchPosition;
    private bool isDragging = false;
    private float dragThreshold = 50f; // Ngưỡng để xác định swipe
    private bool isDragOnLargeImage = false; // Biến kiểm tra drag chỉ trên largeImage

    private RectTransform largeImageRectTransform;
    private float originalAlpha = 1f; // Độ mờ gốc của ảnh lớn
    private CanvasGroup largeImageCanvasGroup; // Để thay đổi độ mờ (alpha) của ảnh lớn


    // Start is called before the first frame update
    void Start()
    {
        // Ẩn panel hiển thị ảnh lớn khi mới bắt đầu
        largeImagePanel.SetActive(false);
        // Lấy RectTransform của ảnh lớn
        largeImageRectTransform = largeImage.GetComponent<RectTransform>();
        // Thêm CanvasGroup vào largeImage để quản lý alpha(độ mờ)
        largeImageCanvasGroup = largeImage.gameObject.GetComponent<CanvasGroup>();
        largeImageCanvasGroup.alpha = originalAlpha; // Đặt alpha mặc định là 1 (ảnh hiển thị hoàn toàn)


        // Đường dẫn tới file database trong thư mục StreamingAssets
        string filepath = Path.Combine(Application.streamingAssetsPath, "p2a.db");

        // Với Android, cần copy database từ StreamingAssets sang persistentDataPath để có quyền truy cập đọc/ghi
        if (Application.platform == RuntimePlatform.Android)
        {
            string loadDb = Path.Combine(Application.persistentDataPath, "p2a.db");

            if (!File.Exists(loadDb))
            {
                WWW loadDbFile = new WWW(filepath);
                while (!loadDbFile.isDone) { }

                File.WriteAllBytes(loadDb, loadDbFile.bytes);
            }

            dbPath = loadDb;
        }
        else
        {
            dbPath = filepath;
        }
        // Giả sử bạn lấy các hình ảnh thuộc location_id = 1
        LoadImagesByLocation(1);
    }
    private void Update()
    {
        HandleMouseDrag();
    }
    void LoadImagesByLocation(int locationId)
    {
        // Kết nối tới database
        string conn = "URI=file:" + dbPath; // Path to database.
        using (IDbConnection dbconn = new SqliteConnection(conn))
        {
            dbconn.Open(); // Mở kết nối tới database.
            using (IDbCommand dbcmd = dbconn.CreateCommand())
            {
                // Truy vấn các hình ảnh dựa trên location_id
                string sqlQuery = "SELECT image_name FROM image WHERE location_id = @location_id";
                dbcmd.CommandText = sqlQuery;
                var parameter = dbcmd.CreateParameter();
                parameter.ParameterName = "@location_id";
                parameter.Value = locationId;
                dbcmd.Parameters.Add(parameter);

                using (IDataReader reader = dbcmd.ExecuteReader())
                {
                    // Danh sách đường dẫn tới các hình ảnh
                    List<string> imagePaths = new List<string>();

                    while (reader.Read())
                    {
                        // Lấy tên file của hình ảnh
                        string imageName = reader.GetString(0);
                        string imagePath = Path.Combine(Application.streamingAssetsPath, "Images", imageName) + ".jpg";

                        // Thêm hình ảnh vào danh sách
                        imagePaths.Add(imagePath);
                    }

                    // Hiển thị hình ảnh trong ScrollView
                    DisplayImages(imagePaths);

                    reader.Close();
                }

                dbcmd.Dispose();
            }

            dbconn.Close();
        }
    }

    // Hàm hiển thị các hình ảnh trong ScrollView
    void DisplayImages(List<string> imagePaths)
    {
        int i = 0;
        foreach (string imagePath in imagePaths)
        {
            // Load texture từ file hình ảnh
            Texture2D texture = LoadTexture(imagePath);

            if (texture != null)
            {
                // Tạo đối tượng Image từ prefab
                GameObject newImageObj = Instantiate(imagePrefab, content);

                // Lấy component Image của đối tượng và gán sprite cho nó
                Image imageComponent = newImageObj.GetComponent<Image>();  

                // Lấy tỷ lệ của ảnh (width/height)
                float imageRatio = (float)texture.width / texture.height;

                // Cắt texture để thành hình vuông
                int squareSize = Mathf.Min(texture.width, texture.height);
                Rect squareRect = new Rect(
                    (texture.width - squareSize) / 2, // Cắt ở giữa nếu chiều rộng lớn hơn
                    (texture.height - squareSize) / 2, // Cắt ở giữa nếu chiều cao lớn hơn
                    squareSize, squareSize);

                // Chuyển Texture2D thành Sprite hình vuông
                Sprite newSprite = Sprite.Create(texture, squareRect, new Vector2(0.5f, 0.5f));
                Sprite newSpriteOriginal = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));

                // Gán sprite cho Image
                imageComponent.sprite = newSprite;

                // Lấy RectTransform của đối tượng Image mới
                RectTransform imageRectTransform = newImageObj.GetComponent<RectTransform>();

                // Lấy chiều cao của ScrollView
                float scrollViewHeight = ((RectTransform)content).rect.height;

                // Đặt width và height cho newImageObj (đặt width = height và bằng height của ScrollView)
                imageRectTransform.sizeDelta = new Vector2(scrollViewHeight, scrollViewHeight);

                imageSprites.Add(newSprite); // Thêm sprite vào danh sách 
                imageSpritesOriginal.Add(newSpriteOriginal);
                int localIndex = i;
                newImageObj.GetComponent<Button>().onClick.AddListener(() => OnImageClick(localIndex));

                i++;

            }
            else
            {
                Debug.LogError("Could not load texture from path: " + imagePath);
            }
        }
    }

    // Hàm load texture từ file hình ảnh
    Texture2D LoadTexture(string path)
    {
        byte[] fileData;

        if (File.Exists(path))
        {
            fileData = File.ReadAllBytes(path);
            Texture2D tex = new Texture2D(2, 2);
            tex.LoadImage(fileData); // Sẽ tự động tạo kích thước của hình ảnh
            return tex;
        }

        return null;
    }
    // Hàm gọi khi click vào image trong ScrollView
    public void OnImageClick(int imageIndex)
    {
        // Hiển thị ảnh lớn và panel nền tối
        currentImageIndex = imageIndex;
        largeImage.sprite = imageSpritesOriginal[imageIndex];
        largeImage.GetComponent<Image>().preserveAspect = true;
        largeImagePanel.SetActive(true); 

        // Reset vị trí và alpha của ảnh
        largeImageRectTransform.anchoredPosition = Vector2.zero;
        largeImageCanvasGroup.alpha = originalAlpha;
    }

    // Hàm đóng panel khi swipe lên
    public void CloseLargeImage()
    {
        largeImagePanel.SetActive(false);
    }

    // Xử lý sự kiện kéo (swipe)
    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.delta.magnitude > 0)
        {
            startTouchPosition = eventData.position;
        }
    }

    // Xử lý khi kết thúc swipe
    public void OnEndDrag(PointerEventData eventData)
    {
        Vector2 endTouchPosition = eventData.position;
        Vector2 difference = endTouchPosition - startTouchPosition;

        if (Mathf.Abs(difference.x) > Mathf.Abs(difference.y)) // Swipe trái/phải
        {
            if (difference.x > 0) // Swipe phải (trở về ảnh trước)
            {
                ShowPreviousImage();
            }
            else if (difference.x < 0) // Swipe trái (chuyển tới ảnh sau)
            {
                ShowNextImage();
            }
        }
        else // Swipe lên để đóng
        {
            if (difference.y > 0)
            {
                CloseLargeImage();
            }
        }
    }

    // Xử lý kéo bằng chuột (thay thế cho touch/drag trên Windows)
    void HandleMouseDrag()
    {
        if (Input.GetMouseButtonDown(0)) // Khi bắt đầu click chuột
        {
            if (IsPointerOverLargeImage()) // Kiểm tra xem chuột có đang trên largeImage không
            {
                startTouchPosition = Input.mousePosition;
                isDragging = true;
                isDragOnLargeImage = true; // Chỉ drag nếu trên largeImage
            }
        }

        if (Input.GetMouseButton(0) && isDragging) // Khi đang kéo chuột
        {
            if (isDragOnLargeImage)
            {
                Vector2 currentTouchPosition = Input.mousePosition;
                Vector2 difference = currentTouchPosition - startTouchPosition;

                // Điều kiện di chuyển ngang hoặc dọc
                if (Mathf.Abs(difference.x) > Mathf.Abs(difference.y)) // Di chuyển ngang (trái/phải)
                {
                    // Chỉ cho phép di chuyển ảnh sang trái hoặc phải
                    largeImageRectTransform.anchoredPosition = new Vector2(difference.x, 0);
                }
                else // Di chuyển dọc (lên)
                {
                    // Chỉ cho phép di chuyển ảnh theo phương dọc
                    largeImageRectTransform.anchoredPosition = new Vector2(0, difference.y);
                }

                // Tính toán độ mờ dần của ảnh (khi swipe càng xa thì ảnh càng mờ)
                float alpha = Mathf.Clamp(1 - Mathf.Abs(difference.magnitude) / dragThreshold, 0.4f, 1f);
                largeImageCanvasGroup.alpha = alpha;
            }
        }

        if (Input.GetMouseButtonUp(0) && isDragging) // Khi thả chuột
        {
            endTouchPosition = Input.mousePosition;
            isDragging = false;

            if (isDragOnLargeImage) // Chỉ xử lý khi drag bắt đầu từ largeImage
            {
                Vector2 difference = endTouchPosition - startTouchPosition;

                if (Mathf.Abs(difference.x) > Mathf.Abs(difference.y)) // Swipe trái/phải
                {
                    if (Mathf.Abs(difference.x) > dragThreshold) // Kiểm tra xem có vuốt đủ xa không
                    {
                        if (difference.x > 0 && currentImageIndex > 0) // Vuốt sang phải (trở về ảnh trước)
                        {
                            ShowPreviousImage();
                        }
                        else if (difference.x < 0 && currentImageIndex < imageSprites.Count - 1) // Vuốt sang trái (chuyển tới ảnh sau)
                        {
                            ShowNextImage();
                        }
                        else
                        {
                            StartCoroutine(SmoothReturnToPosition()); // Nếu ở ảnh đầu/cuối, quay lại vị trí ban đầu
                        }
                    }
                    else
                    {
                        StartCoroutine(SmoothReturnToPosition()); // Nếu kéo không đủ xa, đưa ảnh về vị trí cũ
                    }
                }
                else // Swipe lên để đóng ảnh lớn
                {
                    if (Mathf.Abs(difference.y) > dragThreshold) // Kiểm tra xem có vuốt đủ xa không
                    {
                        if (difference.y > 0) // Vuốt lên
                        {
                            CloseLargeImage();
                        }
                        else
                        {
                            StartCoroutine(SmoothReturnToPosition()); // Nếu kéo không đủ xa, đưa ảnh về vị trí cũ
                        }
                    }
                    else
                    {
                        StartCoroutine(SmoothReturnToPosition()); // Nếu kéo không đủ xa, đưa ảnh về vị trí cũ
                    }
                }
            }

            // Reset biến kiểm tra drag
            isDragOnLargeImage = false;
        }
    }
    // Kiểm tra nếu drag bắt đầu trên largeImage
    bool IsPointerOverLargeImage()
    {
        // Kiểm tra xem con trỏ chuột có đang trên largeImage không
        RectTransform rectTransform = largeImage.GetComponent<RectTransform>();
        Vector2 localMousePosition = rectTransform.InverseTransformPoint(Input.mousePosition);
        return rectTransform.rect.Contains(localMousePosition);
    }
    // Chuyển tới ảnh trước đó
    private void ShowPreviousImage()
    {
        if (currentImageIndex > 0)
        {
            currentImageIndex--;
            largeImage.sprite = imageSpritesOriginal[currentImageIndex];
            ResetImagePositionAndAlpha();
        }
    }

    // Chuyển tới ảnh tiếp theo
    private void ShowNextImage()
    {
        if (currentImageIndex < imageSpritesOriginal.Count - 1)
        {
            currentImageIndex++;
            largeImage.sprite = imageSpritesOriginal[currentImageIndex];
            ResetImagePositionAndAlpha();
        }
    }

    // Đặt lại vị trí và alpha của ảnh lớn
    private void ResetImagePositionAndAlpha()
    {
        largeImageRectTransform.anchoredPosition = Vector2.zero;
        largeImageCanvasGroup.alpha = originalAlpha;
    }

    // Hiệu ứng đưa ảnh trở về vị trí ban đầu và khôi phục alpha
    IEnumerator SmoothReturnToPosition()
    {
        float duration = 0.3f;
        Vector2 startPos = largeImageRectTransform.anchoredPosition;
        float startAlpha = largeImageCanvasGroup.alpha;

        for (float t = 0; t < duration; t += Time.deltaTime)
        {
            float normalizedTime = t / duration;
            largeImageRectTransform.anchoredPosition = Vector2.Lerp(startPos, Vector2.zero, normalizedTime);
            largeImageCanvasGroup.alpha = Mathf.Lerp(startAlpha, originalAlpha, normalizedTime);
            yield return null;
        }

        largeImageRectTransform.anchoredPosition = Vector2.zero;
        largeImageCanvasGroup.alpha = originalAlpha;
    }
}
