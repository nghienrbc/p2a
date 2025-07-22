using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Text.RegularExpressions;

public class MySettingMaanger : MonoBehaviour
{
    private Coroutine inactivityCoroutine; // Coroutine đếm ngược
    private const float INACTIVITY_TIMEOUT = 180f; // 30 giây
    public TMP_InputField passwordInputField; 
    public TMP_InputField showTimeInputField;
    public TextMeshProUGUI validateTxt;

    // Voice Detection Settings
    [Header("Voice Detection Settings")]
    public TMP_InputField voiceThresholdInputField;          // Ngưỡng âm lượng để phát hiện giọng nói
    public TMP_InputField silenceThresholdInputField;        // Ngưỡng im lặng để kết thúc ghi âm
    public TMP_InputField minimumSpeechDurationInputField;   // Thời gian tối thiểu để xác nhận giọng nói
    public TMP_InputField sessionTimeoutInputField;          // Thời gian timeout session (20s)
    public TMP_InputField consecutiveVoiceFramesInputField;  // Số frame liên tiếp để xác nhận giọng nói
    public TMP_InputField maxRecordingDurationInputField;    // Thời gian ghi âm tối đa (15s)

    // Start is called before the first frame update
    void Start()
    {
        DisableSetting(); 

        if (PlayerPrefs.HasKey("InactivityThreshold"))
        {
            // Nếu có, lấy giá trị từ PlayerPrefs và hiển thị lên InputField
            float savedValue = PlayerPrefs.GetFloat("InactivityThreshold");
            showTimeInputField.text = savedValue.ToString();
        }
        else
        {
            // Nếu không có, set giá trị mặc định từ InputField vào PlayerPrefs
            float defaultValue;
            if (float.TryParse(showTimeInputField.text, out defaultValue))
            {
                // Lưu giá trị hiện tại trong InputField vào PlayerPrefs nếu đó là số hợp lệ
                PlayerPrefs.SetFloat("InactivityThreshold", defaultValue);
                PlayerPrefs.Save();
                Debug.Log("Giá trị mặc định đã được lưu: " + defaultValue);
            }
            else
            {
                // Nếu giá trị trong InputField không phải số, để trống hoặc xử lý lỗi
                Debug.Log("Giá trị trong InputField không hợp lệ.");
            }
        }

        // Load Voice Detection Settings
        LoadVoiceDetectionSettings();
    }

