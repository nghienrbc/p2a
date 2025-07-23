using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System;
using System.IO;
using System.Linq;
using UnityEngine.SceneManagement;

public class EnhancedSpeechController : MonoBehaviour
{
    #region Singleton
    public static EnhancedSpeechController Instance { get; private set; }
    #endregion

    #region UI References
    [Header("UI References")]
    public Button startButton;
    public TMP_Text statusText;
    public TMP_Text logText;
    public AudioSource audioSource;
    
    [Header("Conversation Display")]
    [Tooltip("Hiển thị câu hỏi của người dùng")]
    public TMP_Text userQuestionText;
    [Tooltip("Hiển thị câu trả lời của AI")]
    public TMP_Text aiResponseText;
    
    [Header("Myaku Integration")]
    public MyakuController myakuController;
    #endregion
    
    #region Configuration
    [Header("API Configuration")]
    public string geminiApiKey = "AIzaSyDR5fVgJABDSkaVfmy-iimLzsLLOBkrBgA";
    public string ttsApiKey = "AIzaSyCF2J81GFiPZ_itPBXrrPJ2d3oGW_R397c";
    public string googleTranslateApiKey = "AIzaSyCF2J81GFiPZ_itPBXrrPJ2d3oGW_R397c"; // For language detection

    [Header("Wake Word Detection")]
    [Tooltip("Enable wake word 'Hey DT' detection via audioPlugin")]
    public bool enableWakeWordDetection = true;

    [Header("Audio Detection")]
    [Tooltip("QUAN TRỌNG: Ngưỡng im lặng - audio dưới mức này được coi là im lặng")]
    public float silenceThreshold = 0.01f;
    [Tooltip("Thời gian timeout phát hiện giọng nói (legacy - dùng cho tương thích)")]
    public float voiceDetectionTimeout = 2.0f;
    
    [Header("Advanced Voice Detection - CÁC THÔNG SỐ QUAN TRỌNG")]
    [Tooltip("QUAN TRỌNG NHẤT: Ngưỡng âm lượng tối thiểu để phát hiện giọng nói (tránh tạp âm). Giá trị cao = ít nhạy cảm, thấp = nhạy cảm hơn")]
    public float voiceVolumeThreshold = 0.02f;
    [Tooltip("QUAN TRỌNG: Thời gian tối thiểu phát hiện giọng nói liên tục để xác nhận là speech (giây). Tránh phát hiện nhầm tiếng ho, tiếng gõ")]
    public float minimumSpeechDuration = 0.3f;
    [Tooltip("QUAN TRỌNG: Số frame liên tục phải có âm thanh để xác nhận giọng nói. Giá trị cao = ổn định hơn, thấp = phản ứng nhanh hơn")]
    public int consecutiveVoiceFrames = 5;
    
    [Header("Voice Detection Timing")]
    [Tooltip("QUAN TRỌNG: Thời gian chờ sau khi không phát hiện giọng nói trước khi bắt đầu xử lý (giây). Giá trị cao = chờ lâu hơn, thấp = phản ứng nhanh hơn")]
    public float silenceDetectionTime = 1.0f;
    
    [Header("Maximum Recording Duration")]
    [Tooltip("Thời gian ghi âm tối đa cho một câu hỏi (giây) - Tránh ghi âm vô hạn do tiếng ồn xung quanh")]
    public float maxRecordingDuration = 15f;
    
    [Header("Speed Optimization")]
    public bool enableFastMode = true;
    public bool useAdaptiveTimeout = true;

    [Header("Session Auto-Timeout")]
    [Tooltip("Thời gian chờ sau khi kết thúc phát audio trước khi tự động kết thúc session (giây)")]
    public float sessionTimeoutAfterResponse = 20f;
    [Tooltip("Enable auto-timeout feature")]
    public bool enableAutoTimeout = true;

    [Header("Language Detection")]
    [Tooltip("Force a specific language for TTS (leave empty for auto-detection)")]
    public string forceLanguageCode = "";

    [Header("Audio Recording Technical Parameters - THÔNG SỐ KỸ THUẬT")]
    [Tooltip("QUAN TRỌNG: Tần số lấy mẫu âm thanh (Hz). 16000 = chất lượng tốt cho speech recognition, 44100 = chất lượng cao nhưng tốn tài nguyên")]
    [SerializeField] private int sampleRate = 16000;
    [Tooltip("QUAN TRỌNG: Kích thước buffer âm thanh (samples). 1024 = cân bằng giữa độ trễ và hiệu suất")]
    [SerializeField] private int bufferSize = 1024;
    [Tooltip("Hiển thị mức âm lượng thời gian thực")]
    [SerializeField] private bool showRealTimeAudioLevel = true;

    
    public void ChangeToTestScene()
    {
        SceneManager.LoadScene("TestScene");
    }

    // Language mappings from RecordAudio.cs (complete list)
    private static readonly Dictionary<string, string> SupportedLanguages = new Dictionary<string, string>
    {
       { "af-ZA", "Afrikaans (South Africa)" },
        { "ar-XA", "Arabic" },
        { "bn-IN", "Bengali (India)" },
        { "bg-BG", "Bulgarian (Bulgaria)" },
        { "ca-ES", "Catalan (Spain)" },
        { "zh-CN", "Chinese (Mandarin/China)" },
        { "zh-TW", "Chinese (Mandarin/Taiwan)" },
        { "hr-HR", "Croatian (Croatia)" },
        { "cs-CZ", "Czech (Czech Republic)" },
        { "da-DK", "Danish (Denmark)" },
        { "nl-NL", "Dutch (Netherlands)" },
        { "en-AU", "English (Australia)" },
        { "en-IN", "English (India)" },
        { "en-GB", "English (UK)" },
        { "en-SG", "English (Singapore)" },
        { "en-US", "English (US)" },
        { "fi-FI", "Finnish (Finland)" },
        { "fr-FR", "French (France)" },
        { "fr-CA", "French (Canada)" },
        { "de-DE", "German (Germany)" },
        { "el-GR", "Greek (Greece)" },
        { "gu-IN", "Gujarati (India)" },
        { "he-IL", "Hebrew (Israel)" },
        { "hi-IN", "Hindi (India)" },
        { "hu-HU", "Hungarian (Hungary)" },
        { "id-ID", "Indonesian (Indonesia)" },
        { "it-IT", "Italian (Italy)" },
        { "ja-JP", "Japanese (Japan)" },
        { "kn-IN", "Kannada (India)" },
        { "km-KH", "Khmer (Cambodia)" },
        { "ko-KR", "Korean (South Korea)" },
        { "lo-LA", "Lao (Laos)" },
        { "lv-LV", "Latvian (Latvia)" },
        { "lt-LT", "Lithuanian (Lithuania)" },
        { "ms-MY", "Malay (Malaysia)" },
        { "ml-IN", "Malayalam (India)" },
        { "mr-IN", "Marathi (India)" },
        { "my-MM", "Myanmar (Burmese)" },
        { "nb-NO", "Norwegian (Norway)" },
        { "fil-PH", "Filipino (Philippines)" },
        { "pl-PL", "Polish (Poland)" },
        { "pt-BR", "Portuguese (Brazil)" },
        { "pt-PT", "Portuguese (Portugal)" },
        { "pa-IN", "Punjabi (India)" },
        { "ro-RO", "Romanian (Romania)" },
        { "ru-RU", "Russian (Russia)" },
        { "sr-RS", "Serbian (Serbia)" },
        { "sk-SK", "Slovak (Slovakia)" },
        { "sl-SI", "Slovenian (Slovenia)" },
        { "es-ES", "Spanish (Spain)" },
        { "es-US", "Spanish (US)" },
        { "sw-TZ", "Swahili (Tanzania)" },
        { "sv-SE", "Swedish (Sweden)" },
        { "ta-IN", "Tamil (India)" },
        { "te-IN", "Telugu (India)" },
        { "th-TH", "Thai (Thailand)" },
        { "tr-TR", "Turkish (Turkey)" },
        { "uk-UA", "Ukrainian (Ukraine)" },
        { "vi-VN", "Vietnamese (Vietnam)" }
    };

    // Ánh xạ ngôn ngữ với giọng nói chuẩn
    private static readonly Dictionary<string, string> VoiceMappings = new Dictionary<string, string>
    {
        { "af-ZA", "af-ZA-Standard-A" },
        { "ar-XA", "ar-XA-Standard-B" },
        { "bn-IN", "bn-IN-Standard-B" },
        { "bg-BG", "bg-BG-Standard-B" },
        { "ca-ES", "ca-ES-Standard-B" },
        { "zh-CN", "cmn-CN-Standard-A" },//
        { "zh-TW", "cmn-TW-Standard-A" },//
        { "hr-HR", "hr-HR-Standard-A" },
        { "cs-CZ", "cs-CZ-Standard-B" },
        { "da-DK", "da-DK-Standard-G" },
        { "nl-NL", "nl-NL-Standard-G" },
        { "en-AU", "en-AU-Standard-B" },
        { "en-IN", "en-IN-Standard-B" },
        { "en-GB", "en-GB-Standard-B" },
        { "en-SG", "en-SG-Standard-A" },
        { "en-US", "en-US-Standard-A" },
        { "fi-FI", "fi-FI-Standard-B" },
        { "fr-FR", "fr-FR-Standard-G" },
        { "fr-CA", "fr-CA-Standard-B" },
        { "de-DE", "de-DE-Standard-H" },
        { "el-GR", "el-GR-Standard-B" },
        { "gu-IN", "gu-IN-Standard-B" },
        { "he-IL", "he-IL-Standard-B" },
        { "hi-IN", "hi-IN-Standard-B" },
        { "hu-HU", "hu-HU-Standard-B" },
        { "id-ID", "id-ID-Standard-B" },
        { "it-IT", "it-IT-Standard-F" },
        { "ja-JP", "ja-JP-Standard-C" },
        { "kn-IN", "kn-IN-Standard-B" },
        { "km-KH", "km-KH-Standard-A" },
        { "ko-KR", "ko-KR-Standard-C" },
        { "lo-LA", "lo-LA-Standard-A" },
        { "lv-LV", "lv-LV-Standard-B" },
        { "lt-LT", "lt-LT-Standard-B" },
        { "ms-MY", "ms-MY-Standard-B" },
        { "ml-IN", "ml-IN-Standard-B" },
        { "mr-IN", "mr-IN-Standard-B" },
        { "my-MM", "my-MM-Standard-A" },//
        { "nb-NO", "nb-NO-Standard-G" },
        { "fil-PH", "fil-PH-Standard-C" },
        { "pl-PL", "pl-PL-Standard-G" },
        { "pt-BR", "pt-BR-Standard-B" },
        { "pt-PT", "pt-PT-Standard-F" },
        { "pa-IN", "pa-IN-Standard-B" },
        { "ro-RO", "ro-RO-Standard-B" },
        { "ru-RU", "ru-RU-Standard-B" },
        { "sr-RS", "sr-RS-Standard-B" },
        { "sk-SK", "sk-SK-Standard-B" },
        { "sl-SI", "sl-SI-Standard-A" },//
        { "es-ES", "es-ES-Standard-E" },
        { "es-US", "es-US-Standard-B" },
        { "sw-TZ", "sw-TZ-Standard-A" },
        { "sv-SE", "sv-SE-Standard-D" },
        { "ta-IN", "ta-IN-Standard-B" },
        { "te-IN", "te-IN-Standard-B" },
        { "th-TH", "th-TH-Standard-A" },
        { "tr-TR", "tr-TR-Standard-B" },
        { "uk-UA", "uk-UA-Standard-B" },
        { "vi-VN", "vi-VN-Standard-B" }
    };
    #endregion
    
    #region Private Fields
    private bool isSessionActive = false;
    private bool isRecording = false;
    private bool isPlayingResponse = false;
    private AudioClip continuousClip;
    private string logMessages = "";
    private string detectedLanguage = "en-US";

    // Audio processing
    private string microphoneDevice = "";
    private float[] audioBuffer;
    private int bufferPosition = 0;
    
    // Audio level tracking - THEO DÕI MỨC ÂM LƯỢNG
    private float currentAudioLevel = 0f;
    private float peakAudioLevel = 0f;
    private float lastDisplayUpdateTime = 0f;
    private const float DISPLAY_UPDATE_INTERVAL = 0.1f; // Update UI every 0.1 seconds

    // Continuous conversation state
    private float lastVoiceTime = 0f;
    private bool voiceDetected = false;
    private float sessionStartTime = 0f;
    private float voiceStartTime = 0f;
    private float totalVoiceDuration = 0f;
    
    // Enhanced voice detection
    private int consecutiveVoiceFrameCount = 0;
    private float firstVoiceDetectionTime = 0f;
    private bool confirmedVoiceDetected = false;

    // Conversation History
    private System.Collections.Generic.List<ConversationEntry> conversationHistory = new System.Collections.Generic.List<ConversationEntry>();
    private const int MAX_HISTORY_ENTRIES = 10;
    private const int MAX_CONTEXT_ENTRIES = 3; // Maximum entries to include in context (reduced for long sessions)
    private string lastAIResponse = "";
    
    // Topic management for smart history filtering
    private string lastTopic = "";
    private int sessionQuestionCount = 0;

    // Wake Word Detection (AudioPlugin)
    private AndroidJavaObject audioPlugin;
    private bool enableHeyDT = true;
    private bool isFirstSessionAfterWakeWord = true;

    // Auto-timeout management
    private float lastResponseEndTime = 0f;
    private bool isWaitingForNextQuestion = false;
    private Coroutine timeoutCoroutine;
    #endregion
    
    #region Data Structures
    [System.Serializable]
    public class ConversationEntry
    {
        public string userInput;
        public string aiResponse;
        public System.DateTime timestamp;

        public ConversationEntry(string user, string ai)
        {
            userInput = user;
            aiResponse = ai;
            timestamp = System.DateTime.Now;
        }
    }
    #endregion
    
    #region Unity Lifecycle
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    
    private void Start()
    {
        InitializeComponent();

        // Load voice detection settings from PlayerPrefs
        LoadVoiceDetectionSettings();

        LogMessage("🎙️ Enhanced Speech Controller Ready");
        LogMessage("🤖 Myaku Animation Integration Enabled");
        UpdateStatus("Click START to begin enhanced speech-to-speech session");
    }
    
