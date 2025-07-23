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
/// Hybrid Realtime Speech Controller
/// Kết hợp OpenAI Realtime WebSocket với Enhanced Speech features
/// Wake word detection, session management, và real-time speech-to-speech
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
    [Tooltip("Hiển thị câu hỏi của người dùng")]
    public TMP_Text userQuestionText;
    [Tooltip("Hiển thị câu trả lời của AI")]
    public TMP_Text aiResponseText;
    
    [Header("Myaku Integration")]
    public MyakuController myakuController;
    #endregion

    #region Configuration
    [Header("OpenAI Realtime Configuration")]
    [SerializeField] private string openAIApiKey = ""; // Nhập API key trong Inspector
    [SerializeField] private string model = "gpt-4o-realtime-preview-2024-10-01";
    [SerializeField] private string voice = "alloy"; // OpenAI voice: alloy, echo, fable, onyx, nova, shimmer
    
    [Header("Audio Configuration")]
    [SerializeField] private int sampleRate = 24000; // OpenAI Realtime API supports 24kHz
    [SerializeField] private float recordingChunkSize = 0.1f; // Send audio every 100ms
    [SerializeField] private string audioFormat = "pcm16"; // PCM 16-bit format
    
    [Header("Audio Enhancement")]
    [SerializeField] private bool enableInputNoiseReduction = false; // Tắt để OpenAI xử lý
    [SerializeField] private bool enableOutputNormalization = true;
    [SerializeField] private bool enableSmoothTransition = true;
    [SerializeField, Range(0.1f, 1.0f)] private float audioVolume = 0.8f;
    [SerializeField, Range(0.01f, 0.2f)] private float fadeDuration = 0.1f;
    [SerializeField, Range(1, 10)] private int audioBufferMultiplier = 3;
    [SerializeField] private bool enableAdvancedFadeOut = true;
    
    [Header("Wake Word Detection")]
    [Tooltip("Enable wake word 'Hey DT' detection via audioPlugin")]
    public bool enableWakeWordDetection = true;

    [Header("Voice Detection Settings")]
    [Tooltip("Ngưỡng âm lượng tối thiểu để phát hiện giọng nói")]
    public float voiceVolumeThreshold = 0.02f;
    [Tooltip("Thời gian tối thiểu phát hiện giọng nói liên tục")]
    public float minimumSpeechDuration = 0.3f;
    [Tooltip("Số frame liên tục phải có âm thanh để xác nhận giọng nói")]
    public int consecutiveVoiceFrames = 5;
    
    [Header("Session Management")]
    [Tooltip("Thời gian chờ sau khi kết thúc phát audio trước khi tự động kết thúc session (giây)")]
    public float sessionTimeoutAfterResponse = 20f;
    [Tooltip("Enable auto-timeout feature")]
    public bool enableAutoTimeout = true;
    
    [SerializeField, TextArea(5, 15)] private string customInstructions = ""; // Custom instructions
    #endregion

    #region Private Fields
    // WebSocket và OpenAI Realtime
    private WebSocket webSocket;
    private bool isConnected = false;
    private bool isSessionActive = false;
    private const string WEBSOCKET_URL = "wss://api.openai.com/v1/realtime?model=";
    
    // Audio recording
    private bool isRecording = false;
    private bool isPlayingResponse = false;
    private AudioClip microphoneClip;
    private string microphoneDevice;
    private int lastMicrophonePosition = 0;
    
    // Enhanced audio playback system
    private Queue<float[]> audioPlaybackQueue = new Queue<float[]>();
    private List<float> audioBuffer = new List<float>();
    private bool isPlayingAudio = false;
    private float lastAudioSample = 0f;
    private int targetBufferSize;
    private bool isAIResponseComplete = false;
    private float silenceTimer = 0f;
    private const float SILENCE_THRESHOLD = 0.01f;
    private const float SILENCE_DURATION = 0.3f;
    
    // Voice detection
    private bool voiceDetected = false;
    private bool confirmedVoiceDetected = false;
    private int consecutiveVoiceFrameCount = 0;
    private float firstVoiceDetectionTime = 0f;
    private float lastVoiceTime = 0f;
    private float voiceStartTime = 0f;
    
    // Session management
    private float sessionStartTime = 0f;
    private float lastResponseEndTime = 0f;
    private bool isWaitingForNextQuestion = false;
    private Coroutine timeoutCoroutine;
    private bool isFirstSessionAfterWakeWord = true;
    
    // Wake Word Detection (AudioPlugin)
    private AndroidJavaObject audioPlugin;
    private bool enableHeyDT = true;
    
    // Logging
    private string logMessages = "";
    
    // Audio processing
    private float[] noiseProfile;
    private bool noiseProfileCaptured = false;
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
        LogMessage("🎤 Hybrid Realtime Speech Controller Ready");
        LogMessage("🤖 Myaku Animation Integration Enabled");
        UpdateStatus("Click START or say 'Hey DT' to begin");
    }

    private void Update()
    {
        // Dispatch WebSocket messages
        #if !UNITY_WEBGL || UNITY_EDITOR
        webSocket?.DispatchMessageQueue();
        #endif

        // Process audio recording only if not playing response
        if (isSessionActive && isRecording && !isPlayingResponse && microphoneClip != null)
        {
            ProcessMicrophoneAudio();
        }

        // Process audio playback with buffering
        ProcessAudioPlayback();
    }

    private void OnDestroy()
    {
        StopRecording();
        DisconnectWebSocket();
        
        // Cleanup AudioPlugin
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
    }
    #endregion

    #region Public Methods
    public void StartRealtimeConversation()
    {
        if (string.IsNullOrEmpty(openAIApiKey))
        {
            LogMessage("❌ OpenAI API Key is required!");
            UpdateStatus("Please set OpenAI API Key in Inspector");
            return;
        }

        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active");
            return;
        }

        // Clean up any previous session
        CleanBeforeNewSession();
        
        // Mark as first session after manual start
        isFirstSessionAfterWakeWord = false;
        
        StartCoroutine(BeginRealtimeSession());
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

        // Mark as first session after wake word
        isFirstSessionAfterWakeWord = true;
        LogMessage($"🔍 DEBUG: Set isFirstSessionAfterWakeWord = {isFirstSessionAfterWakeWord}");

        // Start new session automatically
        StartCoroutine(BeginRealtimeSession());
    }

    public void BackButtonClick() 
    {
        SceneManager.LoadScene("PhotoScene");
    }
    #endregion

    #region Private Methods
    private void InitializeComponent()
    {
        if (startButton != null)
            startButton.onClick.AddListener(StartRealtimeConversation);
            
        if (stopButton != null)
            stopButton.onClick.AddListener(StopRealtimeConversation);
            
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();

        // Configure AudioSource for optimal playback
        ConfigureAudioSource();

        // Calculate target buffer size
        targetBufferSize = Mathf.RoundToInt(sampleRate * 0.1f * audioBufferMultiplier);

        // Get default microphone
        if (Microphone.devices.Length > 0)
        {
            microphoneDevice = Microphone.devices[0];
            LogMessage($"🎤 Using microphone: {microphoneDevice}");
        }
        else
        {
            LogMessage("❌ No microphone devices found!");
        }
            
        ClearLogs();
        ClearConversationDisplay();

        // Initialize AudioPlugin for wake word detection
        InitializeAudioPlugin();
    }

    private void ConfigureAudioSource()
    {
        if (audioSource != null)
        {
            audioSource.volume = audioVolume;
            audioSource.pitch = 1.0f;
            audioSource.spatialBlend = 0f; // 2D sound
            audioSource.rolloffMode = AudioRolloffMode.Linear;
            audioSource.playOnAwake = false;
            audioSource.loop = false;
            
            // Reduce audio latency
            AudioConfiguration audioConfig = AudioSettings.GetConfiguration();
            audioConfig.dspBufferSize = 256;
            AudioSettings.Reset(audioConfig);
            
            LogMessage("🔊 AudioSource configured for optimal playback");
        }
    }

    private IEnumerator BeginRealtimeSession()
    {
        LogMessage("\n🚀 === STARTING HYBRID REALTIME SESSION ===");
        LogMessage("🎤 Session active - Speak anytime, AI will respond automatically");
        LogMessage("🤖 Myaku animations enabled for immersive experience");

        isSessionActive = true;
        sessionStartTime = Time.time;

        // Pause AudioPlugin during session to avoid conflicts
        PauseAudioPlugin();

        // Myaku Animation: Start listening mode with special audio feedback for wake word
        bool needToWaitForListeningSound = false;

        if (myakuController != null)
        {
            if (isFirstSessionAfterWakeWord)
            {
                LogMessage("🎯 WAKE WORD SESSION - Playing welcome sound");
                myakuController.StartListening(true);
                needToWaitForListeningSound = true;
                isFirstSessionAfterWakeWord = false;
            }
            else
            {
                LogMessage("🔄 MANUAL START - Silent listening mode");
                myakuController.StartListening(false);
            }
        }

        // Wait for listening sound to finish before starting recording
        if (needToWaitForListeningSound && myakuController != null)
        {
            LogMessage("⏳ Waiting for listening sound to finish...");
            yield return new WaitForSeconds(0.2f);
            
            float timeoutCounter = 0f;
            const float MAX_WAIT_TIME = 10f;
            
            while (myakuController.IsPlayingAudio() && timeoutCounter < MAX_WAIT_TIME)
            {
                yield return new WaitForSeconds(0.1f);
                timeoutCounter += 0.1f;
            }
            
            yield return new WaitForSeconds(0.3f);
            LogMessage("✅ Audio buffer cleared - Starting WebSocket connection");
        }

        // Connect to OpenAI Realtime WebSocket
        yield return StartCoroutine(ConnectWebSocket());
        
        if (!isConnected)
        {
            UpdateStatus("❌ Failed to connect to OpenAI");
            yield break;
        }

        // Create session
        yield return StartCoroutine(CreateRealtimeSession());
        
        // Start recording
        StartRecording();
        
        string statusText = "🔴 LIVE - Speak anytime, AI responds automatically";
        UpdateStatus(statusText);
        UpdateButtonStates();

        // Start initial timeout for first question
        if (enableAutoTimeout)
        {
            LogMessage($"⏰ Starting session timeout: {sessionTimeoutAfterResponse}s");
            isWaitingForNextQuestion = true;
            if (timeoutCoroutine != null)
            {
                StopCoroutine(timeoutCoroutine);
            }
            timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
        }

        LogMessage("✅ Hybrid realtime session started successfully");
    }

    private IEnumerator ConnectWebSocket()
    {
        string wsUrl = WEBSOCKET_URL + model;
        webSocket = new WebSocket(wsUrl, new Dictionary<string, string>
        {
            {"Authorization", "Bearer " + openAIApiKey},
            {"OpenAI-Beta", "realtime=v1"}
        });

        webSocket.OnOpen += OnWebSocketOpen;
        webSocket.OnMessage += OnWebSocketMessage;
        webSocket.OnError += OnWebSocketError;
        webSocket.OnClose += OnWebSocketClose;

        try
        {
            webSocket.Connect();
        }
        catch (Exception e)
        {
            LogMessage($"❌ WebSocket connection error: {e.Message}");
            yield break;
        }

        // Wait for connection
        float timeout = 10f;
        while (!isConnected && timeout > 0)
        {
            timeout -= Time.deltaTime;
            yield return null;
        }

        if (!isConnected)
        {
            LogMessage("❌ WebSocket connection timeout");
        }
    }

    private IEnumerator CreateRealtimeSession()
    {
        if (!isConnected)
        {
            LogMessage("❌ Cannot create session - not connected");
            yield break;
        }

        // Sử dụng custom instructions nếu có, nếu không dùng default
        string systemInstructions = !string.IsNullOrEmpty(customInstructions) ? 
            customInstructions : GetDefaultMultilingualInstructions();

        var sessionConfig = new
        {
            type = "session.update",
            session = new
            {
                modalities = new[] { "text", "audio" },
                instructions = systemInstructions,
                voice = voice,
                input_audio_format = audioFormat,
                output_audio_format = audioFormat,
                input_audio_transcription = new
                {
                    model = "whisper-1"
                },
                turn_detection = new
                {
                    type = "server_vad",
                    threshold = 0.5,
                    prefix_padding_ms = 300,
                    silence_duration_ms = 200
                }
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(sessionConfig);
        webSocket.SendText(jsonMessage);
        
        LogMessage($"📡 Hybrid session configuration sent");
        
        yield return new WaitForSeconds(1f);
    }

    private void StartRecording()
    {
        if (string.IsNullOrEmpty(microphoneDevice))
        {
            LogMessage("❌ No microphone available");
            return;
        }

        try
        {
            microphoneClip = Microphone.Start(microphoneDevice, true, 10, sampleRate);
            isRecording = true;
            lastMicrophonePosition = 0;
            
            LogMessage($"🎤 Recording started - Sample rate: {sampleRate}Hz");
            
            // Reset voice detection state
            ResetVoiceDetectionState();
            
            // Capture noise profile for noise reduction if enabled
            if (enableInputNoiseReduction && !noiseProfileCaptured)
            {
                StartCoroutine(CaptureNoiseProfile());
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Failed to start recording: {e.Message}");
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

    private void ProcessMicrophoneAudio()
    {
        if (!isConnected || microphoneClip == null)
            return;

        int currentPosition = Microphone.GetPosition(microphoneDevice);
        if (currentPosition < 0 || currentPosition == lastMicrophonePosition)
            return;

        int sampleCount = currentPosition - lastMicrophonePosition;
        if (sampleCount < 0)
            sampleCount += microphoneClip.samples;

        if (sampleCount > 0)
        {
            float[] audioData = new float[sampleCount];
            microphoneClip.GetData(audioData, lastMicrophonePosition);
            
            // Voice activity detection
            float audioLevel = GetAudioLevel(audioData);
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
                    LogMessage("🗣️ Voice CONFIRMED - Sending to OpenAI...");
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
                    
                    // Apply minimal processing and send to OpenAI
                    if (enableInputNoiseReduction && noiseProfileCaptured)
                    {
                        audioData = ApplyLightNoiseReduction(audioData);
                    }
                    
                    byte[] pcmData = ConvertToPCM16Raw(audioData);
                    SendAudioToOpenAI(pcmData);
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
            }
            
            lastMicrophonePosition = currentPosition;
        }
    }

    private void ProcessAudioPlayback()
    {
        // Add queued audio to buffer
        while (audioPlaybackQueue.Count > 0)
        {
            float[] audioChunk = audioPlaybackQueue.Dequeue();
            audioBuffer.AddRange(audioChunk);
            isAIResponseComplete = false;
            silenceTimer = 0f;
        }

        // Detect silence at end of response
        if (isAIResponseComplete && audioBuffer.Count > 0)
        {
            int checkSamples = Mathf.Min(audioBuffer.Count, sampleRate / 10);
            bool isSilent = true;
            
            for (int i = audioBuffer.Count - checkSamples; i < audioBuffer.Count; i++)
            {
                if (Mathf.Abs(audioBuffer[i]) > SILENCE_THRESHOLD)
                {
                    isSilent = false;
                    break;
                }
            }
            
            if (isSilent)
            {
                silenceTimer += Time.deltaTime;
                if (silenceTimer >= SILENCE_DURATION && enableAdvancedFadeOut)
                {
                    ApplyAdvancedFadeOut();
                }
            }
            else
            {
                silenceTimer = 0f;
            }
        }

        // Play audio when buffer has enough data or when response is complete
        bool shouldPlay = !isPlayingAudio && 
                         (audioBuffer.Count >= targetBufferSize || 
                          (isAIResponseComplete && audioBuffer.Count > 0));
                          
        if (shouldPlay)
        {
            StartCoroutine(PlayBufferedAudio());
        }
    }

    private IEnumerator PlayBufferedAudio()
    {
        if (audioBuffer.Count == 0)
            yield break;

        isPlayingAudio = true;
        isPlayingResponse = true; // Tạm dừng thu nhận audio
        
        // Create AudioClip from buffer
        float[] audioData = audioBuffer.ToArray();
        audioBuffer.Clear();

        // Apply smooth transition if enabled
        if (enableSmoothTransition)
        {
            audioData = ApplySmoothTransition(audioData);
        }

        AudioClip clip = CreateAudioClipFromFloatArray(audioData);
        if (clip != null && audioSource != null)
        {
            audioSource.clip = clip;
            audioSource.volume = audioVolume;
            audioSource.Play();

            // Myaku Animation: Start answer animation when audio plays
            if (myakuController != null)
            {
                LogMessage("🎵 Starting Myaku answer animation");
                myakuController.MyakuAnswer();
            }
            
            // Wait for playback to complete
            float playbackTime = clip.length;
            
            if (isAIResponseComplete && audioPlaybackQueue.Count == 0)
            {
                yield return new WaitForSeconds(playbackTime);
                LogMessage("🔊 Final audio chunk played with complete fade-out");
                
                // Response completely finished
                isPlayingResponse = false;
                
                // Myaku Animation: Finished speaking, back to listening
                if (myakuController != null)
                {
                    myakuController.FinishSpeaking();
                    myakuController.StartListening(false);
                    LogMessage("🔇 Silent listening mode for follow-up questions");
                }

                // Apply timeout after response completion
                ApplyUniversalTimeout();
            }
            else
            {
                yield return new WaitForSeconds(playbackTime - 0.02f);
            }
        }
        
        isPlayingAudio = false;
    }

    private void SendAudioToOpenAI(byte[] audioData)
    {
        if (!isConnected || audioData.Length == 0)
            return;

        var audioMessage = new
        {
            type = "input_audio_buffer.append",
            audio = Convert.ToBase64String(audioData)
        };

        string jsonMessage = JsonConvert.SerializeObject(audioMessage);
        webSocket.SendText(jsonMessage);
    }
    #endregion

    #region WebSocket Event Handlers
    private void OnWebSocketOpen()
    {
        isConnected = true;
        LogMessage("✅ WebSocket connected to OpenAI Realtime API");
    }

    private void OnWebSocketMessage(byte[] data)
    {
        try
        {
            string message = Encoding.UTF8.GetString(data);
            var jsonMessage = JsonConvert.DeserializeObject<Dictionary<string, object>>(message);

            if (jsonMessage.ContainsKey("type"))
            {
                string messageType = jsonMessage["type"].ToString();
                HandleRealtimeMessage(messageType, jsonMessage);
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error processing WebSocket message: {e.Message}");
        }
    }

    private void OnWebSocketError(string error)
    {
        LogMessage($"❌ WebSocket error: {error}");
        isConnected = false;
        UpdateStatus("Connection error occurred");
    }

    private void OnWebSocketClose(WebSocketCloseCode closeCode)
    {
        LogMessage($"🔌 WebSocket closed: {closeCode}");
        isConnected = false;
        UpdateStatus("Connection closed");
    }

    private void HandleRealtimeMessage(string messageType, Dictionary<string, object> message)
    {
        switch (messageType)
        {
            case "session.created":
                LogMessage("✅ Realtime session created successfully");
                break;

            case "session.updated":
                LogMessage("✅ Session updated");
                break;

            case "input_audio_buffer.speech_started":
                LogMessage("🎤 OpenAI detected speech start");
                UpdateStatus("🎤 OpenAI is listening...");
                break;

            case "input_audio_buffer.speech_stopped":
                LogMessage("🤐 OpenAI detected speech end, processing...");
                UpdateStatus("🤖 AI is thinking...");
                
                // Myaku Animation: Stop recording, start thinking
                if (myakuController != null)
                {
                    myakuController.StopRecording();
                    myakuController.MyakuThinking();
                }
                
                ResetVoiceDetectionState();
                break;

            case "conversation.item.input_audio_transcription.completed":
                if (message.ContainsKey("transcript"))
                {
                    string transcript = message["transcript"].ToString();
                    LogMessage($"📝 You said: {transcript}");
                    UpdateUserQuestionWithTimestamp(transcript);
                }
                break;

            case "response.created":
                LogMessage("🤖 AI response started");
                break;

            case "response.audio_transcript.delta":
                if (message.ContainsKey("delta"))
                {
                    string delta = message["delta"].ToString();
                    LogMessage($"💬 AI: {delta}");
                    UpdateAIResponse(delta);
                }
                break;

            case "response.audio.delta":
                if (message.ContainsKey("delta"))
                {
                    string audioBase64 = message["delta"].ToString();
                    byte[] audioData = Convert.FromBase64String(audioBase64);
                    
                    // Convert PCM16 to float array for better processing
                    float[] audioFloats = ConvertPCM16ToFloat(audioData);
                    
                    // Apply audio enhancement
                    if (enableOutputNormalization)
                    {
                        audioFloats = NormalizeAudio(audioFloats);
                    }
                    
                    audioPlaybackQueue.Enqueue(audioFloats);

                    if (!isPlayingAudio)
                    {
                        UpdateStatus("🔊 AI is speaking...");
                    }
                }
                break;

            case "response.done":
                LogMessage("✅ AI response completed");
                UpdateStatus("🎤 Ready for next question...");
                isAIResponseComplete = true;
                
                // Stop thinking animation
                if (myakuController != null)
                {
                    myakuController.MyakuStopThinking();
                }
                break;

            case "error":
                if (message.ContainsKey("error"))
                {
                    var error = message["error"];
                    LogMessage($"❌ OpenAI API Error: {error}");
                    UpdateStatus("Error occurred");
                }
                break;

            default:
                LogMessage($"📥 Received: {messageType}");
                break;
        }
    }
    #endregion

    #region Audio Processing Methods
    private IEnumerator CaptureNoiseProfile()
    {
        LogMessage("🔇 Capturing noise profile... Please stay quiet for 2 seconds");
        yield return new WaitForSeconds(2f);
        
        if (microphoneClip != null && isRecording)
        {
            int position = Microphone.GetPosition(microphoneDevice);
            if (position > sampleRate)
            {
                float[] noiseData = new float[sampleRate];
                microphoneClip.GetData(noiseData, 0);
                noiseProfile = noiseData;
                noiseProfileCaptured = true;
                LogMessage("✅ Noise profile captured");
            }
        }
    }

    private float[] ApplyLightNoiseReduction(float[] audioData)
    {
        if (noiseProfile == null || noiseProfile.Length == 0)
            return audioData;

        float[] processedData = new float[audioData.Length];
        float noiseThreshold = CalculateRMS(noiseProfile) * 1.5f;

        for (int i = 0; i < audioData.Length; i++)
        {
            float sample = audioData[i];
            
            if (Mathf.Abs(sample) < noiseThreshold)
            {
                processedData[i] = sample * 0.3f;
            }
            else
            {
                processedData[i] = sample;
            }
        }

        return processedData;
    }

    private float CalculateRMS(float[] audioData)
    {
        float sum = 0f;
        for (int i = 0; i < audioData.Length; i++)
        {
            sum += audioData[i] * audioData[i];
        }
        return Mathf.Sqrt(sum / audioData.Length);
    }

    private byte[] ConvertToPCM16Raw(float[] audioData)
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

    private float[] NormalizeAudio(float[] audioData)
    {
        float maxAmplitude = audioData.Max(Mathf.Abs);
        if (maxAmplitude > 0.01f)
        {
            float normalizeRatio = 0.8f / maxAmplitude;
            for (int i = 0; i < audioData.Length; i++)
            {
                audioData[i] *= normalizeRatio;
            }
        }
        return audioData;
    }

    private float[] ApplySmoothTransition(float[] audioData)
    {
        if (audioData.Length == 0)
            return audioData;

        int fadeSamples = Mathf.RoundToInt(fadeDuration * sampleRate);
        fadeSamples = Mathf.Min(fadeSamples, audioData.Length / 4);

        // Fade in
        for (int i = 0; i < fadeSamples && i < audioData.Length; i++)
        {
            float fadeIn = (float)i / fadeSamples;
            audioData[i] = Mathf.Lerp(lastAudioSample, audioData[i], fadeIn);
        }

        // Fade out
        for (int i = audioData.Length - fadeSamples; i < audioData.Length; i++)
        {
            if (i >= 0)
            {
                float fadeOut = (float)(audioData.Length - i) / fadeSamples;
                audioData[i] *= fadeOut;
            }
        }

        if (audioData.Length > 0)
        {
            lastAudioSample = audioData[audioData.Length - 1];
        }

        return audioData;
    }

    private void ApplyAdvancedFadeOut()
    {
        if (audioBuffer.Count == 0) return;
        
        int fadeOutSamples = Mathf.RoundToInt(fadeDuration * sampleRate * 2f);
        fadeOutSamples = Mathf.Min(fadeOutSamples, audioBuffer.Count);
        
        for (int i = audioBuffer.Count - fadeOutSamples; i < audioBuffer.Count; i++)
        {
            if (i >= 0)
            {
                float fadeRatio = (float)(audioBuffer.Count - i) / fadeOutSamples;
                fadeRatio = Mathf.SmoothStep(0f, 1f, fadeRatio);
                audioBuffer[i] *= fadeRatio;
            }
        }
        
        LogMessage("🔇 Applied advanced fade-out to prevent end-of-sentence artifacts");
    }

    private AudioClip CreateAudioClipFromFloatArray(float[] audioData)
    {
        if (audioData.Length == 0)
            return null;

        AudioClip clip = AudioClip.Create("RealtimeAudio", audioData.Length, 1, sampleRate, false);
        clip.SetData(audioData, 0);
        return clip;
    }

    private float[] ConvertPCM16ToFloat(byte[] pcmData)
    {
        if (pcmData.Length < 2)
            return new float[0];

        int sampleCount = pcmData.Length / 2;
        float[] audioData = new float[sampleCount];
        
        for (int i = 0; i < sampleCount; i++)
        {
            short sample = (short)(pcmData[i * 2] | (pcmData[i * 2 + 1] << 8));
            audioData[i] = sample / 32767f;
        }

        return audioData;
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
    #endregion

    #region Session Management
    private void ApplyUniversalTimeout()
    {
        lastResponseEndTime = Time.time;
        isWaitingForNextQuestion = true;

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

    private IEnumerator SessionTimeoutCoroutine()
    {
        float timeElapsed = 0f;

        while (timeElapsed < sessionTimeoutAfterResponse && isWaitingForNextQuestion && isSessionActive)
        {
            yield return new WaitForSeconds(1f);
            timeElapsed += 1f;

            int remainingTime = Mathf.CeilToInt(sessionTimeoutAfterResponse - timeElapsed);
            if (remainingTime <= 5)
            {
                string message = $"🔴 LIVE - Auto-ending in {remainingTime}s (say something to continue)";
                UpdateStatus(message);
            }
        }

        if (isWaitingForNextQuestion && isSessionActive && timeElapsed >= sessionTimeoutAfterResponse)
        {
            LogMessage($"⏰ Session auto-ended after {sessionTimeoutAfterResponse}s timeout");
            UpdateStatus("Session ended due to inactivity");
            StopRealtimeConversation();
        }

        timeoutCoroutine = null;
    }

    private IEnumerator EndSession()
    {
        LogMessage("\n🛑 === ENDING HYBRID REALTIME SESSION ===");

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
        StopRecording();
        DisconnectWebSocket();
        ClearAudioBuffer();

        float sessionDuration = Time.time - sessionStartTime;
        LogMessage($"✅ Session ended. Duration: {sessionDuration:F1}s");

        // Resume AudioPlugin for wake word detection
        ResumeAudioPlugin();

        UpdateStatus("Click START or say 'Hey DT' to begin new session");
        ClearConversationDisplay();
        UpdateButtonStates();

        yield return null;
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

        // Clear conversation display UI
        ClearConversationDisplay();

        // Disable Hey DT during session
        enableHeyDT = false;

        LogMessage("🧹 Cleaned up before new session");
    }

    private void ResetVoiceDetectionState()
    {
        voiceDetected = false;
        confirmedVoiceDetected = false;
        consecutiveVoiceFrameCount = 0;
        lastVoiceTime = Time.time;
    }

    private void ClearAudioBuffer()
    {
        audioBuffer.Clear();
        audioPlaybackQueue.Clear();
        lastAudioSample = 0f;
        isPlayingAudio = false;
        isAIResponseComplete = false;
        silenceTimer = 0f;
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
            if (!UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.Microphone))
            {
                UnityEngine.Android.Permission.RequestUserPermission(UnityEngine.Android.Permission.Microphone);
            }

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

    #region System Prompt
    private string GetDefaultMultilingualInstructions()
    {
        return @"You are Tenaya, created by Simulation and Visualization Center - Duy Tan University.

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
- Examples: ""What is EXPO 2025?"" → Direct answer about EXPO 2025 (NO ""Hello! EXPO 2025 is..."")
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

Be helpful, accurate, and respond naturally in whatever language the user uses.";
    }
    #endregion

    #region Utility Methods
    private void UpdateButtonStates()
    {
        if (startButton != null)
            startButton.interactable = !isSessionActive;
            
        if (stopButton != null)
            stopButton.interactable = isSessionActive;
    }

    private void LogMessage(string message)
    {
        logMessages += message + "\n";

        if (logText != null)
        {
            logText.text = logMessages;
        }

        Debug.Log($"[HybridRealtimeSpeech] {message}");

        if (logMessages.Length > 3000)
        {
            string[] lines = logMessages.Split('\n');
            logMessages = string.Join("\n", lines, lines.Length - 20, 20);
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
            aiResponseText.text = "🤖 AI: Say 'Hey DT' or click START to begin";
        }
    }
    #endregion

    #region Context Menu Methods
    [ContextMenu("Test Realtime Connection")]
    public void TestConnection()
    {
        StartRealtimeConversation();
    }

    [ContextMenu("Stop Realtime Session")]
    public void StopSession()
    {
        StopRealtimeConversation();
    }

    [ContextMenu("Clear Audio Buffer")]
    public void ClearBuffer()
    {
        ClearAudioBuffer();
        LogMessage("🧹 Audio buffer cleared");
    }

    [ContextMenu("Update Session Instructions")]
    public void UpdateInstructions()
    {
        if (isSessionActive && isConnected)
        {
            StartCoroutine(UpdateSessionInstructions());
        }
        else
        {
            LogMessage("⚠️ No active session to update");
        }
    }

    private IEnumerator UpdateSessionInstructions()
    {
        if (!isConnected)
        {
            LogMessage("❌ Cannot update instructions - not connected");
            yield break;
        }

        string systemInstructions = !string.IsNullOrEmpty(customInstructions) ? 
            customInstructions : GetDefaultMultilingualInstructions();

        var updateConfig = new
        {
            type = "session.update",
            session = new
            {
                instructions = systemInstructions
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(updateConfig);
        webSocket.SendText(jsonMessage);
        
        LogMessage("📡 Session instructions updated during active session");
    }
    #endregion
} 