    private void LoadVoiceDetectionSettings()
    {
        // Voice Threshold (0.01f default)
        if (PlayerPrefs.HasKey("VoiceThreshold"))
        {
            float savedValue = PlayerPrefs.GetFloat("VoiceThreshold");
            voiceThresholdInputField.text = savedValue.ToString("F3");
        }
        else
        {
            float defaultValue = 0.01f;
            voiceThresholdInputField.text = defaultValue.ToString("F3");
            PlayerPrefs.SetFloat("VoiceThreshold", defaultValue);
            PlayerPrefs.Save();
        }

        // Silence Threshold (0.005f default)
        if (PlayerPrefs.HasKey("SilenceThreshold"))
        {
            float savedValue = PlayerPrefs.GetFloat("SilenceThreshold");
            silenceThresholdInputField.text = savedValue.ToString("F3");
        }
        else
        {
            float defaultValue = 0.005f;
            silenceThresholdInputField.text = defaultValue.ToString("F3");
            PlayerPrefs.SetFloat("SilenceThreshold", defaultValue);
            PlayerPrefs.Save();
        }

        // Minimum Speech Duration (0.3f default)
        if (PlayerPrefs.HasKey("MinimumSpeechDuration"))
        {
            float savedValue = PlayerPrefs.GetFloat("MinimumSpeechDuration");
            minimumSpeechDurationInputField.text = savedValue.ToString("F1");
        }
        else
        {
            float defaultValue = 0.3f;
            minimumSpeechDurationInputField.text = defaultValue.ToString("F1");
            PlayerPrefs.SetFloat("MinimumSpeechDuration", defaultValue);
            PlayerPrefs.Save();
        }

        // Session Timeout (20f default)
        if (PlayerPrefs.HasKey("SessionTimeout"))
        {
            float savedValue = PlayerPrefs.GetFloat("SessionTimeout");
            sessionTimeoutInputField.text = savedValue.ToString("F0");
        }
        else
        {
            float defaultValue = 20f;
            sessionTimeoutInputField.text = defaultValue.ToString("F0");
            PlayerPrefs.SetFloat("SessionTimeout", defaultValue);
            PlayerPrefs.Save();
        }

        // Consecutive Voice Frames (3 default)
        if (PlayerPrefs.HasKey("ConsecutiveVoiceFrames"))
        {
            int savedValue = PlayerPrefs.GetInt("ConsecutiveVoiceFrames");
            consecutiveVoiceFramesInputField.text = savedValue.ToString();
        }
        else
        {
            int defaultValue = 3;
            consecutiveVoiceFramesInputField.text = defaultValue.ToString();
            PlayerPrefs.SetInt("ConsecutiveVoiceFrames", defaultValue);
            PlayerPrefs.Save();
        }

        // Maximum Recording Duration (15f default)
        if (PlayerPrefs.HasKey("MaxRecordingDuration"))
        {
            float savedValue = PlayerPrefs.GetFloat("MaxRecordingDuration");
            maxRecordingDurationInputField.text = savedValue.ToString("F1");
        }
        else
        {
            float defaultValue = 15f;
            maxRecordingDurationInputField.text = defaultValue.ToString("F1");
            PlayerPrefs.SetFloat("MaxRecordingDuration", defaultValue);
            PlayerPrefs.Save();
        }
    }

    // Hàm sẽ được gọi khi Button được nhấn
    public void SubmitButtonClick()
    {
        Debug.Log("Button clicked!");
        validateTxt.text = ""; 
        string inputValue = showTimeInputField.text;
        if (float.TryParse(inputValue, out float result3))
        {
            // Nếu là số, lưu vào PlayerPrefs
            PlayerPrefs.SetFloat("InactivityThreshold", result3);
            PlayerPrefs.Save();
            Debug.Log("Giá trị đã được lưu: " + result3);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Auto Hide Time.";
        }

        // Save Voice Detection Settings
        SaveVoiceDetectionSettings();
    }

    private void SaveVoiceDetectionSettings()
    {
        // Voice Threshold
        string inputValue = voiceThresholdInputField.text;
        if (float.TryParse(inputValue, out float voiceThreshold))
        {
            PlayerPrefs.SetFloat("VoiceThreshold", voiceThreshold);
            Debug.Log("Voice Threshold saved: " + voiceThreshold);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Voice Threshold.";
            return;
        }

        // Silence Threshold
        inputValue = silenceThresholdInputField.text;
        if (float.TryParse(inputValue, out float silenceThreshold))
        {
            PlayerPrefs.SetFloat("SilenceThreshold", silenceThreshold);
            Debug.Log("Silence Threshold saved: " + silenceThreshold);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Silence Threshold.";
            return;
        }

        // Minimum Speech Duration
        inputValue = minimumSpeechDurationInputField.text;
        if (float.TryParse(inputValue, out float minimumSpeechDuration))
        {
            PlayerPrefs.SetFloat("MinimumSpeechDuration", minimumSpeechDuration);
            Debug.Log("Minimum Speech Duration saved: " + minimumSpeechDuration);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Minimum Speech Duration.";
            return;
        }

        // Session Timeout
        inputValue = sessionTimeoutInputField.text;
        if (float.TryParse(inputValue, out float sessionTimeout))
        {
            PlayerPrefs.SetFloat("SessionTimeout", sessionTimeout);
            Debug.Log("Session Timeout saved: " + sessionTimeout);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Session Timeout.";
            return;
        }

        // Consecutive Voice Frames
        inputValue = consecutiveVoiceFramesInputField.text;
        if (int.TryParse(inputValue, out int consecutiveVoiceFrames))
        {
            PlayerPrefs.SetInt("ConsecutiveVoiceFrames", consecutiveVoiceFrames);
            Debug.Log("Consecutive Voice Frames saved: " + consecutiveVoiceFrames);
        }
        else
        {
            validateTxt.text = "Please enter a valid integer value for Consecutive Voice Frames.";
            return;
        }

        // Maximum Recording Duration
        inputValue = maxRecordingDurationInputField.text;
        if (float.TryParse(inputValue, out float maxRecordingDuration))
        {
            PlayerPrefs.SetFloat("MaxRecordingDuration", maxRecordingDuration);
            Debug.Log("Maximum Recording Duration saved: " + maxRecordingDuration);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Maximum Recording Duration.";
            return;
        }

        PlayerPrefs.Save();
        Debug.Log("All voice detection settings saved successfully!");

        // Reload settings in EnhancedSpeechController immediately
        ReloadEnhancedSpeechControllerSettings();

        // Show success message to user
        if (validateTxt != null)
        {
            validateTxt.text = $"✅ Settings saved!";
        }
    }