    private void Update()
    {
        if (isSessionActive && isRecording && !isPlayingResponse)
        {
            ProcessContinuousAudio();
        }
    }
    #endregion

    #region Settings Management
    /// <summary>
    /// Load voice detection settings from PlayerPrefs
    /// </summary>
    private void LoadVoiceDetectionSettings()
    {
        // Load voice threshold
        if (PlayerPrefs.HasKey("VoiceThreshold"))
        {
            voiceVolumeThreshold = PlayerPrefs.GetFloat("VoiceThreshold");
            LogMessage($"🔧 Loaded Voice Threshold: {voiceVolumeThreshold:F3}");
        }

        // Load silence threshold
        if (PlayerPrefs.HasKey("SilenceThreshold"))
        {
            silenceThreshold = PlayerPrefs.GetFloat("SilenceThreshold");
            LogMessage($"🔧 Loaded Silence Threshold: {silenceThreshold:F3}");
        }

        // Load minimum speech duration
        if (PlayerPrefs.HasKey("MinimumSpeechDuration"))
        {
            minimumSpeechDuration = PlayerPrefs.GetFloat("MinimumSpeechDuration");
            LogMessage($"🔧 Loaded Minimum Speech Duration: {minimumSpeechDuration:F1}s");
        }

        // Load session timeout
        if (PlayerPrefs.HasKey("SessionTimeout"))
        {
            sessionTimeoutAfterResponse = PlayerPrefs.GetFloat("SessionTimeout");
            LogMessage($"🔧 Loaded Session Timeout: {sessionTimeoutAfterResponse:F0}s");
        }

        // Load consecutive voice frames
        if (PlayerPrefs.HasKey("ConsecutiveVoiceFrames"))
        {
            consecutiveVoiceFrames = PlayerPrefs.GetInt("ConsecutiveVoiceFrames");
            LogMessage($"🔧 Loaded Consecutive Voice Frames: {consecutiveVoiceFrames}");
        }

        // Load maximum recording duration
        if (PlayerPrefs.HasKey("MaxRecordingDuration"))
        {
            maxRecordingDuration = PlayerPrefs.GetFloat("MaxRecordingDuration");
            LogMessage($"🔧 Loaded Maximum Recording Duration: {maxRecordingDuration:F1}s");
        }

        LogMessage("🔧 Voice detection settings loaded from PlayerPrefs");
    }

    /// <summary>
    /// Public method to reload voice detection settings during runtime
    /// Called by MySettingManager after saving new settings
    /// </summary>
    public void ReloadVoiceDetectionSettings()
    {
        LogMessage("🔄 Reloading voice detection settings...");
        LoadVoiceDetectionSettings();

        // If session timeout is currently running, restart it with new timeout value
        if (timeoutCoroutine != null && isWaitingForNextQuestion)
        {
            LogMessage("🔄 Restarting timeout coroutine with new timeout value...");
            StopCoroutine(timeoutCoroutine);
            timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
        }

        LogMessage("✅ Voice detection settings reloaded and applied successfully!");
    }
    #endregion

