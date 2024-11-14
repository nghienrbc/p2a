using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using BestHTTP;

public class TakePhotoAndUpload : MonoBehaviour
{
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

    private void Start()
    {
        DisplayImages(loadedTexture);
        currentImageIndex = 0;
        largeImage.sprite = imageSprites[0];
        largeImage.GetComponent<Image>().preserveAspect = true;
    }
    public void StartTakePhoto()
    {
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
                   // cameraDisplay.rectTransform.localEulerAngles = new Vector3(0, 0, 90); // xữ lý xoay image 90 độ vì để bình thường thì hinhar ảnh render ra lại nằm ngang
                    webCamTexture.Play(); // Bắt đầu camera
                    StartCoroutine(UpdateImage(webCamTexture));
                    break;
                }
            }
        }
        else
        {
            Debug.LogError("No camera found on this device!");
        }
    }
    IEnumerator UpdateImage(WebCamTexture webCamTexture)
    {
        while (true)
        {
            // Tạo một Texture2D từ WebCamTexture
            Texture2D texture = new Texture2D(webCamTexture.width, webCamTexture.height);
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
        // Lấy ảnh từ camera
        //Texture2D capturedImage = CaptureImage();
        if (cameraDisplay.sprite != null)
        {
            // Lấy Texture2D từ sprite
            Texture2D texture = SpriteToTexture2D(cameraDisplay.sprite);

            Texture2D capturedTexture = new Texture2D(texture.width, texture.height, TextureFormat.RGB24, false);
            capturedTexture.SetPixels(texture.GetPixels());
            capturedTexture.Apply();

            // Xoay trái 90 độ
            //Texture2D rotatedTexture = RotateTexture90DegreesRight(texture);

            // Chuyển Texture2D thành PNG
            //byte[] imageBytes = texture.EncodeToPNG();

            //// Đường dẫn lưu trữ
            //DateTime currentDateTime = DateTime.Now;
            //string filename = "Photo" + currentDateTime.ToString("dd-MM-yyyy-HH-mm-ss") + ".png";

            //string filePath = Path.Combine(Application.persistentDataPath, filename);

            //// Lưu file PNG
            //File.WriteAllBytes(filePath, imageBytes);
            photoSave.gameObject.SetActive(true);
            cameraDisplay.gameObject.SetActive(false);
            Sprite savedSprite = Sprite.Create(capturedTexture, new Rect(0, 0, capturedTexture.width, capturedTexture.height), new Vector2(0.5f, 0.5f));
            photoSave.sprite = savedSprite;
            photoSave.preserveAspect = true;

        }
        else
        {
            Debug.LogError("No sprite found in cameraDisplay.");
        }
    }

    public void ReshootPhotoBtn()
    { 
        photoSave.gameObject.SetActive(false);
        cameraDisplay.gameObject.SetActive(true);
    }

    public void UploadPhoto()
    {
        if (cameraDisplay.sprite != null)
        {
            // Lấy Texture2D từ sprite
            Texture2D texture = SpriteToTexture2D(cameraDisplay.sprite); 
            // Xoay trái 90 độ
            Texture2D rotatedTexture = RotateTexture90DegreesRight(texture);

            // Chuyển Texture2D thành PNG
            byte[] imageBytes = rotatedTexture.EncodeToPNG();
            UploadToImgur(imageBytes);
        }
        else
        {
            Debug.LogError("No sprite found in cameraDisplay.");
        }
    }

    private Texture2D SpriteToTexture2D(Sprite sprite)
    {
        // Lấy kích thước của Sprite
        Texture2D texture = new Texture2D((int)sprite.rect.width, (int)sprite.rect.height);
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
        }
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
        largeImage.GetComponent<Image>().preserveAspect = true; 

        // Reset vị trí và alpha của ảnh
        //largeImageRectTransform.anchoredPosition = Vector2.zero;
        //largeImageCanvasGroup.alpha = originalAlpha;
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