    /// <summary>
    /// Reload settings in EnhancedSpeechController without restarting app
    /// </summary>
    private void ReloadEnhancedSpeechControllerSettings()
    {
        if (EnhancedSpeechController.Instance != null)
        {
            EnhancedSpeechController.Instance.ReloadVoiceDetectionSettings();
            Debug.Log("🔄 EnhancedSpeechController settings reloaded successfully!");
        }
        else
        {
            Debug.LogWarning("❌ EnhancedSpeechController.Instance not found!");
        }
    }

    public static bool IsValidMACAddress(string macAddress)
    {
        // Biểu thức chính quy kiểm tra địa chỉ MAC có dạng XX:XX:XX:XX:XX:XX
        string pattern = @"^([0-9A-Fa-f]{2}[:]){5}[0-9A-Fa-f]{2}$";

        // Kiểm tra chuỗi có khớp với biểu thức chính quy không
        return Regex.IsMatch(macAddress, pattern);
    }

    public void EnterPasswordBtnClick()
    {
        if (passwordInputField.text == "Dtu@123")
        { 
            showTimeInputField.interactable = true;

            // Enable voice detection settings
            voiceThresholdInputField.interactable = true;
            silenceThresholdInputField.interactable = true;
            minimumSpeechDurationInputField.interactable = true;
            sessionTimeoutInputField.interactable = true;
            consecutiveVoiceFramesInputField.interactable = true;
            maxRecordingDurationInputField.interactable = true;

            validateTxt.text = "";
            passwordInputField.text = "";
        }
        else
        {
            validateTxt.text = "Password is incorrect!";
        }
    }

    public void DisableSetting()
    { 
        showTimeInputField.interactable = false;

        // Disable voice detection settings
        voiceThresholdInputField.interactable = false;
        silenceThresholdInputField.interactable = false;
        minimumSpeechDurationInputField.interactable = false;
        sessionTimeoutInputField.interactable = false;
        consecutiveVoiceFramesInputField.interactable = false;
        maxRecordingDurationInputField.interactable = false;

        validateTxt.text = "";
    }

    public void StartOpenSettingPanel()
    { 
        StartInactivityTimer(); 
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
    }

    private IEnumerator InactivityTimer()
    {
        yield return new WaitForSeconds(INACTIVITY_TIMEOUT);
        Debug.Log("No activity detected for 30 seconds. hiding panel."); 

        UIManager.Instance.MovePanel(UIManager.Instance.settingPanel, PanelMover.Direction.Up, true, 3000); 
        //UIManager.Instance.connectionTxt.text = "Hide Setting Panel.";
        GameObject homeBtn = FindAnyObjectByType<HomeBtn>().gameObject;
        UIManager.Instance.SetStateForButton(homeBtn);
        DisableSetting();
    }
}
