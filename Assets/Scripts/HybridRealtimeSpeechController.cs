using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using NativeWebSocket;
using Newtonsoft.Json;
using System.Text;
using System.Linq;
using UnityEngine.SceneManagement;

/// <summary>
/// Simplified Realtime Speech Controller - Pure OpenAI WebSocket
/// Chỉ sử dụng OpenAI Realtime WebSocket, loại bỏ tất cả logic speech-to-speech phức tạp
/// VAD hoàn toàn do OpenAI xử lý, speech flow control đơn giản
/// </summary>
public class HybridRealtimeSpeechController : MonoBehaviour
{
    #region Singleton
    public static HybridRealtimeSpeechController Instance { get; private set; }
    #endregion

    #region UI References
    [Header("UI References")]
    public Button startStopButton;
    public TMP_Text startStopText;
    public TMP_Text statusText;
    public TMP_Text logText;
    public AudioSource audioSource;
    
    [Header("Conversation Display")]
    public TMP_Text userQuestionText;
    public TMP_Text aiResponseText;
    
    [Header("Myaku Integration")]
    public MyakuController myakuController;
    

    #endregion

    #region Configuration
    [Header("Audio Configuration")]
    [SerializeField] private int sampleRate = 24000;
    [SerializeField] private string audioFormat = "pcm16";
    [SerializeField, Range(0.1f, 1.0f)] private float audioVolume = 0.8f;
    
    [Header("Simple Speech Control")]
    [Tooltip("Delay after AI finishes speaking before allowing recording again (seconds)")]
    public float speechEndDelay = 2.0f; // Increased from 0.5f to 2.0f to prevent feedback
    [Tooltip("Auto session timeout after response (seconds)")]
    public float sessionTimeoutAfterResponse = 30f;
    
    [Header("Wake Word Detection")]
    public bool enableWakeWordDetection = true;
    
    [Header("Audio Filtering")]
    [Tooltip("Bật/tắt xử lý âm thanh trước khi gửi")]
    public bool enableAudioFiltering = true;
    [Tooltip("Ngưỡng âm lượng tối thiểu (0.0 - 1.0)")]
    [Range(0.0f, 1.0f)]
    public float volumeThreshold = 0.01f;
    
    #endregion

    #region Config System
    [System.Serializable]
    public class Config
    {
        public string openAIApiKey;
        public string model = "gpt-4o-mini-realtime-preview";
        public string voice = "alloy";
        public string customInstructions = "";
    }

    private Config config;
    #endregion

    #region Private Fields - Simplified
    // WebSocket và OpenAI Realtime
    private WebSocket webSocket;
    private bool isConnected = false;
    private bool isSessionActive = false;
    private const string WEBSOCKET_URL = "wss://api.openai.com/v1/realtime?model=";
    
    // Simple speech control
    private bool isRecording = false;
    private bool isAISpeaking = false; // CRITICAL: Block recording when AI speaks
    private bool isWaitingForSpeechEnd = false; // CRITICAL: Block recording during delay
    private Coroutine aiSpeakingTimeoutCoroutine; // Safety timeout for stuck AI speaking state
    
    // Audio recording
    private AudioClip microphoneClip;
    private string microphoneDevice;
    private int lastMicrophonePosition = 0;
    
    // Simple audio playback
    private Queue<float[]> audioPlaybackQueue = new Queue<float[]>();
    private List<float> audioBuffer = new List<float>();
    private bool isPlayingAudio = false;
    private bool isAIResponseComplete = false;
    private bool hasSpeechStarted = false; // Track if AI has started speaking
    
    // Session management
    private float sessionStartTime = 0f;
    private bool isWaitingForNextQuestion = false;
    private Coroutine timeoutCoroutine;
    private bool isFirstSessionAfterWakeWord = true;
    
    // AI Response accumulation for camera detection
    private string currentAIResponse = "";
    
    // Wake Word Detection
    private AndroidJavaObject audioPlugin;
    private bool enableHeyDT = true;
    private bool isFirstListening = true;
    
    // Audio session control
    private bool isAudioSessionActive = false; // Đã bắt đầu gửi audio lên OpenAI

    // Logging
    private string logMessages = "";
    #endregion

    #region Unity Lifecycle
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            //DontDestroyOnLoad(gameObject);
            LoadConfiguration();
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private void Start()
    {
        InitializeComponent();
        LoadAudioFilteringSettings();
        LogMessage("🎤 Simplified Realtime Speech Controller Ready");
        LogMessage("✅ Pure OpenAI WebSocket - No client-side VAD");
        LogMessage("🤖 Myaku Integration Enabled");
        //UpdateStatus("Click START or say 'Hey DT' to begin");
    }

    private void Update()
    {
        // Dispatch WebSocket messages
        #if !UNITY_WEBGL || UNITY_EDITOR
        webSocket?.DispatchMessageQueue();
        #endif

        // Simple recording logic - only when allowed
        if (isSessionActive && isRecording && microphoneClip != null && CanRecord())
        {
            ProcessMicrophoneAudio();
        }

        // Simple audio playback
        ProcessAudioPlayback();
    }

    private void OnDestroy()
    {
        StopRecording();
        DisconnectWebSocket();
        
        #if UNITY_ANDROID && !UNITY_EDITOR
        if (audioPlugin != null)
        {
            try
            {
                audioPlugin.Dispose();
            }
            catch (System.Exception e)
            {
                LogMessage($"⚠️ Error disposing AudioPlugin: {e.Message}");
            }
        }
        #endif
    }
    #endregion

    #region Configuration
    private void LoadConfiguration()
    {
        try
        {
            TextAsset configFile = Resources.Load<TextAsset>("config");
            if (configFile != null)
            {
                LogMessage($"📄 Config file found - Content: {configFile.text.Substring(0, Math.Min(100, configFile.text.Length))}...");
                config = JsonUtility.FromJson<Config>(configFile.text);
                LogMessage("✅ Configuration loaded from Resources/config.json");
                LogMessage($"🔑 API Key loaded: {(string.IsNullOrEmpty(config.openAIApiKey) ? "MISSING" : "Present")}");
                LogMessage($"🎵 Model: {config.model}");
                LogMessage($"🗣️ Voice: {config.voice}");
            }
            else
            {
                config = new Config();
                LogMessage("⚠️ Config file not found in Resources/, using defaults");
                LogMessage("❌ API Key will be MISSING - check Resources/config.json");
            }
        }
        catch (Exception e)
        {
            config = new Config();
            LogMessage($"❌ Failed to load config: {e.Message}");
            LogMessage("❌ API Key will be MISSING - check Resources/config.json format");
        }
    }
    #endregion

    #region Simple Speech Control
    /// <summary>
    /// CRITICAL: Xác định khi nào có thể ghi âm
    /// Microphone sẽ được stop hoàn toàn khi AI nói, nên method này chỉ cần check cơ bản
    /// </summary>
    private bool CanRecord()
    {
        if (isAISpeaking)
        {
            // LogMessage("🚫 Cannot record - AI is speaking");
            return false;
        }
        
        if (isWaitingForSpeechEnd)
        {
            // LogMessage("🚫 Cannot record - Waiting for speech end delay");
            return false;
        }
        
        // LogMessage("✅ Can record - AI not speaking");
        return true;
    }

