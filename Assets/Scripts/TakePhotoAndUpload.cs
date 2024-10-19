using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class TakePhotoAndUpload : MonoBehaviour
{
    public Image cameraDisplay; // Tham chiếu tới RawImage trong Canvas
    private WebCamTexture webCamTexture;
     
    public void StartTakePhoto()
    {
        // Lấy danh sách các camera
        WebCamDevice[] devices = WebCamTexture.devices;

        if (devices.Length > 0)
        {
            // Sử dụng camera đầu tiên
            for (int i = 1; i < devices.Length - 1; i++)
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
    IEnumerator Upload()
    {
        // Lấy ảnh từ camera
        Texture2D capturedImage = CaptureImage();

        // Chuyển Texture2D thành PNG
        byte[] imageBytes = capturedImage.EncodeToPNG();

        // Tạo UnityWebRequest để upload file
        WWWForm form = new WWWForm();
        form.AddBinaryData("file", imageBytes, "screenshot.png", "image/png");

        UnityWebRequest www = UnityWebRequest.Post("YOUR_URL_HERE", form);
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("Upload failed: " + www.error);
        }
        else
        {
            Debug.Log("Upload complete!");
        }
    }
}
