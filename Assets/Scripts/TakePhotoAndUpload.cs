using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using BestHTTP;
using TMPro;
using Newtonsoft.Json.Linq;

public class TakePhotoAndUpload : MonoBehaviour
{
    public GameObject MessagePanel;
    public MyakuController myakuController;
    public Image qrCodeImage; // UI Image để hiển thị mã QR
    public Image cameraDisplay; // Tham chiếu tới RawImage trong Canvas
    public Image photoSave; 
    private WebCamTexture webCamTexture; 

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
    private string UPLOAD_IMAGE_URL = "https://api.imt.org.vn/api/v1/file-attachment/upload-file/asian";
    private string VIEW_IMAGE_URL = "https://api.imt.org.vn/api/v1/file-attachment/view-file/asian";

    private Coroutine inactivityCoroutine; // Coroutine đếm ngược
    //private bool isWaitingForInteraction; // Trạng thái chờ tương tác
    private const float INACTIVITY_TIMEOUT = 15f; // 30 giây

    private void Start()
    {
        shootBtn = GameObject.FindWithTag("shoot").GetComponent<Button>();
        reshootBtn = GameObject.FindWithTag("reshoot").GetComponent<Button>();
        downloadBtn = GameObject.FindWithTag("download").GetComponent<Button>();
        DisplayImages(loadedTexture);
        currentImageIndex = 0;
        largeImage.sprite = imageSprites[0];
        largeImage.preserveAspect = true;
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
        UpdateButtonStates(true, false, false);

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

                    // Bắt đầu đếm ngược
                    //isWaitingForInteraction = true;
                    StartInactivityTimer();
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
        if (cameraDisplay != null && cameraDisplay.sprite != null)
        {
            Destroy(cameraDisplay.sprite.texture);
            Destroy(cameraDisplay.sprite);
            cameraDisplay.sprite = null;
        }

        if (rawImage != null) rawImage.texture = null;

        if (updateImageCoroutine != null) StopCoroutine(updateImageCoroutine);
        StopInactivityTimer();
        Debug.Log("Camera stopped and resources released.");
    }

    // gọi liên tục để cập nhật hình ảnh từ camera
    IEnumerator UpdateImage(WebCamTexture webCamTexture)
    {
        while (true)
        {
            Texture2D texture = new Texture2D(webCamTexture.width, webCamTexture.height);
            texture.SetPixels(webCamTexture.GetPixels());
            texture.Apply();

            int squareSize = Mathf.Min(texture.width, texture.height);
            Rect squareRect = new Rect(
                (texture.width - squareSize) / 2,
                (texture.height - squareSize) / 2,
                squareSize, squareSize);

            Sprite cameraSprite = Sprite.Create(texture, squareRect, new Vector2(0.5f, 0.5f));

            // Hủy Sprite và Texture cũ trước khi gán mới
            if (cameraDisplay.sprite != null)
            {
                Destroy(cameraDisplay.sprite.texture);
                Destroy(cameraDisplay.sprite);
            }

            cameraDisplay.sprite = cameraSprite;

            yield return new WaitForSeconds(0.2f);
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

    private Texture2D RotateTexture90DegreesLeft(Texture2D originalTexture)
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
                rotatedTexture.SetPixel(y, originalWidth - x - 1, originalTexture.GetPixel(x, y));
            }
        }

