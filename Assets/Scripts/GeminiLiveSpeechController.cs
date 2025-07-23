using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;
using System.Text;
using Newtonsoft.Json;
using NativeWebSocket;

/// <summary>
/// Gemini Live API Speech Controller - Real-time speech-to-speech using WebSocket
/// Supports continuous conversation with timeout functionality
/// </summary>
public class GeminiLiveSpeechController : MonoBehaviour
{
    #region Singleton
    public static GeminiLiveSpeechController Instance { get; private set; }
    #endregion

    #region UI References
    [Header("UI References")]
    public Button startButton;
    public Button stopButton;
    public TMP_Text statusText;
    public TMP_Text logText;
    public AudioSource audioSource;
    
    [Header("Conversation Display")]
    [Tooltip("Display user's question")]
    public TMP_Text userQuestionText;
    [Tooltip("Display AI's response")]
    public TMP_Text aiResponseText;
    #endregion
    
    #region Configuration
    [Header("API Configuration")]
    [Tooltip("Your Gemini API Key")]
    public string geminiApiKey = "YOUR_API_KEY_HERE";
    
    [Header("Model Selection")]
    [Tooltip("Choose between native audio or semi-cascade model")]
    public ModelType modelType = ModelType.NativeAudio;
    
    [Header("Audio Settings")]
    [Tooltip("Microphone sample rate (16000 Hz required for Gemini)")]
    public int sampleRate = 16000;
    [Tooltip("Audio buffer size")]
    public int bufferSize = 1024;
    [Tooltip("Voice detection threshold")]
    public float voiceThreshold = 0.02f;
    [Tooltip("Minimum speech duration to confirm voice")]
    public float minimumSpeechDuration = 0.5f;
    [Tooltip("Silence timeout before processing")]
    public float silenceTimeout = 2.0f;
    
    [Header("Session Management")]
    [Tooltip("Auto-timeout after response (seconds)")]
    public float sessionTimeoutAfterResponse = 30f;
    [Tooltip("Enable auto-timeout feature")]
    public bool enableAutoTimeout = true;
    
    [Header("System Instructions")]
    [TextArea(3, 5)]
    public string systemInstruction = "You are a helpful assistant. Answer in a friendly and conversational tone. Keep responses concise but informative.";
    #endregion

    #region Private Fields
    private WebSocket websocket;
    private bool isSessionActive = false;
    private bool isRecording = false;
    private bool isConnected = false;
    private AudioClip microphoneClip;
    private string microphoneDevice;
    private float[] audioBuffer;
    private int lastMicrophonePosition = 0;
    
    // Voice detection
    private bool voiceDetected = false;
    private float voiceStartTime = 0f;
    private float lastVoiceTime = 0f;
    private List<float> recordedAudio = new List<float>();
    
    // Session management
    private float lastResponseTime = 0f;
    private Coroutine timeoutCoroutine;
    private bool isWaitingForResponse = false;

    // Setup response tracking
    private bool setupResponseReceived = false;
    
    // Audio playback
    private Queue<byte[]> audioPlaybackQueue = new Queue<byte[]>();
    private bool isPlayingAudio = false;
    
    private string logMessages = "";
    #endregion

    #region Enums
    public enum ModelType
    {
        NativeAudio,    // gemini-2.5-flash-preview-native-audio-dialog
        SemiCascade     // gemini-live-2.5-flash-preview
    }
    #endregion

    #region Data Structures
    [Serializable]
    public class SetupMessage
    {
        public string model;
        public GenerationConfig generation_config;
        public string[] response_modalities = { "AUDIO" };
        public string system_instruction;
    }

    [Serializable]
    public class GenerationConfig
    {
        public string response_mime_type = "audio/pcm";
        public int speech_config_voice_config_prebuilt_voice_config_voice_name = 1;
    }

    [Serializable]
    public class ClientContentMessage
    {
        public Turn[] turns;
        public string turn_complete = "true";
    }

    [Serializable]
    public class Turn
    {
        public string role = "user";
        public Part[] parts;
    }

    [Serializable]
    public class Part
    {
        public InlineData inline_data;
    }

