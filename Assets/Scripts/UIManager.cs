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
using System.Text;

namespace MyGame.Enums
{
    public enum ShowHide { Show = 1, Hide = 0 }
    public enum MoveInOut { In = 0, Out = 1 }
}
public class UIManager : MonoBehaviour
{ 
    public static UIManager Instance { get; private set; }

    public TMP_Text connectionTxt;
    public TMP_Text volumeTxt; 
    public Image recordingIndicator;
    public RecordAudio recorder;
    public TakePhotoAndUpload takePhotoAndUpload;

    public GameObject deviceListPanel; // Panel hiển thị danh sách thiết bị
    public GameObject deviceItemPrefab; // Prefab cho mỗi thiết bị
    private List<string> discoveredDevices = new List<string>();

    public string functionName = "home";
    public int locationID = 0;

    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio";
    //private string targetDeviceAddress = "9C:9C:1F:EA:F9:E6"; // myaku 3
    private string targetDeviceAddress = "24:DC:C3:9B:BA:7A";
    // Start is called before the first frame update

    public PanelMover mapPanel;
    public PanelMover cameraPanel;
    public PanelMover mapDetailPanel;
    public PanelMover locationPanel;
    public PanelMover gamePanel;
    public PanelMover settingPanel;
    public PanelMover appNamePanel;

    private List<BaseToogleButton> toggleButtons = new List<BaseToogleButton>();
    public MyakuController myakuController;
    [SerializeField] AudioSource audioSource;
    private RecordAudio recordAudio;


    public GameObject transcriptTxtPanel;
    public GameObject responseTxtPanel;

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
        recordAudio = FindAnyObjectByType<RecordAudio>();
        // Khởi tạo kết nối với lớp BluetoothManager trong Java
        recordingIndicator.gameObject.SetActive(false);
        // Tìm tất cả các nút BaseToggleButton trong scene và lưu vào danh sách
        BaseToogleButton[] buttons = FindObjectsOfType<BaseToogleButton>();
        toggleButtons.AddRange(buttons); 
        StartCoroutine(MovePanelsAfterInitialization()); 
    }

    private IEnumerator MovePanelsAfterInitialization()
    {
        // Đợi cho đến khi frame đầu tiên kết thúc để đảm bảo tất cả panel đã khởi tạo
        yield return new WaitForEndOfFrame(); 
        MovePanel(cameraPanel, PanelMover.Direction.Up, true, 0);
        MovePanel(mapPanel, PanelMover.Direction.Up, true, 0);
        MovePanel(mapDetailPanel, PanelMover.Direction.Down, true, 0);
        MovePanel(gamePanel, PanelMover.Direction.Left, true, 0);
        MovePanel(settingPanel, PanelMover.Direction.Up, true, 0);
    }
     
     

    public void BtnConnectClick()
    {
        Debug.Log("click to connect"); 
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
     
    // Gọi khi không cần sử dụng Bluetooth nữa
    void OnDestroy()
    { 
        Instance = null; 
    } 
    public void BtnStartRecordClick()
    {
        recorder.StartRecording();
    }

    public void BtnStopRecordClick()
    { 
        recorder.StopRecording();
    }

    public void BtnPlayRecordClick()
    { 
    }
    public void ShowHideTestPanel(bool isShow)
    {
        transcriptTxtPanel.SetActive(isShow);
        responseTxtPanel.SetActive(isShow);
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
            if(locationPanel != null && locationPanel.gameObject.activeSelf)
            {
                ShowHidePanel(locationPanel, ShowHide.Hide, 0.5f);
            }

            MovePanel(mapPanel, PanelMover.Direction.Up, true, 3000);
            MovePanel(mapDetailPanel, PanelMover.Direction.Down, true, 3000);
            MovePanel(UIManager.Instance.appNamePanel, PanelMover.Direction.Up, false, 3000);
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
            if(panelMover) panelMover.FadeOut(speed);
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
    public void SetStateForButton(GameObject button)
    {
        BaseToogleButton baseToogle = button.GetComponent<BaseToogleButton>();
        baseToogle.ToggleImage();
        OnButtonClicked(baseToogle);
    }
}