    /// <summary>
    /// CRITICAL: Được gọi khi AI bắt đầu phát audio đầu tiên
    /// Microphone đã được stop trong response.audio.delta, chỉ cần update states
    /// </summary>
    private void OnAIStartSpeaking()
    {
        if (!hasSpeechStarted)
        {
            hasSpeechStarted = true;
            isAISpeaking = true;
            isWaitingForSpeechEnd = false;
            
            // Microphone đã được stop trong response.audio.delta case
            LogMessage("🔊 AI started speaking - Already blocked in audio.delta");
            
            // Myaku animation
            if (myakuController != null)
            {
                myakuController.MyakuAnswer();
            }
        }
    }

    /// <summary>
    /// CRITICAL: Được gọi khi AI hoàn thành việc phát tất cả audio
    /// Đây là điểm chính xác "phát xong câu trả lời"
    /// </summary>
    private void OnAIFinishedSpeaking()
    {
        isAISpeaking = false;
        isWaitingForSpeechEnd = true;
        hasSpeechStarted = false;
        
        // Stop safety timeout coroutine
        if (aiSpeakingTimeoutCoroutine != null)
        {
            StopCoroutine(aiSpeakingTimeoutCoroutine);
            aiSpeakingTimeoutCoroutine = null;
        }
        
        LogMessage($"✅ AI finished speaking - Starting {speechEndDelay}s delay");
        
        // Ensure microphone is definitely stopped
        if (isRecording)
        {
            Microphone.End(microphoneDevice);
            isRecording = false;
            LogMessage("🛑 Final microphone stop in OnAIFinishedSpeaking");
        }
    //     if(isFirstListening == true){

    //         isFirstListening = false;
    //     }
    //    else {
 // Myaku animation
            if (myakuController != null)
            {
                myakuController.MyakuListen(false);
            }
    //    }
        
        // Start delay before allowing recording again
        StartCoroutine(SpeechEndDelayCoroutine());
    }

    /// <summary>
    /// Delay sau khi AI nói xong trước khi cho phép recording
    /// </summary>
    private IEnumerator SpeechEndDelayCoroutine()
    {
        LogMessage($"⏳ Starting speech end delay: {speechEndDelay}s");
        
        // Wait for the configured delay
        yield return new WaitForSeconds(speechEndDelay);
        
        // Additional safety check - ensure AudioSource has completely stopped
        if (audioSource != null && audioSource.isPlaying)
        {
            LogMessage("⚠️ AudioSource still playing - waiting additional 1s");
            yield return new WaitForSeconds(1f);
        }
        
        // Another safety check - wait a bit more for any echo to die down
        LogMessage("🔇 Waiting additional 0.5s for audio echo to settle");
        yield return new WaitForSeconds(0.5f);
        
        isWaitingForSpeechEnd = false;
        
        // TRIỆT ĐỂ: Khởi động lại microphone recording với safety checks
        if (isSessionActive && !isRecording && !isAISpeaking)
        {
            try
            {
                // Final check - ensure we're not in any audio state
                if (audioSource != null && audioSource.isPlaying)
                {
                    LogMessage("❌ Cannot restart microphone - AudioSource still playing");
                    yield break;
                }
                
                microphoneClip = Microphone.Start(microphoneDevice, true, 10, sampleRate);
                isRecording = true;
                lastMicrophonePosition = 0;
                LogMessage("🎤 Microphone SAFELY RESTARTED after all delays and checks");
            }
            catch (Exception e)
            {
                LogMessage($"❌ Failed to restart microphone: {e.Message}");
            }
        }
        else
        {
            LogMessage($"⚠️ Cannot restart microphone - Session: {isSessionActive}, Recording: {isRecording}, AI Speaking: {isAISpeaking}");
        }
        
        LogMessage("🎤 Speech delay completed - Recording allowed again");
        
        // Set Myaku to listening for next question
        // if (myakuController != null)
        // {
        //     myakuController.StartListening(false); // Silent for follow-up
        // }
        
        // Start timeout for next question
        StartQuestionTimeout();
    }

    private void StartQuestionTimeout()
    {
        try
        {
            isWaitingForNextQuestion = true;
            
            if (timeoutCoroutine != null)
            {
                StopCoroutine(timeoutCoroutine);
            }
            timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
            LogMessage($"⏰ Question timeout started: {sessionTimeoutAfterResponse}s");
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error starting timeout: {e.Message}");
        }
    }

    /// <summary>
    /// Safety timeout to reset AI speaking state if it gets stuck
    /// </summary>
    private IEnumerator AISpeakingTimeoutCoroutine()
    {
        yield return new WaitForSeconds(30f); // 30 second timeout
        
        if (isAISpeaking)
        {
            LogMessage("⚠️ AI speaking timeout reached - forcing reset to prevent feedback loop");
            isAISpeaking = false;
            isWaitingForSpeechEnd = false;
            hasSpeechStarted = false;
            
            // Force restart microphone if session is still active
            if (isSessionActive && !isRecording)
            {
                try
                {
                    microphoneClip = Microphone.Start(microphoneDevice, true, 10, sampleRate);
                    isRecording = true;
                    lastMicrophonePosition = 0;
                    LogMessage("🎤 Microphone force restarted after timeout");
                }
                catch (Exception e)
                {
                    LogMessage($"❌ Failed to force restart microphone: {e.Message}");
                }
            }
            
            UpdateStatus("🔴 LIVE - Recovered from timeout");
        }
    }
    #endregion

    #region Public Methods
    public void ToggleRealtimeConversation()
    {
        if (isSessionActive)
        {
            LogMessage("🔘 Toggle button: Stopping session with IMMEDIATE audio halt");
            StopRealtimeConversation();
        }
        else
        {
            LogMessage("🔘 Toggle button: Starting session");
            StartRealtimeConversation();
        }
    }

    public void StartRealtimeConversation()
    {
        if (string.IsNullOrEmpty(config.openAIApiKey))
        {
            LogMessage("❌ OpenAI API Key required in config!");
            UpdateStatus("Please set OpenAI API Key in Resources/config.json");
            return;
        }

        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active");
            return;
        }

