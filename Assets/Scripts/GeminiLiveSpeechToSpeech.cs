using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;
using System.Collections.Generic;
using System.Text;
using NativeWebSocket;
using Newtonsoft.Json;
using System.Linq;

/// <summary>
/// JSON Response Classes for Gemini Live API
/// </summary>
[System.Serializable]
public class GeminiLiveResponse
{
    public ServerContent serverContent;
    public SetupComplete setupComplete;
}

[System.Serializable]
public class SetupComplete
{
    public bool setupComplete;
}

[System.Serializable]
public class ServerContent
{
    public ModelTurn modelTurn;
    public bool turnComplete;
    public bool interrupted;
}

[System.Serializable]
public class ModelTurn
{
    public Part[] parts;
}

[System.Serializable]
public class Part
{
    public InlineData inlineData;
    public string text;
}

[System.Serializable]
public class InlineData
{
    public string mimeType;
    public string data;
}

/// <summary>
/// Audio Buffer class for better audio management
/// </summary>
public class AudioBuffer
{
    public byte[] data;
    public int sampleRate;
    public int channels;
    public float duration;

    public AudioBuffer(byte[] audioData, int rate, int channelCount)
    {
        data = audioData;
        sampleRate = rate;
        channels = channelCount;
        duration = (float)(audioData.Length / 2) / sampleRate; // 16-bit samples
    }
}

/// <summary>
/// TRUE Speech-to-Speech với Gemini Live API
/// Gửi audio trực tiếp → Nhận audio trực tiếp, không qua text
/// </summary>
public class GeminiLiveSpeechToSpeech : MonoBehaviour
{
    #region Public Fields
    [Header("UI References")]
    public Button startButton;
    public Button stopButton;
    public TMP_Text statusText;
    public TMP_Text logText;
    public AudioSource audioSource;
    
    [Header("Configuration")]
    public string geminiApiKey = "AIzaSyDR5fVgJABDSkaVfmy-iimLzsLLOBkrBgA";
    public float silenceThreshold = 0.01f;
    public float voiceDetectionTimeout = 1.2f;
    
    [Header("Gemini Live Settings")]
    [Tooltip("Native audio model for best speech quality")]
    public string modelName = "gemini-2.5-flash-preview-native-audio-dialog";
    public string systemInstruction = "You are Tenaya, created by Simulation and Visualization Center - Duy Tan University. Answer in the same language as the user's question. Provide a concise response with 1-5 sentences, each under 20 words. Use continuous prose, avoiding bullet points, lists, or enumerated formats. Focus on Southeast Asia and ASEAN expertise. Do not include URLs, extra introductions, or unnecessary details.";
    #endregion
    
    #region Private Fields
    private bool isSessionActive = false;
    private bool isRecording = false;
    private bool isConnected = false;
    private AudioClip continuousClip;
    private string logMessages = "";

    // Audio processing
    private string microphoneDevice = "";
    private int inputSampleRate = 16000; // Required by Gemini Live API for input
    private int outputSampleRate = 24000; // Gemini Live API outputs at 24kHz
    private int bufferPosition = 0;
    private const int BUFFER_SIZE = 256; // Smaller buffer for better responsiveness

    // Voice detection
    private float lastVoiceTime = 0f;
    private bool voiceDetected = false;
    private float sessionStartTime = 0f;
    private float voiceDetectionThreshold = 0.01f;

    // WebSocket connection
    private WebSocket websocket;
    private Queue<AudioBuffer> audioResponseQueue = new Queue<AudioBuffer>();
    private bool isPlayingResponse = false;
    private List<AudioSource> activeSources = new List<AudioSource>();
    private float nextStartTime = 0f;

    // Audio streaming improvements
    private bool isStreamingAudio = false;
    private Queue<float[]> audioChunkQueue = new Queue<float[]>();
    #endregion
    
    #region Unity Lifecycle
    private void Start()
    {
        InitializeComponent();
        LogMessage("🎙️ Gemini Live Speech-to-Speech Ready");
        LogMessage("💡 TRUE Speech-to-Speech - Audio in → Audio out");
        UpdateStatus("Click START to begin live speech conversation");
    }
    