    [Serializable]
    public class InlineData
    {
        public string mime_type = "audio/pcm";
        public string data;
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
        InitializeComponents();
        LogMessage("🎙️ Gemini Live Speech Controller Ready");
        LogMessage("🌐 WebSocket-based real-time speech-to-speech");
        UpdateStatus("Click START to begin live conversation");
    }

    private void Update()
    {
        if (isSessionActive && isRecording)
        {
            ProcessMicrophoneInput();
        }
        
        // Process audio playback queue
        if (!isPlayingAudio && audioPlaybackQueue.Count > 0)
        {
            StartCoroutine(PlayNextAudioChunk());
        }
    }

    private void OnDestroy()
    {
        if (websocket != null)
        {
            websocket.Close();
        }
        
        if (Microphone.IsRecording(microphoneDevice))
        {
            Microphone.End(microphoneDevice);
        }
    }
    #endregion

    #region Initialization
    private void InitializeComponents()
    {
        if (startButton != null)
            startButton.onClick.AddListener(StartLiveSession);
            
        if (stopButton != null)
            stopButton.onClick.AddListener(StopLiveSession);

        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();
            
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
        
        UpdateButtonStates();
        ClearConversationDisplay();
    }

    private void UpdateButtonStates()
    {
        if (startButton != null)
            startButton.interactable = !isSessionActive;
            
        if (stopButton != null)
            stopButton.interactable = isSessionActive;
    }
    #endregion

    #region Public Methods
    public void StartLiveSession()
    {
        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active");
            return;
        }

        if (string.IsNullOrEmpty(geminiApiKey) || geminiApiKey == "YOUR_API_KEY_HERE")
        {
            LogMessage("❌ Please set your Gemini API Key!");
            UpdateStatus("❌ API Key required");
            return;
        }

