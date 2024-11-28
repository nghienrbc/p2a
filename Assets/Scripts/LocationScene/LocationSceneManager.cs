//using Mono.Data.Sqlite;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
//using SQLite4Unity3d;
using System.Linq;
using TMPro;
using UnityEngine.Networking;
using SQLite4Unity3d;

public class Location
{
    [PrimaryKey, AutoIncrement]
    public int id { get; set; }
    public string location_name { get; set; }
    public string location_description { get; set; }
    public string location_location { get; set; }
    public int nation_id { get; set; }  // Phải khớp với trường nation_id trong database
}

public class ImageTable {
    [PrimaryKey, AutoIncrement]
    public int id { get; set; }

    public string image_name { get; set; }
    public int location_id { get; set; }
}

public class P2ADataService
{
    private SQLiteConnection _connection;

    public P2ADataService(string databasePath)
    {
        // Kết nối đến database với đường dẫn cho sẵn
        _connection = new SQLiteConnection(databasePath, SQLiteOpenFlags.ReadWrite | SQLiteOpenFlags.Create);
        Debug.Log("Connected to database at " + databasePath);
    }

    // Phương thức để lấy tất cả Location theo nation_id
    public IEnumerable<Location> GetLocationsByLocationId(int locationId)
    {
        return _connection.Table<Location>().Where(loc => loc.id == locationId).ToList();
    }

    // Phương thức để lấy tất cả Location theo nation_id
    public IEnumerable<ImageTable> GetImageByLocationId(int locationId)
    {
        return _connection.Table<ImageTable>().Where(img => img.location_id == locationId).ToList();
    }
}

public class LocationSceneManager : MonoBehaviour
{
    public GameObject imagePrefab;  // Prefab cho mỗi hình ảnh trong ScrollView
    public Transform content;       // Content của ScrollView để chứa các Image

    public GameObject locationPanel;
    public Image locationImage; // UI Image lớn hiển thị ảnh
    public TMP_Text locationNameTxt;
    public TMP_Text locationLocationTxt;
    public TMP_Text locationInfoTxt;

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

    private P2ADataService _dataService;

    // Start is called before the first frame update
    void Start()
    {
        // Thiết lập đường dẫn tới database trong StreamingAssets
        string dbPath = GetDatabasePath("p2a.db");
        _dataService = new P2ADataService(dbPath);
        // Ẩn panel hiển thị ảnh lớn khi mới bắt đầu
        largeImagePanel.SetActive(false);
        // Lấy RectTransform của ảnh lớn
        largeImageRectTransform = largeImage.GetComponent<RectTransform>();
        // Thêm CanvasGroup vào largeImage để quản lý alpha(độ mờ)
        largeImageCanvasGroup = largeImage.gameObject.GetComponent<CanvasGroup>();
        largeImageCanvasGroup.alpha = originalAlpha; // Đặt alpha mặc định là 1 (ảnh hiển thị hoàn toàn)


        StartCoroutine(CopyFolderFromStreamingAssets("Images")); 
    }

