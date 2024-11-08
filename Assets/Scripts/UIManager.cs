using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class UIManager : MonoBehaviour
{
    public TMP_Text connectionTxt;
    private AndroidJavaObject bluetoothManager;
    public Image recordingIndicator;
    public RecordAudio recorder;
    public TakePhotoAndUpload takePhotoAndUpload;

    public GameObject deviceListPanel; // Panel hiển thị danh sách thiết bị
    public GameObject deviceItemPrefab; // Prefab cho mỗi thiết bị
    private List<string> discoveredDevices = new List<string>();

    private string targetDeviceAddress = "9C:9C:1F:EA:F9:E6";
    // Start is called before the first frame update
    void Start()
    {
        // Khởi tạo kết nối với lớp BluetoothManager trong Java
#if UNITY_ANDROID
        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            bluetoothManager = new AndroidJavaObject("com.unity3d.player.BluetoothManager", activity);
        }
#endif
        recordingIndicator.gameObject.SetActive(false);

        // kiểm tra xem bluetooth đã được bật chưa, nếu chưa bật thì tự động yêu cầu bật
        if (!IsBluetoothEnabled())
        { 
            EnableBluetooth();
        }
        else
        {
            // Bắt đầu kiểm tra kết nối định kỳ 
            bluetoothManager.Call("autoConnectToDevice", targetDeviceAddress);
            //bluetoothManager.Call("startConnectionCheck");
        }
        
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
            // sau khi bluetooth đã được bật, bắt đầu kiểm tra kết nối định kỳ
            //bluetoothManager.Call("startConnectionCheck"); 
            bluetoothManager.Call("autoConnectToDevice", targetDeviceAddress);

        }
        else if (state == "OFF")
        {
            connectionTxt.text = "bluetooth is disable";
            Debug.Log("Bluetooth đã bị tắt!");
        }
    }

    // Bắt đầu quét thiết bị
    public void StartScanning()
    {
        if (IsBluetoothEnabled())
        { 
            connectionTxt.text = "Start scan";
            // Xóa danh sách cũ
            ClearDeviceList();

            // Gọi phương thức quét thiết bị trên BluetoothManager
            bluetoothManager.Call("startDiscovery");
            Debug.Log("Đang quét thiết bị Bluetooth...");
        }
        else
        {
            connectionTxt.text = "Bluetooth chưa được bật";
            Debug.Log("Bluetooth chưa được bật!");
        }
    }

    // Dừng quét thiết bị
    public void StopScanning()
    {
        if (bluetoothManager != null)
        {
            bluetoothManager.Call("stopDiscovery");
        }
    }

    // Nhận thông tin thiết bị tìm thấy từ BluetoothManager (được gọi từ Java)
    public void OnDeviceFound(string deviceInfo)
    {
        connectionTxt.text = "đã nhận message" + deviceInfo;
        string[] info = deviceInfo.Split(';');
        if (info.Length == 2)
        {
            string deviceName = info[0];
            string deviceAddress = info[1];

            if (!discoveredDevices.Contains(deviceAddress))
            {
                discoveredDevices.Add(deviceAddress);
                DisplayDevice(deviceName, deviceAddress);
            }
        }
    }

    // Hiển thị thiết bị vào danh sách trên UI
    private void DisplayDevice(string deviceName, string deviceAddress)
    {
        connectionTxt.text = $"{deviceName} ({deviceAddress})";
        GameObject deviceItem = Instantiate(deviceItemPrefab, deviceListPanel.transform);
        TextMeshProUGUI deviceText = deviceItem.GetComponent<TextMeshProUGUI>(); 
        deviceText.text = $"{deviceName} ({deviceAddress})"; 
        deviceItem.GetComponent<Button>().onClick.AddListener(() => OnItemClick(deviceAddress));
    }

    private void OnItemClick(string deviceAddress)
    {
        connectionTxt.text = deviceAddress;
        if (bluetoothManager != null)
        {
            bluetoothManager.Call("connectToDevice", deviceAddress);
        } 
    }

    // Nhận trạng thái kết nối từ Java
    public void OnDeviceConnected(string statusMessage)
    {
        Debug.Log(statusMessage);
        connectionTxt.text = statusMessage;
        // Hiển thị thông báo trên UI nếu cần
    }

    // Phương thức này sẽ được gọi từ Java để xử lý dữ liệu nhận được
    public void OnDataReceived(string receivedData)
    {
        Debug.Log("Data received: " + receivedData);

        // Xử lý dữ liệu, ví dụ chuyển đổi sang kiểu Boolean
        if (receivedData.Trim() == "1")
        {
            // Xử lý khi nhận được true, ví dụ bật một đối tượng
            Debug.Log("Button is pressed");
        }
        else if (receivedData.Trim() == "0")
        {
            // Xử lý khi nhận được false, ví dụ tắt đối tượng
            Debug.Log("Button is released");
        }

        connectionTxt.text = receivedData.Trim();
    }


    // Xóa danh sách hiển thị cũ
    private void ClearDeviceList()
    {
        foreach (Transform child in deviceListPanel.transform)
        {
            Destroy(child.gameObject);
        }
        discoveredDevices.Clear();
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


    public void BtnBackClick()
    {
        SceneManager.LoadScene("PlayGameScene");
    }
}
