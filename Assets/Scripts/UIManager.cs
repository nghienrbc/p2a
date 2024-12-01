using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;
using System.IO;
using BestHTTP;
using MyGame.Enums;
using UnityEngine.Networking;

namespace MyGame.Enums
{
    public enum ShowHide { Show = 1, Hide = 0 }
    public enum MoveInOut { In = 0, Out = 1 }
}
public class UIManager : MonoBehaviour
{ 
    public static UIManager Instance { get; private set; }

    public TMP_Text connectionTxt;
    private AndroidJavaObject bluetoothManager;
    private AndroidJavaObject mainActivity;
    public Image recordingIndicator;
    public RecordAudio recorder;
    public TakePhotoAndUpload takePhotoAndUpload;

    public GameObject deviceListPanel; // Panel hiển thị danh sách thiết bị
    public GameObject deviceItemPrefab; // Prefab cho mỗi thiết bị
    private List<string> discoveredDevices = new List<string>();

    public string functionName = "home";

    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio";
    //private string targetDeviceAddress = "9C:9C:1F:EA:F9:E6";
    private string targetDeviceAddress = "24:DC:C3:9B:BA:7A";
    // Start is called before the first frame update

    public PanelMover mapPanel;
    public PanelMover cameraPanel;
    public PanelMover mapDetailPanel;
    public PanelMover locationPanel;
    public PanelMover gamePanel;

    private List<BaseToogleButton> toggleButtons = new List<BaseToogleButton>();
    public MyakuController myakuController;

    [System.Serializable]
    public class PanelSettings
    {
        public PanelMover panelMover;  // PanelMover của từng panel
        public PanelMover.Direction moveDirection; // Hướng di chuyển của panel
        public bool enable_move;       // Cho phép di chuyển panel này hay không
        public bool moveOutOrIn;       // true nếu muốn move ra, false nếu muốn move vào
        public float moveSpeed;
    }
    public List<PanelSettings> panelsToControl; // Danh sách các panel và thiết lập di chuyển

