//using Mono.Data.Sqlite;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
using UnityEngine.UI; 
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
    public void Dispose()
    {
        if (_connection != null)
        {
            _connection.Close();
            _connection.Dispose();
            _connection = null;
        }
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
    public ScrollRect imageScrollRect;
    public ScrollRect textScrollRect;

    public GameObject locationPanel;
    public Image locationImage;  
    public TMP_Text locationNameTxt;
    public TMP_Text locationLocationTxt;
    public TMP_Text cityNameTxt;
    public TMP_Text locationInfoTxt;
    public GameObject largeImagePanel; // Panel bao quanh image lớn (nền tối)
    public Image largeImage; // UI Image lớn hiển thị ảnh
       
    public RectTransform largePanelRect;   

    private List<Sprite> imageSprites = new List<Sprite>(); // Danh sách các sprite từ DB
    private List<Sprite> imageSpritesOriginal = new List<Sprite>(); // Danh sách các sprite từ DB chưa xữ lý cover
    private string dbPath;

   

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

    public float changeInterval = 5.0f; // Thời gian giữa các lần đổi ảnh
    public float smoothDuration = 1.0f; // Thời gian chuyển đổi ảnh mượt mà
    private bool enableAutoChangeImage = false;
    private Coroutine autoChangeImageCoroutine;

    // Thêm các biến cho bộ đếm thời gian không tương tác
    private float inactivityTimer = 0f;
    private readonly float inactivityThreshold = 15f; // 15 giây
    private bool isTrackingInactivity = false;
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
        ResetInactivityTimer();
        isTrackingInactivity = largeImagePanel.activeSelf; // Khởi tạo trạng thái theo dõi
    }

    public void AutoChangePhotoBtnClick()
    {
        Debug.Log($"AutoChangePhotoBtnClick called. Current enableAutoChangeImage: {enableAutoChangeImage}");
        if (!enableAutoChangeImage)
        {
            if (autoChangeImageCoroutine != null)
            {
                StopCoroutine(autoChangeImageCoroutine);
                autoChangeImageCoroutine = null;
                Debug.Log("Stopped existing autoChangeImageCoroutine");
            }
            if (imageSpritesOriginal.Count > 0)
            {
                enableAutoChangeImage = true;
                autoChangeImageCoroutine = StartCoroutine(AutoChangeImage());
                
                ResetInactivityTimer();
                Debug.Log("Started new autoChangeImageCoroutine");
            }
            else
            {
                Debug.LogWarning("Cannot start auto change: imageSpritesOriginal is empty");
            }
        }
        else
        {
            if (autoChangeImageCoroutine != null)
            {
                StopCoroutine(autoChangeImageCoroutine);
                autoChangeImageCoroutine = null;
                Debug.Log("Stopped autoChangeImageCoroutine");
            }
            enableAutoChangeImage = false;
            isTrackingInactivity = largeImagePanel.activeSelf;
            Debug.Log("Auto change disabled");
        }
    }

    // Coroutine đổi ảnh tự động
    IEnumerator AutoChangeImage()
    {
        Debug.Log("AutoChangeImage coroutine started");
        while (enableAutoChangeImage)
        {
            Debug.Log($"AutoChangeImage loop: currentImageIndex={currentImageIndex}, imageCount={imageSpritesOriginal.Count}");
            yield return new WaitForSeconds(changeInterval);

            if (!isDragging)
            {
                yield return StartCoroutine(SmoothTransitionToNextImage());
                if (currentImageIndex == imageSpritesOriginal.Count - 1)
                {
                    ResetInactivityTimer();
                    isTrackingInactivity = true;
                    Debug.Log("Reached last image, starting inactivity timer");
                }
            }
            else
            {
                Debug.Log("Auto change skipped due to dragging");
            }
        }
        Debug.Log("AutoChangeImage coroutine ended");
    }

    IEnumerator SmoothTransitionToNextImage()
    {
        Debug.Log("SmoothTransitionToNextImage started");
        float elapsedTime = 0f;
        float startAlpha = largeImageCanvasGroup.alpha;

        while (elapsedTime < smoothDuration)
        {
            elapsedTime += Time.deltaTime;
            largeImageCanvasGroup.alpha = Mathf.Lerp(startAlpha, 0f, elapsedTime / smoothDuration);
            yield return null;
        }

        ShowNextImage();

        elapsedTime = 0f;
        while (elapsedTime < smoothDuration)
        {
            elapsedTime += Time.deltaTime;
            largeImageCanvasGroup.alpha = Mathf.Lerp(0f, 1f, elapsedTime / smoothDuration);
            yield return null;
        }
        Debug.Log("SmoothTransitionToNextImage completed");
    }

    public void GetImageByLocationId(RectTransform buttonRect, int locationId)
    {
        int targetLocationId = locationId;
        IEnumerable<ImageTable> images = _dataService.GetImageByLocationId(targetLocationId);
        IEnumerable<Location> locations = _dataService.GetLocationsByLocationId(targetLocationId);
        if (locations.Count() > 0)
        {
            Debug.Log("location nè");
           // Location location = locations.First();
            // Tính toán vị trí panel nhỏ
            Vector3 buttonPosition = buttonRect.position;
            Vector3 panelLargePosition = largePanelRect.position;

            // Kích thước của button và panel nhỏ
            Vector2 buttonSize = buttonRect.rect.size;
            Vector2 smallPanelSize = locationPanel.GetComponent<RectTransform>().rect.size;

            // Tính toán vị trí panel nhỏ sao cho nó không bị ra ngoài panel lớn
            Vector3 newPanelPosition = CalculatePopupPosition(buttonPosition, buttonSize, smallPanelSize);

            // Đặt vị trí cho panel nhỏ
            locationPanel.transform.position = newPanelPosition;
            locationPanel.gameObject.SetActive(true); 

            UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Show, 0.5f);

            locationNameTxt.text = locations.First().location_name;
            locationInfoTxt.text = locations.First().location_description;
            locationLocationTxt.text = locations.First().location_name;
            cityNameTxt.text = locations.First().location_location;
            if (images.Count() > 0)
            {
                DisplaySmallImages(images.First().image_name);
            }

            imageScrollRect.horizontalNormalizedPosition = 1f; // Đặt về vị trí top
            textScrollRect.verticalNormalizedPosition = 1f; // Đặt về vị trí top
            currentImageIndex = 0;
        }

        ResetInactivityTimer();
        isTrackingInactivity = true; // Bắt đầu theo dõi khi panel được hiển thị
    }

    public void ShowLocationDetail()
    {
        // Giải phóng tài nguyên cũ
        ClearOldResources();

        int targetLocationId = UIManager.Instance.locationID;
        IEnumerable<ImageTable> images = _dataService.GetImageByLocationId(targetLocationId);
        UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, false, 3000);
        List<string> imagePaths = new List<string>();

        foreach (var image in images)
        {
            Debug.Log($"Location ID: {image.id}, Name: {image.image_name}, Nation ID: {image.location_id}");
            string imageName = image.image_name;
            string imagePath = Path.Combine(Application.persistentDataPath, "Images", imageName) + ".jpg";
            Debug.Log("imagePath: " + imagePath);
            imagePaths.Add(imagePath);
        }

        DisplayImages(imagePaths);

        if (imageSpritesOriginal.Count > 0)
        {
            largeImagePanel.SetActive(true);
            Texture2D texture = imageSpritesOriginal[0].texture;
            ResizeLargeImage(texture); 
            ResetInactivityTimer();
            isTrackingInactivity = true; // Bắt đầu theo dõi khi panel được hiển thị
        }
        else
        {
            largeImagePanel.SetActive(false);
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000); 
            isTrackingInactivity = false;
        }
    }

    private void ClearOldResources()
    {
        // Giải phóng sprite và texture
        foreach (var sprite in imageSprites.Concat(imageSpritesOriginal))
        {
            if (sprite != null)
            {
                if (sprite.texture != null)
                {
                    Destroy(sprite.texture);
                }
                Destroy(sprite);
            }
        }
        imageSprites.Clear();
        imageSpritesOriginal.Clear();

        // Đưa các GameObject trong content về pool thay vì hủy
        foreach (Transform child in content)
        {
            ReturnToPool(child.gameObject);
        }

        // Xóa ảnh lớn
        if (largeImage.sprite != null)
        {
            if (largeImage.sprite.texture != null)
            {
                DestroyImmediate(largeImage.sprite.texture, true);
            }
            DestroyImmediate(largeImage.sprite, true);
            largeImage.sprite = null;
        }

        // Chỉ gọi UnloadUnusedAssets khi cần thiết
        Resources.UnloadUnusedAssets();
        System.GC.Collect();
    }

    public void HideLocationDetail()
    {
        largeImagePanel.SetActive(false);
        UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
        isTrackingInactivity = false;
    }
    private void ResizeLargeImage(Texture2D texture)
    {
        RectTransform largeImagePanelRectTransform = largeImagePanel.GetComponent<RectTransform>();
        // Lấy kích thước của panel
        float panelWidth = largeImagePanelRectTransform.rect.width;
        float panelHeight = largeImagePanelRectTransform.rect.height;

        // Tính tỷ lệ khung hình của panel (width/height)
        float panelRatio = panelWidth / panelHeight;

        // Tính tỷ lệ khung hình của texture (width/height)
        float textureRatio = (float)texture.width / texture.height;

        // Tính toán kích thước mới để phù hợp với panel
        int newWidth, newHeight;
        if (textureRatio > panelRatio)
        {
            // Nếu texture rộng hơn panel, điều chỉnh chiều cao
            newHeight = texture.height;
            newWidth = Mathf.RoundToInt(newHeight * panelRatio);
        }
        else
        {
            // Nếu texture cao hơn panel, điều chỉnh chiều rộng
            newWidth = texture.width;
            newHeight = Mathf.RoundToInt(newWidth / panelRatio);
        }

        // Tính toán vị trí cắt để giữ nguyên tỷ lệ và không bị méo
        int offsetX = (texture.width - newWidth) / 2;
        int offsetY = (texture.height - newHeight) / 2;

        // Tạo Rect mới để cắt texture
        Rect newRect = new Rect(offsetX, offsetY, newWidth, newHeight);

        // Tạo sprite mới từ texture và Rect
        Sprite newSprite = Sprite.Create(texture, newRect, new Vector2(0.5f, 0.5f));

        largeImage.sprite = newSprite;
        // Điều chỉnh kích thước của Image để phù hợp với Panel
        //largeImage.rectTransform.sizeDelta = new Vector2(panelWidth, panelHeight);

        //largeImage.GetComponent<Image>().preserveAspect = true;
        // Reset vị trí và alpha của ảnh
        largeImageRectTransform.anchoredPosition = Vector2.zero;
        largeImageCanvasGroup.alpha = originalAlpha;
        ResetInactivityTimer();
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
        UpdateInactivityTimer();
    }
    // Thêm phương thức UpdateInactivityTimer
    private void UpdateInactivityTimer()
    {
        if (isTrackingInactivity && largeImagePanel.activeSelf)
        {
            inactivityTimer += Time.deltaTime;
            if (inactivityTimer >= inactivityThreshold)
            {
                HideLocationDetail();
                isTrackingInactivity = false;
            }
        }
    }

    // Thêm phương thức ResetInactivityTimer
    private void ResetInactivityTimer()
    {
        inactivityTimer = 0f;
        isTrackingInactivity = largeImagePanel.activeSelf;
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
            ResetInactivityTimer();
        }
        else
        {
            Debug.LogError("Could not load texture from path 000: " + imagePath);
        }
    }

    // Tạo một pool để quản lý các GameObject của image prefab
    private Queue<GameObject> imagePool = new Queue<GameObject>();

    private GameObject GetPooledImage()
    {
        while (imagePool.Count > 0)
        {
            GameObject obj = imagePool.Dequeue();
            if (obj != null && !obj.Equals(null)) // Kiểm tra xem GameObject có hợp lệ
            {
                obj.SetActive(true);
                return obj;
            }
        }
        return Instantiate(imagePrefab, content);
    }

    private void ReturnToPool(GameObject obj)
    {
        if (obj != null && !obj.Equals(null))
        {
            obj.SetActive(false);
            imagePool.Enqueue(obj);
        }
    }

    // Hàm hiển thị các hình ảnh trong ScrollView
    void DisplayImages(List<string> imagePaths)
    {
        // Đưa tất cả GameObject trong content về pool
        foreach (Transform child in content)
        {
            ReturnToPool(child.gameObject);
        }

        // Xóa danh sách sprite
        imageSprites.Clear();
        imageSpritesOriginal.Clear();

        int i = 0;
        foreach (string imagePath in imagePaths)
        {
            Texture2D texture = LoadTexture(imagePath);
            if (texture != null)
            {
                GameObject imagePanel = GetPooledImage();
                GameObject newImageObj = imagePanel.transform.Find("Image").gameObject;
                Image imageComponent = newImageObj.GetComponent<Image>();

                // Cắt texture thành hình vuông
                int squareSize = Mathf.Min(texture.width, texture.height);
                Rect squareRect = new Rect(
                    (texture.width - squareSize) / 2,
                    (texture.height - squareSize) / 2,
                    squareSize, squareSize);

                Sprite newSprite = Sprite.Create(texture, squareRect, new Vector2(0.5f, 0.5f));
                Sprite newSpriteOriginal = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));

                imageComponent.sprite = newSprite;

                RectTransform imageRectTransform = newImageObj.GetComponent<RectTransform>();
                float scrollViewHeight = ((RectTransform)content).rect.height;
                imageRectTransform.sizeDelta = new Vector2(scrollViewHeight, scrollViewHeight);
                imagePanel.GetComponent<RectTransform>().sizeDelta = new Vector2(scrollViewHeight, scrollViewHeight);

                imageSprites.Add(newSprite);
                imageSpritesOriginal.Add(newSpriteOriginal);

                int localIndex = i;
                Button button = newImageObj.GetComponent<Button>();
                button.onClick.RemoveAllListeners(); 
                button.onClick.AddListener(() => {
                    OnImageClick(localIndex);
                    ResetInactivityTimer();
                });
                i++;
            }
            else
            {
                Debug.LogError("Could not load texture from path: " + imagePath);
            }
        }

        // Đặt lại vị trí của ScrollView
        imageScrollRect.horizontalNormalizedPosition = 1f; 
        ResetInactivityTimer();
    }

    // Hàm load texture từ file hình ảnh
    Texture2D LoadTexture(string path)
    {
        if (File.Exists(path))
        {
            byte[] fileData = File.ReadAllBytes(path);
            Texture2D tex = new Texture2D(2, 2, TextureFormat.RGB24, false);
            tex.LoadImage(fileData);
            //tex.Compress(true); // Nén texture để giảm sử dụng bộ nhớ
            return tex;
        }
        return null;
    }

    // Hàm gọi khi click vào image trong ScrollView
    public void OnImageClick(int imageIndex)
    {
        // Hiển thị ảnh lớn và panel nền tối
        currentImageIndex = imageIndex; 
        ResizeLargeImage(imageSpritesOriginal[imageIndex].texture);
        ResetInactivityTimer();
    }

    // Hàm đóng panel khi swipe lên
    public void CloseLargeImage()
    {
        largeImagePanel.SetActive(false);
        isTrackingInactivity = false;
    }

    // Xử lý sự kiện kéo (swipe)
    public void OnDrag(PointerEventData eventData)
    {
        if (eventData.delta.magnitude > 0)
        {
            startTouchPosition = eventData.position;
            ResetInactivityTimer();
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
        ResetInactivityTimer();
    }

    // Xử lý kéo bằng chuột (thay thế cho touch/drag trên Windows)
    void HandleMouseDrag()
    {
        if (!largeImagePanel.activeSelf) return;

        Vector2 mousePosition = Input.mousePosition;

        if (Input.GetMouseButtonDown(0))
        {
            if (IsPointerOverLargeImage())
            {
                startTouchPosition = mousePosition;
                isDragging = true;
                isDragOnLargeImage = true;
                ResetInactivityTimer();
            }
        }

        if (Input.GetMouseButton(0) && isDragging && isDragOnLargeImage)
        {
            Vector2 difference = mousePosition - startTouchPosition;
            if (Mathf.Abs(difference.x) > Mathf.Abs(difference.y))
            {
                largeImageRectTransform.anchoredPosition = new Vector2(difference.x, 0);
                float alpha = Mathf.Clamp(1 - Mathf.Abs(difference.magnitude) / dragThreshold, 0.4f, 1f);
                largeImageCanvasGroup.alpha = alpha;
            }
        }

        if (Input.GetMouseButtonUp(0) && isDragging && isDragOnLargeImage)
        {
            Vector2 difference = mousePosition - startTouchPosition;
            isDragging = false;
            isDragOnLargeImage = false;

            if (Mathf.Abs(difference.x) > Mathf.Abs(difference.y) && Mathf.Abs(difference.x) > dragThreshold)
            {
                if (difference.x > 0 && currentImageIndex > 0)
                {
                    ShowPreviousImage();
                }
                else if (difference.x < 0 && currentImageIndex < imageSpritesOriginal.Count - 1)
                {
                    ShowNextImage();
                }
                else
                {
                    StartCoroutine(SmoothReturnToPosition());
                }
            }
            else
            {
                StartCoroutine(SmoothReturnToPosition());
            }
            ResetInactivityTimer();
        }
    }
    public bool isAutoChangeImage()
    {
        return enableAutoChangeImage;
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
    private void ShowNextImage()
    {
        if (currentImageIndex < imageSpritesOriginal.Count - 1)
        {
            currentImageIndex++;
        }
        else
        {
            currentImageIndex = 0; // Quay lại ảnh đầu tiên nếu hết ảnh
        }
        ResizeLargeImage(imageSpritesOriginal[currentImageIndex].texture);
        // Chỉ reset timer nếu không ở chế độ tự động hoặc không phải ảnh cuối
        if (!enableAutoChangeImage || currentImageIndex != imageSpritesOriginal.Count - 1)
        {
            ResetInactivityTimer();
        }
    }

    // Sửa phương thức ShowPreviousImage
    private void ShowPreviousImage()
    {
        if (currentImageIndex > 0)
        {
            currentImageIndex--;
        }
        else
        {
            currentImageIndex = imageSpritesOriginal.Count - 1; // Quay lại ảnh cuối nếu ở ảnh đầu tiên
        }
        ResizeLargeImage(imageSpritesOriginal[currentImageIndex].texture);
        // Chỉ reset timer nếu không ở chế độ tự động hoặc không phải ảnh cuối
        if (!enableAutoChangeImage || currentImageIndex != imageSpritesOriginal.Count - 1)
        {
            ResetInactivityTimer();
        }
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
        ResetInactivityTimer();
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
                //Debug.Log($"Copied {file} to {destinationPath}");
            }
#else
            // Trên các nền tảng khác: Sao chép file trực tiếp
            File.Copy(sourcePath, destinationPath, true);
            Debug.Log($"Copied {file} to {destinationPath}");
#endif
        }

        Debug.Log("All files copied successfully.");
    }

    private Vector3 CalculatePopupPosition(Vector3 buttonPosition, Vector2 buttonSize, Vector2 smallPanelSize)
    {
        float padding = 1;  // Khoảng cách giữa button và panel nhỏ

        // Lấy vị trí trung tâm của button
        float buttonCenterX = buttonPosition.x;
        float buttonCenterY = buttonPosition.y;

        // Vị trí của panel nhỏ
        Vector3 position = buttonPosition;

        // Tính toán vị trí panel nhỏ (khi button gần mép trên hoặc dưới của panel lớn)
        if (buttonCenterY + buttonSize.y / 2 + smallPanelSize.y / 2 + padding > largePanelRect.position.y + largePanelRect.rect.height / 2)
        {
            // Nếu button gần sát mép trên, thì hiển thị panel nhỏ ở dưới button
            position.y = buttonCenterY - buttonSize.y / 2 - smallPanelSize.y / 2 - padding;
        }
        else if (buttonCenterY - buttonSize.y / 2 - smallPanelSize.y / 2 - padding < largePanelRect.position.y - largePanelRect.rect.height / 2)
        {
            // Nếu button gần sát mép dưới, thì hiển thị panel nhỏ ở trên button
            position.y = buttonCenterY + buttonSize.y / 2 + smallPanelSize.y / 2 + padding;
        }
        else
        {
            // Mặc định hiển thị panel nhỏ ở dưới button nếu không gần mép
            position.y = buttonCenterY - buttonSize.y / 2 - smallPanelSize.y / 2 - padding;
        }

        // Kiểm tra vị trí theo trục X: nếu button gần sát mép trái hoặc phải của panel lớn
        if (buttonCenterX + buttonSize.x / 2 + smallPanelSize.x / 2 + padding > largePanelRect.position.x + largePanelRect.rect.width / 2)
        {
            // Nếu button gần sát mép phải của panel lớn, hiển thị panel nhỏ bên trái button
            position.x = buttonCenterX - buttonSize.x / 2 - smallPanelSize.x / 2 - padding;
        }
        else if (buttonCenterX - buttonSize.x / 2 - smallPanelSize.x / 2 - padding < largePanelRect.position.x - largePanelRect.rect.width / 2)
        {
            // Nếu button gần sát mép trái của panel lớn, hiển thị panel nhỏ bên phải button
            position.x = buttonCenterX + buttonSize.x / 2 + smallPanelSize.x / 2 + padding;
        }
        else
        {
            // Mặc định hiển thị panel nhỏ bên phải button nếu không gần mép
            position.x = buttonCenterX + buttonSize.x / 2 + smallPanelSize.x / 2 + padding;
        }

        // Kiểm tra lại xem panel nhỏ có bị ra ngoài biên của panel lớn không
        position = EnsurePanelWithinBounds(position, smallPanelSize);

        return position;
    }

    private Vector3 EnsurePanelWithinBounds(Vector3 position, Vector2 smallPanelSize)
    {
        // Kiểm tra vị trí của panel nhỏ và điều chỉnh nếu panel nhỏ bị ra ngoài panel lớn
        if (position.x + smallPanelSize.x / 2 > largePanelRect.position.x + largePanelRect.rect.width / 2)
        {
            position.x = largePanelRect.position.x + largePanelRect.rect.width / 2 - smallPanelSize.x / 2;
        }
        else if (position.x - smallPanelSize.x / 2 < largePanelRect.position.x - largePanelRect.rect.width / 2)
        {
            position.x = largePanelRect.position.x - largePanelRect.rect.width / 2 + smallPanelSize.x / 2;
        }

        if (position.y + smallPanelSize.y / 2 > largePanelRect.position.y + largePanelRect.rect.height / 2)
        {
            position.y = largePanelRect.position.y + largePanelRect.rect.height / 2 - smallPanelSize.y / 2;
        }
        else if (position.y - smallPanelSize.y / 2 < largePanelRect.position.y - largePanelRect.rect.height / 2)
        {
            position.y = largePanelRect.position.y - largePanelRect.rect.height / 2 + smallPanelSize.y / 2;
        }

        return position;
    }
    void OnDestroy()
    {
        _dataService?.Dispose();
    }
}