        rotatedTexture.Apply();
        return rotatedTexture;
    }

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
        UpdateButtonStates(false, false, false);
        UIManager.Instance.connectionTxt.text = "3...2...1...Smile :))";
        StartCoroutine(CountdownCoroutine());
        myakuController.MyakuCountForShootPhoto();

        //isWaitingForInteraction = true;
        StartInactivityTimer(); 
    }

    public void ReshootPhotoBtn()
    {  
        StartTakePhoto();
    }

    public void UploadPhoto()
    {
        if (photoSave.sprite == null)
        {
            Debug.LogError("No sprite found in photoSave.");
            UIManager.Instance.connectionTxt.text = "No photo to upload.";
            UpdateButtonStates(false, true, false);
            return;
        }

        UIManager.Instance.connectionTxt.text = "Processing photo...";
        UpdateButtonStates(false, false, false);

        Texture2D photoTexture = null;
        Texture2D frameTexture = null;
        Texture2D mergedTexture = null;

        try
        {
            photoTexture = SpriteToTexture2D(photoSave.sprite);
            if (photoTexture == null) throw new System.Exception("Failed to convert photo sprite.");

            frameTexture = SpriteToTexture2D(largeImage.sprite);
            if (frameTexture == null) throw new System.Exception("Failed to convert frame sprite.");

            Debug.Log($"PhotoTexture: {photoTexture.width}x{photoTexture.height}, FrameTexture: {frameTexture.width}x{frameTexture.height}");

            int maxSize = 1024;
            Texture2D resizedPhoto = ResizeTexture(photoTexture, maxSize, maxSize);
            Texture2D resizedFrame = ResizeTexture(frameTexture, maxSize, maxSize);
            Destroy(photoTexture); // Hủy sớm
            Destroy(frameTexture);
            photoTexture = resizedPhoto;
            frameTexture = resizedFrame;
            if (photoTexture == null || frameTexture == null) throw new System.Exception("Failed to resize textures.");

            mergedTexture = MergeTextures(photoTexture, frameTexture);
            if (mergedTexture == null) throw new System.Exception("Failed to merge textures.");

            byte[] imageBytes = mergedTexture.EncodeToJPG(90);
            if (imageBytes == null || imageBytes.Length == 0) throw new System.Exception("Failed to encode JPEG.");

            StartCoroutine(UploadToServer(imageBytes));
        }
        catch (System.Exception e)
        {
            Debug.LogError($"UploadPhoto error: {e.Message}\n{e.StackTrace}");
            UIManager.Instance.connectionTxt.text = "Error processing photo.";
            UpdateButtonStates(false, true, false);
        }
        finally
        {
            if (photoTexture != null) Destroy(photoTexture);
            if (frameTexture != null) Destroy(frameTexture);
            if (mergedTexture != null) Destroy(mergedTexture);
            Resources.UnloadUnusedAssets();
            System.GC.Collect(); // Buộc GC thu hồi
        }
    }



    private IEnumerator UploadToServer(byte[] imageBytes, int retries = 3)
    {
        Debug.Log($"Upload vô đây");
        for (int attempt = 0; attempt < retries; attempt++)
        {
            WWWForm form = new WWWForm();
            form.AddBinaryData("files", imageBytes, "photo.png", "image/png");

            string viewUrl = null;
            bool isSuccess = false; 

            // Thực hiện yêu cầu mạng
            using (UnityWebRequest request = UnityWebRequest.Post(UPLOAD_IMAGE_URL, form))
            {
                request.timeout = 30;
                yield return request.SendWebRequest();

                if (request.result == UnityWebRequest.Result.Success)
                {
                    string jsonResponse = request.downloadHandler.text;
                    Debug.Log($"Server response: {jsonResponse}");

                    // Xử lý JSON trong try-catch riêng
                    try
                    {
                        JObject jsonObj = JObject.Parse(jsonResponse);
                        int statusCode = jsonObj["statusCode"]?.Value<int>() ?? 0;
                        JArray dataArray = jsonObj["data"] as JArray;
                        if (statusCode == 200 && dataArray != null && dataArray.Count > 0)
                        {
                            int fileId = dataArray[0]["id"]?.Value<int>() ?? 0;
                            if (fileId > 0)
                            {
                                viewUrl = $"{VIEW_IMAGE_URL}/{fileId}";
                                isSuccess = true;
                            }
                            else
                            {
                                Debug.LogError("Invalid file ID in response");
                            }
                        }
                        else
                        {
                            Debug.LogError($"Upload failed: {jsonResponse}");
                        }
                    }
                    catch (System.Exception e)
                    {
                        Debug.LogError($"Error parsing JSON: {e.Message}");
                    }
                }
                else
                {
                    Debug.LogError($"Upload error: {request.error}");
                }
            }

            // Gọi GenerateQRCode ngoài try-catch
            if (isSuccess && !string.IsNullOrEmpty(viewUrl))
            {
                Debug.Log($"Upload successful! View URL: {viewUrl}");
                yield return StartCoroutine(GenerateQRCode(viewUrl));
                yield break;
            }

            Debug.Log($"Upload attempt {attempt + 1} failed, retrying...");
            yield return new WaitForSeconds(2f);
        }

        UIManager.Instance.connectionTxt.text = "Failed to upload after retries.";


        UpdateButtonStates(false, true, false);
    }

    // Sửa GenerateQRCode
    public IEnumerator GenerateQRCode(string url)
    {
        string qrCodeUrl = $"https://api.qrserver.com/v1/create-qr-code/?size=300x300&data={UnityWebRequest.EscapeURL(url)}";
        using (UnityWebRequest request = UnityWebRequestTexture.GetTexture(qrCodeUrl))
        {
            request.timeout = 15;
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                Texture2D qrCodeTexture = ((DownloadHandlerTexture)request.downloadHandler).texture;
                Sprite qrCodeSprite = Sprite.Create(qrCodeTexture, new Rect(0, 0, qrCodeTexture.width, qrCodeTexture.height), new Vector2(0.5f, 0.5f));

                qrCodeImage.gameObject.SetActive(true);
                if (qrCodeImage.sprite != null) Destroy(qrCodeImage.sprite);
                qrCodeImage.sprite = qrCodeSprite;

                UpdateButtonStates(false, true, false);
                UIManager.Instance.connectionTxt.text = "Use your mobile camera to scan QR and save your photo!";
                StopCamera();
                // Bắt đầu đếm ngược
                //isWaitingForInteraction = true;
                StartInactivityTimer();
            }
            else
            {
                Debug.LogError($"QR code generation failed: {request.error}");
                UIManager.Instance.connectionTxt.text = "Failed to generate QR code.";
                UpdateButtonStates(false, true, false);
            }
        }
    }

    private Texture2D ResizeTexture(Texture2D originalTexture, int targetWidth, int targetHeight)
    {
        if (originalTexture == null)
        {
            Debug.LogError("Original texture is null.");
            return null;
        }

        float aspectRatio = (float)originalTexture.width / originalTexture.height;
        if (aspectRatio > 1)
            targetHeight = Mathf.RoundToInt(targetWidth / aspectRatio);
        else
            targetWidth = Mathf.RoundToInt(targetHeight * aspectRatio);

        RenderTexture rt = null;
        Texture2D resizedTexture = null;
        try
        {
            rt = RenderTexture.GetTemporary(targetWidth, targetHeight, 0, RenderTextureFormat.ARGB32);
            RenderTexture.active = rt;
            Graphics.Blit(originalTexture, rt);

            resizedTexture = new Texture2D(targetWidth, targetHeight, TextureFormat.RGBA32, false);
            resizedTexture.ReadPixels(new Rect(0, 0, targetWidth, targetHeight), 0, 0);
            resizedTexture.Apply();

            return resizedTexture;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"ResizeTexture error: {e.Message}");
            if (resizedTexture != null) Destroy(resizedTexture);
            return null;
        }
        finally
        {
            if (rt != null)
            {
                RenderTexture.active = null;
                RenderTexture.ReleaseTemporary(rt);
            }
        }
    }

    public Texture2D MergeTextures(Texture2D baseTexture, Texture2D frameTexture)
    {
        if (baseTexture == null || frameTexture == null)
        {
            Debug.LogError("Base or frame texture is null.");
            return null;
        }

        int width = baseTexture.width;
        int height = baseTexture.height;
        RenderTexture rt = null;
        Material mergeMaterial = null;
        Texture2D mergedTexture = null;

        try
        {
            Shader mergeShader = Shader.Find("Custom/MergeTexture");
            if (mergeShader == null)
            {
                Debug.LogWarning("MergeTexture shader not found, falling back to pixel-based merge.");
                return MergeTexturesPixelBased(baseTexture, frameTexture);
            }

            mergeMaterial = new Material(mergeShader);
            mergeMaterial.SetTexture("_MainTex", baseTexture);
            mergeMaterial.SetTexture("_OverlayTex", frameTexture);

            rt = RenderTexture.GetTemporary(width, height, 0, RenderTextureFormat.ARGB32);
            RenderTexture.active = rt;

            Graphics.Blit(baseTexture, rt);
            Graphics.Blit(frameTexture, rt, mergeMaterial);

            mergedTexture = new Texture2D(width, height, TextureFormat.RGBA32, false);
            mergedTexture.ReadPixels(new Rect(0, 0, width, height), 0, 0);
            mergedTexture.Apply();

            return mergedTexture;
        }
        catch (System.Exception e)
        {
            Debug.LogWarning($"Shader merge failed: {e.Message}. Falling back to pixel-based merge.");
            if (mergedTexture != null) Destroy(mergedTexture);
            return MergeTexturesPixelBased(baseTexture, frameTexture);
        }
        finally
        {
            if (rt != null)
            {
                RenderTexture.active = null;
                RenderTexture.ReleaseTemporary(rt);
            }
            if (mergeMaterial != null) Destroy(mergeMaterial);
        }
    }

    // Fallback pixel-based với chất lượng cải thiện
    private Texture2D MergeTexturesPixelBased(Texture2D baseTexture, Texture2D frameTexture)
    {
        Texture2D mergedTexture = null;
        try
        {
            int width = baseTexture.width;
            int height = baseTexture.height;
            mergedTexture = new Texture2D(width, height, TextureFormat.RGBA32, false);
            Color[] basePixels = baseTexture.GetPixels();
            mergedTexture.SetPixels(basePixels);

            Color[] framePixels = frameTexture.GetPixels();
            for (int i = 0; i < framePixels.Length; i++)
            {
                if (framePixels[i].a > 0.1f)
                {
                    mergedTexture.SetPixel(i % width, i / width, framePixels[i]);
                }
            }

            mergedTexture.Apply();
            return mergedTexture;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"Pixel-based merge failed: {e.Message}");
            if (mergedTexture != null) Destroy(mergedTexture);
            return null;
        }
    }

    private Texture2D SpriteToTexture2D(Sprite sprite)
    {
        if (sprite == null || sprite.texture == null)
        {
            Debug.LogError("Sprite or sprite.texture is null.");
            return null;
        }

        Texture2D texture = null;
        try
        {
            Rect rect = sprite.rect;
            texture = new Texture2D((int)rect.width, (int)rect.height, TextureFormat.RGBA32, false);
            Color[] pixels = sprite.texture.GetPixels((int)rect.x, (int)rect.y, (int)rect.width, (int)rect.height);
            texture.SetPixels(pixels);
            texture.Apply();
            return texture;
        }
        catch (System.Exception e)
        {
            Debug.LogError($"SpriteToTexture2D error: {e.Message}");
            if (texture != null) Destroy(texture);
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

    // Thêm phương thức đồng bộ trạng thái nút
    private void UpdateButtonStates(bool shoot, bool reshoot, bool download)
    {
        shootBtn.interactable = shoot;
        reshootBtn.interactable = reshoot;
        downloadBtn.interactable = download;
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

            UpdateButtonStates(false, true, true);

            UIManager.Instance.connectionTxt.text = "Now, touch on download button to get your photo!";
            // Bắt đầu đếm ngược
            //isWaitingForInteraction = true;
            StartInactivityTimer();
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
    private void StartInactivityTimer()
    {
        Debug.Log("Bắt đầu đếm ngược thời gian");
        StopInactivityTimer();
        inactivityCoroutine = StartCoroutine(InactivityTimer());
    }

    private void StopInactivityTimer()
    {
        if (inactivityCoroutine != null)
        {
            StopCoroutine(inactivityCoroutine);
            inactivityCoroutine = null;
        }
        //isWaitingForInteraction = false;
    }

    //private void ResetInactivityTimer()
    //{
    //    if (isWaitingForInteraction)
    //    {
    //        StartInactivityTimer();
    //    }
    //}

    private IEnumerator InactivityTimer()
    {
        yield return new WaitForSeconds(INACTIVITY_TIMEOUT);

        //if (isWaitingForInteraction)
        //{
            Debug.Log("No activity detected for 30 seconds. Stopping camera and hiding panel.");
            StopCamera();
            // Ẩn panel camera 
            UIManager.Instance.MovePanel(UIManager.Instance.cameraPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.connectionTxt.text = "Camera stopped due to inactivity.";
        //}
    }
}
