using System.Collections;
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

        string responseLanguage;
        if (!string.IsNullOrEmpty(forceLanguageCode))
        {
            responseLanguage = forceLanguageCode;
        }
        else
        {
            responseLanguage = DetectLanguageFromText(text);
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
            }
            else
            {
                LogMessage($"❌ TTS request failed: {request.error}");
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
            userQuestionText.text = $"👤 [{timestamp}] User: {question}";
        }
        LogMessage($"👤 [{timestamp}] User Question: {question}");
    }

    private void UpdateAIResponse(string response)
    {
        if (aiResponseText != null)
        {
            aiResponseText.text = $"🤖 AI: {response}";
        }
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
        return languageCode switch
        {
            "vi-VN" => ("vi-VN", "vi-VN-Standard-A", "FEMALE"),
            "th-TH" => ("th-TH", "th-TH-Standard-A", "FEMALE"),
            "id-ID" => ("id-ID", "id-ID-Standard-A", "FEMALE"),
            "ms-MY" => ("ms-MY", "ms-MY-Standard-A", "FEMALE"),
            "fil-PH" => ("fil-PH", "fil-PH-Standard-A", "FEMALE"),
            "ja-JP" => ("ja-JP", "ja-JP-Standard-A", "FEMALE"),
            "ko-KR" => ("ko-KR", "ko-KR-Standard-A", "FEMALE"),
            "zh-CN" => ("zh-CN", "zh-CN-Standard-A", "FEMALE"),
            "es-ES" => ("es-ES", "es-ES-Standard-A", "FEMALE"),
            "fr-FR" => ("fr-FR", "fr-FR-Standard-A", "FEMALE"),
            "de-DE" => ("de-DE", "de-DE-Standard-A", "FEMALE"),
            _ => ("en-US", "en-US-Standard-C", "FEMALE")
        };
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

        // Weather questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(weather|thời tiết|อากาศ|cuaca|temperature|rain|sunny|cloudy)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Thời tiết hôm nay thế nào?" :
                   detectedLang.StartsWith("th") ? "อากาศวันนี้เป็นอย่างไร?" :
                   detectedLang.StartsWith("id") ? "Bagaimana cuaca hari ini?" :
                   "What's the weather like today?";
        }

        // Name/Identity questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(name|tên|ชื่อ|nama|tenaya|ai|assistant|bot)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Tên bạn là gì?" :
                   detectedLang.StartsWith("th") ? "คุณชื่ออะไร?" :
                   detectedLang.StartsWith("id") ? "Siapa nama Anda?" :
                   "What's your name?";
        }

        // Time questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(time|giờ|เวลา|waktu|clock|hour|minute)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Mấy giờ rồi?" :
                   detectedLang.StartsWith("th") ? "ตอนนี้กี่โมงแล้ว?" :
                   detectedLang.StartsWith("id") ? "Jam berapa sekarang?" :
                   "What time is it?";
        }

        // ASEAN questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(asean|อาเซียน|southeast asia|đông nam á|asia tenggara)\b"))
        {
            return detectedLang.StartsWith("vi") ? "ASEAN là gì?" :
                   detectedLang.StartsWith("th") ? "อาเซียนคืออะไร?" :
                   detectedLang.StartsWith("id") ? "Apa itu ASEAN?" :
                   "What is ASEAN?";
        }

        // Capital questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(capital|thủ đô|เมืองหลวง|ibu kota)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Thủ đô của [quốc gia] là gì?" :
                   detectedLang.StartsWith("th") ? "เมืองหลวงของ[ประเทศ]คืออะไร?" :
                   detectedLang.StartsWith("id") ? "Apa ibu kota [negara]?" :
                   "What's the capital of [country]?";
        }

        // Fallback
        else
        {
            string[] responseWords = lowerResponse.Split(' ');
            string keyWord = responseWords.Length > 2 ? responseWords[1] : "something";

            return detectedLang.StartsWith("vi") ? $"❓ [Hỏi về {keyWord}]" :
                   detectedLang.StartsWith("th") ? $"❓ [ถามเกี่ยวกับ {keyWord}]" :
                   detectedLang.StartsWith("id") ? $"❓ [Bertanya tentang {keyWord}]" :
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