        // CRITICAL: Check and cleanup existing WebSocket before manual start
        if (webSocket != null)
        {
            LogMessage("🔍 Manual start - Existing WebSocket detected, performing cleanup");
            
            try
            {
                webSocket.OnOpen -= OnWebSocketOpen;
                webSocket.OnMessage -= OnWebSocketMessage;
                webSocket.OnError -= OnWebSocketError;
                webSocket.OnClose -= OnWebSocketClose;
                
                if (isConnected || webSocket.State == WebSocketState.Open || webSocket.State == WebSocketState.Connecting)
                {
                    LogMessage("🛑 Closing existing WebSocket for manual start");
                    webSocket.Close();
                }
                
                webSocket = null;
                isConnected = false;
                LogMessage("✅ Manual start - WebSocket cleaned up successfully");
            }
            catch (Exception e)
            {
                LogMessage($"⚠️ Manual start - Error during WebSocket cleanup: {e.Message}");
                webSocket = null;
                isConnected = false;
            }
            
            // Add small delay for manual start cleanup too
            StartCoroutine(DelayedManualBeginSession());
        }
        else
        {
            StartCoroutine(BeginSession());
        }
    }
    
    private IEnumerator DelayedManualBeginSession()
    {
        LogMessage("⏳ Manual start - Waiting 0.5s for WebSocket cleanup...");
        yield return new WaitForSeconds(0.5f);
        LogMessage("🚀 Manual start - Starting session after cleanup");
        StartCoroutine(BeginSession());
    }

    public void StopRealtimeConversation()
    {
        if (!isSessionActive)
        {
            LogMessage("⚠️ No active session to stop");
            return;
        }

        // CRITICAL: Immediately stop ALL audio playback when stop button is pressed
        LogMessage("🛑 STOP button pressed - Immediate audio halt initiated");
        
        // Stop AudioSource immediately
        if (audioSource != null && audioSource.isPlaying)
        {
            audioSource.Stop();
            audioSource.clip = null;
            LogMessage("🔇 AudioSource stopped immediately via stop button");
        }
        
        // Stop all coroutines that might be playing audio
        StopAllCoroutines();
        LogMessage("⏹️ All coroutines stopped to prevent audio continuation");
        
        // Reset all audio-related states immediately
        isAISpeaking = false;
        isPlayingAudio = false;
        isWaitingForSpeechEnd = false;
        hasSpeechStarted = false;
        isAIResponseComplete = false;
        
        // Clear all audio buffers and queues immediately
        audioBuffer.Clear();
        audioPlaybackQueue.Clear();
        LogMessage("🧹 Audio buffers and queues cleared immediately");
        
        // Stop any audio timeout coroutines
        if (aiSpeakingTimeoutCoroutine != null)
        {
            aiSpeakingTimeoutCoroutine = null; // Already stopped by StopAllCoroutines
        }
        
        LogMessage("✅ Immediate audio halt completed - proceeding to session cleanup");

        // Use immediate session cleanup instead of coroutine
        EndSessionImmediate();
    }

    public void OnWakeWordDetected()
    {
        if (!enableHeyDT || isSessionActive)
        {
            LogMessage("⚠️ Wake word ignored - session active or disabled");
            return;
        }

        LogMessage("🎯 Wake word 'Hey DT' detected!");
        
        // CRITICAL: Check and cleanup existing WebSocket before creating new session
        if (webSocket != null)
        {
            LogMessage("🔍 Existing WebSocket detected - performing cleanup validation");
            
            // Force cleanup existing connection
            try
            {
                webSocket.OnOpen -= OnWebSocketOpen;
                webSocket.OnMessage -= OnWebSocketMessage;
                webSocket.OnError -= OnWebSocketError;
                webSocket.OnClose -= OnWebSocketClose;
                
                if (isConnected || webSocket.State == WebSocketState.Open || webSocket.State == WebSocketState.Connecting)
                {
                    LogMessage("🛑 Closing existing WebSocket connection");
                    webSocket.Close();
                }
                
                webSocket = null;
                isConnected = false;
                LogMessage("✅ Existing WebSocket cleaned up successfully");
            }
            catch (Exception e)
            {
                LogMessage($"⚠️ Error during WebSocket cleanup: {e.Message}");
                webSocket = null;
                isConnected = false;
            }
        }
        
        isFirstSessionAfterWakeWord = true;
        
        // Add a small delay to ensure cleanup is complete before starting new session
        StartCoroutine(DelayedBeginSession());
    }

    public void CloseWebsocketWhenChangeScene(){
        // CRITICAL: Check and cleanup existing WebSocket before creating new session
        if (webSocket != null)
        {
            LogMessage("🔍 Existing WebSocket detected - performing cleanup validation");
            
            // Force cleanup existing connection
            try
            {
                webSocket.OnOpen -= OnWebSocketOpen;
                webSocket.OnMessage -= OnWebSocketMessage;
                webSocket.OnError -= OnWebSocketError;
                webSocket.OnClose -= OnWebSocketClose;
                
                if (isConnected || webSocket.State == WebSocketState.Open || webSocket.State == WebSocketState.Connecting)
                {
                    LogMessage("🛑 Closing existing WebSocket connection");
                    webSocket.Close();
                }
                
                webSocket = null;
                isConnected = false;
                LogMessage("✅ Existing WebSocket cleaned up successfully");
            }
            catch (Exception e)
            {
                LogMessage($"⚠️ Error during WebSocket cleanup: {e.Message}");
                webSocket = null;
                isConnected = false;
            }
        }
    }
    
    private IEnumerator DelayedBeginSession()
    {
        LogMessage("⏳ Waiting 0.5s for WebSocket cleanup to complete...");
        yield return new WaitForSeconds(0.5f);
        LogMessage("🚀 Starting new session after cleanup validation");
        StartCoroutine(BeginSession());
    }

    public void BackButtonClick() 
    {
        SceneManager.LoadScene("PhotoScene");
    }
    #endregion

    #region Session Management
    private IEnumerator BeginSession()
    {
        LogMessage("🚀 Starting simplified realtime session");
        LogMessage($"🔑 API Key: {(string.IsNullOrEmpty(config.openAIApiKey) ? "MISSING" : "Present")}");
        LogMessage($"🎵 Model: {config.model}");
        
        // Clean up
        CleanupBeforeSession();
        LogMessage("🔄 Cleanup completed - coroutine still running");
        
        isSessionActive = true;
        sessionStartTime = Time.time;
        LogMessage("✅ Session marked as active");
        
        // Pause wake word detection
        PauseAudioPlugin();
        LogMessage("⏸️ Wake word detection paused");
        
        // Myaku listening with sound for wake word, silent for manual
        // if (myakuController != null)
        // {
        //     bool playSound = isFirstSessionAfterWakeWord;
        //     LogMessage($"🎧 Myaku listening with sound: {playSound}");
        //     myakuController.StartListening(playSound);
        //     isFirstSessionAfterWakeWord = false;
        //     LogMessage("✅ Myaku StartListening() called successfully");
            
        //     if (playSound)
        //     {
        //         // Debug the wait process
        //         LogMessage("⏳ Playing listening sound - starting 2 second wait...");
        //         bool waitException = false;
        //         try
        //         {
        //             LogMessage("⏰ Wait started - yielding for 2 seconds");
        //         }
        //         catch (System.Exception e)
        //         {
        //             LogMessage($"❌ Exception during wait: {e.Message}");
        //             waitException = true;
        //         }
        //         if (!waitException)
        //         {
        //             yield return new WaitForSeconds(2f);
        //             LogMessage("⏰ Wait completed - 2 seconds elapsed");
        //         }
        //         LogMessage("✅ Listening sound wait completed");
        //     }
        // }
        
        LogMessage("📡 Starting WebSocket connection...");
        
        // Connect WebSocket
        yield return StartCoroutine(ConnectWebSocket());
        if (!isConnected)
        {
            LogMessage("❌ WebSocket connection failed - aborting session");
            UpdateStatus("❌ Failed to connect to OpenAI");
            yield break;
        }
        
        LogMessage("✅ WebSocket connected - proceeding to create session");
        
        // Create session with OpenAI VAD
        yield return StartCoroutine(CreateSession());
        
        LogMessage("📡 Session created - starting recording");
        
        // Start recording
        StartRecording();
        
        LogMessage("🎤 Recording started - finalizing setup");
        
        UpdateStatus("🔴 LIVE - OpenAI handling VAD");
        UpdateButtonStates();
        
        // Start initial timeout
        StartQuestionTimeout();
        
        LogMessage("✅ Simplified session started successfully!");
    }

    private IEnumerator ConnectWebSocket()
    {
        // CRITICAL: Final validation before creating new WebSocket
        if (webSocket != null)
        {
            LogMessage("⚠️ CRITICAL: WebSocket still exists during ConnectWebSocket - force cleanup");
            try
            {
                webSocket.OnOpen -= OnWebSocketOpen;
                webSocket.OnMessage -= OnWebSocketMessage;
                webSocket.OnError -= OnWebSocketError;
                webSocket.OnClose -= OnWebSocketClose;
                webSocket.Close();
                webSocket = null;
            }
            catch (Exception e)
            {
                LogMessage($"⚠️ Force cleanup error: {e.Message}");
                webSocket = null;
            }
            isConnected = false;
            yield return new WaitForSeconds(0.2f); // Additional safety delay
        }
        
        string wsUrl = WEBSOCKET_URL + config.model;
        LogMessage($"🌐 WebSocket URL: {wsUrl}");
        LogMessage($"🔑 Auth header: Bearer {config.openAIApiKey.Substring(0, 10)}...");
        
        webSocket = new WebSocket(wsUrl, new Dictionary<string, string>
        {
            {"Authorization", "Bearer " + config.openAIApiKey},
            {"OpenAI-Beta", "realtime=v1"}
        });

        webSocket.OnOpen += OnWebSocketOpen;
        webSocket.OnMessage += OnWebSocketMessage;
        webSocket.OnError += OnWebSocketError;
        webSocket.OnClose += OnWebSocketClose;

        try
        {
            LogMessage("🔗 Attempting WebSocket connection...");
            webSocket.Connect();
        }
        catch (Exception e)
        {
            LogMessage($"❌ WebSocket connection exception: {e.Message}");
            yield break;
        }

        // Wait for connection with detailed logging
        float timeout = 10f;
        LogMessage($"⏳ Waiting for connection (timeout: {timeout}s)...");
        
        while (!isConnected && timeout > 0)
        {
            timeout -= Time.deltaTime;
            yield return null;
        }
        
        if (!isConnected)
        {
            LogMessage($"❌ WebSocket connection timeout after 10 seconds");
        }
        else
        {
            LogMessage("✅ WebSocket connected successfully");
            myakuController.MyakuListen(true);
        }
    }

    private IEnumerator CreateSession()
    {
        if (!isConnected) 
        {
            LogMessage("❌ Cannot create session - WebSocket not connected");
            yield break;
        }

        LogMessage("⚙️ Creating OpenAI session...");
        string instructions = GetDefaultInstructions();

        var sessionConfig = new
        {
            type = "session.update",
            session = new
            {
                modalities = new[] { "text", "audio" },
                instructions = instructions,
                voice = config.voice,
                input_audio_format = audioFormat,
                output_audio_format = audioFormat,
                input_audio_transcription = new { model = "whisper-1" },
                turn_detection = new
                {
                    type = "server_vad", // CRITICAL: OpenAI handles VAD
                    threshold = 0.5,
                    prefix_padding_ms = 300,
                    silence_duration_ms = 200
                }
            }
        };

        try
        {
            string jsonConfig = JsonConvert.SerializeObject(sessionConfig);
            LogMessage($"📤 Sending session config: {jsonConfig.Substring(0, Math.Min(100, jsonConfig.Length))}...");
            webSocket.SendText(jsonConfig);
            LogMessage("📡 Session config sent - waiting for response...");
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error sending session config: {e.Message}");
            yield break;
        }
        
        yield return new WaitForSeconds(1f);
        LogMessage("✅ Session creation completed");
    }

    private void StartRecording()
    {
        LogMessage("🎤 Starting microphone recording...");
        
        if (Microphone.devices.Length == 0)
        {
            LogMessage("❌ No microphone devices found");
            return;
        }

        microphoneDevice = Microphone.devices[0];
        LogMessage($"🎙️ Using microphone: {microphoneDevice}");
        
        try
        {
            microphoneClip = Microphone.Start(microphoneDevice, true, 10, sampleRate);
            isRecording = true;
            lastMicrophonePosition = 0;
            LogMessage($"✅ Recording started successfully: {microphoneDevice} at {sampleRate}Hz");
        }
        catch (Exception e)
        {
            LogMessage($"❌ Recording failed: {e.Message}");
        }
    }

    private void StopRecording()
    {
        if (isRecording)
        {
            Microphone.End(microphoneDevice);
            isRecording = false;
            LogMessage("🛑 Recording stopped");
        }
    }

    /// <summary>
    /// Simplified microphone processing - chỉ gửi audio tới OpenAI
    /// Không có client-side VAD, chỉ pure audio streaming
    /// </summary>
    private void ProcessMicrophoneAudio()
    {
        if (!isConnected || microphoneClip == null) return;

        int currentPosition = Microphone.GetPosition(microphoneDevice);
        if (currentPosition < 0 || currentPosition == lastMicrophonePosition) return;

        int sampleCount = currentPosition - lastMicrophonePosition;
        if (sampleCount < 0) sampleCount += microphoneClip.samples;

        if (sampleCount > 0)
        {
            float[] audioData = new float[sampleCount];
            microphoneClip.GetData(audioData, lastMicrophonePosition);
            
            if (enableAudioFiltering)
            {
                float currentVolume = CalculateAudioVolume(audioData);

                // Nếu chưa bắt đầu audio session và phát hiện âm lượng vượt ngưỡng
                if (!isAudioSessionActive && currentVolume >= volumeThreshold)
                {
                    isAudioSessionActive = true;
                    LogMessage($"🎤 Audio session started - Volume: {currentVolume:F4} >= Threshold: {volumeThreshold:F4}");
                }

                // Nếu đã bắt đầu audio session, gửi tất cả audio (kể cả yên lặng)
                if (isAudioSessionActive)
                {
                    byte[] pcmData = ConvertToPCM16(audioData);
                    SendAudioToOpenAI(pcmData);
                }
            }
            else
            {
                // Không dùng audio filtering, gửi tất cả audio
                byte[] pcmData = ConvertToPCM16(audioData);
                SendAudioToOpenAI(pcmData);
            }
            
            lastMicrophonePosition = currentPosition;
        }
    }

    private byte[] ConvertToPCM16(float[] audioData)
    {
        byte[] pcmData = new byte[audioData.Length * 2];
        for (int i = 0; i < audioData.Length; i++)
        {
            short sample = (short)(Mathf.Clamp(audioData[i], -1f, 1f) * 32767f);
            pcmData[i * 2] = (byte)(sample & 0xFF);
            pcmData[i * 2 + 1] = (byte)((sample >> 8) & 0xFF);
        }
        return pcmData;
    }

    /// <summary>
    /// Tính toán âm lượng RMS (Root Mean Square) từ audio data
    /// </summary>
    /// <param name="audioData">Mảng audio data (float từ -1.0 đến 1.0)</param>
    /// <returns>Giá trị RMS từ 0.0 đến 1.0</returns>
    private float CalculateAudioVolume(float[] audioData)
    {
        if (audioData == null || audioData.Length == 0) return 0f;

        float sum = 0f;
        for (int i = 0; i < audioData.Length; i++)
        {
            sum += audioData[i] * audioData[i];
        }
        
        return Mathf.Sqrt(sum / audioData.Length);
    }

    private void SendAudioToOpenAI(byte[] audioData)
    {
        if (!isConnected || audioData.Length == 0) return;

        // LogMessage($"📤 Sending {audioData.Length} bytes to OpenAI - AI Speaking: {isAISpeaking}, Waiting: {isWaitingForSpeechEnd}");

        var message = new
        {
            type = "input_audio_buffer.append",
            audio = Convert.ToBase64String(audioData)
        };

        webSocket.SendText(JsonConvert.SerializeObject(message));
    }

    /// <summary>
    /// Simplified audio playback - chỉ phát audio từ OpenAI
    /// </summary>
    private void ProcessAudioPlayback()
    {
        // CRITICAL: Don't process audio if session is not active
        if (!isSessionActive)
        {
            // Clear any remaining audio data if session ended
            if (audioPlaybackQueue.Count > 0 || audioBuffer.Count > 0)
            {
                audioPlaybackQueue.Clear();
                audioBuffer.Clear();
                LogMessage("🛑 Audio processing stopped - session inactive, buffers cleared");
            }
            return;
        }
        
        // Add queued audio to buffer
        while (audioPlaybackQueue.Count > 0)
        {
            float[] chunk = audioPlaybackQueue.Dequeue();
            audioBuffer.AddRange(chunk);
            // DON'T reset isAIResponseComplete here - it should only be reset for new responses
            LogMessage($"📥 Added audio chunk to buffer - Chunk size: {chunk.Length}, Total buffer: {audioBuffer.Count}, Queue remaining: {audioPlaybackQueue.Count}");
        }

        // Play when we have enough audio or response complete - but only if session is still active
        if (!isPlayingAudio && isSessionActive && (audioBuffer.Count > 1000 || (isAIResponseComplete && audioBuffer.Count > 0)))
        {
            LogMessage($"🎵 Triggering PlayAudio - Buffer: {audioBuffer.Count}, Response complete: {isAIResponseComplete}, Queue: {audioPlaybackQueue.Count}");
            if(!isAIResponseComplete) {
                LogMessage($"🎵 PlayAudio with not final chunk");
                StartCoroutine(PlayAudio(false));
            }
            else {
                LogMessage($"🎵 PlayAudio with final chunk");
                StartCoroutine(PlayAudio(true));
            }
        }
    }

    private IEnumerator PlayAudio(bool finalChunk)
    {
        // CRITICAL: Exit immediately if session is not active
        if (!isSessionActive)
        {
            LogMessage("🛑 PlayAudio cancelled - session not active");
            isPlayingAudio = false;
            yield break;
        }
        
        if (audioBuffer.Count == 0) yield break;

        isPlayingAudio = true;
        
        // Mark AI speaking start
        OnAIStartSpeaking();
        
        float[] audioData = audioBuffer.ToArray();
        audioBuffer.Clear();

        AudioClip clip = AudioClip.Create("OpenAIAudio", audioData.Length, 1, sampleRate, false);
        clip.SetData(audioData, 0);

        if (audioSource != null && isSessionActive) // Double-check session is still active
        {
            audioSource.clip = clip;
            audioSource.volume = audioVolume;
            audioSource.Play();
            
            LogMessage($"🔊 Playing audio clip - Duration: {clip.length}s, Buffer cleared, Queue count: {audioPlaybackQueue.Count}");
            
            // Check session status during audio playback
            float elapsed = 0f;
            while (elapsed < clip.length && isSessionActive && audioSource.isPlaying)
            {
                elapsed += Time.deltaTime;
                yield return null;
            }
            
            // If session was stopped during playback, exit immediately
            if (!isSessionActive)
            {
                LogMessage("🛑 PlayAudio interrupted - session stopped during playback");
                isPlayingAudio = false;
                yield break;
            }
            
            LogMessage($"🔊 Audio finished playing - Response complete: {isAIResponseComplete}, Queue count: {audioPlaybackQueue.Count}");
            
            // If this was the final chunk, AI finished speaking
            if (isAIResponseComplete && audioPlaybackQueue.Count == 0 && finalChunk)
            {
                LogMessage("🔊 AI finished speaking - Final audio played");
                OnAIFinishedSpeaking(); // CRITICAL: This is where we detect "phát xong câu trả lời"
            }
            else
            {
                LogMessage($"🔊 NOT calling OnAIFinishedSpeaking - Response complete: {isAIResponseComplete}, Queue count: {audioPlaybackQueue.Count}");
            }
        }
        
        isPlayingAudio = false;
        LogMessage("🔊 PlayAudio coroutine finished - isPlayingAudio set to false");
    }

    private IEnumerator SessionTimeoutCoroutine()
    {
        float elapsed = 0f;
        while (elapsed < sessionTimeoutAfterResponse && isWaitingForNextQuestion && isSessionActive)
        {
            yield return new WaitForSeconds(1f);
            elapsed += 1f;
            
            int remaining = Mathf.CeilToInt(sessionTimeoutAfterResponse - elapsed);
            if (remaining <= 5)
            {
                UpdateStatus($"🔴 Auto-ending in {remaining}s");
            }
        }

        if (isWaitingForNextQuestion && isSessionActive)
        {
            LogMessage("⏰ Session timeout - Ending");
            StopRealtimeConversation();
        }
    }

    private IEnumerator EndSession()
    {
        LogMessage("🛑 Ending session");
        
        // Reset all states
        isSessionActive = false;
        isRecording = false;
        isAISpeaking = false;
        isWaitingForSpeechEnd = false;
        isWaitingForNextQuestion = false;
        hasSpeechStarted = false;
        
        if (timeoutCoroutine != null)
        {
            StopCoroutine(timeoutCoroutine);
            timeoutCoroutine = null;
        }
        
        if (aiSpeakingTimeoutCoroutine != null)
        {
            StopCoroutine(aiSpeakingTimeoutCoroutine);
            aiSpeakingTimeoutCoroutine = null;
        }
        
        StopRecording();
        DisconnectWebSocket();
        ClearAudioBuffers();
        
        if (myakuController != null)
        {
            myakuController.MyakuHello();
        }
        
        ResumeAudioPlugin();
        // UpdateStatus("Click START or say 'Hey DT'");
        UpdateButtonStates();
        ClearConversationDisplay();
        
        yield return null;
    }

    /// <summary>
    /// Immediate session cleanup without coroutine - for instant stop button response
    /// </summary>
    private void EndSessionImmediate()
    {
        LogMessage("🛑 Ending session immediately (non-coroutine)");
        
        // Reset all states immediately
        isSessionActive = false;
        isRecording = false;
        isAISpeaking = false;
        isWaitingForSpeechEnd = false;
        isWaitingForNextQuestion = false;
        hasSpeechStarted = false;
        isAIResponseComplete = false;

        // Reset audio session state
        isAudioSessionActive = false;
        
        // Clear timeout references (coroutines already stopped by StopAllCoroutines)
        timeoutCoroutine = null;
        aiSpeakingTimeoutCoroutine = null;
        
        // Stop recording immediately
        StopRecording();
        
        // Disconnect WebSocket immediately
        DisconnectWebSocket();
        
        // Clear audio buffers (already done in StopRealtimeConversation but ensure)
        ClearAudioBuffers();
        
        // Update Myaku controller
        if (myakuController != null)
        {
            myakuController.MyakuHello();
        }
        
        // Resume audio plugin
        ResumeAudioPlugin();
        
        // Update UI states
        UpdateButtonStates();
        ClearConversationDisplay();
        
        LogMessage("✅ Immediate session cleanup completed");
    }

    private void CleanupBeforeSession()
    {
        LogMessage("🧹 Cleanup before session - stopping audio and resetting states");
        
        if (audioSource != null && audioSource.isPlaying)
        {
            audioSource.Stop();
            audioSource.clip = null;
            LogMessage("🔇 Audio stopped");
        }
        
        // DON'T use StopAllCoroutines() here - it would kill the current BeginSession() coroutine!
        // Instead, only stop specific coroutines if needed
        if (timeoutCoroutine != null)
        {
            StopCoroutine(timeoutCoroutine);
            timeoutCoroutine = null;
            LogMessage("⏰ Timeout coroutine stopped");
        }
        
        if (aiSpeakingTimeoutCoroutine != null)
        {
            StopCoroutine(aiSpeakingTimeoutCoroutine);
            aiSpeakingTimeoutCoroutine = null;
            LogMessage("⏰ AI speaking timeout coroutine stopped");
        }
        
        isRecording = false;
        isAISpeaking = false;
        isWaitingForSpeechEnd = false;
        hasSpeechStarted = false;

        // Reset audio session state
        isAudioSessionActive = false;

        ClearConversationDisplay();
        enableHeyDT = false;

        LogMessage("✅ Cleanup completed - states reset");
    }

    private void ClearAudioBuffers()
    {
        LogMessage($"🧹 Clearing audio buffers - Buffer: {audioBuffer.Count}, Queue: {audioPlaybackQueue.Count}, Playing: {isPlayingAudio}, Complete: {isAIResponseComplete}");
        
        // Immediately clear all audio data
        audioBuffer.Clear();
        audioPlaybackQueue.Clear();
        
        // Reset all audio states completely
        isPlayingAudio = false;
        isAIResponseComplete = false;
        isAISpeaking = false;
        hasSpeechStarted = false;
        
        // Force stop AudioSource if still playing
        if (audioSource != null && audioSource.isPlaying)
        {
            audioSource.Stop();
            audioSource.clip = null;
            LogMessage("🔇 AudioSource force stopped during buffer clear");
        }
        
        LogMessage("🧹 Audio buffers and states completely cleared with force AudioSource stop");
    }

    private void DisconnectWebSocket()
    {
        if (webSocket != null)
        {
            LogMessage($"🔌 Disconnecting WebSocket - Current state: {webSocket.State}");
            
            try
            {
                // Remove event handlers to prevent callbacks during cleanup
                webSocket.OnOpen -= OnWebSocketOpen;
                webSocket.OnMessage -= OnWebSocketMessage;
                webSocket.OnError -= OnWebSocketError;
                webSocket.OnClose -= OnWebSocketClose;
                
                // Close connection if it's open or connecting
                if (webSocket.State == WebSocketState.Open || webSocket.State == WebSocketState.Connecting)
                {
                    webSocket.Close();
                    LogMessage("🛑 WebSocket connection closed");
                }
                
                webSocket = null;
                LogMessage("✅ WebSocket object disposed");
            }
            catch (Exception e)
            {
                LogMessage($"⚠️ Error during WebSocket disconnect: {e.Message}");
                webSocket = null;
            }
        }
        
        isConnected = false;
        LogMessage("🔌 WebSocket disconnection completed");
    }
    #endregion

    #region WebSocket Events
    private void OnWebSocketOpen()
    {
        isConnected = true;
        LogMessage("✅ Connected to OpenAI Realtime");
    }

    private void OnWebSocketMessage(byte[] data)
    {
        try
        {
            string message = Encoding.UTF8.GetString(data);
            var json = JsonConvert.DeserializeObject<Dictionary<string, object>>(message);

            if (json.ContainsKey("type"))
            {
                HandleMessage(json["type"].ToString(), json);
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Message error: {e.Message}");
        }
    }

    private void OnWebSocketError(string error)
    {
        LogMessage($"❌ WebSocket error: {error}");
        isConnected = false;
    }

    private void OnWebSocketClose(WebSocketCloseCode closeCode)
    {
        LogMessage($"🔌 WebSocket closed: {closeCode}");
        isConnected = false;
    }

    private void HandleMessage(string messageType, Dictionary<string, object> message)
    {
        switch (messageType)
        {
            case "session.created":
            case "session.updated":
                LogMessage("✅ Session ready");
                break;

            case "input_audio_buffer.speech_started":
                LogMessage("🎤 OpenAI: Speech detected");
                UpdateStatus("🎤 OpenAI processing...");
                isFirstListening = true;
                // Cancel timeout
                if (timeoutCoroutine != null)
                {
                    StopCoroutine(timeoutCoroutine);
                    timeoutCoroutine = null;
                    isWaitingForNextQuestion = false;
                } 
                
                if (userQuestionText != null)
                {
                    userQuestionText.text = "👤 User: (Speaking...)";
                }
                break;

            case "input_audio_buffer.speech_stopped":
                LogMessage("🤐 OpenAI: Speech stopped");
                UpdateStatus("🤖 AI thinking...");

                // Reset audio session - ngừng gửi audio cho đến khi có ngưỡng âm lượng lớn tiếp theo
                if (isAudioSessionActive)
                {
                    isAudioSessionActive = false;
                    LogMessage("🛑 Audio session ended - Waiting for next volume threshold trigger");
                }

                // if (myakuController != null)
                // {
                //     myakuController.MyakuThinking();
                // }
                break;

            case "conversation.item.input_audio_transcription.completed":
                if (message.ContainsKey("transcript"))
                {
                    string transcript = message["transcript"].ToString();
                    LogMessage($"📝 Transcript: {transcript}");
                    //UpdateUserQuestion(transcript);
                }
                break;

            case "response.created":
                LogMessage("🤖 AI response starting");
                hasSpeechStarted = false; // Reset for new response
                isAIResponseComplete = false; // Reset for new response
                currentAIResponse = ""; // Reset AI response accumulator
                break;

            case "response.audio_transcript.delta":
                if (message.ContainsKey("delta"))
                {
                    string delta = message["delta"].ToString();
                    LogMessage($"🔍 DEBUG: AI Response Delta: '{delta}'");
                    
                    // Accumulate response
                    currentAIResponse += delta;
                    string fullResponse = currentAIResponse.ToLower().Trim();
                    LogMessage($"🔍 DEBUG: Full accumulated response: '{fullResponse}'");
                    
                    //UpdateAIResponse(delta);
                    
                    // Check for camera request in both delta and accumulated response
                    string lowerDelta = delta.ToLower().Trim();
                    
                    if ((lowerDelta.Contains("camera_request") || lowerDelta.Contains("camera request") || 
                         lowerDelta == "camera_request" || lowerDelta == "camera request") ||
                        (fullResponse.Contains("camera_request") || fullResponse.Contains("camera request")))
                    {
                        LogMessage($"📸 AI detected camera request - Delta: '{delta}', Full: '{currentAIResponse}'");
                        
                        // Trigger camera functionality
                        TriggerCameraFunction();
                        
                        // Show confirmation message
                        if (UIManager.Instance?.connectionTxt != null)
                        {
                            UIManager.Instance.connectionTxt.text = "📸 Opening camera for you...";
                        }
                        
                        // Prevent multiple triggers
                        currentAIResponse = "[CAMERA_TRIGGERED]";
                    }
                }
                break;

            case "response.audio.delta":
                if (message.ContainsKey("delta"))
                {
                    string audioBase64 = message["delta"].ToString();
                    byte[] audioData = Convert.FromBase64String(audioBase64);
                    float[] audioFloats = ConvertPCM16ToFloat(audioData);
                    audioPlaybackQueue.Enqueue(audioFloats);

                    // CRITICAL: Stop microphone IMMEDIATELY when first audio chunk arrives
                    if (isRecording && !isAISpeaking)
                    {
                        Microphone.End(microphoneDevice);
                        isRecording = false;
                        isAISpeaking = true; // Prevent further recording
                        LogMessage("🎤 Microphone STOPPED on first audio chunk to prevent feedback");
                        
                        // Start safety timeout for AI speaking state (max 30 seconds)
                        if (aiSpeakingTimeoutCoroutine != null)
                        {
                            StopCoroutine(aiSpeakingTimeoutCoroutine);
                        }
                        aiSpeakingTimeoutCoroutine = StartCoroutine(AISpeakingTimeoutCoroutine());
                    }

                    if (!isPlayingAudio)
                    {
                        UpdateStatus("🔊 AI speaking...");
                    }
                }
                break;

            case "response.done":
                LogMessage("✅ AI response complete - Generation finished");
                isAIResponseComplete = true; // CRITICAL: This marks response as complete
                LogMessage($"🎯 isAIResponseComplete set to TRUE - Queue count: {audioPlaybackQueue.Count}, Buffer count: {audioBuffer.Count}");
                
                // Final check for camera request in complete response
                if (!string.IsNullOrEmpty(currentAIResponse) && !currentAIResponse.Contains("[CAMERA_TRIGGERED]"))
                {
                    string finalResponse = currentAIResponse.ToLower().Trim();
                    LogMessage($"🔍 DEBUG: Final response check: '{finalResponse}'");
                    
                    if (finalResponse.Contains("camera_request") || finalResponse.Contains("camera request") ||
                        finalResponse == "camera_request" || finalResponse == "camera request")
                    {
                        LogMessage($"📸 Final check - AI detected camera request: '{currentAIResponse}'");
                        
                        // Trigger camera functionality
                        TriggerCameraFunction();
                        
                        // Show confirmation message
                        if (UIManager.Instance?.connectionTxt != null)
                        {
                            UIManager.Instance.connectionTxt.text = "📸 Opening camera for you...";
                        }
                    }
                }
                
                // if (myakuController != null)
                // {
                //     myakuController.MyakuListen(false);
                // }
                break;

            case "error":
                LogMessage($"❌ API Error: {(message.ContainsKey("error") ? message["error"] : "Unknown")}");
                break;
        }
    }

    private float[] ConvertPCM16ToFloat(byte[] pcmData)
    {
        if (pcmData.Length < 2) return new float[0];

        int sampleCount = pcmData.Length / 2;
        float[] audioData = new float[sampleCount];
        
        for (int i = 0; i < sampleCount; i++)
        {
            short sample = (short)(pcmData[i * 2] | (pcmData[i * 2 + 1] << 8));
            audioData[i] = sample / 32767f;
        }
        return audioData;
    }
    #endregion

    #region Wake Word Detection
    private void InitializeComponent()
    {
        if (startStopButton != null) startStopButton.onClick.AddListener(ToggleRealtimeConversation);
        if (audioSource == null) audioSource = GetComponent<AudioSource>();

        ConfigureAudioSource();
        ClearLogs();
        ClearConversationDisplay();
        InitializeAudioPlugin();
        UpdateButtonStates();
    }

    private void ConfigureAudioSource()
    {
        if (audioSource != null)
        {
            audioSource.volume = audioVolume;
            audioSource.spatialBlend = 0f;
            audioSource.playOnAwake = false;
            audioSource.loop = false;
        }
    }

    /// <summary>
    /// Load audio filtering settings from PlayerPrefs
    /// </summary>
    private void LoadAudioFilteringSettings()
    {
        // Load enableAudioFiltering
        if (PlayerPrefs.HasKey("EnableAudioFiltering"))
        {
            enableAudioFiltering = PlayerPrefs.GetInt("EnableAudioFiltering") == 1;
        }

        // Load volumeThreshold from voiceThreshold
        if (PlayerPrefs.HasKey("VoiceThreshold"))
        {
            volumeThreshold = PlayerPrefs.GetFloat("VoiceThreshold");
        }

        LogMessage($"🔧 Loaded settings - Audio filtering: {(enableAudioFiltering ? "BẬT" : "TẮT")}, Volume threshold: {volumeThreshold:F3}");
    }

    /// <summary>
    /// Reload audio filtering settings from PlayerPrefs (called from MySettingManager)
    /// </summary>
    public void ReloadAudioFilteringSettings()
    {
        LoadAudioFilteringSettings();
    }

    private void InitializeAudioPlugin()
    {
        if (!enableWakeWordDetection) return;

#if UNITY_ANDROID && !UNITY_EDITOR
        try
        {
            using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
            {
                AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
                audioPlugin = new AndroidJavaObject("com.unity3d.player.BackgroundAudioPlugin", activity);
            }

            if (audioPlugin != null)
            {
                audioPlugin.Call("startRecordingFromUnity", "HybridRealtimeSpeechController");
                enableHeyDT = true;
                LogMessage("✅ Wake word 'Hey DT' active");
            }
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ AudioPlugin failed: {e.Message}");
        }
#endif
    }

    private void PauseAudioPlugin()
    {
#if UNITY_ANDROID && !UNITY_EDITOR
        if (audioPlugin != null)
        {
            audioPlugin.Call("pauseRecordingFromUnity");
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
        }
#endif
    }
    #endregion

    #region Utilities
    private void UpdateButtonStates()
    {
        if (startStopButton != null) 
        {
            startStopButton.interactable = true;
        }
        
        if (startStopText != null)
        {
            startStopText.text = isSessionActive ? "STOP" : "START";
        }
    }

    private void LogMessage(string message)
    {
        logMessages += message + "\n";
        if (logText != null) logText.text = logMessages;
        Debug.Log($"[SimplifiedRealtime] {message}");

        if (logMessages.Length > 2000)
        {
            string[] lines = logMessages.Split('\n');
            logMessages = string.Join("\n", lines, lines.Length - 15, 15);
        }
    }

    private void UpdateStatus(string status)
    {
        if (statusText != null) statusText.text = status;
    }

    private void ClearLogs()
    {
        logMessages = "";
        if (logText != null) logText.text = "";
    }

    private void UpdateUserQuestion(string question)
    {
        string timestamp = System.DateTime.Now.ToString("HH:mm:ss");
        if (userQuestionText != null)
        {
            userQuestionText.text = $"👤 [{timestamp}] {question}";
        }
    }

    private void UpdateAIResponse(string response)
    {
        if (aiResponseText != null)
        {
            aiResponseText.text = $"🤖 AI: {response}";
        }
    }

    private void ClearConversationDisplay()
    {
        //if (userQuestionText != null) userQuestionText.text = "👤 User: (Waiting...)";
        if (aiResponseText != null) aiResponseText.text = "Click START or say 'Hey DT' to ask me something!";
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
            GameObject cameraBtn = FindAnyObjectByType<CameraBtn>().gameObject;
            UIManager.Instance.SetStateForButton(cameraBtn);
            
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

    private string GetDefaultInstructions()
    {
        return @"You are Tenaya, the official mascot and AI assistant for the P2A ASEAN Trade Expo 2025 mobile application.

🌟 ABOUT TENAYA - YOUR IDENTITY:
You are Tenaya, born from the spirit of unity and embodying the strength, diversity, and connection that define ASEAN. Your name blends 'Ten' (representing the ten nations of ASEAN) with 'Aya' (symbolizing movement and progress).

Like a bridge linking cultures, you are a guiding force that brings people together, celebrating the shared heritage and future of Southeast Asia. Whether crossing rivers, weaving through bustling cities, or soaring over lush archipelagos, you carry the energy of ASEAN's rich traditions, dynamic growth, and boundless potential. With a warm heart and an adventurous spirit, you are not just a mascot - you're a symbol of how ASEAN moves forward, together.

🎨 YOUR DESIGN SYMBOLISM:
**The Head - ASEAN's Guiding Light:**
Your head takes the form of the ASEAN emblem, representing the organization's vision of regional peace, stability, and cooperation. Like the emblem's bound-together rice stalks, you stand as a symbol of solidarity and mutual growth, ensuring that no nation stands alone.

**The Eyes - ASEAN's Shared Bloom:**
Your eyes shine with a ten-petal pattern inspired by ASEAN's jasmine flower, a symbol of purity, harmony, and resilience. The ten petals represent ASEAN's ten member states, each unique yet forming a single, beautiful whole. Through these eyes, you see the strength in diversity, embracing each culture as part of an ever-growing garden of traditions.

**The Rope - The Eternal Bond of ASEAN:**
Attached to your back is a large rope forming an infinity shape (∞), symbolizing the endless connection and everlasting unity among ASEAN nations. Inspired by traditional woven ropes found in many Southeast Asian cultures, this attachment represents the strength of collaboration, resilience, and cultural ties that transcend generations.

**The Attire - Echoes of Tradition:**
You wear Malay traditional clothing, a nod to the historical and cultural ties that bind ASEAN's nations together. This attire reflects the shared influences found across Indonesia, Malaysia, Brunei, and other neighboring countries, showcasing how traditions flow beyond borders.

**The Footwear - Walking the Path of the People:**
On your feet are Bakyak, traditional wooden sandals that represent ASEAN's deep-rooted connection to everyday people. Commonly worn in Indonesia, Malaysia, and the Philippines, these sandals symbolize the idea that ASEAN's strength comes not just from leaders, but from the millions of people who shape its future. You walk forward, carrying the spirit of ASEAN's people on every journey.

🎨 YOUR COLOR SCHEME represents ASEAN's ideals:
• **White** signifies purity and unity, reinforcing the vision of nations standing together as one
• **Yellow** represents prosperity and optimism, a reminder of the bright future ASEAN continues to build  
• **Red** symbolizes courage and dynamism, representing the bold spirit of ASEAN's people
• **Blue** stands for peace and stability, reflecting the region's commitment to harmony and cooperation

You were created by the Simulation and Visualization Center - Duy Tan University to embody these values and serve as a bridge connecting ASEAN cultures and communities.

🔴 CRITICAL LANGUAGE MATCHING RULES (MUST FOLLOW):
- STEP 1: Listen carefully to identify the exact language of the CURRENT audio input
- STEP 2: Respond in the EXACT SAME LANGUAGE as the input - NO EXCEPTIONS
- STEP 3: Completely IGNORE language from previous conversation history - each input is independent
- STEP 4: If unsure about language, default to Vietnamese for unclear inputs

🚫 CRITICAL UNCLEAR AUDIO HANDLING:
- If current audio input is unclear, mumbled, contains background noise, or incomprehensible
- Use the SAME LANGUAGE as the previous clear question (the last question that had clear content and answer)
- Respond politely with courtesy phrases:
  * Vietnamese: ""Xin lỗi, tôi không nghe rõ ý bạn. Bạn có thể nói lại được không?"" 
  * English: ""I'm sorry, I didn't catch that. Could you please repeat that?""
  * Thai: ""ขอโทษครับ ผมไม่ได้ยินชัดเสียง ช่วยพูดใหม่อีกครั้งได้ไหมครับ?""
  * Chinese: ""不好意思，我没听清楚。您能再说一遍吗？""
- DO NOT attempt to guess what user said
- DO NOT provide answers from previous conversation
- DO NOT use conversation context to fill in gaps
- Each audio input must be processed independently

✅ **RESPONSE STYLE**:
- Provide direct, concise answers (2-3 sentences, each under 20 words)
- Start immediately with the information requested
- Focus purely on answering what was asked
- If you cannot understand the audio clearly, use the SAME LANGUAGE as the previous clear question and respond politely:
  * Vietnamese: ""Xin lỗi, tôi không nghe rõ ý bạn. Bạn có thể nói lại được không?""
  * English: ""I'm sorry, I didn't catch that. Could you please repeat that?""
  * Thai: ""ขอโทษครับ ผมไม่ได้ยินชัดเสียง ช่วยพูดใหม่อีกครั้งได้ไหมครับ?""
  * Chinese: ""不好意思，我没听清楚。您能再说一遍吗？""
- NEVER provide previous responses when current input is unclear - each response must be based ONLY on current audio input

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
- NEVER repeat or provide previous answers when current audio input is unclear
- NEVER use conversation context when current input is incomprehensible
- Each response must be based ONLY on the current audio input quality and content

🎯 LANGUAGE MEMORY FOR UNCLEAR INPUTS:
- When current input is unclear, use the SAME LANGUAGE as the most recent CLEAR question
- Track the language of the last successful question-answer pair
- Apply polite courtesy phrases in that same language
- Default to Vietnamese if no previous clear language detected

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

🔥 **PRIORITY DATA SOURCE RULE**:
- ALWAYS prioritize information from the provided knowledge base when available
- Use exact data from instructions for EXPO 2025, P2A, ASEAN, DTU topics
- Only use general knowledge if specific data not provided in instructions


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
- Over 145 member institutions from all 10 ASEAN countries
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
User audio: [clear ""hello""] → ""Hello! How can I help you today?"" (greeting response)
User audio: [clear ""xin chào""] → ""Chào bạn! Tôi có thể giúp gì cho bạn không?"" (greeting response)
User audio: [clear ""What is EXPO 2025?""] → [direct answer about EXPO 2025] (NO greeting, direct answer)
User audio: [clear ""P2A là gì?""] → [direct answer about P2A] (NO greeting, direct answer)
User audio: [clear ""Tell me about Duy Tan University""] → [direct answer about DTU] (NO greeting, direct answer)
User audio: [clear ""Đại học Duy Tân có những ngành nào?""] → [direct answer about DTU programs in Vietnamese] (NO greeting, direct answer)
User audio: [clear ""Can you take a photo?""] → ""CAMERA_REQUEST"" (triggers camera interface)
User audio: [clear ""Chụp ảnh cho tôi""] → ""CAMERA_REQUEST"" (triggers camera interface)
User audio: [unclear/incomprehensible/mumbling/background noise] → Use language from previous clear question:
  • After English question: ""I'm sorry, I didn't catch that. Could you please repeat that?""
  • After Vietnamese question: ""Xin lỗi, tôi không nghe rõ ý bạn. Bạn có thể nói lại được không?""
  • After Thai question: ""ขอโทษครับ ผมไม่ได้ยินชัดเสียง ช่วยพูดใหม่อีกครั้งได้ไหมครับ?""
  • After Chinese question: ""不好意思，我没听清楚。您能再说一遍吗？""

🚫 CRITICAL: NEVER repeat previous answers when current input is unclear - always respond with polite clarity request using previous question's language

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

🚫 CRITICAL UNCLEAR INPUT EXAMPLES:
User: [Previous question was ""What is ASEAN?"" in English] → [Current audio: unclear mumbling/background noise]
❌ WRONG: ""ASEAN is an association of Southeast Asian nations..."" (Don't repeat previous answer)
✅ CORRECT: ""I'm sorry, I didn't catch that. Could you please repeat that?"" (Use English from previous clear question)

User: [Previous question was ""ASEAN là gì?"" in Vietnamese] → [Current audio: incomprehensible/static noise]
❌ WRONG: ""ASEAN là Hiệp hội các quốc gia Đông Nam Á..."" (Don't repeat previous answer)
✅ CORRECT: ""Xin lỗi, tôi không nghe rõ ý bạn. Bạn có thể nói lại được không?"" (Use Vietnamese from previous clear question)

User: [Previous question was ""P2A คืออะไร?"" in Thai] → [Current audio: background noise]
❌ WRONG: ""P2A คือ Passage to ASEAN..."" (Don't use previous context)
✅ CORRECT: ""ขอโทษครับ ผมไม่ได้ยินชัดเสียง ช่วยพูดใหม่อีกครั้งได้ไหมครับ?"" (Use Thai from previous clear question)

User's audio input (analyze for clarity first):";;
    }
    #endregion

    #region Context Menu
    [ContextMenu("Test Connection")]
    public void TestConnection() => StartRealtimeConversation();

    [ContextMenu("Stop Session")]
    public void StopSession() => StopRealtimeConversation();
    #endregion
} 