        StartCoroutine(InitializeLiveSession());
    }

    public void StopLiveSession()
    {
        if (!isSessionActive)
        {
            LogMessage("⚠️ No active session to stop");
            return;
        }

        StartCoroutine(EndLiveSession());
    }

    [ContextMenu("Test API Connection")]
    public void TestAPIConnection()
    {
        StartCoroutine(TestConnection());
    }

    [ContextMenu("Test WebSocket Connection")]
    public void TestWebSocketConnection()
    {
        StartCoroutine(TestWebSocketOnly());
    }

    private IEnumerator TestConnection()
    {
        string testUrl = $"https://generativelanguage.googleapis.com/v1beta/models?key={geminiApiKey}";

        using (UnityWebRequest request = UnityWebRequest.Get(testUrl))
        {
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ API Key is valid!");
                LogMessage($"Available models response: {request.downloadHandler.text.Substring(0, Math.Min(300, request.downloadHandler.text.Length))}...");
            }
            else
            {
                LogMessage($"❌ API Key test failed: {request.error}");
                LogMessage($"Response code: {request.responseCode}");
                LogMessage($"Response: {request.downloadHandler.text}");
            }
        }
    }

    private IEnumerator TestWebSocketOnly()
    {
        LogMessage("🧪 Testing WebSocket connection only...");

        string wsUrl = $"wss://generativelanguage.googleapis.com/ws/google.ai.generativelanguage.v1beta.GenerativeService.BidiGenerateContent?key={geminiApiKey}";

        var testWebSocket = new WebSocket(wsUrl);
        bool connectionReceived = false;
        bool errorReceived = false;
        string errorMessage = "";

        testWebSocket.OnOpen += () => {
            LogMessage("✅ WebSocket connection successful!");
            connectionReceived = true;
        };

        testWebSocket.OnError += (error) => {
            LogMessage($"❌ WebSocket connection error: {error}");
            errorReceived = true;
            errorMessage = error;
        };

        testWebSocket.OnClose += (closeCode) => {
            LogMessage($"🔌 WebSocket closed: {closeCode}");
        };

        testWebSocket.OnMessage += (data) => {
            string message = System.Text.Encoding.UTF8.GetString(data);
            LogMessage($"📥 Test WebSocket received: {message.Substring(0, Math.Min(200, message.Length))}...");
        };

        LogMessage($"🔗 Connecting to: {wsUrl.Substring(0, Math.Min(100, wsUrl.Length))}...");
        yield return testWebSocket.Connect();

        // Wait for connection result
        float waitTime = 0f;
        while (waitTime < 10f && !connectionReceived && !errorReceived)
        {
            yield return new WaitForSeconds(0.1f);
            waitTime += 0.1f;
        }

        if (connectionReceived)
        {
            LogMessage("✅ WebSocket connection test passed!");

            // Try sending a simple ping
            LogMessage("📤 Sending test ping...");
            testWebSocket.SendText("{\"ping\":true}");

            yield return new WaitForSeconds(2f);
        }
        else if (errorReceived)
        {
            LogMessage($"❌ WebSocket connection test failed: {errorMessage}");
        }
        else
        {
            LogMessage("❌ WebSocket connection test timeout");
        }

        testWebSocket.Close();
        LogMessage("🧪 WebSocket test completed");
    }

    private IEnumerator TryAlternativeSetup()
    {
        LogMessage("🔄 Trying simplified setup format...");

        // Try minimal setup format
        var simpleSetup = new
        {
            setup = new
            {
                model = "gemini-2.0-flash-live-001", // Try stable model
                generationConfig = new
                {
                    responseModalities = new string[] { "AUDIO" }
                }
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(simpleSetup);
        LogMessage($"📤 Sending simple setup: {jsonMessage}");

        websocket.SendText(jsonMessage);

        yield return new WaitForSeconds(2f);

        // If still no response, try even simpler
        LogMessage("🔄 Trying minimal setup...");

        var minimalSetup = new
        {
            setup = new
            {
                model = GetModelName()
            }
        };

        jsonMessage = JsonConvert.SerializeObject(minimalSetup);
        LogMessage($"📤 Sending minimal setup: {jsonMessage}");

        websocket.SendText(jsonMessage);

        yield return new WaitForSeconds(1f);
    }
    #endregion

    #region WebSocket Connection
    private IEnumerator InitializeLiveSession()
    {
        LogMessage("🚀 Starting Gemini Live session...");
        UpdateStatus("🔄 Connecting to Gemini Live API...");
        
        string modelName = GetModelName();
        string wsUrl = $"wss://generativelanguage.googleapis.com/ws/google.ai.generativelanguage.v1beta.GenerativeService.BidiGenerateContent?key={geminiApiKey}";
        
        websocket = new WebSocket(wsUrl);
        
        websocket.OnOpen += OnWebSocketOpen;
        websocket.OnMessage += OnWebSocketMessage;
        websocket.OnError += OnWebSocketError;
        websocket.OnClose += OnWebSocketClose;

        LogMessage($"🔗 Attempting WebSocket connection to: {wsUrl.Substring(0, Math.Min(100, wsUrl.Length))}...");
        LogMessage($"🔍 DEBUG: WebSocket state before connect: {websocket.State}");

        yield return websocket.Connect();

        LogMessage($"🔍 DEBUG: WebSocket state after connect: {websocket.State}");
        
        // Wait for connection
        float timeout = 10f;
        while (!isConnected && timeout > 0)
        {
            yield return new WaitForSeconds(0.1f);
            timeout -= 0.1f;
        }
        
        if (!isConnected)
        {
            LogMessage("❌ Failed to connect to Gemini Live API");
            UpdateStatus("❌ Connection failed");
            yield break;
        }
        
        // Send initial configuration
        yield return StartCoroutine(SendInitialConfiguration());
        
        // Start microphone recording
        yield return StartCoroutine(StartMicrophoneRecording());
        
        isSessionActive = true;
        UpdateButtonStates();
        UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");
        LogMessage("✅ Live session started successfully!");
        
        // Start session timeout
        if (enableAutoTimeout)
        {
            StartSessionTimeout();
        }
    }

    private string GetModelName()
    {
        return modelType == ModelType.NativeAudio 
            ? "gemini-2.5-flash-preview-native-audio-dialog"
            : "gemini-live-2.5-flash-preview";
    }

    private IEnumerator SendInitialConfiguration()
    {
        // Correct format according to API documentation
        var setupMessage = new
        {
            setup = new
            {
                model = GetModelName(),
                generationConfig = new
                {
                    responseModalities = new string[] { "AUDIO" },
                    speechConfig = new
                    {
                        voiceConfig = new
                        {
                            prebuiltVoiceConfig = new
                            {
                                voiceName = "Aoede"
                            }
                        }
                    }
                },
                systemInstruction = new
                {
                    parts = new[]
                    {
                        new { text = systemInstruction }
                    }
                }
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(setupMessage);
        LogMessage($"📤 Sending setup message: {jsonMessage}");

        // Check WebSocket state before sending
        LogMessage($"🔍 DEBUG: WebSocket state before send: {websocket.State}");

        if (websocket.State == WebSocketState.Open)
        {
            websocket.SendText(jsonMessage);
            LogMessage("📤 Setup message sent successfully");
        }
        else
        {
            LogMessage($"❌ Cannot send - WebSocket state: {websocket.State}");
            yield break;
        }

        LogMessage("⏳ Waiting for setup response...");

        // Wait and check for response
        float waitTime = 0f;
        const float maxWaitTime = 5f;
        setupResponseReceived = false;

        while (waitTime < maxWaitTime && !setupResponseReceived)
        {
            yield return new WaitForSeconds(0.1f);
            waitTime += 0.1f;

            if (waitTime % 1f < 0.1f) // Log every second
            {
                LogMessage($"⏳ Still waiting for setup response... {waitTime:F1}s");
            }
        }

        if (!setupResponseReceived)
        {
            LogMessage("❌ No setup response received - trying alternative format");
            yield return StartCoroutine(TryAlternativeSetup());
        }
        else
        {
            LogMessage("✅ Setup response received successfully!");
        }
    }
    #endregion

    #region WebSocket Event Handlers
    private void OnWebSocketOpen()
    {
        isConnected = true;
        LogMessage("🌐 WebSocket connected to Gemini Live API");
    }

    private void OnWebSocketMessage(byte[] data)
    {
        string message = Encoding.UTF8.GetString(data);
        LogMessage($"🔍 DEBUG: Raw WebSocket message received, length: {data.Length} bytes");
        LogMessage($"🔍 DEBUG: Message preview: {message.Substring(0, Math.Min(500, message.Length))}");
        ProcessWebSocketMessage(message);
    }

    private void OnWebSocketError(string error)
    {
        LogMessage($"❌ WebSocket error: {error}");
        UpdateStatus("❌ Connection error - Check API key and internet");

        // Common error explanations
        if (error.Contains("401") || error.Contains("Unauthorized"))
        {
            LogMessage("❌ API Key error - Check if your Gemini API key is valid");
        }
        else if (error.Contains("403") || error.Contains("Forbidden"))
        {
            LogMessage("❌ Access denied - Check API permissions or billing");
        }
        else if (error.Contains("InvalidData"))
        {
            LogMessage("❌ Invalid data format - Check message structure");
        }
    }

    private void OnWebSocketClose(WebSocketCloseCode closeCode)
    {
        isConnected = false;
        LogMessage($"🔌 WebSocket closed: {closeCode}");

        // Provide specific error explanations
        switch (closeCode)
        {
            case WebSocketCloseCode.InvalidData:
                LogMessage("❌ Invalid data sent to server - Check message format");
                UpdateStatus("❌ Invalid data format - Check setup");
                break;
            case WebSocketCloseCode.PolicyViolation:
                LogMessage("❌ POLICY VIOLATION - This is the main issue!");
                LogMessage("❌ Possible causes:");
                LogMessage("   • API Key doesn't have Live API permissions");
                LogMessage("   • Billing not set up in Google Cloud Console");
                LogMessage("   • Live API not enabled for your project");
                LogMessage("   • Region restrictions (Live API not available in your region)");
                LogMessage("   • Rate limits exceeded");
                LogMessage("💡 SOLUTION: Check Google AI Studio settings and billing");
                UpdateStatus("❌ Policy Violation - Check API permissions & billing");
                break;
            case WebSocketCloseCode.Abnormal:
                LogMessage("❌ Connection lost unexpectedly");
                UpdateStatus("❌ Connection lost");
                break;
            case WebSocketCloseCode.Normal:
                LogMessage("✅ Connection closed normally");
                break;
            default:
                LogMessage($"❌ Connection closed with code: {closeCode}");
                UpdateStatus($"❌ Connection error: {closeCode}");
                break;
        }

        if (isSessionActive)
        {
            StartCoroutine(EndLiveSession());
        }
    }

    private void ProcessWebSocketMessage(string message)
    {
        try
        {
            LogMessage($"📥 Processing message: {message.Substring(0, Math.Min(300, message.Length))}...");

            // Try to parse as JSON
            var jsonResponse = JsonConvert.DeserializeObject<Dictionary<string, object>>(message);
            LogMessage($"🔍 DEBUG: JSON keys found: {string.Join(", ", jsonResponse.Keys)}");

            // Handle setup acknowledgment
            if (jsonResponse.ContainsKey("setupComplete"))
            {
                LogMessage("✅ Setup complete - Ready to send audio");
                setupResponseReceived = true;
                return;
            }

            // Handle setup completion (alternative format)
            if (jsonResponse.ContainsKey("setup"))
            {
                LogMessage("✅ Setup acknowledged - Ready to send audio");
                setupResponseReceived = true;
                return;
            }

            // Handle server content (AI responses)
            if (jsonResponse.ContainsKey("serverContent"))
            {
                var serverContent = JsonConvert.DeserializeObject<Dictionary<string, object>>(jsonResponse["serverContent"].ToString());

                // Check for turn completion
                if (serverContent.ContainsKey("turnComplete") && (bool)serverContent["turnComplete"])
                {
                    LogMessage("✅ AI response complete");
                    OnResponseComplete();
                }

                // Handle model turn (AI response)
                if (serverContent.ContainsKey("modelTurn"))
                {
                    var modelTurn = JsonConvert.DeserializeObject<Dictionary<string, object>>(serverContent["modelTurn"].ToString());

                    if (modelTurn.ContainsKey("parts"))
                    {
                        var parts = JsonConvert.DeserializeObject<object[]>(modelTurn["parts"].ToString());

                        foreach (var part in parts)
                        {
                            var partDict = JsonConvert.DeserializeObject<Dictionary<string, object>>(part.ToString());

                            // Handle text response
                            if (partDict.ContainsKey("text"))
                            {
                                string responseText = partDict["text"].ToString();
                                UpdateAIResponseText(responseText);
                                LogMessage($"💬 AI: {responseText}");
                            }

                            // Handle audio response (inline_data format)
                            if (partDict.ContainsKey("inlineData") || partDict.ContainsKey("inline_data"))
                            {
                                string inlineDataKey = partDict.ContainsKey("inlineData") ? "inlineData" : "inline_data";
                                var inlineData = JsonConvert.DeserializeObject<Dictionary<string, object>>(partDict[inlineDataKey].ToString());

                                if (inlineData.ContainsKey("data"))
                                {
                                    string audioData = inlineData["data"].ToString();
                                    byte[] audioBytes = Convert.FromBase64String(audioData);
                                    audioPlaybackQueue.Enqueue(audioBytes);

                                    LogMessage($"🔊 Received audio chunk: {audioBytes.Length} bytes");
                                }
                            }
                        }
                    }
                }
            }

            // Handle direct audio data (alternative format)
            if (jsonResponse.ContainsKey("data"))
            {
                string audioData = jsonResponse["data"].ToString();
                byte[] audioBytes = Convert.FromBase64String(audioData);
                audioPlaybackQueue.Enqueue(audioBytes);

                LogMessage($"🔊 Received direct audio chunk: {audioBytes.Length} bytes");
            }
        }
        catch (Exception ex)
        {
            LogMessage($"❌ Error processing WebSocket message: {ex.Message}");
            LogMessage($"❌ Raw message: {message}");
        }
    }
    #endregion

    #region Microphone Recording
    private IEnumerator StartMicrophoneRecording()
    {
        if (string.IsNullOrEmpty(microphoneDevice))
        {
            LogMessage("❌ No microphone available");
            yield break;
        }

        LogMessage("🎤 Starting microphone recording...");

        // Start continuous recording (30 minutes max)
        microphoneClip = Microphone.Start(microphoneDevice, true, 1800, sampleRate);
        audioBuffer = new float[bufferSize];
        lastMicrophonePosition = 0;

        yield return new WaitForSeconds(0.1f);

        isRecording = true;
        ResetVoiceDetection();

        LogMessage("✅ Microphone recording started");
    }

    private void ProcessMicrophoneInput()
    {
        if (microphoneClip == null || !isRecording) return;

        int currentPosition = Microphone.GetPosition(microphoneDevice);
        if (currentPosition < 0) return;

        // Calculate samples to read
        int samplesToRead = currentPosition - lastMicrophonePosition;
        if (samplesToRead < 0)
            samplesToRead += microphoneClip.samples;

        if (samplesToRead < bufferSize / 4) return;

        // Read audio data
        float[] samples = new float[samplesToRead];
        microphoneClip.GetData(samples, lastMicrophonePosition);
        lastMicrophonePosition = currentPosition;

        // Voice activity detection
        float audioLevel = GetAudioLevel(samples);
        bool currentVoiceDetected = audioLevel > voiceThreshold;

        if (currentVoiceDetected)
        {
            if (!voiceDetected)
            {
                voiceDetected = true;
                voiceStartTime = Time.time;
                recordedAudio.Clear();
                LogMessage($"🗣️ Voice detected (level: {audioLevel:F3})");
                UpdateUserQuestionText("👤 User: (Speaking...)");

                // Cancel timeout when user starts speaking
                if (timeoutCoroutine != null)
                {
                    StopCoroutine(timeoutCoroutine);
                    timeoutCoroutine = null;
                    LogMessage("⏰ Timeout cancelled - User speaking");
                }
            }

            lastVoiceTime = Time.time;
            recordedAudio.AddRange(samples);
        }
        else if (voiceDetected)
        {
            float speechDuration = Time.time - voiceStartTime;
            float silenceDuration = Time.time - lastVoiceTime;

            // Check if we should process the recorded audio
            if (silenceDuration > silenceTimeout && speechDuration > minimumSpeechDuration)
            {
                LogMessage($"✅ Speech ended - Duration: {speechDuration:F1}s, Processing...");
                StartCoroutine(ProcessRecordedAudio());
                ResetVoiceDetection();
            }
        }
    }

    private float GetAudioLevel(float[] samples)
    {
        float sum = 0f;
        for (int i = 0; i < samples.Length; i++)
        {
            sum += Mathf.Abs(samples[i]);
        }
        return sum / samples.Length;
    }

    private void ResetVoiceDetection()
    {
        voiceDetected = false;
        voiceStartTime = 0f;
        lastVoiceTime = 0f;
        recordedAudio.Clear();
    }
    #endregion

    #region Audio Processing
    private IEnumerator ProcessRecordedAudio()
    {
        if (recordedAudio.Count == 0)
        {
            LogMessage("⚠️ No audio data to process");
            yield break;
        }

        UpdateStatus("🤖 AI is thinking...");
        UpdateAIResponseText("🤖 AI: (Processing your question...)");
        isWaitingForResponse = true;

        // Convert float array to 16-bit PCM bytes
        byte[] audioBytes = ConvertFloatArrayToPCM16(recordedAudio.ToArray());

        // Convert to base64
        string audioBase64 = Convert.ToBase64String(audioBytes);

        // Send audio using correct realtimeInput format
        var realtimeInputMessage = new
        {
            realtimeInput = new
            {
                audio = new
                {
                    mimeType = "audio/pcm",
                    data = audioBase64
                }
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(realtimeInputMessage);
        LogMessage($"📤 Sending realtime audio: {jsonMessage.Substring(0, Math.Min(200, jsonMessage.Length))}...");

        websocket.SendText(jsonMessage);

        LogMessage($"📤 Sent audio data: {audioBytes.Length} bytes");

        yield return null;
    }

    private byte[] ConvertFloatArrayToPCM16(float[] floatArray)
    {
        byte[] byteArray = new byte[floatArray.Length * 2];

        for (int i = 0; i < floatArray.Length; i++)
        {
            short sample = (short)(floatArray[i] * 32767f);
            byte[] sampleBytes = BitConverter.GetBytes(sample);
            byteArray[i * 2] = sampleBytes[0];
            byteArray[i * 2 + 1] = sampleBytes[1];
        }

        return byteArray;
    }

    private IEnumerator PlayNextAudioChunk()
    {
        if (audioPlaybackQueue.Count == 0) yield break;

        isPlayingAudio = true;
        byte[] audioData = audioPlaybackQueue.Dequeue();

        // Convert PCM bytes to AudioClip
        AudioClip audioClip = CreateAudioClipFromPCM(audioData, 24000); // Gemini outputs 24kHz

        if (audioClip != null)
        {
            audioSource.clip = audioClip;
            audioSource.Play();

            // Wait for audio to finish
            while (audioSource.isPlaying)
            {
                yield return new WaitForSeconds(0.1f);
            }

            Destroy(audioClip);
        }

        isPlayingAudio = false;
    }

    private AudioClip CreateAudioClipFromPCM(byte[] pcmData, int sampleRate)
    {
        int sampleCount = pcmData.Length / 2; // 16-bit = 2 bytes per sample
        float[] floatArray = new float[sampleCount];

        for (int i = 0; i < sampleCount; i++)
        {
            short sample = BitConverter.ToInt16(pcmData, i * 2);
            floatArray[i] = sample / 32768f;
        }

        AudioClip audioClip = AudioClip.Create("GeminiResponse", sampleCount, 1, sampleRate, false);
        audioClip.SetData(floatArray, 0);

        return audioClip;
    }
    #endregion

    #region Session Management
    private void OnResponseComplete()
    {
        isWaitingForResponse = false;
        lastResponseTime = Time.time;

        UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");

        // Start session timeout
        if (enableAutoTimeout)
        {
            StartSessionTimeout();
        }
    }

    private void StartSessionTimeout()
    {
        if (timeoutCoroutine != null)
        {
            StopCoroutine(timeoutCoroutine);
        }

        timeoutCoroutine = StartCoroutine(SessionTimeoutCoroutine());
        LogMessage($"⏰ Session timeout started: {sessionTimeoutAfterResponse}s");
    }

    private IEnumerator SessionTimeoutCoroutine()
    {
        yield return new WaitForSeconds(sessionTimeoutAfterResponse);

        if (isSessionActive && !voiceDetected && !isWaitingForResponse)
        {
            LogMessage("⏰ Session timeout - Ending conversation");
            UpdateStatus("⏰ Session ended due to inactivity");
            StartCoroutine(EndLiveSession());
        }
    }

    private IEnumerator EndLiveSession()
    {
        LogMessage("🛑 Ending live session...");
        UpdateStatus("🔄 Ending session...");

        isSessionActive = false;
        isRecording = false;
        isWaitingForResponse = false;

        // Stop timeout coroutine
        if (timeoutCoroutine != null)
        {
            StopCoroutine(timeoutCoroutine);
            timeoutCoroutine = null;
        }

        // Stop microphone
        if (Microphone.IsRecording(microphoneDevice))
        {
            Microphone.End(microphoneDevice);
        }

        // Close WebSocket
        if (websocket != null && websocket.State == WebSocketState.Open)
        {
            websocket.Close();
        }

        // Clear audio queue
        audioPlaybackQueue.Clear();

        UpdateButtonStates();
        UpdateStatus("Session ended - Click START to begin new conversation");
        LogMessage("✅ Live session ended successfully");

        yield return null;
    }
    #endregion

    #region UI Updates
    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
    }

    private void LogMessage(string message)
    {
        string timestamp = DateTime.Now.ToString("HH:mm:ss");
        string logEntry = $"[{timestamp}] {message}";

        logMessages += logEntry + "\n";

        if (logText != null)
        {
            logText.text = logMessages;
        }

        Debug.Log(logEntry);

        // Keep log size manageable
        if (logMessages.Length > 5000)
        {
            int cutIndex = logMessages.IndexOf('\n', 1000);
            if (cutIndex > 0)
            {
                logMessages = logMessages.Substring(cutIndex + 1);
            }
        }
    }

    private void UpdateUserQuestionText(string text)
    {
        if (userQuestionText != null)
        {
            userQuestionText.text = text;
        }
    }

    private void UpdateAIResponseText(string text)
    {
        if (aiResponseText != null)
        {
            aiResponseText.text = $"🤖 AI: {text}";
        }
    }

    private void ClearConversationDisplay()
    {
        UpdateUserQuestionText("👤 User: (Ready to listen...)");
        UpdateAIResponseText("🤖 AI: (Waiting for your question...)");
    }
    #endregion
}
