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
    private WebCamTexture webCamTexture;
    private string imgurClientID = "b8f7b1442771d95"; // Thay bằng Client ID từ Imgur

     
    public void StartTakePhoto()
    {
        // Lấy danh sách các camera
        WebCamDevice[] devices = WebCamTexture.devices;

        if (devices.Length > 0)
        {
            // Sử dụng camera đầu tiên
            for (int i = 1; i < devices.Length; i++)
            {
                if (devices[i].isFrontFacing)
                {
                    webCamTexture = new WebCamTexture(devices[i].name);
                    cameraDisplay.rectTransform.localEulerAngles = new Vector3(0, 0, 90); // xữ lý xoay image 90 độ vì để bình thường thì hinhar ảnh render ra lại nằm ngang
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


            // Xoay trái 90 độ
            Texture2D rotatedTexture = RotateTexture90DegreesRight(texture);

            // Chuyển Texture2D thành PNG
            byte[] imageBytes = rotatedTexture.EncodeToPNG();

            // Đường dẫn lưu trữ
            DateTime currentDateTime = DateTime.Now;
            string filename = "Photo" + currentDateTime.ToString("dd-MM-yyyy-HH-mm-ss") + ".png";

            string filePath = Path.Combine(Application.persistentDataPath, filename);

            // Lưu file PNG
            File.WriteAllBytes(filePath, imageBytes);


        }
        else
        {
            Debug.LogError("No sprite found in cameraDisplay.");
        }
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