    public void GetImageByLocationId(int locationId)
    {
        int targetLocationId = locationId;
        IEnumerable<ImageTable> images = _dataService.GetImageByLocationId(targetLocationId);
        IEnumerable<Location> locations = _dataService.GetLocationsByLocationId(targetLocationId);
        if (locations.Count() > 0)
        {
            Debug.Log("location nè");
           // Location location = locations.First();
            locationPanel.gameObject.SetActive(true);

            UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Show, 0.5f);

            locationNameTxt.text = locations.First().location_name;
            locationInfoTxt.text = locations.First().location_description;
            locationLocationTxt.text = locations.First().location_location;
            if (images.Count() > 0)
            {
                DisplaySmallImages(images.First().image_name);
            }
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, false, 3000);
        }

        List<string> imagePaths = new List<string>();
        // In kết quả ra Console
        foreach (var image in images)
        {
            Debug.Log($"Location ID: {image.id}, Name: {image.image_name}, Nation ID: {image.location_id}");
            // Danh sách đường dẫn tới các hình ảnh
            string imageName = image.image_name;
            string imagePath = Path.Combine(Application.persistentDataPath, "Images", imageName) + ".jpg";
            Debug.Log("imagePath"+ imagePath);
            imagePaths.Add(imagePath);
        }
        DisplayImages(imagePaths);

        if (imageSpritesOriginal.Count() > 0)
        {
            largeImage.sprite = imageSpritesOriginal[0];
            largeImage.GetComponent<Image>().preserveAspect = true;
            largeImagePanel.SetActive(true);

            // Reset vị trí và alpha của ảnh
            largeImageRectTransform.anchoredPosition = Vector2.zero;
            largeImageCanvasGroup.alpha = originalAlpha;
        }
        else
        {
            //Nếu không có ảnh thì xóa iamgelarge
            largeImagePanel.SetActive(false);
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
        }
    }

    private string GetDatabasePath(string dbName)
    {
        string path;

#if UNITY_EDITOR
        path = Application.dataPath + "/StreamingAssets/" + dbName;
#elif UNITY_ANDROID
    path = Application.persistentDataPath + "/" + dbName;
    if (!System.IO.File.Exists(path))
    {
        string sourcePath = "jar:file://" + Application.dataPath + "!/assets/" + dbName;
        UnityWebRequest request = UnityWebRequest.Get(sourcePath);
        request.SendWebRequest();
        while (!request.isDone) { }
        if (request.result == UnityWebRequest.Result.Success)
        {
            System.IO.File.WriteAllBytes(path, request.downloadHandler.data);
        }
        else
        {
            Debug.LogError("Failed to copy database: " + request.error);
        }
    }
#elif UNITY_IOS
    path = Application.persistentDataPath + "/" + dbName;
    if (!System.IO.File.Exists(path))
    {
        var loadDb = System.IO.Path.Combine(Application.dataPath + "/Raw", dbName);
        System.IO.File.Copy(loadDb, path);
    }
#endif

        return path;
    } 

    private void Update()
    {
        HandleMouseDrag();
    }
    // Hàm hiển thị các hình ảnh trong ScrollView
    void DisplaySmallImages(string imageName)
    { 
        string imagePath = Path.Combine(Application.persistentDataPath, "Images", imageName) + ".jpg";
        Debug.Log("imagePath 000: "+ imagePath);
        // Load texture từ file hình ảnh
        Texture2D texture = LoadTexture(imagePath);

        if (texture != null)
        {
            // Lấy component Image của đối tượng và gán sprite cho nó
            Image imageComponent = locationImage.GetComponent<Image>();

            float imageAspect = (float)texture.width / texture.height;

            // Lấy kích thước của UI Image
            RectTransform rectTransform = locationImage.GetComponent<RectTransform>();
            float uiAspect = rectTransform.rect.width / rectTransform.rect.height;

            // Tính toán để cắt ảnh thành hình chữ nhật phù hợp
            int newWidth, newHeight;
            int xOffset = 0, yOffset = 0;

            if (imageAspect > uiAspect)
            {
                // Ảnh rộng hơn UI Image -> cắt chiều ngang
                newHeight = texture.height;
                newWidth = Mathf.RoundToInt(newHeight * uiAspect);
                xOffset = (texture.width - newWidth) / 2;
            }
            else
            {
                // Ảnh cao hơn hoặc vừa tỷ lệ -> cắt chiều dọc
                newWidth = texture.width;
                newHeight = Mathf.RoundToInt(newWidth / uiAspect);
                yOffset = (texture.height - newHeight) / 2;
            }

            // Tạo vùng cắt ảnh (Rect)
            Rect cropRect = new Rect(xOffset, yOffset, newWidth, newHeight);
             
            // Gán sprite cho Image
            imageComponent.sprite = Sprite.Create(texture, cropRect, new Vector2(0.5f, 0.5f)); ;
             

            locationImage.preserveAspect = false;
            // Lấy chiều cao của ScrollView
           // float scrollViewHeight = ((RectTransform)content).rect.height;

            // Đặt width và height cho newImageObj (đặt width = height và bằng height của ScrollView)
            //imageRectTransform.sizeDelta = new Vector2(scrollViewHeight, scrollViewHeight); 
        }
        else
        {
            Debug.LogError("Could not load texture from path 000: " + imagePath);
        }
    }

    // Hàm hiển thị các hình ảnh trong ScrollView
    void DisplayImages(List<string> imagePaths)
    {
        int i = 0;
        // Xóa tất cả các con trong content
        foreach (Transform child in content)
        {
            Destroy(child.gameObject);
        }
        imageSprites.Clear();
        imageSpritesOriginal.Clear();

        foreach (string imagePath in imagePaths)
        {
            // Load texture từ file hình ảnh
            Texture2D texture = LoadTexture(imagePath);
            Debug.Log("imagePath 111: " + imagePath);

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
                float scrollViewHeight = ((RectTransform)content).rect.width;

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
                Debug.LogError("Could not load texture from path 111: " + imagePath);
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
                    // Tính toán độ mờ dần của ảnh (khi swipe càng xa thì ảnh càng mờ)
                    float alpha = Mathf.Clamp(1 - Mathf.Abs(difference.magnitude) / dragThreshold, 0.4f, 1f);
                    largeImageCanvasGroup.alpha = alpha;
                }

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

    public void BtnBackClick()
    {
        SceneManager.LoadScene("PlayGameScene");
    }

    public IEnumerator CopyFolderFromStreamingAssets(string folderName)
    {
        string sourceFolder = Path.Combine(Application.streamingAssetsPath, folderName);
        string destinationFolder = Path.Combine(Application.persistentDataPath, folderName);

        // Tạo thư mục đích nếu chưa tồn tại
        if (!Directory.Exists(destinationFolder))
        {
            Directory.CreateDirectory(destinationFolder);
        }
         
        // Android: Sử dụng UnityWebRequest để sao chép file từ APK
        string fileListPath = Path.Combine(Application.streamingAssetsPath, folderName, "filelist.txt");

        // Đọc filelist.txt
        string[] files;
#if UNITY_ANDROID
        // Trên Android: Sử dụng UnityWebRequest để tải filelist.txt
        using (UnityWebRequest request = UnityWebRequest.Get(fileListPath))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError($"Failed to load filelist.txt: {request.error}");
                yield break;
            }

            // Lấy danh sách file từ nội dung filelist.txt
            string fileListContent = request.downloadHandler.text;
            files = fileListContent.Split(new[] { '\n', '\r' }, System.StringSplitOptions.RemoveEmptyEntries);
        }
