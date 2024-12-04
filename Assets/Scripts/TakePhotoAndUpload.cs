using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using BestHTTP;
using TMPro;

public class TakePhotoAndUpload : MonoBehaviour
{
    public GameObject MessagePanel;
    public MyakuController myakuController;
    public Image qrCodeImage; // UI Image để hiển thị mã QR
    public Image cameraDisplay; // Tham chiếu tới RawImage trong Canvas
    public Image photoSave; 
    private WebCamTexture webCamTexture;
    private string imgurClientID = "b8f7b1442771d95"; // Thay bằng Client ID từ Imgur

    public GameObject imagePrefab;  // Prefab cho mỗi hình ảnh trong ScrollView
    public Transform content;       // Content của ScrollView để chứa các Image
    public List<Texture2D> loadedTexture;

    public Image largeImage; // UI Image lớn hiển thị ảnh
    private int currentImageIndex; // Chỉ số của ảnh hiện tại trong danh sách
    private List<Sprite> imageSprites = new List<Sprite>(); // Danh sách các sprite từ DB

    private Coroutine updateImageCoroutine; // Tham chiếu đến Coroutine đang chạy
     
    public GameObject countdownPanel; //  
    public TMP_Text countdownText; // Tham chiếu tới Text UI
    private int countdownStart = 3; // Giá trị bắt đầu đếm ngược
    private float interval = 1f; // Khoảng thời gian giữa mỗi lần đếm (tính bằng giây)

    private Button shootBtn;
    private Button reshootBtn;
    private Button downloadBtn;

    private int cameraRotate = 0;
    public RawImage rawImage; // RawImage để hiển thị video từ webcam

    private void Start()
    {
        DisplayImages(loadedTexture);
        currentImageIndex = 0;
        largeImage.sprite = imageSprites[0];
        largeImage.preserveAspect = true;
        shootBtn = GameObject.FindWithTag("shoot").GetComponent<Button>();
        reshootBtn = GameObject.FindWithTag("reshoot").GetComponent<Button>();
        downloadBtn = GameObject.FindWithTag("download").GetComponent<Button>();
    }
    public void RotateCamera()
    {
        cameraRotate += 1;
        if (cameraRotate == 4) cameraRotate = 0;
        cameraDisplay.rectTransform.localEulerAngles = new Vector3(0, 0, cameraRotate * 90);
    }

    public void StartTakePhoto()
    {
        UIManager.Instance.connectionTxt.text = "Tap the capture button on the screen or press the button on Myaku to take a photo.";
        photoSave.gameObject.SetActive(false);
        cameraDisplay.gameObject.SetActive(true);
        qrCodeImage.gameObject.SetActive(false);
        shootBtn.interactable = true;
        reshootBtn.interactable = false;
        downloadBtn.interactable = false;
         

        // Lấy danh sách các camera
        WebCamDevice[] devices = WebCamTexture.devices;

        if (devices.Length > 0)
        {
            // Sử dụng camera đầu tiên
            for (int i = 0; i < devices.Length; i++)
            {
                if (devices[i].isFrontFacing)
                {
                    webCamTexture = new WebCamTexture(devices[i].name);
                    // Gán WebCamTexture vào RawImage để hiển thị
                    //rawImage.texture = webCamTexture;
                     cameraDisplay.rectTransform.localEulerAngles = new Vector3(0, 0, cameraRotate * 90); // xữ lý xoay image 90 độ vì để bình thường thì hinhar ảnh render ra lại nằm ngang
                    webCamTexture.Play(); // Bắt đầu camera
                    updateImageCoroutine = StartCoroutine(UpdateImage(webCamTexture));

                    // Xoay camera phù hợp với hướng của thiết bị
                    //AdjustCameraOrientation();
                    break;
                }
            }
        }
        else
        {
            Debug.LogError("No camera found on this device!");
        }
    }

    private void AdjustCameraOrientation()
    {
        // Kiểm tra xoay màn hình của thiết bị
        int screenOrientation = Screen.orientation == ScreenOrientation.LandscapeLeft || Screen.orientation == ScreenOrientation.LandscapeRight ? 90 : 0;

        // Điều chỉnh góc quay của RawImage để xoay video
        if (rawImage != null)
        {
            // Xoay RawImage để video hiển thị đúng hướng
            rawImage.transform.rotation = Quaternion.Euler(0, 0, screenOrientation);
        }
    }

