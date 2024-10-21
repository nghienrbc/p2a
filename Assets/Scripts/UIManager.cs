using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public TMP_Text connectionTxt;
    private AndroidJavaObject bluetoothManager;
    public Image recordingIndicator;
    public RecordAudio recorder;
    public TakePhotoAndUpload takePhotoAndUpload;
    // Start is called before the first frame update
    void Start()
    {
        // Khởi tạo kết nối với lớp BluetoothManager trong Java
        //using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        //{
        //    AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        //    bluetoothManager = new AndroidJavaObject("com.unity3d.player.BluetoothManager", activity);
        //}
        recordingIndicator.gameObject.SetActive(false);
    }

    // Gọi phương thức bật Bluetooth từ Java
    public void EnableBluetooth()
    {
        if (bluetoothManager != null)
        {
            bluetoothManager.Call("enableBluetooth");
        }
    }

    // Gọi phương thức tắt Bluetooth từ Java
    public void DisableBluetooth()
    {
        if (bluetoothManager != null)
        {
            bluetoothManager.Call("disableBluetooth");
        }
    }

    // Kiểm tra trạng thái Bluetooth từ Java
    public bool IsBluetoothEnabled()
    {
        if (bluetoothManager != null)
        {
            return bluetoothManager.Call<bool>("isBluetoothEnabled");
        }
        return false;
    }
     
    public void BtnConnectClick()
    {
        Debug.Log("click to connect");
        // nếu bluetooth đã được bật
        if (IsBluetoothEnabled())
        {
            DisableBluetooth();
            
        }
        else
        {
            EnableBluetooth();
        }
    }
    // Nhận trạng thái Bluetooth từ Java
    public void OnBluetoothStateChanged(string state)
    {
        Debug.Log("Bluetooth State Changed: " + state);

        // Thực hiện hành động khác tùy theo trạng thái
        if (state == "ON")
        {
            Debug.Log("Bluetooth đã được bật!");
            connectionTxt.text = "bluetooth is enable";
        }
        else if (state == "OFF")
        {
            connectionTxt.text = "bluetooth is disable";
            Debug.Log("Bluetooth đã bị tắt!");
        }
    }

    // Gọi khi không cần sử dụng Bluetooth nữa
    void OnDestroy()
    {
        if (bluetoothManager != null)
        {
            bluetoothManager.Call("unregisterReceiver");
        }
    }
     

    public void BtnStartRecordClick()
    {
        recorder.StartRecording();
        recordingIndicator.gameObject.SetActive(true);
    }

    public void BtnStopRecordClick()
    {
        recorder.StopRecording();
        recordingIndicator.gameObject.SetActive(false);
    }

    public void BtnPlayRecordClick()
    {
        recorder.PlayRecording();
    }

    public void BtnTakePhotoClick()
    {
        takePhotoAndUpload.StartTakePhoto();
    }

    public void BtnSavePhotoClick()
    {
        takePhotoAndUpload.SaveImage();
    }

    public void BtnUploadPhotoClick()
    {
        takePhotoAndUpload.UploadPhoto();
    }
}
