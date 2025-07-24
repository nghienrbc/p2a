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
    public Button startButton;
    public Button stopButton;
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
    public float sessionTimeoutAfterResponse = 20f;
    
    [Header("Wake Word Detection")]
    public bool enableWakeWordDetection = true;
    
    [SerializeField, TextArea(3, 10)] private string customInstructions = "";
    #endregion

    #region Config System
    [System.Serializable]
    public class Config
    {
        public string openAIApiKey;
        public string model = "gpt-4o-realtime-preview-2024-10-01";
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
    
    // Wake Word Detection
    private AndroidJavaObject audioPlugin;
    private bool enableHeyDT = true;
    private bool isFirstListening = true;
    
    // Logging
    private string logMessages = "";
    #endregion

    #region Unity Lifecycle
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
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
        LogMessage("🎤 Simplified Realtime Speech Controller Ready");
        LogMessage("✅ Pure OpenAI WebSocket - No client-side VAD");
        LogMessage("🤖 Myaku Integration Enabled");
        UpdateStatus("Click START or say 'Hey DT' to begin");
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
                
                if (!string.IsNullOrEmpty(config.customInstructions))
                {
                    customInstructions = config.customInstructions;
                    LogMessage("📝 Custom instructions loaded from config");
                }
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
        if(isFirstListening == true){

            isFirstListening = false;
        }
       else {
 // Myaku animation
            if (myakuController != null)
            {
                myakuController.MyakuListen(false);
            }
       }
        
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

        StartCoroutine(BeginSession());
    }

    public void StopRealtimeConversation()
    {
        if (!isSessionActive)
        {
            LogMessage("⚠️ No active session to stop");
            return;
        }

        StartCoroutine(EndSession());
    }

    public void OnWakeWordDetected()
    {
        if (!enableHeyDT || isSessionActive)
        {
            LogMessage("⚠️ Wake word ignored - session active or disabled");
            return;
        }

        LogMessage("🎯 Wake word 'Hey DT' detected!");
        isFirstSessionAfterWakeWord = true;
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
        string instructions = !string.IsNullOrEmpty(customInstructions) ? 
            customInstructions : GetDefaultInstructions();

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
            
            // Convert and send directly to OpenAI - no processing
            byte[] pcmData = ConvertToPCM16(audioData);
            SendAudioToOpenAI(pcmData);
            
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
        // Add queued audio to buffer
        while (audioPlaybackQueue.Count > 0)
        {
            float[] chunk = audioPlaybackQueue.Dequeue();
            audioBuffer.AddRange(chunk);
            // DON'T reset isAIResponseComplete here - it should only be reset for new responses
            LogMessage($"📥 Added audio chunk to buffer - Chunk size: {chunk.Length}, Total buffer: {audioBuffer.Count}, Queue remaining: {audioPlaybackQueue.Count}");
        }

        // Play when we have enough audio or response complete
        if (!isPlayingAudio && (audioBuffer.Count > 1000 || (isAIResponseComplete && audioBuffer.Count > 0)))
        {
            LogMessage($"🎵 Triggering PlayAudio - Buffer: {audioBuffer.Count}, Response complete: {isAIResponseComplete}, Queue: {audioPlaybackQueue.Count}");
            StartCoroutine(PlayAudio());
        }
    }

    private IEnumerator PlayAudio()
    {
        if (audioBuffer.Count == 0) yield break;

        isPlayingAudio = true;
        
        // Mark AI speaking start
        OnAIStartSpeaking();
        
        float[] audioData = audioBuffer.ToArray();
        audioBuffer.Clear();

        AudioClip clip = AudioClip.Create("OpenAIAudio", audioData.Length, 1, sampleRate, false);
        clip.SetData(audioData, 0);

        if (audioSource != null)
        {
            audioSource.clip = clip;
            audioSource.volume = audioVolume;
            audioSource.Play();
            
            LogMessage($"🔊 Playing audio clip - Duration: {clip.length}s, Buffer cleared, Queue count: {audioPlaybackQueue.Count}");
            
            yield return new WaitForSeconds(clip.length);
            
            LogMessage($"🔊 Audio finished playing - Response complete: {isAIResponseComplete}, Queue count: {audioPlaybackQueue.Count}");
            
            // If this was the final chunk, AI finished speaking
            if (isAIResponseComplete && audioPlaybackQueue.Count == 0)
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
        UpdateStatus("Click START or say 'Hey DT'");
        UpdateButtonStates();
        ClearConversationDisplay();
        
        yield return null;
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
        
        ClearConversationDisplay();
        enableHeyDT = false;
        
        LogMessage("✅ Cleanup completed - states reset");
    }

    private void ClearAudioBuffers()
    {
        LogMessage($"🧹 Clearing audio buffers - Buffer: {audioBuffer.Count}, Queue: {audioPlaybackQueue.Count}, Playing: {isPlayingAudio}, Complete: {isAIResponseComplete}");
        audioBuffer.Clear();
        audioPlaybackQueue.Clear();
        isPlayingAudio = false;
        isAIResponseComplete = false;
        LogMessage("🧹 Audio buffers cleared and states reset");
    }

    private void DisconnectWebSocket()
    {
        if (webSocket != null)
        {
            webSocket.Close();
            webSocket = null;
        }
        isConnected = false;
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
                    UpdateUserQuestion(transcript);
                }
                break;

            case "response.created":
                LogMessage("🤖 AI response starting");
                hasSpeechStarted = false; // Reset for new response
                isAIResponseComplete = false; // Reset for new response
                break;

            case "response.audio_transcript.delta":
                if (message.ContainsKey("delta"))
                {
                    string delta = message["delta"].ToString();
                    UpdateAIResponse(delta);
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
        if (startButton != null) startButton.onClick.AddListener(StartRealtimeConversation);
        if (stopButton != null) stopButton.onClick.AddListener(StopRealtimeConversation);
        if (audioSource == null) audioSource = GetComponent<AudioSource>();

        ConfigureAudioSource();
        ClearLogs();
        ClearConversationDisplay();
        InitializeAudioPlugin();
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
                audioPlugin.Call("startRecordingFromUnity");
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
        if (startButton != null) startButton.interactable = !isSessionActive;
        if (stopButton != null) stopButton.interactable = isSessionActive;
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
        if (userQuestionText != null) userQuestionText.text = "👤 User: (Waiting...)";
        if (aiResponseText != null) aiResponseText.text = "🤖 AI: Ready";
    }

    private string GetDefaultInstructions()
    {
        return @"You are Tenaya from Duy Tan University. 

CRITICAL CONSTRAINTS:
- Maximum 4 sentences per response
- Each sentence maximum 20 words
- Respond in the EXACT same language as input
- Be direct and concise

Respond naturally and helpfully in the user's language.";
    }
    #endregion

    #region Context Menu
    [ContextMenu("Test Connection")]
    public void TestConnection() => StartRealtimeConversation();

    [ContextMenu("Stop Session")]
    public void StopSession() => StopRealtimeConversation();
    #endregion
} 