    public void StopCamera()
    {
        if (webCamTexture != null)
        {
            if (webCamTexture.isPlaying)
            {
                webCamTexture.Stop(); // Dừng camera
            }
            webCamTexture = null; // Giải phóng tài nguyên
        }

        // Xóa hình ảnh hiện tại trên UI (nếu cần)
        if (cameraDisplay != null)
        {
            cameraDisplay.sprite = null; // Xóa hình ảnh hiện tại trong cameraDisplay
        }

        if(updateImageCoroutine != null) StopCoroutine(updateImageCoroutine);
        Debug.Log("Camera stopped and resources released.");
    }

    IEnumerator UpdateImage(WebCamTexture webCamTexture)
    {
        while (true)
        {
            // Tạo một Texture2D từ WebCamTexture
            Texture2D texture = new Texture2D(webCamTexture.width, webCamTexture.height);
            //for (int i = 0; i< cameraRotate; i++)
            //{
            //    texture = RotateTexture90DegreesRight(texture); 
            //}

            texture.SetPixels(webCamTexture.GetPixels());
            texture.Apply();

            // Cắt texture để thành hình vuông
            int squareSize = Mathf.Min(texture.width, texture.height);
            Rect squareRect = new Rect(
                (texture.width - squareSize) / 2, // Cắt ở giữa nếu chiều rộng lớn hơn
                (texture.height - squareSize) / 2, // Cắt ở giữa nếu chiều cao lớn hơn
                squareSize, squareSize);

            // Chuyển Texture2D thành Sprite hình vuông
            Sprite cameraSprite = Sprite.Create(texture, squareRect, new Vector2(0.5f, 0.5f));

            // Gán sprite cho Image
            cameraDisplay.sprite = cameraSprite;

            yield return new WaitForSeconds(0.1f); // Cập nhật sau mỗi 0.1 giây
        }
    }
    public Texture2D CaptureImage()
    {
        // Tạo một Texture2D để lưu ảnh chụp từ camera
        Texture2D photo = new Texture2D(webCamTexture.width, webCamTexture.height);
        photo.SetPixels(webCamTexture.GetPixels());
        photo.Apply();

        return photo;
    }
    //private Texture2D RotateTexture90DegreesLeft(Texture2D originalTexture)
    //{
    //    int originalWidth = originalTexture.width;
    //    int originalHeight = originalTexture.height;

    //    // Tạo texture mới với chiều rộng và chiều cao hoán đổi
    //    Texture2D rotatedTexture = new Texture2D(originalHeight, originalWidth);

    //    // Xoay ảnh bằng cách hoán đổi tọa độ pixel
    //    for (int x = 0; x < originalWidth; x++)
    //    {
    //        for (int y = 0; y < originalHeight; y++)
    //        {
    //            rotatedTexture.SetPixel(y, originalWidth - x - 1, originalTexture.GetPixel(x, y));
    //        }
    //    }

    //    rotatedTexture.Apply();
    //    return rotatedTexture;
    //}

    private Texture2D RotateTexture90DegreesRight(Texture2D originalTexture)
    {
        int originalWidth = originalTexture.width;
        int originalHeight = originalTexture.height;

        // Tạo texture mới với chiều rộng và chiều cao hoán đổi
        Texture2D rotatedTexture = new Texture2D(originalHeight, originalWidth);

        // Xoay ảnh bằng cách hoán đổi tọa độ pixel
        for (int x = 0; x < originalWidth; x++)
        {
            for (int y = 0; y < originalHeight; y++)
            {
                rotatedTexture.SetPixel(originalHeight - y - 1, x, originalTexture.GetPixel(x, y));
            }
        }

        rotatedTexture.Apply();
        return rotatedTexture;
    }