    private void Update()
    {
        if (isSessionActive && isRecording && !isPlayingResponse)
        {
            ProcessContinuousAudio();
        }

        // Process audio chunk queue for streaming
        if (audioChunkQueue.Count > 0 && isStreamingAudio)
        {
            ProcessAudioChunkQueue();
        }

        // Process audio response queue
        if (audioResponseQueue.Count > 0 && !isPlayingResponse)
        {
            StartCoroutine(PlayAudioResponse());
        }

        // Performance optimization (run every few frames)
        if (Time.frameCount % 60 == 0) // Every ~1 second at 60fps
        {
            OptimizePerformance();
        }

        // Update WebSocket
        #if !UNITY_WEBGL || UNITY_EDITOR
        websocket?.DispatchMessageQueue();
        #endif
    }
    
    private void OnDestroy()
    {
        // Stop all active audio sources
        StopAllAudioSources();

        // Close WebSocket connection
        if (websocket != null)
        {
            websocket.Close();
        }

        // Stop microphone if recording
        if (Microphone.IsRecording(microphoneDevice))
        {
            Microphone.End(microphoneDevice);
        }
    }
    #endregion
    
    #region Public Methods
    public void StartLiveSession()
    {
        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active...");
            return;
        }
        
        StartCoroutine(BeginLiveConversation());
    }
    
    public void StopSession()
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
            startButton.onClick.AddListener(StartLiveSession);
            
        if (stopButton != null)
            stopButton.onClick.AddListener(StopSession);
            
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();
            
        ClearLogs();
        
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
    }
    
    private IEnumerator BeginLiveConversation()
    {
        LogMessage("\n🚀 === STARTING GEMINI LIVE SESSION ===");
        LogMessage("🎤 Connecting to Gemini Live API...");
        LogMessage("🌍 Multi-language support - Auto-detect and respond");
        
        isSessionActive = true;
        sessionStartTime = Time.time;
        
        UpdateStatus("🔄 Connecting to Gemini Live...");
        UpdateButtonStates();
        
        // Connect to Gemini Live API
        yield return StartCoroutine(ConnectToGeminiLive());
        
        if (isConnected)
        {
            // Start continuous recording
            yield return StartCoroutine(InitializeContinuousRecording());
            
            UpdateStatus("🔴 LIVE - Speak anytime, AI responds with voice");
            
            // Main conversation loop
            while (isSessionActive && isConnected)
            {
                yield return null;
            }
        }
        else
        {
            LogMessage("❌ Failed to connect to Gemini Live API");
            UpdateStatus("❌ Connection failed");
            isSessionActive = false;
            UpdateButtonStates();
        }
    }
    
    private IEnumerator ConnectToGeminiLive()
    {
        string wsUrl = $"wss://generativelanguage.googleapis.com/ws/google.ai.generativelanguage.v1alpha.GenerativeService.BidiGenerateContent?key={geminiApiKey}";
        
        websocket = new WebSocket(wsUrl);
        
        websocket.OnOpen += () =>
        {
            LogMessage("✅ Connected to Gemini Live API");
            isConnected = true;
            
            // Send initial setup message
            SendSetupMessage();
        };
        
        websocket.OnMessage += (bytes) =>
        {
            HandleWebSocketMessage(bytes);
        };
        
        websocket.OnError += (e) =>
        {
            LogMessage($"❌ WebSocket Error: {e}");
            isConnected = false;
        };
        
        websocket.OnClose += (e) =>
        {
            LogMessage($"🔌 WebSocket Closed: {e}");
            isConnected = false;
        };
        
        websocket.Connect();

        // Wait for connection
        float timeout = 10f;
        float elapsed = 0f;
        while (!isConnected && elapsed < timeout)
        {
            elapsed += Time.deltaTime;
            yield return null;
        }
    }
    
    private void SendSetupMessage()
    {
        var setupMessage = new
        {
            setup = new
            {
                model = $"models/{modelName}",
                generationConfig = new
                {
                    responseModalities = new[] { "AUDIO" },
                    speechConfig = new
                    {
                        voiceConfig = new
                        {
                            prebuiltVoiceConfig = new
                            {
                                voiceName = "Orus" // Use same voice as TypeScript version
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

        string jsonMessage = JsonConvert.SerializeObject(setupMessage, Formatting.Indented);
        LogMessage("📤 Sending setup message to Gemini Live");
        LogMessage($"📄 Setup JSON:\n{jsonMessage}");
        websocket.SendText(jsonMessage);
    }
    
    private void HandleWebSocketMessage(byte[] bytes)
    {
        try
        {
            string message = Encoding.UTF8.GetString(bytes);
            LogMessage($"📥 RAW MESSAGE: {message}");

            // Try to parse as JSON first
            try
            {
                var jsonObject = JsonConvert.DeserializeObject(message);
                LogMessage($"✅ Valid JSON received");
            }
            catch
            {
                LogMessage($"❌ Invalid JSON format");
                return;
            }

            var response = JsonConvert.DeserializeObject<GeminiLiveResponse>(message);

            // Check for setup acknowledgment
            if (message.Contains("\"setupComplete\"") || response?.setupComplete?.setupComplete == true)
            {
                LogMessage("✅ Setup complete - Ready to send audio");
                return;
            }

            // Handle interruption (similar to TypeScript version)
            if (response?.serverContent?.interrupted == true)
            {
                LogMessage("🛑 AI response interrupted - stopping current audio");
                StopAllAudioSources();
                nextStartTime = 0f;
                return;
            }

            // Check if this is audio data
            if (response?.serverContent?.modelTurn?.parts != null)
            {
                LogMessage($"📦 Found {response.serverContent.modelTurn.parts.Length} parts in response");

                foreach (var part in response.serverContent.modelTurn.parts)
                {
                    if (part?.inlineData != null &&
                        part.inlineData.mimeType?.Contains("audio") == true &&
                        !string.IsNullOrEmpty(part.inlineData.data))
                    {
                        string audioBase64 = part.inlineData.data;
                        byte[] audioData = Convert.FromBase64String(audioBase64);

                        // Create AudioBuffer with proper sample rate (24kHz from Gemini)
                        AudioBuffer audioBuffer = new AudioBuffer(audioData, outputSampleRate, 1);
                        audioResponseQueue.Enqueue(audioBuffer);
                        LogMessage($"🔊 Received audio response from Gemini ({audioData.Length} bytes, {audioBuffer.duration:F2}s)");
                    }
                    else if (!string.IsNullOrEmpty(part?.text))
                    {
                        LogMessage($"📝 Received text response: {part.text}");
                    }
                    else
                    {
                        LogMessage($"🔍 Part type: inlineData={part?.inlineData != null}, text={!string.IsNullOrEmpty(part?.text)}");
                        if (part?.inlineData != null)
                        {
                            LogMessage($"🔍 MimeType: {part.inlineData.mimeType}");
                        }
                    }
                }
            }
            else
            {
                LogMessage($"🔍 No modelTurn found in serverContent");
                if (response?.serverContent != null)
                {
                    LogMessage($"🔍 ServerContent exists, turnComplete: {response.serverContent.turnComplete}");
                }
            }

            // Check if turn is complete
            if (response?.serverContent?.turnComplete == true)
            {
                LogMessage("✅ Turn complete - AI finished responding");
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error processing WebSocket message: {e.Message}");
            LogMessage($"📄 Full message: {Encoding.UTF8.GetString(bytes)}");
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

        // Start continuous recording (30 minutes max) with input sample rate
        continuousClip = Microphone.Start(microphoneDevice, true, 1800, inputSampleRate);
        bufferPosition = 0;

        yield return new WaitForSeconds(0.1f); // Wait for mic to initialize

        isRecording = true;
        isStreamingAudio = true;
        voiceDetected = false;
        lastVoiceTime = Time.time;
        nextStartTime = 0f;

        LogMessage("✅ Continuous recording started - Listening for voice...");
    }
    
    private void ProcessContinuousAudio()
    {
        if (continuousClip == null || !isRecording || !isConnected) return;

        int currentPosition = Microphone.GetPosition(microphoneDevice);
        if (currentPosition < 0) return;

        // Calculate samples to read
        int samplesToRead = currentPosition - bufferPosition;
        if (samplesToRead < 0)
            samplesToRead += continuousClip.samples; // Handle wrap-around

        if (samplesToRead < BUFFER_SIZE / 4) return; // Wait for more data

        // Read audio data
        float[] samples = new float[samplesToRead];
        continuousClip.GetData(samples, bufferPosition);
        bufferPosition = currentPosition;

        // Analyze voice activity
        float audioLevel = GetAudioLevel(samples);
        bool currentVoiceDetected = audioLevel > voiceDetectionThreshold;

        if (currentVoiceDetected)
        {
            if (!voiceDetected)
            {
                // Voice started
                voiceDetected = true;
                LogMessage("🗣️ Voice detected - Streaming to Gemini...");
                UpdateStatus("🎤 Recording and streaming...");
            }
            lastVoiceTime = Time.time;

            // Queue audio chunk for streaming (similar to TypeScript approach)
            audioChunkQueue.Enqueue(samples);
        }
        else if (voiceDetected && (Time.time - lastVoiceTime > voiceDetectionTimeout))
        {
            // Voice ended - send end signal
            voiceDetected = false;
            LogMessage("✅ Voice ended - Sending end signal and waiting for AI response...");
            UpdateStatus("🤖 AI is responding...");

            // Send end of audio signal
            SendEndOfAudioSignal();
        }
    }

    private void ProcessAudioChunkQueue()
    {
        if (audioChunkQueue.Count == 0 || !isConnected) return;

        // Process multiple chunks at once for better performance
        int chunksToProcess = Mathf.Min(audioChunkQueue.Count, 5);
        for (int i = 0; i < chunksToProcess; i++)
        {
            float[] samples = audioChunkQueue.Dequeue();
            SendAudioChunk(samples);
        }
    }

    private void SendAudioChunk(float[] samples)
    {
        if (!isConnected || websocket == null) return;

        try
        {
            // Convert float samples to 16-bit PCM (similar to TypeScript createBlob function)
            byte[] pcmData = ConvertToPCM16(samples);
            string audioBase64 = Convert.ToBase64String(pcmData);

            var audioMessage = new
            {
                realtimeInput = new
                {
                    mediaChunks = new[]
                    {
                        new
                        {
                            mimeType = $"audio/pcm;rate={inputSampleRate}",
                            data = audioBase64
                        }
                    }
                }
            };

            string jsonMessage = JsonConvert.SerializeObject(audioMessage);
            websocket.SendText(jsonMessage);
            // Reduce logging frequency for better performance
            if (UnityEngine.Random.Range(0, 10) == 0) // Log only 10% of chunks
            {
                LogMessage($"📤 Sent audio chunk ({pcmData.Length} bytes)");
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error sending audio chunk: {e.Message}");
        }
    }

    private void SendEndOfAudioSignal()
    {
        if (!isConnected || websocket == null) return;

        try
        {
            var endMessage = new
            {
                realtimeInput = new
                {
                    mediaChunks = new object[0] // Empty array signals end of input
                }
            };

            string jsonMessage = JsonConvert.SerializeObject(endMessage);
            websocket.SendText(jsonMessage);
            LogMessage("📤 Sent end of audio signal");
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error sending end signal: {e.Message}");
        }
    }

    private byte[] ConvertToPCM16(float[] samples)
    {
        // Convert float32 -1 to 1 to int16 -32768 to 32767 (same as TypeScript createBlob)
        byte[] pcmData = new byte[samples.Length * 2];
        for (int i = 0; i < samples.Length; i++)
        {
            // Clamp the sample to prevent overflow
            float clampedSample = Mathf.Clamp(samples[i], -1f, 1f);
            short sample = (short)(clampedSample * 32768f);
            pcmData[i * 2] = (byte)(sample & 0xFF);
            pcmData[i * 2 + 1] = (byte)((sample >> 8) & 0xFF);
        }
        return pcmData;
    }

    private IEnumerator PlayAudioResponse()
    {
        if (audioResponseQueue.Count == 0) yield break;

        isPlayingResponse = true;
        UpdateStatus("🔊 AI is speaking...");

        // Process audio buffers sequentially (similar to TypeScript approach)
        while (audioResponseQueue.Count > 0)
        {
            AudioBuffer audioBuffer = audioResponseQueue.Dequeue();

            // Calculate next start time for seamless playback
            nextStartTime = Mathf.Max(nextStartTime, Time.time);

            // Convert PCM to AudioClip and play
            AudioClip responseClip = CreateAudioClipFromPCM(audioBuffer.data, audioBuffer.sampleRate);

            if (responseClip != null)
            {
                // Create a new AudioSource for this clip (allows overlapping audio)
                GameObject audioObject = new GameObject("GeminiAudioResponse");
                AudioSource source = audioObject.AddComponent<AudioSource>();
                source.clip = responseClip;
                source.volume = audioSource.volume;

                // Schedule playback
                float delay = Mathf.Max(0, nextStartTime - Time.time);
                source.PlayDelayed(delay);

                // Track active sources
                activeSources.Add(source);

                LogMessage($"🔊 Playing AI response ({responseClip.length:F1}s) at {nextStartTime:F2}");

                // Update next start time
                nextStartTime += responseClip.length;

                // Clean up after audio finishes
                StartCoroutine(CleanupAudioSource(source, responseClip.length + delay));
            }
        }

        isPlayingResponse = false;

        if (isSessionActive)
        {
            UpdateStatus("🔴 LIVE - Speak anytime, AI responds with voice");
        }
    }

    private IEnumerator CleanupAudioSource(AudioSource source, float delay)
    {
        yield return new WaitForSeconds(delay + 0.1f); // Small buffer

        if (source != null)
        {
            activeSources.Remove(source);
            if (source.gameObject != null)
            {
                DestroyImmediate(source.gameObject);
            }
        }
    }

    private void StopAllAudioSources()
    {
        foreach (var source in activeSources.ToList())
        {
            if (source != null)
            {
                source.Stop();
                if (source.gameObject != null)
                {
                    DestroyImmediate(source.gameObject);
                }
            }
        }
        activeSources.Clear();
        nextStartTime = 0f;
    }

    private AudioClip CreateAudioClipFromPCM(byte[] pcmData, int sampleRate)
    {
        try
        {
            // Convert PCM bytes to float samples (similar to TypeScript decodeAudioData)
            float[] samples = new float[pcmData.Length / 2];
            for (int i = 0; i < samples.Length; i++)
            {
                short sample = (short)(pcmData[i * 2] | (pcmData[i * 2 + 1] << 8));
                samples[i] = sample / 32768.0f; // Same normalization as TypeScript
            }

            // Create AudioClip with proper naming
            string clipName = $"GeminiResponse_{Time.time:F2}";
            AudioClip clip = AudioClip.Create(clipName, samples.Length, 1, sampleRate, false);
            clip.SetData(samples, 0);

            return clip;
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error creating audio clip: {e.Message}");
            return null;
        }
    }

    private float GetAudioLevel(float[] samples)
    {
        float sum = 0f;
        foreach (float sample in samples)
        {
            sum += Mathf.Abs(sample);
        }
        return sum / samples.Length;
    }

    private IEnumerator EndSession()
    {
        LogMessage("\n🛑 === ENDING LIVE SESSION ===");

        isSessionActive = false;
        isRecording = false;
        isStreamingAudio = false;

        // Stop microphone
        if (Microphone.IsRecording(microphoneDevice))
        {
            Microphone.End(microphoneDevice);
            LogMessage("🎤 Microphone stopped");
        }

        // Stop all active audio sources
        StopAllAudioSources();

        // Close WebSocket connection
        if (websocket != null && isConnected)
        {
            websocket.Close();
            LogMessage("🔌 WebSocket connection closed");
        }

        // Stop main audio source
        if (audioSource.isPlaying)
        {
            audioSource.Stop();
        }

        // Clear all queues
        audioResponseQueue.Clear();
        audioChunkQueue.Clear();

        float sessionDuration = Time.time - sessionStartTime;
        LogMessage($"📊 Session duration: {sessionDuration:F1} seconds");
        LogMessage("✅ Session ended successfully");

        UpdateStatus("Session ended - Click START to begin new conversation");
        UpdateButtonStates();

        yield return null;
    }

    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
    }

    private void UpdateButtonStates()
    {
        if (startButton != null)
            startButton.interactable = !isSessionActive;

        if (stopButton != null)
            stopButton.interactable = isSessionActive;
    }

    private void LogMessage(string message)
    {
        string timestamp = DateTime.Now.ToString("HH:mm:ss");
        string logEntry = $"[{timestamp}] {message}";

        logMessages += logEntry + "\n";

        // Keep only last 50 lines
        string[] lines = logMessages.Split('\n');
        if (lines.Length > 50)
        {
            logMessages = string.Join("\n", lines, lines.Length - 50, 50);
        }

        if (logText != null)
        {
            logText.text = logMessages;
        }

        Debug.Log(logEntry);
    }

    private void ClearLogs()
    {
        logMessages = "";
        if (logText != null)
        {
            logText.text = "";
        }
    }
    #endregion

    #region Context Menu Methods
    [ContextMenu("Start Live Session")]
    public void TestStartSession()
    {
        StartLiveSession();
    }

    [ContextMenu("Stop Session")]
    public void TestStopSession()
    {
        StopSession();
    }

    [ContextMenu("Clear Logs")]
    public void ClearLogsFromMenu()
    {
        ClearLogs();
    }

    [ContextMenu("Test Connection")]
    public void TestConnection()
    {
        LogMessage("🧪 Testing Gemini Live API connection...");
        StartCoroutine(TestGeminiLiveConnection());
    }

    [ContextMenu("Test Audio Send")]
    public void TestAudioSend()
    {
        if (!isConnected)
        {
            LogMessage("❌ Not connected to Gemini Live API");
            return;
        }

        LogMessage("🧪 Testing audio send with sample data...");

        // Create a simple test audio (1 second of 440Hz tone)
        float[] testSamples = new float[inputSampleRate]; // 1 second at input sample rate
        for (int i = 0; i < testSamples.Length; i++)
        {
            testSamples[i] = 0.1f * Mathf.Sin(2 * Mathf.PI * 440 * i / (float)inputSampleRate); // 440Hz tone
        }

        SendAudioChunk(testSamples);
        SendEndOfAudioSignal();
    }

    [ContextMenu("Reset Session")]
    public void ResetSession()
    {
        if (isSessionActive)
        {
            StopSession();
        }

        // Clear all queues and reset state
        audioResponseQueue.Clear();
        audioChunkQueue.Clear();
        StopAllAudioSources();

        LogMessage("🔄 Session reset - Ready for new connection");
        UpdateStatus("Session reset - Click START to begin");
    }

    [ContextMenu("Test Voice Detection")]
    public void TestVoiceDetection()
    {
        if (!isRecording)
        {
            LogMessage("❌ Not currently recording");
            return;
        }

        LogMessage($"🧪 Voice Detection Status:");
        LogMessage($"   - Voice Detected: {voiceDetected}");
        LogMessage($"   - Last Voice Time: {Time.time - lastVoiceTime:F2}s ago");
        LogMessage($"   - Threshold: {voiceDetectionThreshold}");
        LogMessage($"   - Timeout: {voiceDetectionTimeout}s");
    }

    private IEnumerator TestGeminiLiveConnection()
    {
        yield return StartCoroutine(ConnectToGeminiLive());

        if (isConnected)
        {
            LogMessage("✅ Connection test successful!");
            yield return new WaitForSeconds(2f); // Wait a bit to see any setup messages
            websocket.Close();
        }
        else
        {
            LogMessage("❌ Connection test failed!");
        }
    }

    /// <summary>
    /// Performance monitoring and optimization methods
    /// </summary>
    private void OptimizePerformance()
    {
        // Reduce garbage collection by reusing objects
        if (audioChunkQueue.Count > 100) // Prevent memory buildup
        {
            LogMessage("⚠️ Audio chunk queue getting large, clearing old chunks");
            while (audioChunkQueue.Count > 50)
            {
                audioChunkQueue.Dequeue();
            }
        }

        // Clean up finished audio sources
        activeSources.RemoveAll(source => source == null || !source.isPlaying);
    }

    /// <summary>
    /// Enhanced error handling and recovery
    /// </summary>
    private void HandleConnectionError()
    {
        LogMessage("🔄 Attempting to reconnect to Gemini Live...");
        isConnected = false;

        if (isSessionActive)
        {
            StartCoroutine(ReconnectToGemini());
        }
    }

    private IEnumerator ReconnectToGemini()
    {
        yield return new WaitForSeconds(2f); // Wait before retry

        if (isSessionActive && !isConnected)
        {
            yield return StartCoroutine(ConnectToGeminiLive());

            if (isConnected)
            {
                LogMessage("✅ Reconnected successfully!");
            }
            else
            {
                LogMessage("❌ Reconnection failed, stopping session");
                yield return StartCoroutine(EndSession());
            }
        }
    }
    #endregion
}
