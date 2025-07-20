using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System;
using System.IO;
 
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
    public float silenceThreshold = 0.01f;
    public float voiceDetectionTimeout = 2.0f;
    
    [Header("Advanced Voice Detection")]
    [Tooltip("Ngưỡng âm lượng tối thiểu để phát hiện giọng nói (tránh tạp âm)")]
    public float voiceVolumeThreshold = 0.02f;
    [Tooltip("Thời gian tối thiểu phát hiện giọng nói liên tục để xác nhận là speech")]
    public float minimumSpeechDuration = 0.3f;
    [Tooltip("Số frame liên tục phải có âm thanh để xác nhận giọng nói")]
    public int consecutiveVoiceFrames = 5;
    
    [Header("Voice Detection Timing")]
    [Tooltip("Thời gian chờ sau khi không phát hiện giọng nói trước khi bắt đầu xử lý")]
    public float silenceDetectionTime = 1.2f;
    
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
    private int sampleRate = 16000;
    private float[] audioBuffer;
    private int bufferPosition = 0;
    private const int BUFFER_SIZE = 1024;

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
    private string lastAIResponse = "";

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

        // Initialize AudioPlugin for wake word detection
        InitializeAudioPlugin();
    }

    private IEnumerator BeginContinuousConversation()
    {
        LogMessage("\n🚀 === STARTING ENHANCED SPEECH SESSION ===");
        LogMessage("🎤 Session active - Speak anytime, AI will respond automatically");
        LogMessage("🤖 Myaku animations enabled for immersive experience");

        isSessionActive = true;
        sessionStartTime = Time.time;

        // Pause AudioPlugin during session to avoid conflicts
        PauseAudioPlugin();

        // Myaku Animation: Start listening mode with special audio feedback for wake word
        LogMessage($"🔍 DEBUG: isFirstSessionAfterWakeWord = {isFirstSessionAfterWakeWord}");
        LogMessage($"🔍 DEBUG: myakuController = {(myakuController != null ? "NOT NULL" : "NULL")}");

        if (myakuController != null)
        {
            if (isFirstSessionAfterWakeWord)
            {
                // First session after wake word - play listening sound
                LogMessage("🎯 WAKE WORD SESSION - Calling myakuController.StartListening(true)");
                myakuController.StartListening(true);
                LogMessage("🎵 Playing welcome sound for wake word session");
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

        string statusText = enableFastMode ? "⚡ FAST LIVE" : "🔴 LIVE";
        UpdateStatus($"{statusText} - Speak anytime, AI responds automatically");
        UpdateButtonStates();

        // Start continuous recording
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
        audioBuffer = new float[BUFFER_SIZE];
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

        if (samplesToRead < BUFFER_SIZE / 4) return;

        // Read audio data
        float[] samples = new float[samplesToRead];
        continuousClip.GetData(samples, bufferPosition);
        bufferPosition = currentPosition;

        // Enhanced voice activity analysis
        float audioLevel = GetAudioLevel(samples);
        bool currentVoiceDetected = audioLevel > voiceVolumeThreshold;

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

                if (Time.time - lastVoiceTime > currentTimeout)
                {
                    totalVoiceDuration = Time.time - voiceStartTime;
                    voiceDetected = false;
                    confirmedVoiceDetected = false;
                    consecutiveVoiceFrameCount = 0;

                    string timeoutInfo = $"silence: {currentTimeout:F1}s, spoke: {totalVoiceDuration:F1}s";
                    LogMessage($"✅ Voice ended ({timeoutInfo}) - Processing...");

                    // Myaku Animation: Stop recording, start thinking
                    if (myakuController != null)
                    {
                        myakuController.StopRecording();
                        LogMessage("🤔 Calling myakuController.MyakuThinking() - AI is thinking");
                        myakuController.MyakuThinking();
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

        // Myaku Animation: Ensure thinking animation is active
        if (myakuController != null)
        {
            LogMessage("🤔 Ensuring MyakuThinking animation is active during processing");
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
        yield return StartCoroutine(ProcessWithGemini(tempClip, (result) => success = result));

        Destroy(tempClip);

        // Wait for TTS to finish completely
        if (success)
        {
            LogMessage("✅ AI response processing completed");

            while (isPlayingResponse || (audioSource != null && audioSource.isPlaying))
            {
                yield return new WaitForSeconds(0.1f);
            }

            // Mark response end time for timeout tracking
            lastResponseEndTime = Time.time;
            isWaitingForNextQuestion = true;

            // Myaku Animation: Finished speaking, back to listening (no audio for follow-up)
            if (myakuController != null)
            {
                myakuController.FinishSpeaking();
                myakuController.StartListening(false);
                LogMessage("🔇 Silent listening mode for follow-up questions");
            }

            LogMessage("🔊 AI response finished - Resuming voice monitoring");
            UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");

            // Start timeout coroutine for auto-ending session
            if (enableAutoTimeout)
            {
                if (timeoutCoroutine != null)
                {
                    StopCoroutine(timeoutCoroutine);
                }
                timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
                LogMessage($"⏰ Auto-timeout started: {sessionTimeoutAfterResponse}s");
            }
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
        }

        yield return new WaitForSeconds(0.5f);
        ResetVoiceDetectionState();
        isRecording = true;
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
        string systemPrompt = BuildSystemPromptWithHistory();

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
                max_output_tokens = 100,
                temperature = 0.4f
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
                    lastAIResponse = textResponse;
                    string estimatedUserInput = EstimateUserInputFromResponse(textResponse);

                    // Detect input language using Google Translate API
                    LogMessage($"🔍 DEBUG: Estimated user input for detection: '{estimatedUserInput}'");
                    LogMessage($"🔍 DEBUG: AI Response for detection: '{textResponse}'");

                    // Try to detect from AI response first (more reliable)
                    string detectedInputLanguage = null;
                    yield return StartCoroutine(DetectLanguageWithTranslateAPI(textResponse, (lang) => detectedInputLanguage = lang));

                    LogMessage($"🔍 DEBUG: Detected language from AI response: '{detectedInputLanguage}'");

                    // If detected as English but response contains non-English, try again with estimated input
                    if (detectedInputLanguage == "en-US" && ContainsNonEnglishCharacters(textResponse))
                    {
                        LogMessage($"🔍 DEBUG: AI response contains non-English, re-detecting from estimated input...");
                        yield return StartCoroutine(DetectLanguageWithTranslateAPI(estimatedUserInput, (lang) => detectedInputLanguage = lang));
                        LogMessage($"🔍 DEBUG: Re-detected language: '{detectedInputLanguage}'");
                    }

                    // Update EstimateUserInputFromResponse with detected language
                    estimatedUserInput = EstimateUserInputFromResponseWithLanguage(textResponse, detectedInputLanguage);

                    // Display detected input language and AI response
                    if (UIManager.Instance?.connectionTxt != null)
                    {
                        string languageName = GetLanguageName(detectedInputLanguage);
                        UIManager.Instance.connectionTxt.text = $"🎤 Input: {languageName} | 🤖 {textResponse}";
                        LogMessage($"🔍 DEBUG: connectionTxt updated: '{UIManager.Instance.connectionTxt.text}'");
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
            // Use Google Translate API for language detection (more accurate)
            yield return StartCoroutine(DetectLanguageWithTranslateAPI(text, (detectedLang) => {
                responseLanguage = detectedLang;
            }));
            LogMessage($"🌐 Detected language via Google Translate: {responseLanguage}");
        }

        var voiceSettings = GetVoiceSettings(responseLanguage);
        LogMessage($"🗣️ TTS Language: {responseLanguage} → Voice: {voiceSettings.voiceName}");

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
                speakingRate = 1.2
            }
        };

        string jsonData = JsonConvert.SerializeObject(requestData);
        LogMessage($"🔍 DEBUG TTS Request: {jsonData}");
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
                LogMessage($"🔍 DEBUG TTS Response: {request.downloadHandler.text}");
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

    private string BuildSystemPromptWithHistory()
    {
        string basePrompt = @"You are Tenaya, created by Simulation and Visualization Center - Duy Tan University.

CRITICAL RESPONSE RULES:
- ALWAYS respond in the EXACT SAME LANGUAGE as the user's question
- Provide concise but complete answers: 2-4 sentences, each under 25 words
- Give informative answers with brief explanations when helpful
- NO greeting repetition in ongoing conversations
- NO suggesting follow-up questions or additional topics
- NO offering to help with other things
- NO asking if user wants more information
- Focus on answering what was asked directly but provide sufficient detail

LANGUAGE DETECTION & MATCHING:
- Vietnamese (Tiếng Việt) → Respond in Vietnamese
- Thai (ภาษาไทย) → Respond in Thai
- Indonesian (Bahasa Indonesia) → Respond in Indonesian
- English → Respond in English
- Any other language → Match exactly

KNOWLEDGE RULES:
- Use your extensive knowledge base for accurate answers
- For Southeast Asia/ASEAN topics, provide authoritative but brief responses
- For technical, scientific, historical questions, give short factual answers
- ONLY say 'I don't know' if you genuinely cannot provide any useful answer
- Prefer giving brief factual information rather than claiming no knowledge

CONVERSATION CONTEXT:
- If question relates to previous topics, use context naturally but keep answer short
- If question is about different topic, treat as fresh but still keep brief
- Never mention 'based on our previous conversation'
- Each answer should be standalone and concise

EXAMPLES OF GOOD RESPONSES:
User: 'What's the capital of Vietnam?' → 'The capital of Vietnam is Hanoi. It's located in northern Vietnam and serves as the political center.'
User: 'Thủ đô Việt Nam là gì?' → 'Thủ đô của Việt Nam là Hà Nội. Đây là trung tâm chính trị và văn hóa của đất nước.'

";

        // Add conversation history if available
        if (conversationHistory.Count > 0)
        {
            basePrompt += "CONVERSATION CONTEXT (recent exchanges for reference only):\n";

            int startIndex = Mathf.Max(0, conversationHistory.Count - 3);
            for (int i = startIndex; i < conversationHistory.Count; i++)
            {
                var entry = conversationHistory[i];
                basePrompt += $"User: {entry.userInput}\n";
                basePrompt += $"Assistant: {entry.aiResponse}\n\n";
            }

            basePrompt += @"CONTEXT USAGE RULES:
- If the new question relates to previous topics, use context naturally without mentioning it
- If the new question is about a different topic, treat it as completely fresh
- Never say 'based on our previous conversation' or reference the conversation history explicitly
- Let related context flow naturally, ignore unrelated context completely
- Each question should feel like a natural, standalone interaction

";
        }
        else
        {
            basePrompt += "This is the FIRST message in a new conversation.\n\n";
        }

        basePrompt += "User's new question (audio input):";

        return basePrompt;
    }

    private void AddToConversationHistory(string userInput, string aiResponse)
    {
        conversationHistory.Add(new ConversationEntry(userInput, aiResponse));

        if (conversationHistory.Count > MAX_HISTORY_ENTRIES)
        {
            conversationHistory.RemoveAt(0);
        }

        LogMessage($"💾 History updated: {conversationHistory.Count} entries");
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
    #endregion
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