    public void SaveImage()
    { 
        countdownPanel.SetActive(true);
        shootBtn.interactable = false;
        reshootBtn.interactable = false;
        downloadBtn.interactable = false;
        UIManager.Instance.connectionTxt.text = "3...2...1...Smile :))";
        StartCoroutine(CountdownCoroutine());
        myakuController.MyakuCountForShootPhoto();
    }

    public void ReshootPhotoBtn()
    {  
        StartTakePhoto();
    }

    public void UploadPhoto()
    {

        if (photoSave.sprite != null)
        {
            UIManager.Instance.connectionTxt.text = "I'm uploading photo to server and will get the QR code for download!";
            shootBtn.interactable = false;
            reshootBtn.interactable = false;
            downloadBtn.interactable = false;
            // Lấy Texture2D từ sprite
            Texture2D photoTexture = SpriteToTexture2D(photoSave.sprite);
            Texture2D frameTexture = SpriteToTexture2D(largeImage.sprite);
            Texture2D mergeTextures = MergeTextures(photoTexture, frameTexture);
            // Chuyển Texture2D thành PNG
            byte[] imageBytes = mergeTextures.EncodeToPNG();
            UploadToImgur(imageBytes);
        }
        else
        {
            Debug.LogError("No sprite found in cameraDisplay.");
        }
    }

    private Texture2D ResizeTexture(Texture2D originalTexture, int targetWidth, int targetHeight)
    {
        Texture2D resizedTexture = new Texture2D(targetWidth, targetHeight);
        for (int y = 0; y < targetHeight; y++)
        {
            for (int x = 0; x < targetWidth; x++)
            {
                float xRatio = (float)x / targetWidth;
                float yRatio = (float)y / targetHeight;
                Color pixelColor = originalTexture.GetPixelBilinear(xRatio, yRatio);
                resizedTexture.SetPixel(x, y, pixelColor);
            }
        }
        resizedTexture.Apply();
        return resizedTexture;
    }
    public Texture2D MergeTextures(Texture2D baseTexture, Texture2D frameTexture)
    {
        // Lấy kích thước lớn hơn giữa hai texture
        int targetWidth = Mathf.Max(baseTexture.width, frameTexture.width);
        int targetHeight = Mathf.Max(baseTexture.height, frameTexture.height);

        // Resize cả hai texture về cùng kích thước
        Texture2D resizedBaseTexture = ResizeTexture(baseTexture, targetWidth, targetHeight);
        Texture2D resizedFrameTexture = ResizeTexture(frameTexture, targetWidth, targetHeight);

        // Tạo Texture2D mới để gộp
        Texture2D mergedTexture = new Texture2D(targetWidth, targetHeight, TextureFormat.RGBA32, false);

        // Sao chép pixel từ resizedBaseTexture
        mergedTexture.SetPixels(resizedBaseTexture.GetPixels());

        // Chồng resizedFrameTexture lên
        Color[] framePixels = resizedFrameTexture.GetPixels();
        for (int i = 0; i < framePixels.Length; i++)
        {
            if (framePixels[i].a > 0.1) // Chỉ chồng những pixel không trong suốt
            {
                mergedTexture.SetPixel(i % targetWidth, i / targetWidth, framePixels[i]);
            }
        }

        mergedTexture.Apply();
        return mergedTexture;
    }