    #region Language Detection (from RecordAudio.cs)
    /// <summary>
    /// Detect language using Google Cloud Translate API (from RecordAudio.cs)
    /// </summary>
    private IEnumerator DetectLanguageWithTranslateAPI(string text, System.Action<string> onComplete)
    {
        if (string.IsNullOrEmpty(text) || string.IsNullOrEmpty(googleTranslateApiKey))
        {
            LogMessage("❌ Empty text or missing Google Translate API Key");
            onComplete?.Invoke("en-US"); // Default fallback
            yield break;
        }

        var requestData = new
        {
            q = text
        };

        string jsonPayload = JsonConvert.SerializeObject(requestData);
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest request = new UnityWebRequest($"https://translation.googleapis.com/language/translate/v2/detect?key={googleTranslateApiKey}", "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 15;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string responseJson = request.downloadHandler.text;
                LogMessage($"🌐 Google Translate API response: {responseJson}");

                try
                {
                    // Parse JSON manually to avoid dynamic type issues in Unity
                    var jsonResponse = JsonConvert.DeserializeObject<GoogleTranslateResponse>(responseJson);

                    if (jsonResponse?.data?.detections != null &&
                        jsonResponse.data.detections.Length > 0 &&
                        jsonResponse.data.detections[0].Length > 0)
                    {
                        string detectedLanguage = jsonResponse.data.detections[0][0].language;

                        if (string.IsNullOrEmpty(detectedLanguage))
                        {
                            LogMessage("⚠️ No language detected, using default");
                            onComplete?.Invoke("en-US");
                        }
                        else
                        {
                            // Convert to TTS language code format
                            string ttsLanguageCode = NormalizeLanguageCode(detectedLanguage);
                            LogMessage($"🌐 Detected language: {detectedLanguage} → TTS: {ttsLanguageCode}");
                            onComplete?.Invoke(ttsLanguageCode);
                        }
                    }
                    else
                    {
                        LogMessage("⚠️ Invalid response format, using default");
                        onComplete?.Invoke("en-US");
                    }
                }
                catch (System.Exception ex)
                {
                    LogMessage($"❌ Error parsing language detection response: {ex.Message}");
                    onComplete?.Invoke("en-US");
                }
            }
            else
            {
                LogMessage($"❌ Google Translate API error: {request.error}");
                onComplete?.Invoke("en-US");
            }
        }
    }

    /// <summary>
    /// Normalize language code to supported TTS format (from RecordAudio.cs - complete mapping)
    /// </summary>
    private string NormalizeLanguageCode(string languageCode)
    {
        var languageMap = new Dictionary<string, string>
        {
            { "af", "af-ZA" },
            { "ar", "ar-XA" },
            { "bn", "bn-IN" },
            { "bg", "bg-BG" },
            { "ca", "ca-ES" },
            { "zh", "zh-CN" },
            { "zh-TW", "zh-TW" },
            { "hr", "hr-HR" },
            { "cs", "cs-CZ" },
            { "da", "da-DK" },
            { "nl", "nl-NL" },
            { "en", "en-US" },
            { "en-AU", "en-AU" },
            { "en-IN", "en-IN" },
            { "en-GB", "en-GB" },
            { "en-SG", "en-SG" },
            { "fi", "fi-FI" },
            { "fr", "fr-FR" },
            { "fr-CA", "fr-CA" },
            { "de", "de-DE" },
            { "el", "el-GR" },
            { "gu", "gu-IN" },
            { "he", "he-IL" },
            { "hi", "hi-IN" },
            { "hu", "hu-HU" },
            { "id", "id-ID" },
            { "it", "it-IT" },
            { "ja", "ja-JP" },
            { "kn", "kn-IN" },
            { "km", "km-KH" },
            { "ko", "ko-KR" },
            { "lo", "lo-LA" },
            { "lv", "lv-LV" },
            { "lt", "lt-LT" },
            { "ms", "ms-MY" },
            { "ml", "ml-IN" },
            { "mr", "mr-IN" },
            { "nb", "nb-NO" },
            { "fil", "fil-PH" },
            { "pl", "pl-PL" },
            { "pt", "pt-PT" },
            { "pt-BR", "pt-BR" },
            { "pa", "pa-IN" },
            { "ro", "ro-RO" },
            { "ru", "ru-RU" },
            { "sr", "sr-RS" },
            { "sk", "sk-SK" },
            { "sl", "sl-SI" },
            { "es", "es-ES" },
            { "es-US", "es-US" },
            { "sw", "sw-TZ" },
            { "sv", "sv-SE" },
            { "ta", "ta-IN" },
            { "te", "te-IN" },
            { "th", "th-TH" },
            { "tr", "tr-TR" },
            { "uk", "uk-UA" },
            { "vi", "vi-VN" }
        };

        string normalizedCode = languageMap.ContainsKey(languageCode.ToLower())
            ? languageMap[languageCode.ToLower()]
            : "en-US";

        // Ensure the normalized code is supported
        if (SupportedLanguages.ContainsKey(normalizedCode))
        {
            return normalizedCode;
        }

        LogMessage($"⚠️ Language {normalizedCode} not supported, falling back to en-US");
        return "en-US";
    }

    /// <summary>
    /// Get human-readable language name from language code
    /// </summary>
    private string GetLanguageName(string languageCode)
    {
        if (SupportedLanguages.ContainsKey(languageCode))
        {
            return SupportedLanguages[languageCode];
        }

        return languageCode; // Fallback to language code itself
    }

    /// <summary>
    /// Check if text contains non-English characters
    /// </summary>
    private bool ContainsNonEnglishCharacters(string text)
    {
        if (string.IsNullOrEmpty(text)) return false;

        // Check for Vietnamese characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]"))
            return true;

        // Check for Chinese characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u4e00-\u9fff]"))
            return true;

        // Check for Japanese characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u3040-\u309f\u30a0-\u30ff]"))
            return true;

        // Check for Korean characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\uac00-\ud7af]"))
            return true;

        // Check for Thai characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0e00-\u0e7f]"))
            return true;

        // Check for Arabic characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0600-\u06ff]"))
            return true;

        return false;
    }
    #endregion

    #region Public Methods
    public void StartContinuousSession()
    {
        LogMessage($"🔍 DEBUG: StartContinuousSession called, isFirstSessionAfterWakeWord = {isFirstSessionAfterWakeWord}");

        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active...");
            return;
        }

        // Clear conversation history for new session
        conversationHistory.Clear();
        sessionQuestionCount = 0;
        lastTopic = "";
        LogMessage("🗑️ Conversation history cleared for new session - Session counters reset");

        // Clear conversation display UI
        ClearConversationDisplay();

        isFirstSessionAfterWakeWord = true;
        StartCoroutine(BeginContinuousConversation());
    }

    /// <summary>
    /// Internal method to stop session (called by timeout or other internal logic)
    /// </summary>
    private void StopSession()
    {
        if (!isSessionActive)
        {
            LogMessage("⚠️ No active session to stop...");
            return;
        }

        StartCoroutine(EndSession());
    }
    #endregion
    
    #region Private Methods
    private void InitializeComponent()
    {
        if (startButton != null)
            startButton.onClick.AddListener(StartContinuousSession);

        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();
            
        ClearLogs();
        ClearConversationDisplay();
        
        // Setup microphone
        if (Microphone.devices.Length > 0)
        {
            microphoneDevice = Microphone.devices[0];
            LogMessage($"🎤 Microphone ready: {microphoneDevice}");
        }
        else
        {
            LogMessage("❌ No microphone found!");
        }

        // Log detailed recording parameters explanation
        LogRecordingParametersExplanation();

        // Initialize AudioPlugin for wake word detection
        InitializeAudioPlugin();
    }

    /// <summary>
    /// Log comprehensive explanation of all recording parameters
    /// </summary>
    private void LogRecordingParametersExplanation()
    {
        LogMessage("\n🔧 === THÔNG SỐ GHI ÂM CHI TIẾT ===");
        LogMessage("📊 CÁC THÔNG SỐ QUAN TRỌNG NHẤT:");
        LogMessage($"• voiceVolumeThreshold = {voiceVolumeThreshold:F3} - Ngưỡng phát hiện giọng nói");
        LogMessage($"  ↳ Càng THẤP = càng nhạy cảm (phát hiện giọng nhỏ), càng CAO = ít nhạy cảm");
        LogMessage($"  ↳ Khuyến nghị: 0.015-0.025 cho môi trường yên tĩnh, 0.03-0.05 cho ồn");
        
        LogMessage($"• minimumSpeechDuration = {minimumSpeechDuration:F1}s - Thời gian tối thiểu xác nhận giọng nói");
        LogMessage($"  ↳ Tránh phát hiện nhầm tiếng ho, tiếng gõ. Khuyến nghị: 0.3-0.5s");
        
        LogMessage($"• consecutiveVoiceFrames = {consecutiveVoiceFrames} - Số frame liên tục cần thiết");
        LogMessage($"  ↳ Tăng độ ổn định phát hiện. Khuyến nghị: 3-7 frames");
        
        LogMessage($"• silenceDetectionTime = {silenceDetectionTime:F1}s - Thời gian chờ kết thúc câu");
        LogMessage($"  ↳ Sau khi im lặng bao lâu thì xử lý. Càng ngắn = phản ứng nhanh hơn");
        
        LogMessage($"• maxRecordingDuration = {maxRecordingDuration:F1}s - Thời gian ghi âm tối đa");
        LogMessage($"  ↳ Tránh ghi âm vô hạn do tiếng ồn. Khuyến nghị: 10-20 giây");
        
        LogMessage("📊 CÁC THÔNG SỐ KỸ THUẬT:");
        LogMessage($"• sampleRate = {sampleRate} Hz - Tần số lấy mẫu âm thanh");
        LogMessage($"  ↳ 16000 Hz = tối ưu cho speech recognition, 44100 Hz = chất lượng cao");
        
        LogMessage($"• bufferSize = {bufferSize} samples - Kích thước buffer xử lý");
        LogMessage($"  ↳ 1024 = cân bằng tốt, 512 = độ trễ thấp, 2048 = ổn định cao");
        
        LogMessage($"• silenceThreshold = {silenceThreshold:F3} - Ngưỡng im lặng tuyệt đối");
        LogMessage($"  ↳ Audio dưới mức này = hoàn toàn im lặng");
        
        LogMessage("🎯 TÍNH NĂNG HIỂN THỊ MỚI:");
        LogMessage($"• showRealTimeAudioLevel = {showRealTimeAudioLevel} - Hiển thị mức âm lượng thời gian thực");
        LogMessage($"• DISPLAY_UPDATE_INTERVAL = {DISPLAY_UPDATE_INTERVAL:F1}s - Tần suất cập nhật UI");
        LogMessage("• WarningTxt = Hiển thị mức âm lượng đang thu âm LIÊN TỤC");
        LogMessage("• volumeTxt = Hiển thị mức âm lượng CAO NHẤT sau mỗi câu hỏi");
        
        LogMessage("🎯 KIỂM SOÁT TẠP ÂM:"); 
        LogMessage($"  ↳ TRUE = Gửi TẤT CẢ audio đến Gemini (không lọc tạp âm)"); 
        LogMessage($"  ↳ Giúp debug tại sao audio bị từ chối hoặc chấp nhận");
        LogMessage("===========================================\n");
    }

    private IEnumerator BeginContinuousConversation()
    {
        LogMessage("\n🚀 === STARTING ENHANCED SPEECH SESSION ===");
        LogMessage("🗑️ Fresh session - Previous conversation history cleared");
        LogMessage("🎤 Session active - Speak anytime, AI will respond automatically");
        LogMessage("🤖 Myaku animations enabled for immersive experience");

        isSessionActive = true;
        sessionStartTime = Time.time;

        // Pause AudioPlugin during session to avoid conflicts
        PauseAudioPlugin();

        // Myaku Animation: Start listening mode with special audio feedback for wake word
        LogMessage($"🔍 DEBUG: isFirstSessionAfterWakeWord = {isFirstSessionAfterWakeWord}");
        LogMessage($"🔍 DEBUG: myakuController = {(myakuController != null ? "NOT NULL" : "NULL")}");

        bool needToWaitForListeningSound = false;

        if (myakuController != null)
        {
            if (isFirstSessionAfterWakeWord)
            {
                // First session after wake word - play listening sound
                LogMessage("🎯 WAKE WORD SESSION - Calling myakuController.StartListening(true)");
                myakuController.StartListening(true);
                LogMessage("🎵 Playing welcome sound for wake word session");
                needToWaitForListeningSound = true; // Need to wait for sound to finish
                isFirstSessionAfterWakeWord = false; // Reset flag
                LogMessage("🔍 DEBUG: Reset isFirstSessionAfterWakeWord to false");
            }
            else
            {
                // Subsequent sessions - no audio feedback
                LogMessage("🔄 FOLLOW-UP SESSION - Calling myakuController.StartListening(false)");
                myakuController.StartListening(false);
                LogMessage("🔇 Silent listening mode for follow-up questions");
            }
        }
        else
        {
            LogMessage("❌ myakuController is null!");
        }

        // Wait for listening sound to finish before starting recording
        if (needToWaitForListeningSound && myakuController != null)
        {
            LogMessage("⏳ Waiting for listening sound to finish before starting microphone recording...");
            
            // Wait for audio to start playing (small delay to ensure it begins)
            yield return new WaitForSeconds(0.2f);
            
            // Wait for audio to finish playing using the new method
            float timeoutCounter = 0f;
            const float MAX_WAIT_TIME = 10f; // Maximum 10 seconds timeout
            
            while (myakuController.IsPlayingAudio() && timeoutCounter < MAX_WAIT_TIME)
            {
                float remainingTime = myakuController.GetRemainingAudioTime();
                if (timeoutCounter % 1f < 0.1f) // Log every second (approximately)
                {
                    LogMessage($"⏳ Still waiting... Remaining audio time: {remainingTime:F1}s");
                }
                
                yield return new WaitForSeconds(0.1f);
                timeoutCounter += 0.1f;
            }
            
            if (timeoutCounter >= MAX_WAIT_TIME)
            {
                LogMessage("⚠️ Listening sound timeout reached - Proceeding with recording");
            }
            else
            {
                LogMessage("✅ Listening sound finished naturally");
            }
            
            // Add small buffer time to ensure audio system is clear
            yield return new WaitForSeconds(0.3f);
            
            LogMessage("✅ Audio buffer cleared - Now starting microphone recording");
        }

        string statusText = enableFastMode ? "⚡ FAST LIVE" : "🔴 LIVE";
        UpdateStatus($"{statusText} - Speak anytime, AI responds automatically");
        UpdateButtonStates();

        // Start continuous recording after listening sound is finished
        yield return StartCoroutine(InitializeContinuousRecording());

        // Start initial timeout for first question
        if (enableAutoTimeout)
        {
            LogMessage($"⏰ Starting initial session timeout: {sessionTimeoutAfterResponse}s");
            isWaitingForNextQuestion = true;
            if (timeoutCoroutine != null)
            {
                StopCoroutine(timeoutCoroutine);
            }
            timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
        }

        // Main conversation loop
        while (isSessionActive)
        {
            yield return null;
        }
    }

    private IEnumerator InitializeContinuousRecording()
    {
        if (string.IsNullOrEmpty(microphoneDevice))
        {
            LogMessage("❌ No microphone available");
            yield break;
        }

        LogMessage("🎤 Starting continuous audio monitoring...");

        // Start continuous recording (30 minutes max)
        continuousClip = Microphone.Start(microphoneDevice, true, 1800, sampleRate);
        audioBuffer = new float[bufferSize];
        bufferPosition = 0;

        yield return new WaitForSeconds(0.1f);

        isRecording = true;
        ResetVoiceDetectionState();

        LogMessage("✅ Enhanced voice detection active - Myaku is ready!");
    }

    private void ProcessContinuousAudio()
    {
        if (continuousClip == null || !isRecording) return;

        int currentPosition = Microphone.GetPosition(microphoneDevice);
        if (currentPosition < 0) return;

        // Calculate samples to read
        int samplesToRead = currentPosition - bufferPosition;
        if (samplesToRead < 0)
            samplesToRead += continuousClip.samples;

        if (samplesToRead < bufferSize / 4) return;

        // Read audio data
        float[] samples = new float[samplesToRead];
        continuousClip.GetData(samples, bufferPosition);
        bufferPosition = currentPosition;

        // Enhanced voice activity analysis
        float audioLevel = GetAudioLevel(samples);
        bool currentVoiceDetected = audioLevel > voiceVolumeThreshold;

        // Update current audio level and peak tracking
        currentAudioLevel = audioLevel;
        if (audioLevel > peakAudioLevel)
        {
            peakAudioLevel = audioLevel;
        }

        // Update UI with real-time audio level (throttled to avoid performance issues)
        if (showRealTimeAudioLevel && Time.time - lastDisplayUpdateTime > DISPLAY_UPDATE_INTERVAL)
        {
            UpdateRealTimeAudioDisplay(audioLevel);
            lastDisplayUpdateTime = Time.time;
        }

        if (currentVoiceDetected)
        {
            consecutiveVoiceFrameCount++;

            if (!voiceDetected)
            {
                firstVoiceDetectionTime = Time.time;
                voiceDetected = true;
                confirmedVoiceDetected = false;
                LogMessage($"🔍 Potential voice detected (level: {audioLevel:F3})...");
            }

            // Confirm voice after meeting criteria
            if (!confirmedVoiceDetected &&
                consecutiveVoiceFrameCount >= consecutiveVoiceFrames &&
                (Time.time - firstVoiceDetectionTime) >= minimumSpeechDuration)
            {
                confirmedVoiceDetected = true;
                voiceStartTime = firstVoiceDetectionTime;
                LogMessage("🗣️ Voice CONFIRMED - Recording speech...");
                UpdateStatus("🎤 Recording your voice...");

                // Reset peak audio level tracking for this new recording
                ResetPeakAudioLevel();

                // Cancel timeout when user starts speaking
                if (timeoutCoroutine != null)
                {
                    StopCoroutine(timeoutCoroutine);
                    timeoutCoroutine = null;
                    isWaitingForNextQuestion = false;
                    LogMessage("⏰ Auto-timeout cancelled - User speaking");
                }

                // Myaku Animation: User speaking
                if (myakuController != null)
                {
                    myakuController.StartRecording();
                }

                // Update UI
                if (userQuestionText != null)
                {
                    userQuestionText.text = "👤 User: (Speaking...)";
                }
            }

            if (confirmedVoiceDetected)
            {
                lastVoiceTime = Time.time;
            }
        }
        else
        {
            consecutiveVoiceFrameCount = 0;

            if (voiceDetected && !confirmedVoiceDetected)
            {
                voiceDetected = false;
                LogMessage("❌ False voice detection - Ignoring noise");
            }
            else if (confirmedVoiceDetected)
            {
                float currentTimeout = CalculateOptimalTimeout();
                float recordingDuration = Time.time - voiceStartTime;

                // Check for silence timeout OR maximum recording duration
                bool silenceTimeout = Time.time - lastVoiceTime > currentTimeout;
                bool maxDurationReached = recordingDuration > maxRecordingDuration;

                if (silenceTimeout || maxDurationReached)
                {
                    totalVoiceDuration = recordingDuration;
                    voiceDetected = false;
                    confirmedVoiceDetected = false;
                    consecutiveVoiceFrameCount = 0;

                    string endReason = maxDurationReached ? "max duration reached" : "silence timeout";
                    string timeoutInfo = $"reason: {endReason}, duration: {recordingDuration:F1}s, silence: {currentTimeout:F1}s";
                    LogMessage($"✅ Voice ended ({timeoutInfo}) - Processing...");

                    // Myaku Animation: Stop recording only, thinking will start after noise check
                    if (myakuController != null)
                    {
                        myakuController.StopRecording();
                        LogMessage("🛑 Stopped recording - Will start thinking after audio analysis");
                    }

                    StartCoroutine(ProcessVoiceSegment());
                }
            }
        }
    }

    private IEnumerator ProcessVoiceSegment()
    {
        isRecording = false;
        UpdateStatus("🤖 AI is thinking...");

        // Update UI
        if (aiResponseText != null)
        {
            aiResponseText.text = "🤖 AI: (Processing your question...)";
        }

        // Start thinking animation - audio detected
        if (myakuController != null)
        {
            LogMessage("🤔 Starting AI thinking - Processing audio");
            myakuController.MyakuThinking();
        }

        // Extract audio segment
        int samplesToExtract = Mathf.Min(sampleRate * 10, continuousClip.samples);
        int startSample = Mathf.Max(0, bufferPosition - samplesToExtract);

        float[] voiceSegment = new float[samplesToExtract];
        continuousClip.GetData(voiceSegment, startSample);

        AudioClip tempClip = AudioClip.Create("VoiceSegment", samplesToExtract, 1, sampleRate, false);
        tempClip.SetData(voiceSegment, 0);

        bool success = false;

        // Send audio directly to Gemini for processing
        LogMessage("🚀 Sending audio to Gemini for processing...");
        yield return StartCoroutine(ProcessWithGemini(tempClip, (result) => {
            success = result;
        }));

        Destroy(tempClip);

        // Handle response
        if (success)
        {
            LogMessage("✅ AI response processing completed");

            // Wait for TTS to finish completely
            while (isPlayingResponse || (audioSource != null && audioSource.isPlaying))
            {
                yield return new WaitForSeconds(0.1f);
            }

            // Myaku Animation: Finished speaking, back to listening
            if (myakuController != null)
            {
                myakuController.FinishSpeaking();
                myakuController.StartListening(false);
                LogMessage("🔇 Silent listening mode for follow-up questions");
            }

            LogMessage("🔊 AI response finished - Resuming voice monitoring");
            UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");
        }
        else
        {
            LogMessage("❌ Processing failed - Continuing to listen...");
            UpdateStatus("🔴 LIVE - Speak anytime (previous request failed)");

            // Myaku Animation: Back to listening on failure
            if (myakuController != null)
            {
                LogMessage("❌ Processing failed - Stopping thinking animation");
                myakuController.MyakuStopThinking();
                myakuController.StartListening(false);
            }

            // Show error message to user
            if (UIManager.Instance?.connectionTxt != null)
            {
                UIManager.Instance.connectionTxt.text = "Cannot understand the question - please speak clearly";
            }
        }

        // Display peak audio level for this question (regardless of success/failure)
        DisplayPeakAudioLevel();

        // ALWAYS apply timeout regardless of success/failure
        ApplyUniversalTimeout();

        yield return new WaitForSeconds(0.5f);
        ResetVoiceDetectionState();
        isRecording = true;
    }

    /// <summary>
    /// Handle scenario where no TTS response is needed (noise, unclear audio, etc.)
    /// </summary>
    private void HandleNoResponseScenario()
    {
        // Myaku Animation: No thinking needed, back to listening directly
        if (myakuController != null)
        {
            // Don't call MyakuStopThinking() since we never started thinking for noise
            myakuController.StartListening(false);
            LogMessage("🔇 No meaningful audio detected - Back to listening");
        }

        // Update UI to show we're still listening
        UpdateStatus("🔴 LIVE - Speak clearly, AI responds automatically");
        
        // Update conversation display
        if (userQuestionText != null)
        {
            userQuestionText.text = "👤 User: (Audio unclear - try again)";
        }
        if (aiResponseText != null)
        {
            aiResponseText.text = "🤖 AI: (Listening for clear speech...)";
        }
    }

    /// <summary>
    /// Apply timeout in all scenarios - success, failure, or no response
    /// </summary>
    private void ApplyUniversalTimeout()
    {
        // Mark response end time for timeout tracking
        lastResponseEndTime = Time.time;
        isWaitingForNextQuestion = true;

        // Start timeout coroutine for auto-ending session
        if (enableAutoTimeout)
        {
            if (timeoutCoroutine != null)
            {
                StopCoroutine(timeoutCoroutine);
            }
            timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
            LogMessage($"⏰ Universal timeout started: {sessionTimeoutAfterResponse}s");
        }
    }

    /// <summary>
    /// Detect if audio contains only noise, coughs, claps, or meaningless sounds
    /// </summary>
    private bool IsNoiseOrMeaninglessAudio(float[] audioData)
    {
        if (audioData == null || audioData.Length == 0)
            return true;

        // Calculate audio characteristics
        float avgVolume = 0f;
        float maxVolume = 0f;
        int silentSamples = 0;
        int loudBursts = 0;
        
        for (int i = 0; i < audioData.Length; i++)
        {
            float sample = Mathf.Abs(audioData[i]);
            avgVolume += sample;
            
            if (sample > maxVolume)
                maxVolume = sample;
                
            if (sample < 0.01f)
                silentSamples++;
            else if (sample > 0.3f)
                loudBursts++;
        }
        
        avgVolume /= audioData.Length;
        float silenceRatio = (float)silentSamples / audioData.Length;
        float burstRatio = (float)loudBursts / audioData.Length;
        
        // Audio too short (less than 0.3 seconds of meaningful content)
        float meaningfulDuration = (audioData.Length - silentSamples) / (float)sampleRate;
        if (meaningfulDuration < 0.3f)
        {
            LogMessage($"🔇 Audio too short: {meaningfulDuration:F2}s meaningful content");
            return true;
        }
        
        // Too much silence (>85% silent)
        if (silenceRatio > 0.85f)
        {
            LogMessage($"🔇 Too much silence: {silenceRatio * 100:F1}% silent");
            return true;
        }
        
        // Audio pattern suggests noise (sudden bursts without sustained speech)
        if (burstRatio > 0.1f && avgVolume < 0.05f)
        {
            LogMessage($"🔇 Noise pattern detected: {burstRatio * 100:F1}% bursts, avg: {avgVolume:F3}");
            return true;
        }
        
        // Very low average volume suggests mumbling or unclear speech
        if (avgVolume < 0.02f && maxVolume < 0.2f)
        {
            LogMessage($"🔇 Very low volume: avg={avgVolume:F3}, max={maxVolume:F3}");
            return true;
        }
        
        LogMessage($"✅ Audio seems valid: duration={meaningfulDuration:F2}s, silence={silenceRatio * 100:F1}%, avg={avgVolume:F3}");
        return false;
    }

    private IEnumerator ProcessWithGemini(AudioClip clip, System.Action<bool> callback)
    {
        if (clip == null)
        {
            callback?.Invoke(false);
            yield break;
        }

        byte[] audioBytes = ConvertAudioClipToWavBytes(clip);
        if (audioBytes == null)
        {
            LogMessage("❌ Failed to convert audio clip");
            callback?.Invoke(false);
            yield break;
        }

        string audioBase64 = Convert.ToBase64String(audioBytes);
        string systemPrompt = BuildEnhancedSystemPromptWithHistory();

        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new object[]
                    {
                        new { text = systemPrompt },
                        new
                        {
                            inline_data = new
                            {
                                mime_type = "audio/wav",
                                data = audioBase64
                            }
                        }
                    }
                }
            },
            generation_config = new
            {
                max_output_tokens = 150,
                temperature = 0.3f
            }
        };

        string jsonData = JsonConvert.SerializeObject(requestData);
        string url = $"https://generativelanguage.googleapis.com/v1/models/gemini-1.5-flash:generateContent?key={geminiApiKey}";

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 15;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string textResponse = ProcessTextResponse(request.downloadHandler.text);
                if (!string.IsNullOrEmpty(textResponse))
                {
                    // Check if response indicates unrecognized speech
                    string lowerResponse = textResponse.ToLower().Trim();
                    if (lowerResponse.Contains("unclear") || lowerResponse.Contains("noise") || 
                        lowerResponse.Contains("không rõ") || lowerResponse.Contains("tạp âm") ||
                        lowerResponse.Contains("unclear audio") || lowerResponse.Contains("cannot understand") ||
                        lowerResponse.Contains("inaudible") || lowerResponse.Contains("mumbling") ||
                        lowerResponse.Contains("không nhận dạng được"))
                    {
                        LogMessage($"🔇 AI could not understand audio: {textResponse}");
                        
                        // Show error message in connectionTxt only (no TTS)
                        if (UIManager.Instance?.connectionTxt != null)
                        {
                            UIManager.Instance.connectionTxt.text = "Cannot understand the question - please speak clearly";
                        }
                        
                        callback?.Invoke(true);
                        yield break;
                    }

                    // Check if response indicates camera request
                    if (lowerResponse.Contains("camera_request"))
                    {
                        LogMessage($"📸 AI detected camera request: {textResponse}");
                        
                        // Trigger camera functionality
                        TriggerCameraFunction();
                        
                        // Show confirmation message in connectionTxt
                        if (UIManager.Instance?.connectionTxt != null)
                        {
                            UIManager.Instance.connectionTxt.text = "📸 Opening camera for you...";
                        }
                        
                        callback?.Invoke(true);
                        yield break;
                    }

                    // Process normal response
                    lastAIResponse = textResponse;
                    string estimatedUserInput = EstimateUserInputFromResponse(textResponse);

                    // Detect input language using Google Translate API
                    string detectedInputLanguage = null;
                    yield return StartCoroutine(DetectLanguageWithTranslateAPI(textResponse, (lang) => detectedInputLanguage = lang));

                    // If detected as English but response contains non-English, try again with estimated input
                    if (detectedInputLanguage == "en-US" && ContainsNonEnglishCharacters(textResponse))
                    {
                        yield return StartCoroutine(DetectLanguageWithTranslateAPI(estimatedUserInput, (lang) => detectedInputLanguage = lang));
                    }

                    // Update UI and conversation history
                    estimatedUserInput = EstimateUserInputFromResponseWithLanguage(textResponse, detectedInputLanguage);

                    if (UIManager.Instance?.connectionTxt != null)
                    {
                        string languageName = GetLanguageName(detectedInputLanguage);
                        UIManager.Instance.connectionTxt.text = $"🎤 Input: {languageName} | 🤖 {textResponse}";
                    }

                    LogMessage($"🎤 User Input: {estimatedUserInput} (Language: {detectedInputLanguage})");

                    UpdateUserQuestionWithTimestamp(estimatedUserInput);
                    UpdateAIResponse(textResponse);
                    AddToConversationHistory(estimatedUserInput, textResponse);

                    yield return StartCoroutine(ConvertToSpeechAndPlay(textResponse));
                    callback?.Invoke(true);
                }
                else
                {
                    callback?.Invoke(false);
                }
            }
            else
            {
                string errorDetails = $"Result: {request.result}, Error: {request.error}";
                if (request.downloadHandler != null && !string.IsNullOrEmpty(request.downloadHandler.text))
                {
                    errorDetails += $", Response: {request.downloadHandler.text}";
                }
                LogMessage($"❌ Gemini request failed: {errorDetails}");
                callback?.Invoke(false);
            }
        }
    }

    /// <summary>
    /// Analyze AI response to determine if it's a greeting, noise, or normal response
    /// </summary>
    private string AnalyzeResponseType(string response)
    {
        if (string.IsNullOrEmpty(response))
            return "unclear";

        string lowerResponse = response.ToLower().Trim();

        // Check for noise indicators
        if (lowerResponse.Contains("unclear") || lowerResponse.Contains("noise") || 
            lowerResponse.Contains("không rõ") || lowerResponse.Contains("tạp âm") ||
            lowerResponse.Contains("unclear audio") || lowerResponse.Contains("cannot understand") ||
            lowerResponse.Contains("inaudible") || lowerResponse.Contains("mumbling"))
        {
            return "noise";
        }

        // Check for greeting patterns
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(hello|hi|xin chào|chào|สวัสดี|halo|你好|こんにちは|안녕)\b"))
        {
            return "greeting";
        }

        return "normal";
    }

    /// <summary>
    /// Build enhanced system prompt with better noise detection and greeting handling
    /// </summary>
    private string BuildEnhancedSystemPromptWithHistory()
    {
        string basePrompt = @"You are Tenaya, created by Simulation and Visualization Center - Duy Tan University.

🔴 CRITICAL LANGUAGE MATCHING RULES (MUST FOLLOW):
- STEP 1: Listen carefully to identify the exact language of the CURRENT audio input
- STEP 2: Respond in the EXACT SAME LANGUAGE as the input - NO EXCEPTIONS
- STEP 3: Completely IGNORE language from previous conversation history - each input is independent
- STEP 4: If unsure about language, default to Vietnamese for unclear inputs

🎯 LANGUAGE DETECTION EXAMPLES:
Input in English → Respond in English ONLY
Input in Vietnamese → Respond in Vietnamese ONLY  
Input in Thai → Respond in Thai ONLY
Input in Chinese → Respond in Chinese ONLY
Input mixed languages → Use primary/dominant language detected

🚫 FORBIDDEN BEHAVIORS:
- Never mix languages in one response
- Never use English if input was Vietnamese (and vice versa)
- Never be influenced by conversation history language
- Never assume user language preference from past messages

✅ CORRECT RESPONSE PATTERNS:

🔵 **GREETING DETECTION & RESPONSE**:
- ONLY respond with greeting IF user input contains PURE greeting words: ""hello"", ""hi"", ""xin chào"", ""chào"", ""สวัสดี"", ""你好"", etc.
- If user asks question + greeting (e.g., ""Hello, what is ASEAN?""), respond directly to the QUESTION (skip greeting)
- If user only greets (e.g., ""Hello""), then respond with greeting + offer help:
  * Vietnamese: ""Chào bạn! Tôi có thể giúp gì cho bạn không?""
  * English: ""Hello! How can I help you today?""
  * Thai: ""สวัสดีครับ! มีอะไรให้ผมช่วยไหม?""
  * Chinese: ""你好！我能为您做些什么吗？""

🔵 **DIRECT QUESTION HANDLING**:
- If user asks direct questions (even as first message), answer IMMEDIATELY without greeting
- Examples: ""What is ASEAN?"" → Direct answer about ASEAN (NO ""Hello! ASEAN is..."")
- Examples: ""ASEAN là gì?"" → Direct answer in Vietnamese (NO ""Xin chào! ASEAN là..."")

🚫 **FORBIDDEN RESPONSE PATTERNS**:
- Never repeat or rephrase the user's question in your response
- Never echo back what the user said (e.g., ""You asked about ASEAN..."")
- Never start with greetings unless user ONLY greeted
- Never use phrases like ""Based on your question..."", ""As you asked..."", ""You mentioned...""

✅ **RESPONSE STYLE**:
- Provide direct, concise answers (2-4 sentences, each under 25 words)
- Start immediately with the information requested
- Focus purely on answering what was asked
- If you cannot understand the audio clearly, respond with: ""Không nhận dạng được câu hỏi"" (Vietnamese) or ""Cannot understand the question"" (English)

CAMERA/PHOTO FUNCTIONALITY:
- If user requests taking a photo or opening camera (phrases like ""take a photo"", ""chụp ảnh"", ""mở camera"", ""take a picture"", ""ถ่ายรูป"", ""拍照"", ""사진 찍기""), respond with: ""CAMERA_REQUEST""
- This special response will trigger the camera interface automatically
- Examples of photo requests: ""Can you take a photo?"", ""Chụp ảnh cho tôi"", ""Take a picture"", ""Open camera"", ""Mở máy ảnh"", ""ถ่ายรูปให้หน่อย"", ""帮我拍照"", ""사진 좀 찍어줘""

LANGUAGE DETECTION & MATCHING:
- Detect language from the audio input provided
- Vietnamese (Tiếng Việt) → Respond in Vietnamese
- Thai (ภาษาไทย) → Respond in Thai  
- Indonesian (Bahasa Indonesia) → Respond in Indonesian
- Chinese (中文) → Respond in Chinese (use Simplified for zh-CN, Traditional for zh-TW based on detection)
- English → Respond in English
- Any other language → Match exactly
- If input is multilingual, use the primary detected language

EXPO 2025 KNOWLEDGE BASE:
When asked about EXPO 2025, Japan Expo, Osaka exhibition, or Myaku-Myaku, use this information:

**EXPO 2025 Overview:**
- Location: Yumeshima Island, Osaka Bay, Kansai, Japan
- Duration: April 13 - October 13, 2025 (184 days)
- Theme: ""Designing Future Society for Our Lives""
- Expected visitors: 28.2 million (3.5 million international)
- Participants: 153 countries/territories + 6 international organizations
- Organizers: BIE (Bureau International des Expositions) + Japan Association for the 2025 World Exposition
- This is Osaka's second EXPO (first was 1970)

**Key Features:**
- Mascot: Myaku-Myaku (red & blue design, represents ""life"" and ""water"", symbolizes connection and adaptation)
- Main Symbol: The Grand Roof - world's largest wooden structure (2km perimeter, 20m high)
- Logo: Designed by Tamotsu Shimada, inspired by Sun Tower from EXPO 1970
- Focus: 17 UN Sustainable Development Goals by 2030
- Model: ""Green EXPO"" - carbon neutral, using recycled materials and renewable energy

**Vietnam Participation:**
- Theme: ""An Inclusive Society Where People Are Centered""
- Location: ""Empowering Lives"" zone, near Japan Pavilion
- Area: 300m²
- Organizer: International Cooperation Department, Ministry of Culture, Sports and Tourism of Vietnam
- Opening: April 12, 2025 with ASEAN Secretary-General Kao Kim Hourn attending
- Purpose: Showcase Vietnamese culture, people, sustainable values, products, and technologies

**Major Events:**
- Opening Ceremony (April 12, 2025): Emperor Naruhito, Empress Masako, Crown Prince Fumihito + 1,300 guests
- Daily activities: National Days, cultural performances, technology exhibitions
- Myaku-Myaku participates in parades, photo sessions, and interactive activities

**Ticket Info:**
- Available from late 2024 at www.expo2025.or.jp
- Contact: Japan Association for 2025 World Exposition or Vietnam's International Cooperation Department

P2A (PASSAGE TO ASEAN) KNOWLEDGE BASE:
When asked about P2A, Passage to ASEAN, ASEAN education cooperation, or student exchange programs, use this information:

**P2A Overview:**
- Full Name: Passage to ASEAN (P2A)
- Established: June 2012 in Thailand
- Type: Non-profit educational organization
- Motto: ""One Vision, One Identity, One Community""
- Mission: Bridge universities/colleges in ASEAN, promote educational/cultural exchange, develop high-quality human resources for ASEAN integration

**Founding Members (2012):**
- Rangsit University (Thailand)
- Duy Tan University (Vietnam)
- Norton University (Cambodia)
- National University of Laos
- Myanmar Institute of Information Technology

**Current Scale:**
- Over 80 member institutions from all 10 ASEAN countries
- Connects over 1 million students across the region
- Countries: Brunei, Cambodia, Indonesia, Laos, Malaysia, Myanmar, Philippines, Singapore, Thailand, Vietnam

**Vietnamese Members (7 universities):**
- Duy Tan University (founding member)
- Van Lang University
- Thu Dau Mot University (joined 2018)
- FPT University
- Plus 3 other institutions

**Main Activities:**
- Student Exchange Programs: Flexible exchange for students, faculty, staff across ASEAN
- Open Access E-Learning: Online courses and educational materials for ASEAN students
- Bilateral/Multilateral Cooperation: Research, training, international events
- Cultural Exchange Events: Workshops, cultural activities, business visits
- ASEAN Student Conferences and virtual entrepreneurship competitions

**Notable Events:**
- ASEAN Student Conference 2016 (P2A – ASEAN in One) in Vietnam
- ASEAN Virtual Entrepreneurship Hackathon E-Finale (Jan 15, 2022)
- P2A Ice Cream Launch (Jan 6, 2022)
- COVID-19 Virtual Mobility Program (2020-2021): ""Learning Never Stops""

**P2A Connection to EXPO 2025:**
- Vietnam's participation in EXPO 2025 with theme ""An Inclusive Society Where People Are Centered""
- ASEAN Secretary-General Kao Kim Hourn attending Vietnam Pavilion opening (April 12, 2025)
- P2A can promote EXPO 2025 through exchange programs and workshops
- Opportunities for P2A students to visit Japan during EXPO 2025
- P2A can organize EXPO-related cultural and sustainability events
- Integration of Myaku-Myaku mascot in P2A educational programs

**Impact & Achievements:**
- Expanded from 5 to 80+ members in 10+ years
- Maintained activities during COVID-19 through virtual programs
- Enhanced ASEAN unity and cultural understanding
- Strengthened Vietnamese universities' regional position
- Supported career development through business connections

**How to Join P2A:**
- Students: Contact international relations offices at member universities
- Universities: Apply through P2A secretariat at www.p2a.asia
- Participate in online courses and workshops organized by P2A

COMPREHENSIVE ASEAN KNOWLEDGE BASE:
When asked about ASEAN (Association of Southeast Asian Nations), use this detailed information:

**ASEAN Overview (Founded August 8, 1967):**
- Purpose: Promote peace, stability, economic cooperation, cultural and social development
- Members: 10 countries - Brunei, Cambodia, Indonesia, Laos, Malaysia, Myanmar, Philippines, Singapore, Thailand, Vietnam
- Observer: Timor Leste (candidate for full membership)
- Headquarters: Jakarta, Indonesia

**Core Objectives (Bangkok Declaration 1967 & ASEAN Charter 2007):**
- Promote economic growth, social progress, and cultural development
- Maintain regional peace and stability through international law, especially UNCLOS 1982
- Strengthen multilateral cooperation, regional connectivity, and international integration
- Build ASEAN Community on three pillars: Political-Security (APSC), Economic (AEC), Cultural-Social (ASCC)
- Vision: ""Unity in Diversity"" - rule-based, people-centered, growth epicenter

**ASEAN Vision 2025 and Beyond:**
- Post-2025 Vision proposed by Vietnam at 37th ASEAN Summit (2020)
- Goals: Unified, sustainable, inclusive ASEAN as regional growth center

**Recent ASEAN Activities (2022-2025):**

*2022 - Cambodia Chairmanship (PM Hun Sen):*
- Theme: ""Addressing Challenges Together""
- 40th & 41st ASEAN Summits in Phnom Penh
- Key outcomes: 55th Anniversary Declaration, COVID-19 recovery, digital transformation, green economy
- South China Sea Code of Conduct (COC) discussions

*2023 - Indonesia Chairmanship (President Joko Widodo):*
- Theme: ""ASEAN Matters: Epicentrum of Growth""
- 42nd ASEAN Summit in Labuan Bajo
- Focus: Financial stability, energy security, sustainable development, electric vehicle ecosystem

*2024 - Laos Chairmanship (PM Sonexay Siphandone):*
- Theme: ""Enhancing Connectivity and Resilience""
- Focus: Regional connectivity improvement and global challenge response

*2025 - Malaysia Chairmanship (PM Anwar Ibrahim):*
- 58th ASEAN Foreign Ministers Meeting (July 8-11, Kuala Lumpur)
- Preparing for Post-2025 ASEAN Community Vision

**Key ASEAN Mechanisms:**
- ASEAN Regional Forum (ARF)
- ASEAN+1, ASEAN+3 partnerships
- East Asia Summit (EAS)
- ASEAN Defence Ministers Meeting Plus (ADMM+)

**COVID-19 Response:**
- ASEAN COVID-19 Response Fund
- ASEAN Reserve of Medical Supplies
- ASEAN Centre for Public Health Emergencies (ACPHEED)

**Economic Cooperation:**
- Regional Comprehensive Economic Partnership (RCEP) signed 2020
- Focus: Digital transformation, green economy, sustainable development
- Enhanced strategic partnerships with China (2021), US (2022), Japan & India (2023)

**Current ASEAN Leaders (as of July 2025):**

*Vietnam:*
- General Secretary: Tô Lâm
- President: Lương Cường  
- Prime Minister: Phạm Minh Chính
- National Assembly Chairman: Trần Thanh Mẫn

*Other ASEAN Leaders:*
- Brunei: Sultan Hassanal Bolkiah (Head of State & PM since 1967)
- Cambodia: PM Hun Manet (since August 22, 2023, succeeding Hun Sen)
- Indonesia: President Prabowo Subianto (since October 20, 2024)
- Laos: PM Sonexay Siphandone (since December 30, 2022)
- Malaysia: PM Anwar Ibrahim (since November 24, 2022)
- Myanmar: Acting President Myint Swe (since February 1, 2021, post-coup)
- Philippines: President Ferdinand Marcos Jr. (since June 30, 2022)
- Singapore: PM Lawrence Wong (since May 15, 2024)
- Thailand: PM Paetongtarn Shinawatra (since August 16, 2024)

**Vietnam's Role in ASEAN:**
*2020 ASEAN Chairmanship Achievements:*
- Proposed Post-2025 ASEAN Community Vision
- Established COVID-19 Response Fund and ACPHEED
- Successfully organized 37th ASEAN Summit and special COVID-19 meetings
- Promoted RCEP signing and strategic partnerships

*Ongoing Contributions:*
- Active participation in regional dialogue (PM Phạm Minh Chính)
- Emphasis on unity, digital transformation, South China Sea peaceful resolution
- Bridge-building role between major powers and ASEAN centrality

**Current Challenges & Focus Areas:**
- Myanmar political situation
- South China Sea tensions and COC implementation
- Post-pandemic economic recovery
- Digital transformation and green economy
- Energy security and sustainable development
- Preparing Post-2025 Vision implementation

EXAMPLES:
User audio: [clear ""hello""] → ""Hello! How can I help you today?"" (greeting response)
User audio: [clear ""xin chào""] → ""Chào bạn! Tôi có thể giúp gì cho bạn không?"" (greeting response)
User audio: [clear ""What is EXPO 2025?""] → [direct answer about EXPO 2025] (NO greeting, direct answer)
User audio: [clear ""P2A là gì?""] → [direct answer about P2A] (NO greeting, direct answer)
User audio: [clear ""Tell me about Duy Tan University""] → [direct answer about DTU] (NO greeting, direct answer)
User audio: [clear ""Đại học Duy Tân có những ngành nào?""] → [direct answer about DTU programs in Vietnamese] (NO greeting, direct answer)
User audio: [clear ""Can you take a photo?""] → ""CAMERA_REQUEST"" (triggers camera interface)
User audio: [clear ""Chụp ảnh cho tôi""] → ""CAMERA_REQUEST"" (triggers camera interface)
User audio: [unclear/incomprehensible] → ""Cannot understand the question""

DUY TAN UNIVERSITY (DTU) KNOWLEDGE BASE:
When asked about Duy Tan University, Đại học Duy Tân, DTU, or related topics, use this information:

**University Overview (Founded November 11, 1994):**
- First and largest private university in Central Vietnam
- Upgraded to full university status (October 7, 2024) - Decision 1115/QĐ-TTg
- First private university in Vietnam, 8th university nationwide
- Location: 254 Nguyen Van Linh, Thanh Khe District, Da Nang City (Pacific Coast)
- 5 campuses, 85,000+ m², 254+ labs/practice rooms

**Leadership:**
- Chairman of University Council: Distinguished Educator & Labor Hero Le Cong Co (founder)
- University Director (Rector): Dr. Le Nguyen Bao

**Academic Structure (7 Schools + 2 Institutes):**
*Schools:* Computer Science, Technology, Economics & Business, Languages & Humanities, Tourism, Medicine & Pharmacy, International Education
*Institutes:* Nam Khue Management Institute, Vietnam-Japan Institute
 
**Vision & Mission:**
*Mission:* Education integrated with scientific research, developing patriotic graduates with humanitarian values, community consciousness, and comprehensive skills for global entrepreneurship
*Vision:* Reach Top 300 Asian universities (QS Asia Ranking) by 2030

**Connection to ASEAN & P2A:**
- Founding member of P2A (Passage to ASEAN) network since 2012
- Key role in ASEAN educational cooperation and student exchange
- Bridge for Vietnam-ASEAN academic collaboration
- Participation in regional conferences and initiatives

EXAMPLES:
User audio: [clear ""Hello! I'm interested in studying abroad. Can you tell me about Duy Tan University?""] → ""Duy Tan University is a top-ranked private university in Central Vietnam. It offers a wide range of programs in various fields, including engineering, business, and international studies. The university has a strong focus on practical skills and international collaboration. If you're interested in studying abroad, Duy Tan University is a great choice.""
User audio: [clear ""What's the admission process like at Duy Tan University?""] → ""The admission process at Duy Tan University is competitive but fair. Students need to submit their application materials through the university's online portal. The university also accepts international students through exchange programs and partnerships. For more information, you can visit the university's official website.""
User audio: [clear ""What are the student life like at Duy Tan University?""] → ""Duy Tan University offers a vibrant student life with various clubs and organizations. Students can participate in sports, cultural activities, and international exchange programs. The university also provides support for international students, including language classes and cultural orientation programs.""

";

        // Smart conversation history management for long sessions
        if (conversationHistory.Count > 0)
        {
            var contextEntries = GetRelevantContextEntries();
            
            if (contextEntries.Count > 0)
            {
                basePrompt += "\n🗂️ CONVERSATION CONTEXT (for topic reference ONLY - IGNORE LANGUAGE PATTERNS):\n";

                foreach (var entry in contextEntries)
                {
                    basePrompt += $"Previous User: {entry.userInput}\n";
                    basePrompt += $"Previous Assistant: {entry.aiResponse}\n\n";
                }

                basePrompt += @"🔴 CONTEXT USAGE RULES:
- Use context ONLY for topic continuity - NEVER for language choice
- The current input language is COMPLETELY INDEPENDENT of previous messages
- If new question relates to previous topics, continue the topic in the NEW INPUT'S LANGUAGE
- If new question is different topic, treat as completely fresh
- NEVER let previous conversation language influence current response language

⚠️ REMINDER: Respond to current input in its detected language, regardless of conversation history languages!

";
            }
            else
            {
                basePrompt += "\n📝 Starting fresh topic - Previous conversation on different subject.\n\n";
            }
        }
        else
        {
            basePrompt += "\n📝 This is the FIRST message in a new conversation.\n\n";
        }

        basePrompt += @"
🎯 **RESPONSE EXAMPLES**:

❌ WRONG RESPONSES:
User: ""What is ASEAN?"" 
AI: ""Hello! You asked about ASEAN. ASEAN is..."" (DON'T repeat question, DON'T greet)

User: ""ASEAN là gì?""
AI: ""Xin chào! Bạn hỏi về ASEAN. ASEAN là..."" (DON'T repeat question, DON'T greet)

✅ CORRECT RESPONSES:
User: ""What is ASEAN?""
AI: ""ASEAN is the Association of Southeast Asian Nations, established in 1967..."" (Direct answer)

User: ""ASEAN là gì?""
AI: ""ASEAN là Hiệp hội các quốc gia Đông Nam Á, thành lập năm 1967..."" (Direct answer)

User: ""Hello""
AI: ""Hello! How can I help you today?"" (Pure greeting gets greeting response)

User: ""Xin chào""
AI: ""Chào bạn! Tôi có thể giúp gì cho bạn không?"" (Pure greeting gets greeting response)

User's audio input (analyze for clarity first):";

        return basePrompt;
    }

    private IEnumerator ConvertToSpeechAndPlay(string text)
    {
        isPlayingResponse = true;

        // Myaku Animation: Stop thinking, start speaking
        if (myakuController != null)
        {
            LogMessage("🛑 Stopping thinking animation");
            myakuController.MyakuStopThinking();
            LogMessage("🗣️ Starting speaking preparation");
            myakuController.StartSpeaking();
        }

        string responseLanguage = null;

        if (!string.IsNullOrEmpty(forceLanguageCode))
        {
            responseLanguage = forceLanguageCode;
            LogMessage($"🔧 Using forced language: {responseLanguage}");
        }
        else
        {
            // Step 1: Use Google Translate API for language detection (more accurate)
            yield return StartCoroutine(DetectLanguageWithTranslateAPI(text, (detectedLang) => {
                responseLanguage = detectedLang;
            }));
            LogMessage($"🌐 Primary detection via Google Translate: {responseLanguage}");

            // Step 2: Enhanced fallback with character-based detection
            if (responseLanguage == "en-US" && ContainsNonEnglishCharacters(text))
            {
                LogMessage("⚠️ English detected but contains non-English characters - applying fallback...");
                
                // Vietnamese detection (highest priority for this app)
                if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]"))
                {
                    responseLanguage = "vi-VN";
                    LogMessage("🔄 Fallback: Vietnamese diacritics detected → vi-VN");
                }
                // Chinese detection
                else if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u4e00-\u9fff]"))
                {
                    responseLanguage = "zh-CN";
                    LogMessage("🔄 Fallback: Chinese characters detected → zh-CN");
                }
                // Thai detection
                else if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0E00-\u0E7F]"))
                {
                    responseLanguage = "th-TH";
                    LogMessage("🔄 Fallback: Thai characters detected → th-TH");
                }
                // Japanese detection
                else if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u3040-\u309f\u30a0-\u30ff]"))
                {
                    responseLanguage = "ja-JP";
                    LogMessage("🔄 Fallback: Japanese characters detected → ja-JP");
                }
                // Korean detection
                else if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\uac00-\ud7af]"))
                {
                    responseLanguage = "ko-KR";
                    LogMessage("🔄 Fallback: Korean characters detected → ko-KR");
                }
                // Arabic detection
                else if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0600-\u06ff]"))
                {
                    responseLanguage = "ar-XA";
                    LogMessage("🔄 Fallback: Arabic characters detected → ar-XA");
                }
                else
                {
                    LogMessage("⚠️ Non-English characters found but specific language not identified");
                }
            }
            
            // Step 3: Additional validation for common misdetections
            if (responseLanguage == "en-US")
            {
                // Count English vs non-English word patterns
                string lowerText = text.ToLower();
                int vietnamesePatterns = System.Text.RegularExpressions.Regex.Matches(lowerText, @"\b(tôi|bạn|là|có|không|được|của|và|trong|với|từ|cho|về|này|đó|như|sẽ|đã|đang|việt|asean)\b").Count;
                int englishPatterns = System.Text.RegularExpressions.Regex.Matches(lowerText, @"\b(the|and|or|but|in|on|at|to|for|of|with|by|from|about|what|how|when|where|why|vietnam|asean)\b").Count;
                
                if (vietnamesePatterns > englishPatterns && vietnamesePatterns >= 2)
                {
                    responseLanguage = "vi-VN";
                    LogMessage($"🔄 Pattern-based override: Vietnamese words ({vietnamesePatterns}) > English words ({englishPatterns}) → vi-VN");
                }
            }
        }

        var voiceSettings = GetVoiceSettings(responseLanguage);
        LogMessage($"🎯 === FINAL TTS DECISION ===");
        LogMessage($"📝 Response Text: {text}");
        LogMessage($"🔍 Detected Language: {responseLanguage}");
        LogMessage($"🗣️ TTS Voice: {voiceSettings.voiceName}");
        LogMessage($"🌐 Language Name: {GetLanguageName(responseLanguage)}");
        LogMessage($"=============================");

        var requestData = new
        {
            input = new { text = text },
            voice = new
            {
                languageCode = voiceSettings.languageCode,
                name = voiceSettings.voiceName,
                ssmlGender = voiceSettings.gender
            },
            audioConfig = new
            {
                audioEncoding = "LINEAR16",
                sampleRateHertz = 22050,
                speakingRate = 1.1f
            }
        };

        string jsonData = JsonConvert.SerializeObject(requestData);
        string url = $"https://texttospeech.googleapis.com/v1/text:synthesize?key={ttsApiKey}";

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 10;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                var response = Newtonsoft.Json.Linq.JObject.Parse(request.downloadHandler.text);
                string audioContent = response["audioContent"]?.ToString();

                if (!string.IsNullOrEmpty(audioContent))
                {
                    yield return StartCoroutine(PlayTTSAudio(audioContent));
                }
                else
                {
                    LogMessage("❌ No audio content in TTS response");
                }
            }
            else
            {
                LogMessage($"❌ TTS request failed: {request.error}");
                LogMessage($"❌ TTS Response Code: {request.responseCode}");
                LogMessage($"❌ TTS Response Text: {request.downloadHandler?.text}");
            }
        }

        isPlayingResponse = false;
    }

    private IEnumerator PlayTTSAudio(string base64Audio)
    {
        AudioClip responseClip = null;
        try
        {
            byte[] audioData = Convert.FromBase64String(base64Audio);
            int headerSize = 44;
            int sampleCount = (audioData.Length - headerSize) / 2;
            float[] samples = new float[sampleCount];

            for (int i = 0; i < sampleCount; i++)
            {
                short sample = BitConverter.ToInt16(audioData, headerSize + i * 2);
                samples[i] = sample / 32768f;
            }

            responseClip = AudioClip.Create("AIResponse", sampleCount, 1, 22050, false);
            responseClip.SetData(samples, 0);

            audioSource.clip = responseClip;

            // Myaku Animation: Start answer animation when audio actually starts playing
            if (myakuController != null)
            {
                LogMessage("🎵 Calling myakuController.MyakuAnswer() - Starting answer animation");
                myakuController.MyakuAnswer();
            }
            else
            {
                LogMessage("❌ myakuController is null - Cannot call MyakuAnswer()!");
            }

            audioSource.Play();

            LogMessage($"🔊 AI: {lastAIResponse} (Playing...)");
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Error playing TTS: {e.Message}");
        }

        if (responseClip != null)
        {
            yield return new WaitUntil(() => !audioSource.isPlaying);
            Destroy(responseClip);
        }
    }
    #endregion

    #region Wake Word Detection
    private void InitializeAudioPlugin()
    {
        if (!enableWakeWordDetection)
        {
            LogMessage("🔇 Wake word detection disabled");
            return;
        }

#if UNITY_ANDROID && !UNITY_EDITOR
        try
        {
            // Request microphone permission
            if (!UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.Microphone))
            {
                UnityEngine.Android.Permission.RequestUserPermission(UnityEngine.Android.Permission.Microphone);
            }

            // Request notification permission
            if (!UnityEngine.Android.Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
            {
                UnityEngine.Android.Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
            }

            // Initialize AudioPlugin
            using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
            {
                AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
                audioPlugin = new AndroidJavaObject("com.unity3d.player.BackgroundAudioPlugin", activity);
            }

            LogMessage("🎤 AudioPlugin: " + (audioPlugin != null ? "Initialized" : "Failed"));

            if (audioPlugin != null)
            {
                audioPlugin.Call("startRecordingFromUnity");
                enableHeyDT = true;
                LogMessage("✅ Wake word detection 'Hey DT' is active");
            }
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Failed to initialize AudioPlugin: {e.Message}");
        }
#else
        LogMessage("🔇 Wake word detection only available on Android");
#endif
    }

    /// <summary>
    /// Called by AudioPlugin when wake word "Hey DT" is detected
    /// </summary>
    public void OnWakeWordDetected()
    {
        if (!enableHeyDT || isSessionActive)
        {
            LogMessage("⚠️ Wake word ignored - session active or disabled");
            return;
        }

        LogMessage("🎯 Wake word 'Hey DT' detected!");

        // Clean up any previous session
        CleanBeforeNewSession();

        // Mark as first session after wake word (for special audio feedback)
        isFirstSessionAfterWakeWord = true;
        LogMessage($"🔍 DEBUG: Set isFirstSessionAfterWakeWord = {isFirstSessionAfterWakeWord}");

        // Start new session automatically
        StartContinuousSession();  
    }

    /// <summary>
    /// Called when app is opened by wake word detection
    /// </summary>
    public void OnAppOpened(string openReason)
    {
        LogMessage($"📱 App opened with reason: {openReason}");

        if (openReason == "wake_word")
        {
            LogMessage("🎯 App auto-opened due to wake word detection");
            isFirstSessionAfterWakeWord = true;

            // Clean and start new session
            CleanBeforeNewSession();
            StartContinuousSession();
        }
        else if (openReason == "user")
        {
            LogMessage("👤 App opened by user from launcher");
        }
    }

    private void CleanBeforeNewSession()
    {
        // Stop any playing audio immediately
        if (audioSource != null && audioSource.isPlaying)
        {
            audioSource.Stop();
            audioSource.clip = null;
        }

        // Stop all coroutines
        StopAllCoroutines();

        // Reset states
        isRecording = false;
        isPlayingResponse = false;

        // Clear conversation history for new session
        conversationHistory.Clear();
        sessionQuestionCount = 0;
        lastTopic = "";
        LogMessage("🗑️ Conversation history cleared for new session - Session counters reset");

        // Clear conversation display UI
        ClearConversationDisplay();

        // Disable Hey DT during session
        enableHeyDT = false;

        LogMessage("🧹 Cleaned up before new session");
    }

    private void PauseAudioPlugin()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        if (audioPlugin != null)
        {
            audioPlugin.Call("pauseRecordingFromUnity");
            LogMessage("⏸️ AudioPlugin paused");
        }