    private void Awake()
    {
        // Đảm bảo rằng chỉ có một thể hiện UIManager duy nhất
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject); // Giữ lại UIManager khi load scene mới
        }
        else
        {
            Destroy(gameObject);
        }
    }


    void Start()
    {
        // Khởi tạo kết nối với lớp BluetoothManager trong Java
        recordingIndicator.gameObject.SetActive(false);
        // Tìm tất cả các nút BaseToggleButton trong scene và lưu vào danh sách
        BaseToogleButton[] buttons = FindObjectsOfType<BaseToogleButton>();
        toggleButtons.AddRange(buttons);

        StartCoroutine(MovePanelsAfterInitialization());
        // Kiểm tra xem tất cả các quyền đã được cấp hay chưa

        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            mainActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
        }

        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            bluetoothManager = new AndroidJavaObject("com.unity3d.player.BluetoothManager", activity);
        }
        if (AreAllPermissionsGranted())
        {
            Debug.Log("Tất cả các quyền đã được cấp");
            // Thực hiện các thao tác tiếp theo, ví dụ bắt đầu kết nối Bluetooth
            if (!IsBluetoothEnabled())
            {
                EnableBluetooth();
            }
            else
            {
                if (bluetoothManager != null)
                {
                    // Bắt đầu kiểm tra kết nối định kỳ 
                    bluetoothManager.Call("autoConnectToDevice", targetDeviceAddress); 
                }
            }
        }
        else
        {
            Debug.Log("Chưa có đủ quyền, yêu cầu quyền");
            StartCoroutine(RequestPermissionsSequentially());
        }

        
    }

    private IEnumerator MovePanelsAfterInitialization()
    {
        // Đợi cho đến khi frame đầu tiên kết thúc để đảm bảo tất cả panel đã khởi tạo
        yield return new WaitForEndOfFrame(); 
        MovePanel(cameraPanel, PanelMover.Direction.Up, true, 0);
        MovePanel(mapPanel, PanelMover.Direction.Up, true, 0);
        MovePanel(mapDetailPanel, PanelMover.Direction.Down, true, 0);
        MovePanel(gamePanel, PanelMover.Direction.Left, true, 0);
    }


    private bool AreAllPermissionsGranted()
    {
#if UNITY_ANDROID
        string[] permissions = new string[] {
            "android.permission.BLUETOOTH_CONNECT",
            "android.permission.BLUETOOTH_SCAN",
            "android.permission.ACCESS_FINE_LOCATION"
        };

        using (AndroidJavaClass contextCompat = new AndroidJavaClass("androidx.core.content.ContextCompat"))
        {
            foreach (string permission in permissions)
            {
                int permissionCheck = contextCompat.CallStatic<int>("checkSelfPermission", mainActivity, permission);
                if (permissionCheck != 0)
                { // 0 là PackageManager.PERMISSION_GRANTED
                    return false; // Quyền chưa được cấp
                }
            }
        }
#endif
        return true; // Tất cả các quyền đã được cấp
    }

    private IEnumerator RequestPermissionsSequentially()
    {
#if UNITY_ANDROID
        string[] permissions = new string[] {
            "android.permission.BLUETOOTH_CONNECT",
            "android.permission.BLUETOOTH_SCAN",
            "android.permission.ACCESS_FINE_LOCATION"
        };

        using (AndroidJavaClass activityCompat = new AndroidJavaClass("androidx.core.app.ActivityCompat"))
        {
            foreach (string permission in permissions)
            {
                int permissionCheck = mainActivity.Call<int>("checkSelfPermission", permission);
                if (permissionCheck != 0)
                { // Nếu quyền chưa được cấp, yêu cầu quyền
                    activityCompat.CallStatic("requestPermissions", mainActivity, new string[] { permission }, 1);

                    // Đợi đến khi người dùng cấp quyền
                    bool granted = false;
                    while (!granted)
                    {
                        permissionCheck = mainActivity.Call<int>("checkSelfPermission", permission);
                        granted = (permissionCheck == 0);
                        yield return null; // Đợi một frame rồi kiểm tra lại
                    }
                }
            }
        }
#endif

        // Sau khi yêu cầu xong tất cả các quyền, kiểm tra lại xem đã có đủ quyền hay chưa
        if (AreAllPermissionsGranted())
        {
            if (!IsBluetoothEnabled())
            {
                EnableBluetooth();
            }
            else
            {
                if (bluetoothManager != null)
                {
                    // Bắt đầu kiểm tra kết nối định kỳ 
                    bluetoothManager.Call("autoConnectToDevice", targetDeviceAddress); 
                }
            }
        }
    }

    public void RequestBluetoothPermissions()
    {
        if (bluetoothManager != null)
        {
            bluetoothManager.Call("requestBluetoothPermissions");
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
    }
    // Nhận trạng thái Bluetooth từ Java
    bool isFirsttime = true;
    public void OnBluetoothStateChanged(string state)
    {
        Debug.Log("Bluetooth State Changed: " + state);

        // Thực hiện hành động khác tùy theo trạng thái
        if (state == "ON" && isFirsttime)
        {
            isFirsttime = false;
            Debug.Log("Bluetooth đã được bật!");
            connectionTxt.text = "bluetooth is enable"; 
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
            isFirsttime = true;
            connectionTxt.text = "Start scan bluetooth device...."; 
            bluetoothManager.Call("autoConnectToDevice", targetDeviceAddress); 
        }
        else
        {
            connectionTxt.text = "Bluetooth chưa được bật"; 
            EnableBluetooth(); 
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
        connectionTxt.text = "Found Myaku Bluetooth, hold down the button and ask something!";
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
        //connectionTxt.text = statusMessage;
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
            if (functionName == "camera")
            {
                takePhotoAndUpload.SaveImage();
            }
            else
            {
                recorder.StartRecording();
                recordingIndicator.gameObject.SetActive(true);
                connectionTxt.text = "";
            }
            Debug.Log("Button is pressed");
        }  
        else if (receivedData.Trim() == "0")
        {
            // Xử lý khi nhận được false, ví dụ tắt đối tượng
            Debug.Log("Button is released");
            if (functionName == "home")
            {
                connectionTxt.text = "Let me think about the answer for a moment!";
                recorder.StopRecording();
                recordingIndicator.gameObject.SetActive(false);
                // xữ lý gửi audio lên API để nhận lại một audio
                
            }
        }

        //connectionTxt.text = receivedData.Trim();
    }
    

    // Hàm gọi khi một nút BaseToggleButton được nhấn
    public void OnButtonClicked(BaseToogleButton clickedButton)
    {
        // Đặt lại tất cả các nút về trạng thái mặc định, trừ nút đang được nhấn
        foreach (BaseToogleButton button in toggleButtons)
        {
            if (button != clickedButton)
            {
                button.ResetToDefault();
            }
        }
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
            Debug.Log("Bluetooth đã unregisterReceiver!");
            bluetoothManager.Call("unregisterReceiver");
            bluetoothManager.Call("disconnect"); 
        }
    }
     

    public void BtnStartRecordClick()
    {
        connectionTxt.text = "";
        recorder.StartRecording();
        recordingIndicator.gameObject.SetActive(true);
    }

    public void BtnStopRecordClick()
    { 
        connectionTxt.text = "Let me think about the answer for a moment!";
        recorder.StopRecording();
        recordingIndicator.gameObject.SetActive(false);
    }

    public void BtnPlayRecordClick()
    {
        recorder.UploadAndProcessAudio();
       // recorder.PlayRecording();
    }

    public void BtnTakePhotoClick()
    {
        takePhotoAndUpload.StartTakePhoto();
    }

    public void BtnStopCameraClick()
    {
        takePhotoAndUpload.StopCamera();
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
        //SceneManager.LoadScene("PlayGameScene");
    }

    public void BtnClosePanelClick()
    {
        // ẩn map và map detail panel
        foreach (PanelSettings settings in panelsToControl)
        {
            //Debug.Log("close button click");
            //ShowHidePanel(mapPanel, ShowHide.Hide, 0.5f);
            ShowHidePanel(locationPanel, ShowHide.Hide, 0.5f);

            MovePanel(mapPanel, PanelMover.Direction.Up, true, 3000);
            MovePanel(mapDetailPanel, PanelMover.Direction.Down, true, 3000);
            MoveMyaku(false);
        }
    }
    public void ShowHidePanel(PanelMover panelMover, ShowHide isShow, float speed)
    {
        if (isShow == ShowHide.Show)
        {
            panelMover.FadeIn(speed);
        }
        else
        {
            panelMover.FadeOut(speed);
        }
    }
    public void MovePanel(PanelMover panelMover, PanelMover.Direction direction, bool isMoveOut, float speed)
    { 
        panelMover.MovePanel(direction, isMoveOut, speed);
    }
    public void MoveMyaku(bool moveToFar)
    {
        if (moveToFar && !myakuController.isPlaceInFarPossiton)
        {
            myakuController.MoveMyakuToFarPossition();
        }
        else if (!moveToFar && myakuController.isPlaceInFarPossiton)
        {
            myakuController.MoveMyakuToNearPossition();
        }
    }
    IEnumerator CopyAllStreamingAssetsToPersistentPath()
    {
        string sourceFolder = Path.Combine(Application.streamingAssetsPath, "Images");
        string destinationFolder = Path.Combine(Application.persistentDataPath, "Images");

        if (!Directory.Exists(destinationFolder))
        {
            Directory.CreateDirectory(destinationFolder);
        }

        string[] files;
#if UNITY_ANDROID
        using (UnityWebRequest request = UnityWebRequest.Get(sourceFolder))
        {
            yield return request.SendWebRequest();
            if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Failed to get file list from StreamingAssets.");
                yield break;
            }

            // Giả định rằng file là danh sách tên file (trên Android bạn cần tự xác định danh sách file)
            files = request.downloadHandler.text.Split('\n');
        }
#else
    files = Directory.GetFiles(sourceFolder);
#endif

        foreach (string file in files)
        {
            string fileName = Path.GetFileName(file);
            string sourcePath = Path.Combine(sourceFolder, fileName);
            string destinationPath = Path.Combine(destinationFolder, fileName);

            if (!File.Exists(destinationPath))
            {
                if (Application.platform == RuntimePlatform.Android)
                {
                    using (UnityWebRequest request = UnityWebRequest.Get(sourcePath))
                    {
                        yield return request.SendWebRequest();
                        if (request.result == UnityWebRequest.Result.ConnectionError || request.result == UnityWebRequest.Result.ProtocolError)
                        {
                            Debug.LogError($"Failed to copy {fileName}: {request.error}");
                            continue;
                        }
                        File.WriteAllBytes(destinationPath, request.downloadHandler.data);
                    }
                }
                else
                {
                    File.Copy(sourcePath, destinationPath);
                }
            }
        }
        Debug.Log("All files copied to persistentDataPath.");
    }
}