    private Texture2D SpriteToTexture2D(Sprite sprite)
    {
        // Lấy kích thước của Sprite
        Texture2D texture = new Texture2D((int)sprite.rect.width, (int)sprite.rect.height);
        Debug.Log(texture);
        Rect rect = sprite.rect;
        Color[] pixels = sprite.texture.GetPixels((int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
        texture.SetPixels(pixels);
        texture.Apply();
        return texture;
    }

    private void UploadToImgur(byte[] imageBytes)
    {
        
        // URL API của Imgur
        string imgurUrl = "https://api.imgur.com/3/image";

        // Tạo yêu cầu POST
        HTTPRequest request = new HTTPRequest(new Uri(imgurUrl), HTTPMethods.Post, OnRequestFinished);

        // Đặt tiêu đề với Client ID
        request.SetHeader("Authorization", "Client-ID " + imgurClientID);

        // Tạo form và thêm ảnh (Base64 encode)
        string base64Image = Convert.ToBase64String(imageBytes);
        request.AddField("image", base64Image);

        // Gửi yêu cầu
        request.Send();
    }

    private void OnRequestFinished(HTTPRequest req, HTTPResponse resp)
    {
        if (resp == null || !resp.IsSuccess)
        {
            Debug.LogError("Error uploading image: " + (resp != null ? resp.Message : "Unknown error"));
            return;
        }

        // Xử lý phản hồi JSON từ Imgur để lấy URL ảnh
        string jsonResponse = resp.DataAsText;
        Debug.Log("Response from Imgur: " + jsonResponse);

        // Tìm và trích xuất URL của ảnh từ phản hồi JSON
        string uploadedImageUrl = ExtractImageUrlFromResponse(jsonResponse);
        if (!string.IsNullOrEmpty(uploadedImageUrl))
        {
            Debug.Log("Image uploaded successfully! URL: " + uploadedImageUrl);
            // có link rồi thì tạo mã QR tại đây
            GenerateQRCode(uploadedImageUrl);
        }
    }
    public void GenerateQRCode(string url)
    {
        // URL API tạo mã QR
        string qrCodeUrl = "https://api.qrserver.com/v1/create-qr-code/?size=300x300&data=" + url;
        Debug.Log(qrCodeUrl);
        // Gửi yêu cầu tải mã QR từ API bằng BestHTTP
        HTTPRequest request = new HTTPRequest(new Uri(qrCodeUrl), HTTPMethods.Get, OnRequestFinished1);
        request.Send();
    }

    private void OnRequestFinished1(HTTPRequest req, HTTPResponse resp)
    {
        if (resp == null || !resp.IsSuccess)
        {
            Debug.LogError("Error downloading QR code: " + (resp != null ? resp.Message : "Unknown error"));
            return;
        }

        // Chuyển đổi từ byte array thành Texture2D
        Texture2D qrCodeTexture = new Texture2D(1, 1);
        qrCodeTexture.LoadImage(resp.Data); // Load image từ dữ liệu phản hồi của HTTPResponse

        // Chuyển đổi Texture2D thành Sprite để hiển thị trên UI Image
        Sprite qrCodeSprite = Sprite.Create(qrCodeTexture, new Rect(0, 0, qrCodeTexture.width, qrCodeTexture.height), new Vector2(0.5f, 0.5f));

        // Gán Sprite cho UI Image
        qrCodeImage.gameObject.SetActive(true);
        qrCodeImage.sprite = qrCodeSprite;

        shootBtn.interactable = false;
        reshootBtn.interactable = true;
        downloadBtn.interactable = false;

        UIManager.Instance.connectionTxt.text = "Now use your mobile camera scan QR to save your photo!";
    }

    private string ExtractImageUrlFromResponse(string jsonResponse)
    { 
        try
        {
            var jsonObj = JsonUtility.FromJson<ImgurResponse>(jsonResponse);
            return jsonObj.data.link;
        }
        catch (Exception e)
        {
            Debug.LogError("Error parsing JSON: " + e.Message);
            return null;
        }
    }

    // Hàm hiển thị các hình ảnh trong ScrollView
    void DisplayImages(List<Texture2D> imageTextures)
    {
        int i = 0;
        foreach (Texture2D imageTexture in imageTextures)
        {
            // Load texture từ file hình ảnh 

            if (imageTexture != null)
            {
                // Tạo đối tượng Image từ prefab
                GameObject newImageObj = Instantiate(imagePrefab, content);

                // Lấy component Image của đối tượng và gán sprite cho nó
                Image imageComponent = newImageObj.GetComponent<Image>();

                // Lấy tỷ lệ của ảnh (width/height)
                float imageRatio = (float)imageTexture.width / imageTexture.height;

                // Cắt texture để thành hình vuông
                int squareSize = Mathf.Min(imageTexture.width, imageTexture.height);
                Rect squareRect = new Rect(
                    (imageTexture.width - squareSize) / 2, // Cắt ở giữa nếu chiều rộng lớn hơn
                    (imageTexture.height - squareSize) / 2, // Cắt ở giữa nếu chiều cao lớn hơn
                    squareSize, squareSize);

                // Chuyển Texture2D thành Sprite hình vuông
                Sprite newSprite = Sprite.Create(imageTexture, squareRect, new Vector2(0.5f, 0.5f));
                Sprite newSpriteOriginal = Sprite.Create(imageTexture, new Rect(0, 0, imageTexture.width, imageTexture.height), new Vector2(0.5f, 0.5f));

                // Gán sprite cho Image
                imageComponent.sprite = newSprite;

                // Lấy RectTransform của đối tượng Image mới
                RectTransform imageRectTransform = newImageObj.GetComponent<RectTransform>();

                // Lấy chiều cao của ScrollView
                float scrollViewHeight = ((RectTransform)content).rect.height;

                // Đặt width và height cho newImageObj (đặt width = height và bằng height của ScrollView)
                imageRectTransform.sizeDelta = new Vector2(scrollViewHeight, scrollViewHeight);

                imageSprites.Add(newSprite); // Thêm sprite vào danh sách 
                //imageSpritesOriginal.Add(newSpriteOriginal);
                int localIndex = i;
                newImageObj.GetComponent<Button>().onClick.AddListener(() => OnImageClick(localIndex)); 
                i++; 
            } 
        }
    }

    public void OnImageClick(int imageIndex)
    {
        // Hiển thị ảnh lớn và panel nền tối
        currentImageIndex = imageIndex;
        largeImage.sprite = imageSprites[imageIndex];
        largeImage.preserveAspect = true;  
    }

    private IEnumerator CountdownCoroutine()
    {
        // Đếm ngược từ giá trị bắt đầu
        for (int i = countdownStart; i > 0; i--)
        {
            countdownText.text = i.ToString(); // Hiển thị số đếm
            yield return new WaitForSeconds(interval); // Chờ theo khoảng thời gian
        }
         

        // Thực hiện tác vụ khác sau khi countdown hoàn thành
        OnCountdownComplete();
    }

    private void OnCountdownComplete()
    {
        // Tác vụ thực hiện sau countdown (ví dụ: chuyển cảnh, bắt đầu trò chơi, v.v.)
        Debug.Log("Countdown Complete! Starting next action...");
        countdownPanel.SetActive(false);
        // Lấy ảnh từ camera 
        if (cameraDisplay.sprite != null)
        {
            // Lấy Texture2D từ sprite
            Texture2D texture = SpriteToTexture2D(cameraDisplay.sprite);

            Texture2D capturedTexture = new Texture2D(texture.width, texture.height, TextureFormat.RGB24, false);
            for (int i = 0; i < cameraRotate; i++)
            {
                texture = RotateTexture90DegreesRight(texture);
            }

            capturedTexture.SetPixels(texture.GetPixels());
            capturedTexture.Apply();

            photoSave.gameObject.SetActive(true);
            cameraDisplay.gameObject.SetActive(false);
            qrCodeImage.gameObject.SetActive(false);
            Sprite savedSprite = Sprite.Create(capturedTexture, new Rect(0, 0, capturedTexture.width, capturedTexture.height), new Vector2(0.5f, 0.5f));
            photoSave.sprite = savedSprite;
            photoSave.preserveAspect = true;
            StopCamera();

            shootBtn.interactable = false;
            reshootBtn.interactable = true;
            downloadBtn.interactable = true;

            UIManager.Instance.connectionTxt.text = "Now, touch on download button to get your photo!";
        }
        else
        {
            Debug.LogError("No sprite found in cameraDisplay.");
        }
    }

    private void ShowMessageBox(string mes)
    {
        foreach (Transform eachChild in MessagePanel.transform)
        {
            if (eachChild.name == "MesContent")
            {
                Debug.Log("Child found. ...");
                TMP_Text b = eachChild.GetComponent<TMP_Text>();
                b.text = mes;
                break;
            }
        }
        // thông báo nhập username và password 
        MessagePanel.transform.parent.gameObject.SetActive(true);
    }

    // Class đại diện cho JSON response từ Imgur
    [Serializable]
    private class ImgurResponse
    {
        public ImgurData data;
    }

    [Serializable]
    private class ImgurData
    {
        public string link;
    }

}