#else
        // Trên các nền tảng khác: Sử dụng File.ReadAllLines
        if (!File.Exists(fileListPath))
        {
            Debug.LogError("Missing filelist.txt in " + sourceFolder);
            yield break;
        }

        files = File.ReadAllLines(fileListPath);
#endif

        // Sao chép từng file
        foreach (string file in files)
        {
            string sourcePath = Path.Combine(Application.streamingAssetsPath, folderName, file);
            string destinationPath = Path.Combine(destinationFolder, file);

#if UNITY_ANDROID
            using (UnityWebRequest fileRequest = UnityWebRequest.Get(sourcePath))
            {
                yield return fileRequest.SendWebRequest();

                if (fileRequest.result == UnityWebRequest.Result.ConnectionError || fileRequest.result == UnityWebRequest.Result.ProtocolError)
                {
                    Debug.LogError($"Failed to copy {file}: {fileRequest.error}");
                    continue;
                }

                File.WriteAllBytes(destinationPath, fileRequest.downloadHandler.data);
                Debug.Log($"Copied {file} to {destinationPath}");
            }
#else
            // Trên các nền tảng khác: Sao chép file trực tiếp
            File.Copy(sourcePath, destinationPath, true);
            Debug.Log($"Copied {file} to {destinationPath}");
#endif
        }

        Debug.Log("All files copied successfully.");
    } 
}