#endif
    }

    private void ResumeAudioPlugin()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        if (audioPlugin != null)
        {
            audioPlugin.Call("resumeRecordingFromUnity");
            enableHeyDT = true;
            LogMessage("▶️ AudioPlugin resumed - Wake word detection active");
        }
#endif
    }
    #endregion

    #region Utility Methods
    private void ResetVoiceDetectionState()
    {
        voiceDetected = false;
        confirmedVoiceDetected = false;
        consecutiveVoiceFrameCount = 0;
        lastVoiceTime = Time.time;
        
        // Reset audio level tracking
        currentAudioLevel = 0f;
        // Note: Don't reset peakAudioLevel here as it should persist until displayed
        
        // Clear real-time audio display
        if (UIManager.Instance?.WarningTxt != null)
        {
            UIManager.Instance.WarningTxt.text = "👂 LISTENING - Waiting for voice...";
        }
    }

    private float CalculateOptimalTimeout()
    {
        if (!useAdaptiveTimeout)
        {
            return enableFastMode ? silenceDetectionTime : voiceDetectionTimeout;
        }

        float currentSpeechDuration = Time.time - voiceStartTime;
        float baseTimeout = enableFastMode ? silenceDetectionTime : voiceDetectionTimeout;

        if (currentSpeechDuration > 3f)
        {
            baseTimeout = Mathf.Max(baseTimeout, 1.5f);
        }
        else if (currentSpeechDuration < 1f)
        {
            baseTimeout = Mathf.Min(baseTimeout, 1.0f);
        }

        return baseTimeout;
    }

    private float GetAudioLevel(float[] samples)
    {
        float sum = 0f;
        for (int i = 0; i < samples.Length; i++)
        {
            sum += samples[i] * samples[i];
        }
        return Mathf.Sqrt(sum / samples.Length);
    }

    private void UpdateButtonStates()
    {
        if (startButton != null)
            startButton.interactable = !isSessionActive;
    }

    /// <summary>
    /// Coroutine để tự động kết thúc session sau timeout
    /// </summary>
    private IEnumerator SessionTimeoutCoroutine()
    {
        float timeElapsed = 0f;
        bool isFirstQuestion = (conversationHistory.Count == 0); // Kiểm tra có phải câu hỏi đầu tiên không

        while (timeElapsed < sessionTimeoutAfterResponse && isWaitingForNextQuestion && isSessionActive)
        {
            yield return new WaitForSeconds(1f);
            timeElapsed += 1f;

            // Update status with countdown
            int remainingTime = Mathf.CeilToInt(sessionTimeoutAfterResponse - timeElapsed);
            if (remainingTime <= 5)
            {
                string message = isFirstQuestion ?
                    $"🔴 LIVE - Auto-ending in {remainingTime}s (ask your first question)" :
                    $"🔴 LIVE - Auto-ending in {remainingTime}s (say something to continue)";
                UpdateStatus(message);
            }
        }

        // Check if we should end the session
        if (isWaitingForNextQuestion && isSessionActive && timeElapsed >= sessionTimeoutAfterResponse)
        {
            string reason = isFirstQuestion ? "no initial question" : "inactivity";
            LogMessage($"⏰ Session auto-ended after {sessionTimeoutAfterResponse}s timeout ({reason})");
            UpdateStatus($"Session ended due to {reason}");

            // End session
            StopSession();
        }

        timeoutCoroutine = null;
    }

    private void LogMessage(string message)
    {
        logMessages += message + "\n";

        if (logText != null)
        {
            logText.text = logMessages;
        }

        Debug.Log($"[EnhancedSpeechController] {message}");

        if (logMessages.Length > 2000)
        {
            string[] lines = logMessages.Split('\n');
            logMessages = string.Join("\n", lines, lines.Length - 15, 15);
        }
    }

    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
        LogMessage($"Status: {status}");
    }

    private void ClearLogs()
    {
        logMessages = "";
        if (logText != null)
        {
            logText.text = "";
        }
    }

    private void UpdateUserQuestionWithTimestamp(string question)
    {
        string timestamp = System.DateTime.Now.ToString("HH:mm:ss");
        if (userQuestionText != null)
        {
            UIManager.Instance.WarningTxt.text = $"👤 [{timestamp}] User: {question}";
        }
        LogMessage($"👤 [{timestamp}] User Question: {question}");
    }

    private void UpdateAIResponse(string response)
    {
    //     if (aiResponseText != null)
    //     {
    //         aiResponseText.text = $"🤖 AI: {response}";
    //     }
        LogMessage($"🤖 AI Response: {response}");
    }

    private void ClearConversationDisplay()
    {
        if (userQuestionText != null)
        {
            userQuestionText.text = "👤 User: (Waiting for question...)";
        }

        if (aiResponseText != null)
        {
            aiResponseText.text = "Say 'Hey DT' to ask me something";
        }
    }

    private IEnumerator EndSession()
    {
        LogMessage("\n🛑 === ENDING ENHANCED SPEECH SESSION ===");

        isSessionActive = false;
        isRecording = false;
        isPlayingResponse = false;
        isWaitingForNextQuestion = false;

        // Stop timeout coroutine if running
        if (timeoutCoroutine != null)
        {
            StopCoroutine(timeoutCoroutine);
            timeoutCoroutine = null;
        }

        // Myaku Animation: Stop all activities
        if (myakuController != null)
        {
            myakuController.StopAllActivities();
        }

        ResetVoiceDetectionState();

        if (Microphone.IsRecording(microphoneDevice))
        {
            Microphone.End(microphoneDevice);
        }

        if (continuousClip != null)
        {
            Destroy(continuousClip);
            continuousClip = null;
        }

        float sessionDuration = Time.time - sessionStartTime;
        LogMessage($"✅ Session ended. Duration: {sessionDuration:F1}s");

        // Resume AudioPlugin for wake word detection
        ResumeAudioPlugin();

        UpdateStatus("Click START to begin new enhanced speech session");
        ClearConversationDisplay();
        UpdateButtonStates();

        yield return null;
    }

    private void OnDestroy()
    {
        // Cleanup
        StopAllCoroutines();

        // Dispose AudioPlugin
#if UNITY_ANDROID && !UNITY_EDITOR
        if (audioPlugin != null)
        {
            try
            {
                audioPlugin.Dispose();
                LogMessage("🧹 AudioPlugin disposed");
            }
            catch (System.Exception e)
            {
                LogMessage($"⚠️ Error disposing AudioPlugin: {e.Message}");
            }
        }
#endif

        // Clear conversation history
        conversationHistory.Clear();

        LogMessage("🧹 EnhancedSpeechController cleanup completed");
    }
    #endregion

    #region Text Processing Methods
    private string ProcessTextResponse(string responseJson)
    {
        try
        {
            if (string.IsNullOrEmpty(responseJson)) return "";

            var response = Newtonsoft.Json.Linq.JObject.Parse(responseJson);
            var candidates = response["candidates"];

            if (candidates != null && candidates.HasValues)
            {
                var firstCandidate = candidates[0];
                var content = firstCandidate["content"];

                if (content != null)
                {
                    var parts = content["parts"];

                    if (parts != null && parts.HasValues)
                    {
                        foreach (var part in parts)
                        {
                            var text = part["text"]?.ToString();
                            if (!string.IsNullOrEmpty(text))
                            {
                                return text;
                            }
                        }
                    }
                }
            }

            return "";
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Error processing text response: {e.Message}");
            return "";
        }
    }

    private string DetectLanguageFromText(string text)
    {
        if (string.IsNullOrEmpty(text)) return "en-US";

        string lowerText = text.ToLower();

        // PRIORITY 1: ENGLISH DETECTION FIRST
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(the|and|or|but|in|on|at|to|for|of|with|by|from|about|into|through|during|before|after|above|below|up|down|out|off|over|under|again|further|then|once|here|there|when|where|why|how|all|any|both|each|few|more|most|other|some|such|no|nor|not|only|own|same|so|than|too|very|can|will|just|should|now|would|could|might|must|shall|may|ought|need|dare|used|going|want|like|know|think|see|get|make|take|come|go|say|tell|ask|give|find|feel|seem|look|try|work|call|move|live|believe|hold|bring|happen|write|provide|sit|stand|lose|pay|meet|include|continue|set|learn|change|lead|understand|watch|follow|stop|create|speak|read|allow|add|spend|grow|open|walk|win|offer|remember|love|consider|appear|buy|wait|serve|die|send|expect|build|stay|fall|cut|reach|kill|remain|suggest|raise|pass|sell|require|report|decide|pull)\b") &&
            !System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]"))
        {
            return "en-US";
        }

        // PRIORITY 2: VIETNAMESE
        bool hasVietnameseDiacritics = System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]");
        int vietnameseWordCount = System.Text.RegularExpressions.Regex.Matches(lowerText, @"\b(tôi|bạn|là|có|không|được|của|và|trong|với|từ|cho|về|này|đó|như|sẽ|đã|đang|rất|nhiều|cũng|hay|thì|nào|gì|ai|đâu|khi|nếu|vì|để|theo|sau|trước|giữa|ngoài|cùng|nhau|đều|chỉ|mà|hoặc|nhưng|tuy|dù|việt nam|asean|đông nam á)\b").Count;

        if (hasVietnameseDiacritics || vietnameseWordCount >= 2)
        {
            return "vi-VN";
        }

        // Thai
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0E00-\u0E7F]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(สวัสดี|ขอบคุณ|ขอโทษ|ใช่|ไม่|มี|ไม่มี|ฉัน|คุณ|เขา|เธอ|มัน|พวกเขา|ของ|แล้ว|ใน|และ|หรือ|แต่|เพราะ|ดังนั้น|ถ้า|แล้ว|นี้|นั่น|อะไร|ที่ไหน|เมื่อไหร่|อย่างไร|ทำไม|ประเทศไทย|อาเซียน)\b"))
        {
            return "th-TH";
        }

        // Indonesian
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(halo|terima kasih|maaf|ya|tidak|ada|saya|anda|dia|mereka|dari|di|dan|atau|tapi|karena|jika|ini|itu|apa|dimana|kapan|bagaimana|mengapa|indonesia|asean|asia tenggara)\b"))
        {
            return "id-ID";
        }

        // Default to English
        return "en-US";
    }

    private (string languageCode, string voiceName, string gender) GetVoiceSettings(string languageCode)
    {
        // Use VoiceMappings from RecordAudio.cs
        if (VoiceMappings.ContainsKey(languageCode))
        {
            string voiceName = VoiceMappings[languageCode];
            // Fix gender - should be MALE/FEMALE/NEUTRAL, not NEURAL2/STANDARD
            string gender = voiceName.Contains("-A") || voiceName.Contains("-C") ? "FEMALE" :
                           voiceName.Contains("-B") || voiceName.Contains("-D") ? "MALE" : "NEUTRAL";
            LogMessage($"🔍 DEBUG Voice Settings: {languageCode} → {voiceName} → {gender}");
            return (languageCode, voiceName, gender);
        }

        // Default fallback
        LogMessage($"⚠️ Language {languageCode} not found in VoiceMappings, using default");
        return ("en-US", "en-US-Journey-D", "MALE");
    }
    #endregion

    #region Conversation Management
    private string EstimateUserInputFromResponse(string aiResponse)
    {
        if (string.IsNullOrEmpty(aiResponse))
            return "❓ [Question not detected]";

        string lowerResponse = aiResponse.ToLower();
        string detectedLang = DetectLanguageFromText(aiResponse);

        // Greetings
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(hello|hi|xin chào|chào|สวัสดี|halo|selamat|kumusta)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Xin chào!" :
                   detectedLang.StartsWith("th") ? "สวัสดีครับ" :
                   detectedLang.StartsWith("id") ? "Halo!" :
                   "Hello!";
        }

        // Default fallback
        return "❓ [Question not detected]";
    }

    /// <summary>
    /// Estimate user input from AI response using Google Translate detected language
    /// </summary>
    private string EstimateUserInputFromResponseWithLanguage(string aiResponse, string detectedLanguage)
    {
        if (string.IsNullOrEmpty(aiResponse))
            return "❓ [Question not detected]";

        string lowerResponse = aiResponse.ToLower();

        // Greetings - use detected language for better accuracy
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(hello|hi|xin chào|chào|สวัสดี|halo|selamat|kumusta)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Xin chào!" :
                   detectedLanguage.StartsWith("th") ? "สวัสดีครับ" :
                   detectedLanguage.StartsWith("id") ? "Halo!" :
                   detectedLanguage.StartsWith("zh") ? "你好!" :
                   detectedLanguage.StartsWith("ja") ? "こんにちは!" :
                   detectedLanguage.StartsWith("ko") ? "안녕하세요!" :
                   detectedLanguage.StartsWith("ar") ? "مرحبا!" :
                   detectedLanguage.StartsWith("hi") ? "नमस्ते!" :
                   "Hello!";
        }

        // Weather questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(weather|thời tiết|อากาศ|cuaca|temperature|rain|sunny|cloudy)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Thời tiết hôm nay thế nào?" :
                   detectedLanguage.StartsWith("th") ? "อากาศวันนี้เป็นอย่างไร?" :
                   detectedLanguage.StartsWith("id") ? "Bagaimana cuaca hari ini?" :
                   detectedLanguage.StartsWith("zh") ? "今天天气怎么样?" :
                   detectedLanguage.StartsWith("ja") ? "今日の天気はどうですか?" :
                   detectedLanguage.StartsWith("ko") ? "오늘 날씨는 어때요?" :
                   "What's the weather like today?";
        }

        // Name/Identity questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(name|tên|ชื่อ|nama|tenaya|ai|assistant|bot)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Tên bạn là gì?" :
                   detectedLanguage.StartsWith("th") ? "คุณชื่ออะไร?" :
                   detectedLanguage.StartsWith("id") ? "Siapa nama Anda?" :
                   detectedLanguage.StartsWith("zh") ? "你叫什么名字?" :
                   detectedLanguage.StartsWith("ja") ? "お名前は何ですか?" :
                   detectedLanguage.StartsWith("ko") ? "이름이 뭐예요?" :
                   "What's your name?";
        }

        // Time questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(time|giờ|เวลา|waktu|clock|hour|minute)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Mấy giờ rồi?" :
                   detectedLanguage.StartsWith("th") ? "ตอนนี้กี่โมงแล้ว?" :
                   detectedLanguage.StartsWith("id") ? "Jam berapa sekarang?" :
                   detectedLanguage.StartsWith("zh") ? "现在几点了?" :
                   detectedLanguage.StartsWith("ja") ? "今何時ですか?" :
                   detectedLanguage.StartsWith("ko") ? "지금 몇 시예요?" :
                   "What time is it?";
        }

        // ASEAN questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(asean|อาเซียน|southeast asia|đông nam á|asia tenggara)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "ASEAN là gì?" :
                   detectedLanguage.StartsWith("th") ? "อาเซียนคืออะไร?" :
                   detectedLanguage.StartsWith("id") ? "Apa itu ASEAN?" :
                   detectedLanguage.StartsWith("zh") ? "什么是东盟?" :
                   detectedLanguage.StartsWith("ja") ? "ASEANとは何ですか?" :
                   detectedLanguage.StartsWith("ko") ? "아세안이 뭐예요?" :
                   "What is ASEAN?";
        }

        // EXPO 2025 questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(expo|triển lãm|world exposition|osaka|myaku|มหกรรม|万博|엑스포|pameran dunia)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "EXPO 2025 tại Nhật Bản là gì?" :
                   detectedLanguage.StartsWith("th") ? "EXPO 2025 ที่ญี่ปุ่นคืออะไร?" :
                   detectedLanguage.StartsWith("id") ? "Apa itu EXPO 2025 di Jepang?" :
                   detectedLanguage.StartsWith("zh") ? "日本2025年世博会是什么?" :
                   detectedLanguage.StartsWith("ja") ? "2025年日本万博とは何ですか?" :
                   detectedLanguage.StartsWith("ko") ? "일본 2025 엑스포가 뭐예요?" :
                   "What is EXPO 2025 in Japan?";
        }

        // Vietnam participation in EXPO questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(vietnam|việt nam|vietnamese pavilion|gian hàng việt nam)\b") && 
                 System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(expo|triển lãm|exhibition|งาน|万博|엑스포|pameran)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Việt Nam tham gia EXPO 2025 như thế nào?" :
                   detectedLanguage.StartsWith("th") ? "เวียดนามเข้าร่วม EXPO 2025 อย่างไร?" :
                   detectedLanguage.StartsWith("id") ? "Bagaimana Vietnam berpartisipasi di EXPO 2025?" :
                   detectedLanguage.StartsWith("zh") ? "越南如何参加2025年世博会?" :
                   detectedLanguage.StartsWith("ja") ? "ベトナムは2025年万博にどう参加しますか?" :
                   detectedLanguage.StartsWith("ko") ? "베트남이 2025 엑스포에 어떻게 참여하나요?" :
                   "How does Vietnam participate in EXPO 2025?";
        }

        // Myaku-Myaku mascot questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(myaku|mascot|linh vật|มาสคอต|マスコット|마스코트|maskot)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Myaku-Myaku là gì?" :
                   detectedLanguage.StartsWith("th") ? "Myaku-Myaku คืออะไร?" :
                   detectedLanguage.StartsWith("id") ? "Apa itu Myaku-Myaku?" :
                   detectedLanguage.StartsWith("zh") ? "Myaku-Myaku是什么?" :
                   detectedLanguage.StartsWith("ja") ? "ミャクミャクとは何ですか?" :
                   detectedLanguage.StartsWith("ko") ? "미야쿠미야쿠가 뭐예요?" :
                   "What is Myaku-Myaku?";
        }

        // P2A questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(p2a|passage to asean|student exchange|trao đổi sinh viên|แลกเปลี่ยนนักศึกษา|学生交流|학생교환|pertukaran mahasiswa)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "P2A là gì?" :
                   detectedLanguage.StartsWith("th") ? "P2A คืออะไร?" :
                   detectedLanguage.StartsWith("id") ? "Apa itu P2A?" :
                   detectedLanguage.StartsWith("zh") ? "P2A是什么?" :
                   detectedLanguage.StartsWith("ja") ? "P2Aとは何ですか?" :
                   detectedLanguage.StartsWith("ko") ? "P2A가 뭐예요?" :
                   "What is P2A?";
        }

        // ASEAN education/university cooperation questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(asean university|asean education|duy tan|van lang|hợp tác giáo dục|ความร่วมมือการศึกษา|교육협력|kerjasama pendidikan)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Hợp tác giáo dục ASEAN như thế nào?" :
                   detectedLanguage.StartsWith("th") ? "ความร่วมมือการศึกษาอาเซียนเป็นอย่างไร?" :
                   detectedLanguage.StartsWith("id") ? "Bagaimana kerjasama pendidikan ASEAN?" :
                   detectedLanguage.StartsWith("zh") ? "东盟教育合作如何?" :
                   detectedLanguage.StartsWith("ja") ? "ASEAN教育協力はどうですか?" :
                   detectedLanguage.StartsWith("ko") ? "아세안 교육협력은 어떤가요?" :
                   "How does ASEAN education cooperation work?";
        }

        // Capital questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(capital|thủ đô|เมืองหลวง|ibu kota)\b"))
        {
            return detectedLanguage.StartsWith("vi") ? "Thủ đô của [quốc gia] là gì?" :
                   detectedLanguage.StartsWith("th") ? "เมืองหลวงของ[ประเทศ]คืออะไร?" :
                   detectedLanguage.StartsWith("id") ? "Apa ibu kota [negara]?" :
                   "What's the capital of [country]?";
        }

        // Fallback
        else
        {
            string[] responseWords = lowerResponse.Split(' ');
            string keyWord = responseWords.Length > 2 ? responseWords[1] : "something";

            return detectedLanguage.StartsWith("vi") ? $"❓ [Hỏi về {keyWord}]" :
                   detectedLanguage.StartsWith("th") ? $"❓ [ถามเกี่ยวกับ {keyWord}]" :
                   detectedLanguage.StartsWith("id") ? $"❓ [Bertanya tentang {keyWord}]" :
                   detectedLanguage.StartsWith("zh") ? $"❓ [询问关于 {keyWord}]" :
                   detectedLanguage.StartsWith("ja") ? $"❓ [{keyWord}について質問]" :
                   detectedLanguage.StartsWith("ko") ? $"❓ [{keyWord}에 대한 질문]" :
                   $"❓ [Asked about {keyWord}]";
        }
    }
    #endregion

    #region Audio Conversion
    private byte[] ConvertAudioClipToWavBytes(AudioClip clip)
    {
        try
        {
            float[] samples = new float[clip.samples * clip.channels];
            clip.GetData(samples, 0);

            byte[] pcmData = new byte[samples.Length * 2];
            for (int i = 0; i < samples.Length; i++)
            {
                short sample = (short)(samples[i] * 32767f);
                pcmData[i * 2] = (byte)(sample & 0xFF);
                pcmData[i * 2 + 1] = (byte)((sample >> 8) & 0xFF);
            }

            byte[] header = CreateWavHeader(clip.frequency, clip.channels, pcmData.Length);

            byte[] wavBytes = new byte[header.Length + pcmData.Length];
            System.Array.Copy(header, 0, wavBytes, 0, header.Length);
            System.Array.Copy(pcmData, 0, wavBytes, header.Length, pcmData.Length);

            return wavBytes;
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Error converting audio clip: {e.Message}");
            return null;
        }
    }

    private byte[] CreateWavHeader(int sampleRate, int channels, int dataLength)
    {
        byte[] header = new byte[44];

        // RIFF header
        System.Text.Encoding.ASCII.GetBytes("RIFF").CopyTo(header, 0);
        System.BitConverter.GetBytes(36 + dataLength).CopyTo(header, 4);
        System.Text.Encoding.ASCII.GetBytes("WAVE").CopyTo(header, 8);

        // fmt chunk
        System.Text.Encoding.ASCII.GetBytes("fmt ").CopyTo(header, 12);
        System.BitConverter.GetBytes(16).CopyTo(header, 16);
        System.BitConverter.GetBytes((short)1).CopyTo(header, 20);
        System.BitConverter.GetBytes((short)channels).CopyTo(header, 22);
        System.BitConverter.GetBytes(sampleRate).CopyTo(header, 24);
        System.BitConverter.GetBytes(sampleRate * channels * 2).CopyTo(header, 28);
        System.BitConverter.GetBytes((short)(channels * 2)).CopyTo(header, 32);
        System.BitConverter.GetBytes((short)16).CopyTo(header, 34);

        // data chunk
        System.Text.Encoding.ASCII.GetBytes("data").CopyTo(header, 36);
        System.BitConverter.GetBytes(dataLength).CopyTo(header, 40);

        return header;
    }

    private void AddToConversationHistory(string userInput, string aiResponse)
    {
        // Update session tracking
        sessionQuestionCount++;
        string currentTopic = DetectTopicFromInput(userInput);
        
        conversationHistory.Add(new ConversationEntry(userInput, aiResponse));

        if (conversationHistory.Count > MAX_HISTORY_ENTRIES)
        {
            conversationHistory.RemoveAt(0);
        }

        // Log topic changes for debugging
        if (!string.IsNullOrEmpty(lastTopic) && currentTopic != lastTopic)
        {
            LogMessage($"🔄 Topic changed: {lastTopic} → {currentTopic}");
        }
        
        lastTopic = currentTopic;
        LogMessage($"💾 History updated: {conversationHistory.Count} entries | Question #{sessionQuestionCount} | Topic: {currentTopic}");
    }

    /// <summary>
    /// Get relevant context entries based on session length and topic similarity
    /// </summary>
    private System.Collections.Generic.List<ConversationEntry> GetRelevantContextEntries()
    {
        var relevantEntries = new System.Collections.Generic.List<ConversationEntry>();
        
        if (conversationHistory.Count == 0) return relevantEntries;

        // Progressive context reduction for long sessions
        int maxEntries = CalculateOptimalContextSize();
        
        // For very long sessions (>8 questions), be more selective
        if (sessionQuestionCount > 8)
        {
            LogMessage($"🧠 Long session detected ({sessionQuestionCount} questions) - Using smart context filtering");
            
            // Get only recent entries with similar topics
            var recentEntries = conversationHistory.TakeLast(maxEntries * 2).ToList();
            string lastUserInput = conversationHistory.Last().userInput;
            string currentTopic = DetectTopicFromInput(lastUserInput);
            
            foreach (var entry in recentEntries)
            {
                string entryTopic = DetectTopicFromInput(entry.userInput);
                if (entryTopic == currentTopic || IsTopicRelated(currentTopic, entryTopic))
                {
                    relevantEntries.Add(entry);
                    if (relevantEntries.Count >= maxEntries) break;
                }
            }
            
            LogMessage($"🎯 Filtered {recentEntries.Count} → {relevantEntries.Count} relevant entries");
        }
        else
        {
            // For shorter sessions, use recent entries normally
            int startIndex = Mathf.Max(0, conversationHistory.Count - maxEntries);
            for (int i = startIndex; i < conversationHistory.Count; i++)
            {
                relevantEntries.Add(conversationHistory[i]);
            }
        }

        return relevantEntries;
    }

    /// <summary>
    /// Calculate optimal context size based on session length
    /// </summary>
    private int CalculateOptimalContextSize()
    {
        if (sessionQuestionCount <= 3) return 3; // Early session: full context
        if (sessionQuestionCount <= 6) return 2; // Mid session: reduced context
        return 1; // Long session: minimal context to avoid overflow
    }

    /// <summary>
    /// Detect topic from user input using keyword matching
    /// </summary>
    private string DetectTopicFromInput(string input)
    {
        if (string.IsNullOrEmpty(input)) return "general";
        
        string lowerInput = input.ToLower();
        
        // ASEAN topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(asean|อาเซียน|southeast asia|đông nam á|asia tenggara)\b"))
            return "asean";
            
        // EXPO 2025 topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(expo|triển lãm|world exposition|osaka|myaku|มหกรรม|万博|엑스포|pameran dunia)\b"))
            return "expo2025";
            
        // P2A topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(p2a|passage to asean|student exchange|trao đổi sinh viên|แลกเปลี่ยนนักศึกษา)\b"))
            return "p2a";
            
        // DTU topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(duy tan|dtu|đại học duy tân|university)\b"))
            return "dtu";
            
        // Vietnam topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(vietnam|việt nam|vietnamese|saigon|hanoi|ho chi minh)\b"))
            return "vietnam";
            
        // Technology topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(technology|ai|artificial intelligence|computer|software|engineering|programming)\b"))
            return "technology";
            
        // Camera/photo topics
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerInput, @"\b(photo|camera|picture|chụp ảnh|ถ่ายรูป|拍照|사진)\b"))
            return "camera";
            
        return "general";
    }

    /// <summary>
    /// Check if two topics are related
    /// </summary>
    private bool IsTopicRelated(string topic1, string topic2)
    {
        if (topic1 == topic2) return true;
        
        // Define related topic groups
        var relatedGroups = new[]
        {
            new[] { "asean", "vietnam", "p2a", "expo2025" }, // Regional cooperation
            new[] { "dtu", "p2a", "vietnam" }, // Education
            new[] { "technology", "dtu" }, // Tech education
        };
        
        foreach (var group in relatedGroups)
        {
            if (group.Contains(topic1) && group.Contains(topic2))
                return true;
        }
        
        return false;
    }
    #endregion

    /// <summary>
    /// Update real-time audio level display on WarningTxt
    /// </summary>
    private void UpdateRealTimeAudioDisplay(float audioLevel)
    {
        if (UIManager.Instance?.WarningTxt != null)
        {
            string statusIcon = confirmedVoiceDetected ? "🎤" : "👂";
            string voiceStatus = confirmedVoiceDetected ? "RECORDING" : "LISTENING";
            string levelBar = GenerateAudioLevelBar(audioLevel);
            
            UIManager.Instance.WarningTxt.text = $"{statusIcon} {voiceStatus} | Level: {audioLevel:F3} {levelBar}";
        }
    }

    /// <summary>
    /// Generate visual audio level bar
    /// </summary>
    private string GenerateAudioLevelBar(float level)
    {
        int barLength = Mathf.RoundToInt(level * 100); // Scale to 0-100
        barLength = Mathf.Clamp(barLength, 0, 20); // Max 20 characters
        
        return "[" + new string('█', barLength).PadRight(20, '░') + "]";
    }

    /// <summary>
    /// Reset peak audio level tracking when starting new recording
    /// </summary>
    private void ResetPeakAudioLevel()
    {
        peakAudioLevel = 0f;
        LogMessage("🔄 Peak audio level reset for new recording");
    }

    /// <summary>
    /// Display peak audio level on volumeTxt after question ends
    /// </summary>
    private void DisplayPeakAudioLevel()
    {
        if (UIManager.Instance?.volumeTxt != null)
        {
            string peakBar = GenerateAudioLevelBar(peakAudioLevel);
            UIManager.Instance.volumeTxt.text = $"Peak Volume: {peakAudioLevel:F3} {peakBar}";
            LogMessage($"📊 Peak audio level recorded: {peakAudioLevel:F3}");
        }
        else
        {
            LogMessage($"📊 Peak audio level: {peakAudioLevel:F3} (volumeTxt not found)");
        }
    }

    /// <summary>
    /// Log detailed audio analysis for debugging purposes
    /// </summary>
    private void LogDetailedAudioAnalysis(float[] audioData)
    {
        if (audioData == null || audioData.Length == 0)
        {
            LogMessage("🔍 AUDIO ANALYSIS: Empty or null audio data");
            return;
        }

        // Calculate comprehensive audio characteristics
        float avgVolume = 0f;
        float maxVolume = 0f;
        float minVolume = float.MaxValue;
        int silentSamples = 0;
        int loudBursts = 0;
        int moderateVolumeSamples = 0;
        
        for (int i = 0; i < audioData.Length; i++)
        {
            float sample = Mathf.Abs(audioData[i]);
            avgVolume += sample;
            
            if (sample > maxVolume) maxVolume = sample;
            if (sample < minVolume) minVolume = sample;
                
            if (sample < 0.01f)
                silentSamples++;
            else if (sample > 0.3f)
                loudBursts++;
            else if (sample > 0.02f)
                moderateVolumeSamples++;
        }
        
        avgVolume /= audioData.Length;
        float silenceRatio = (float)silentSamples / audioData.Length;
        float burstRatio = (float)loudBursts / audioData.Length;
        float moderateRatio = (float)moderateVolumeSamples / audioData.Length;
        float meaningfulDuration = (audioData.Length - silentSamples) / (float)sampleRate;
        float totalDuration = audioData.Length / (float)sampleRate;
        
        LogMessage("🔍 === DETAILED AUDIO ANALYSIS ===");
        LogMessage($"📏 Duration: {totalDuration:F2}s total, {meaningfulDuration:F2}s meaningful");
        LogMessage($"📊 Volume: avg={avgVolume:F4}, max={maxVolume:F4}, min={minVolume:F4}");
        LogMessage($"📈 Distribution: {silenceRatio*100:F1}% silent, {moderateRatio*100:F1}% moderate, {burstRatio*100:F1}% loud");
        LogMessage($"🎚️ Thresholds: voiceVolumeThreshold={voiceVolumeThreshold:F3}, silenceThreshold={silenceThreshold:F3}");
        LogMessage($"✅ Peak vs Threshold: {maxVolume:F4} vs {voiceVolumeThreshold:F3} = {(maxVolume > voiceVolumeThreshold ? "PASS" : "FAIL")}");
        
        // Decision analysis
        bool wouldPassOldLogic = !IsNoiseOrMeaninglessAudio(audioData);
        LogMessage($"🤖 Old Logic Decision: {(wouldPassOldLogic ? "SEND to Gemini" : "REJECT as noise")}"); 
        LogMessage("=======================================");
    }

    /// <summary>
    /// Trigger camera functionality when user requests photo taking
    /// </summary>
    public void TriggerCameraFunction()
    {
        if (UIManager.Instance != null)
        {
            LogMessage("📸 User requested photo - Opening camera...");
            
            // Use the same logic as CameraBtn.cs
            UIManager.Instance.BtnTakePhotoClick();
            UIManager.Instance.functionName = "camera";
            UIManager.Instance.MoveMyaku(false);
            UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Hide, 0.5f);
            UIManager.Instance.MovePanel(UIManager.Instance.cameraPanel, PanelMover.Direction.Up, false, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.gamePanel, PanelMover.Direction.Left, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.settingPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.appNamePanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.ShowHideTestPanel(false);
            
            LogMessage("📸 Camera interface opened successfully");
        }
        else
        {
            LogMessage("❌ UIManager not found - Cannot open camera");
        }
    }

    /// <summary>
    /// Public method for testing camera functionality
    /// Can be called from other scripts or UI buttons for testing
    /// </summary>
    public void TestCameraFunction()
    {
        LogMessage("🧪 Testing camera function manually...");
        TriggerCameraFunction();
    }

    /// <summary>
    /// Check if camera request is detected in text (for debugging)
    /// </summary>
    public static bool IsCameraRequest(string text)
    {
        if (string.IsNullOrEmpty(text)) return false;
        
        string lowerText = text.ToLower();
        
        // English phrases
        if (lowerText.Contains("take a photo") || lowerText.Contains("take a picture") || 
            lowerText.Contains("open camera") || lowerText.Contains("camera please") ||
            lowerText.Contains("photo please") || lowerText.Contains("snap a photo"))
            return true;
            
        // Vietnamese phrases
        if (lowerText.Contains("chụp ảnh") || lowerText.Contains("mở camera") || 
            lowerText.Contains("chụp hình") || lowerText.Contains("mở máy ảnh") ||
            lowerText.Contains("chụp một tấm"))
            return true;
            
        // Thai phrases
        if (lowerText.Contains("ถ่ายรูป") || lowerText.Contains("เปิดกล้อง"))
            return true;
            
        // Chinese phrases
        if (lowerText.Contains("拍照") || lowerText.Contains("照相") || lowerText.Contains("开相机"))
            return true;
            
        // Korean phrases
        if (lowerText.Contains("사진") || lowerText.Contains("카메라"))
            return true;
        
        return false;
    }
}

#region Google Translate API Response Classes
[System.Serializable]
public class GoogleTranslateResponse
{
    public GoogleTranslateData data;
}

[System.Serializable]
public class GoogleTranslateData
{
    public GoogleTranslateDetection[][] detections;
}

[System.Serializable]
public class GoogleTranslateDetection
{
    public string language;
    public float confidence;
}
#endregion