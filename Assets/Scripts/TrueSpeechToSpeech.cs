using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System;
using System.IO;

/// <summary>
/// OPTIMIZED Speech-to-Speech với Gemini - Tương tự Google AI Studio Demo
/// Chỉ cần nhấn 1 lần button → Thu âm và trả lời liên tục với độ trễ 2-3s
/// </summary>
public class TrueSpeechToSpeech : MonoBehaviour
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
    public float voiceDetectionTimeout = 3f; // Thời gian chờ sau khi phát hiện giọng nói
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
    private int sampleRate = 16000; // Optimized for Gemini
    private float[] audioBuffer;
    private int bufferPosition = 0;
    private const int BUFFER_SIZE = 1024;
    
    // Continuous conversation state
    private float lastVoiceTime = 0f;
    private bool voiceDetected = false;
    private float sessionStartTime = 0f;
    #endregion
    
    #region Unity Lifecycle
    private void Start()
    {
        InitializeComponent();
        LogMessage("🎙️ OPTIMIZED Speech-to-Speech Ready");
        LogMessage("💡 Like Google AI Studio - Click START once for continuous conversation");
        UpdateStatus("Click START to begin continuous speech-to-speech session");
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
        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active...");
            return;
        }
        
        StartCoroutine(BeginContinuousConversation());
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
            startButton.onClick.AddListener(StartContinuousSession);
            
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
    
    private IEnumerator BeginContinuousConversation()
    {
        LogMessage("\n🚀 === STARTING CONTINUOUS SPEECH SESSION ===");
        LogMessage("🎤 Session active - Speak anytime, AI will respond automatically");
        
        isSessionActive = true;
        sessionStartTime = Time.time;
        
        UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");
        UpdateButtonStates();
        
        // Start continuous recording
        yield return StartCoroutine(InitializeContinuousRecording());
        
        // Main conversation loop
        while (isSessionActive)
        {
            yield return null; // Continue monitoring in Update()
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
        
        yield return new WaitForSeconds(0.1f); // Wait for mic to initialize
        
        isRecording = true;
        voiceDetected = false;
        lastVoiceTime = Time.time;
        
        LogMessage("✅ Continuous recording started - Listening for voice...");
    }
    
    private void ProcessContinuousAudio()
    {
        if (continuousClip == null || !isRecording) return;
        
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
        bool currentVoiceDetected = audioLevel > silenceThreshold;
        
        if (currentVoiceDetected)
        {
            if (!voiceDetected)
            {
                // Voice started
                voiceDetected = true;
                LogMessage("🗣️ Voice detected - Recording...");
                UpdateStatus("🎤 Recording your voice...");
            }
            lastVoiceTime = Time.time;
        }
        else if (voiceDetected && (Time.time - lastVoiceTime > voiceDetectionTimeout))
        {
            // Voice ended after timeout
            voiceDetected = false;
            LogMessage("✅ Voice ended - Processing...");
            StartCoroutine(ProcessVoiceSegment());
        }
    }
    
    private IEnumerator ProcessVoiceSegment()
    {
        isRecording = false; // Temporarily stop monitoring
        UpdateStatus("🤖 AI is thinking...");
        
        // Extract audio segment (last 10 seconds max)
        int samplesToExtract = Mathf.Min(sampleRate * 10, continuousClip.samples);
        int startSample = Mathf.Max(0, bufferPosition - samplesToExtract);
        
        float[] voiceSegment = new float[samplesToExtract];
        continuousClip.GetData(voiceSegment, startSample);
        
        // Create temporary clip for processing
        AudioClip tempClip = AudioClip.Create("VoiceSegment", samplesToExtract, 1, sampleRate, false);
        tempClip.SetData(voiceSegment, 0);
        
        // Save and process
        bool success = false;
        yield return StartCoroutine(SaveAndProcessAudio(tempClip, (result) => success = result));
        
        // Cleanup
        Destroy(tempClip);
        
        if (success)
        {
            LogMessage("✅ Response completed - Listening for next question...");
            UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");
        }
        else
        {
            LogMessage("❌ Processing failed - Continuing to listen...");
            UpdateStatus("🔴 LIVE - Speak anytime (previous request failed)");
        }
        
        // Resume monitoring
        yield return new WaitForSeconds(0.5f);
        isRecording = true;
        voiceDetected = false;
        lastVoiceTime = Time.time;
    }
    
    private IEnumerator SaveAndProcessAudio(AudioClip clip, System.Action<bool> callback)
    {
        string filePath = "";
        bool saveSuccess = false;
        
        try
        {
            // Save audio
            filePath = Path.Combine(Application.persistentDataPath, "voice_segment.wav");
            WavUtility.Save(filePath, clip);
            saveSuccess = true;
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Error saving audio: {e.Message}");
            callback?.Invoke(false);
            yield break;
        }
        
        if (saveSuccess)
        {
            // Process with Gemini
            yield return StartCoroutine(ProcessWithGeminiOptimized(filePath, callback));
        }
        else
        {
            callback?.Invoke(false);
        }
    }
    
    private IEnumerator ProcessWithGeminiOptimized(string audioPath, System.Action<bool> callback)
    {
        if (!File.Exists(audioPath))
        {
            callback?.Invoke(false);
            yield break;
        }
        
        byte[] audioBytes = File.ReadAllBytes(audioPath);
        string audioBase64 = Convert.ToBase64String(audioBytes);
        
        // ULTRA-OPTIMIZED request for speed
        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new object[]
                    {
                        new
                        {
                            text = "Respond naturally in the same language. Keep it concise and conversational."
                        },
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
                max_output_tokens = 50,  // VERY short for speed
                temperature = 0.1f       // Fast and focused
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
            request.timeout = 8; // Very short timeout for speed
            
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                string textResponse = ProcessTextResponse(request.downloadHandler.text);
                if (!string.IsNullOrEmpty(textResponse))
                {
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
                LogMessage($"❌ Gemini failed: {request.error}");
                callback?.Invoke(false);
            }
        }
    }
    
    private IEnumerator ConvertToSpeechAndPlay(string text)
    {
        isPlayingResponse = true;
        
        // Detect language and get voice settings
        detectedLanguage = DetectLanguageFromText(text);
        var voiceSettings = GetVoiceSettings(detectedLanguage);
        
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
                speakingRate = 1.2  // Slightly faster for responsiveness
            }
        };
        
        string jsonData = JsonConvert.SerializeObject(requestData);
        string url = "https://texttospeech.googleapis.com/v1/text:synthesize?key=AIzaSyCF2J81GFiPZ_itPBXrrPJ2d3oGW_R397c";
        
        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 5; // Fast TTS timeout
            
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
                LogMessage($"❌ TTS failed: {request.error}");
            }
        }
        
        isPlayingResponse = false;
    }
    
    private IEnumerator PlayTTSAudio(string base64Audio)
    {
        byte[] audioData = null;
        int headerSize = 44;
        int sampleCount = 0;
        float[] samples = null;
        AudioClip responseClip = null;
        bool processSuccess = false;
        
        try
        {
            audioData = Convert.FromBase64String(base64Audio);
            
            // Skip WAV header
            sampleCount = (audioData.Length - headerSize) / 2;
            samples = new float[sampleCount];
            
            for (int i = 0; i < sampleCount; i++)
            {
                short sample = BitConverter.ToInt16(audioData, headerSize + i * 2);
                samples[i] = sample / 32768f;
            }
            
            responseClip = AudioClip.Create("AIResponse", sampleCount, 1, 22050, false);
            responseClip.SetData(samples, 0);
            
            audioSource.clip = responseClip;
            audioSource.Play();
            
            LogMessage($"🔊 AI: {ProcessTextResponse(null)} (Playing...)");
            processSuccess = true;
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Error playing TTS: {e.Message}");
        }
        
        if (processSuccess && responseClip != null)
        {
            yield return new WaitUntil(() => !audioSource.isPlaying);
            Destroy(responseClip);
        }
    }
    
    private IEnumerator EndSession()
    {
        LogMessage("\n🛑 === ENDING SPEECH SESSION ===");
        
        isSessionActive = false;
        isRecording = false;
        isPlayingResponse = false;
        
        // Stop microphone
        if (Microphone.IsRecording(microphoneDevice))
        {
            Microphone.End(microphoneDevice);
        }
        
        // Cleanup
        if (continuousClip != null)
        {
            Destroy(continuousClip);
            continuousClip = null;
        }
        
        float sessionDuration = Time.time - sessionStartTime;
        LogMessage($"✅ Session ended. Duration: {sessionDuration:F1}s");
        
        UpdateStatus("Click START to begin new speech-to-speech session");
        UpdateButtonStates();
        
        yield return null;
    }
    
    private void UpdateButtonStates()
    {
        if (startButton != null)
            startButton.interactable = !isSessionActive;
            
        if (stopButton != null)
            stopButton.interactable = isSessionActive;
    }
    
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
        
        // FAST language detection - Vietnamese first (most likely)
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]"))
        {
            return "vi-VN";
        }
        
        // Quick word-based detection
        string lowerText = text.ToLower();
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(tôi|bạn|là|có|không|được|của|và|trong|với|từ|cho|về|này|đó|như|sẽ|đã|đang|rất|nhiều|cũng|hay|thì|nào|gì|ai|đâu|khi|nếu|vì|để|theo|sau|trước|giữa|ngoài|cùng|nhau|đều|chỉ|mà|hoặc|nhưng|tuy|dù)\b"))
        {
            return "vi-VN";
        }
        
        return "en-US"; // Default
    }
    
    private (string languageCode, string voiceName, string gender) GetVoiceSettings(string languageCode)
    {
        return languageCode switch
        {
            "vi-VN" => ("vi-VN", "vi-VN-Standard-A", "FEMALE"),
            "ja-JP" => ("ja-JP", "ja-JP-Standard-A", "FEMALE"),
            "ko-KR" => ("ko-KR", "ko-KR-Standard-A", "FEMALE"), 
            "zh-CN" => ("zh-CN", "zh-CN-Standard-A", "FEMALE"),
            "th-TH" => ("th-TH", "th-TH-Standard-A", "FEMALE"),
            "es-ES" => ("es-ES", "es-ES-Standard-A", "FEMALE"),
            "fr-FR" => ("fr-FR", "fr-FR-Standard-A", "FEMALE"),
            "de-DE" => ("de-DE", "de-DE-Standard-A", "FEMALE"),
            "it-IT" => ("it-IT", "it-IT-Standard-A", "FEMALE"),
            "pt-PT" => ("pt-PT", "pt-PT-Standard-A", "FEMALE"),
            _ => ("en-US", "en-US-Standard-C", "FEMALE")
        };
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
    
    private void LogMessage(string message)
    {
        logMessages += message + "\n";
        
        if (logText != null)
        {
            logText.text = logMessages;
        }
        
        Debug.Log($"[TrueSpeechToSpeech] {message}");
        
        // Keep log manageable
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
    #endregion
    
    #region Context Menu Methods
    [ContextMenu("Start Continuous Session")]
    public void TestStartSession()
    {
        StartContinuousSession();
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
    #endregion
} 