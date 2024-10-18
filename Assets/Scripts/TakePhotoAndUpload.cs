using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TakePhotoAndUpload : MonoBehaviour
{
    private WebCamTexture webCamTexture;
    public Renderer displayRenderer; // Đối tượng dùng để hiển thị hình ảnh từ camera
     
    public void StartTakePhoto()
    {
        // Lấy danh sách các camera
        WebCamDevice[] devices = WebCamTexture.devices;

        if (devices.Length > 0)
        {
            // Sử dụng camera đầu tiên
            webCamTexture = new WebCamTexture(devices[0].name);
            displayRenderer.material.mainTexture = webCamTexture;
            webCamTexture.Play(); // Bắt đầu camera
        }
        else
        {
            Debug.LogError("No camera found on this device!");
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
    // Update is called once per frame
    void Update()
    {
        
    }
}
