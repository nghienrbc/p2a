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

    [Header("Conversation Display")]
    [Tooltip("Hiển thị câu hỏi của người dùng")]
    public TMP_Text userQuestionText;
    [Tooltip("Hiển thị câu trả lời của AI")]
    public TMP_Text aiResponseText;
    
    [Header("Configuration")]
    public string geminiApiKey = "AIzaSyDR5fVgJABDSkaVfmy-iimLzsLLOBkrBgA";
    public float silenceThreshold = 0.01f;
    public float voiceDetectionTimeout = 2.0f; // Timeout bình thường - an toàn cho câu hỏi dài

    [Header("Advanced Voice Detection")]
    [Tooltip("Ngưỡng âm lượng tối thiểu để phát hiện giọng nói (tránh tạp âm)")]
    public float voiceVolumeThreshold = 0.02f; // Ngưỡng cao hơn để phân biệt giọng nói với tạp âm
    [Tooltip("Thời gian tối thiểu phát hiện giọng nói liên tục để xác nhận là speech")]
    public float minimumSpeechDuration = 0.3f; // Tối thiểu 0.3s giọng nói liên tục
    [Tooltip("Số frame liên tục phải có âm thanh để xác nhận giọng nói")]
    public int consecutiveVoiceFrames = 5; // Cần 5 frame liên tục có giọng nói

    [Header("Voice Detection Timing")]
    [Tooltip("Thời gian chờ sau khi không phát hiện giọng nói trước khi bắt đầu xử lý")]
    public float silenceDetectionTime = 1.2f; // Thời gian im lặng để xác nhận người dùng đã nói xong

    [Header("Speed Optimization")]
    public bool enableFastMode = true; // Bật chế độ tối ưu tốc độ
    public bool useAdaptiveTimeout = true; // Tự động điều chỉnh timeout dựa trên độ dài câu nói

    [Header("Knowledge & Search")]
    [Tooltip("Enable web search for unknown information (increases response time)")]
    public bool enableWebSearch = false; // Tính năng tìm kiếm web (sẽ implement sau)
    public bool preferKnowledgeBase = true; // Ưu tiên sử dụng kiến thức có sẵn

    [Header("Language Detection")]
    [Tooltip("Force a specific language for TTS (leave empty for auto-detection)")]
    public string forceLanguageCode = ""; // Ép buộc ngôn ngữ cụ thể (để trống = auto detect)
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
    private float voiceStartTime = 0f; // Thời điểm bắt đầu phát hiện giọng nói
    private float totalVoiceDuration = 0f; // Tổng thời gian nói để adaptive timeout

    // Enhanced voice detection
    private int consecutiveVoiceFrameCount = 0; // Đếm số frame liên tục có giọng nói
    private float firstVoiceDetectionTime = 0f; // Thời điểm đầu tiên phát hiện giọng nói
    private bool confirmedVoiceDetected = false; // Xác nhận thực sự là giọng nói (không phải tạp âm)

    // Conversation History
    private System.Collections.Generic.List<ConversationEntry> conversationHistory = new System.Collections.Generic.List<ConversationEntry>();
    private const int MAX_HISTORY_ENTRIES = 10; // Giới hạn số lượng history để tránh request quá dài
    private string lastAIResponse = ""; // Lưu response cuối cùng để hiển thị trong log
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
    }
    
    private IEnumerator BeginContinuousConversation()
    {
        LogMessage("\n🚀 === STARTING CONTINUOUS SPEECH SESSION ===");
        LogMessage("🎤 Session active - Speak anytime, AI will respond automatically");
        LogMessage("💾 Conversation history enabled - AI remembers previous questions");
        LogMessage("🧠 Enhanced AI responses - More detailed and contextual answers");

        // Hiển thị thông tin về speed mode
        if (enableFastMode)
        {
            LogMessage($"⚡ FAST MODE ENABLED - Silence detection: {silenceDetectionTime}s");
            LogMessage("🚀 Direct audio processing - No file saving for maximum speed");
        }
        else
        {
            LogMessage($"🐌 Normal mode - Voice timeout: {voiceDetectionTimeout}s");
        }

        if (useAdaptiveTimeout)
        {
            LogMessage("🧠 Adaptive timeout enabled - Adjusts based on speech length");
        }

        // Hiển thị thông tin về knowledge system
        LogMessage("🎓 Tenaya AI - ASEAN & Southeast Asia expertise enabled");
        LogMessage("🌏 Multi-language support - Auto-detect and respond in same language");
        LogMessage("💭 Smart context handling - Related topics use history, new topics start fresh");

        if (preferKnowledgeBase)
        {
            LogMessage("📚 Knowledge-first approach - Using extensive training data");
        }

        if (enableWebSearch)
        {
            LogMessage("🔍 Web search enabled - Will search for unknown information (slower)");
        }
        else
        {
            LogMessage("📖 Offline knowledge mode - Fast responses from training data");
        }

        isSessionActive = true;
        sessionStartTime = Time.time;

        // Clear previous session history (optional - comment out if you want to keep history across sessions)
        // ClearConversationHistory();

        string statusText = enableFastMode ? "⚡ FAST LIVE" : "🔴 LIVE";
        UpdateStatus($"{statusText} - Speak anytime, AI responds automatically");
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
        ResetVoiceDetectionState(); // Reset all voice detection variables

        LogMessage("✅ Continuous recording started - Enhanced voice detection active...");
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

        // Enhanced voice activity analysis
        float audioLevel = GetAudioLevel(samples);
        bool currentVoiceDetected = audioLevel > voiceVolumeThreshold; // Ngưỡng cao hơn cho giọng nói

        if (currentVoiceDetected)
        {
            consecutiveVoiceFrameCount++;

            if (!voiceDetected)
            {
                // Lần đầu phát hiện âm thanh có thể là giọng nói
                firstVoiceDetectionTime = Time.time;
                voiceDetected = true;
                confirmedVoiceDetected = false;
                LogMessage($"🔍 Potential voice detected (level: {audioLevel:F3})...");
            }

            // Xác nhận thực sự là giọng nói sau khi đủ điều kiện
            if (!confirmedVoiceDetected &&
                consecutiveVoiceFrameCount >= consecutiveVoiceFrames &&
                (Time.time - firstVoiceDetectionTime) >= minimumSpeechDuration)
            {
                confirmedVoiceDetected = true;
                voiceStartTime = firstVoiceDetectionTime;
                LogMessage("🗣️ Voice CONFIRMED - Recording speech...");
                UpdateStatus("🎤 Recording your voice...");

                // Hiển thị trạng thái đang nghe trên UI
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
            // Reset consecutive frame count khi không có giọng nói
            consecutiveVoiceFrameCount = 0;

            if (voiceDetected && !confirmedVoiceDetected)
            {
                // Âm thanh không đủ mạnh hoặc không đủ lâu để là giọng nói
                voiceDetected = false;
                LogMessage("❌ False voice detection - Ignoring noise");
            }
            else if (confirmedVoiceDetected)
            {
                // Tính toán timeout thông minh cho giọng nói đã xác nhận
                float currentTimeout = CalculateOptimalTimeout();

                if (Time.time - lastVoiceTime > currentTimeout)
                {
                    // Voice ended after timeout
                    totalVoiceDuration = Time.time - voiceStartTime;
                    voiceDetected = false;
                    confirmedVoiceDetected = false;
                    consecutiveVoiceFrameCount = 0;

                    string timeoutInfo = $"silence: {currentTimeout:F1}s, spoke: {totalVoiceDuration:F1}s";
                    LogMessage($"✅ Voice ended ({timeoutInfo}) - Processing...");
                    StartCoroutine(ProcessVoiceSegment());
                }
            }
        }
    }
    
    private IEnumerator ProcessVoiceSegment()
    {
        isRecording = false; // Stop monitoring during processing
        UpdateStatus("🤖 AI is thinking...");

        // Hiển thị trạng thái đang xử lý trên UI
        if (aiResponseText != null)
        {
            aiResponseText.text = "🤖 AI: (Processing your question...)";
        }

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

        // IMPORTANT: Wait until AI response is completely finished playing
        // before resuming voice monitoring to avoid recording AI's own voice
        if (success)
        {
            LogMessage("✅ AI response processing completed");

            // Wait for TTS to finish completely
            while (isPlayingResponse || (audioSource != null && audioSource.isPlaying))
            {
                yield return new WaitForSeconds(0.1f);
            }

            LogMessage("🔊 AI response finished playing - Resuming voice monitoring");
            UpdateStatus("🔴 LIVE - Speak anytime, AI responds automatically");
        }
        else
        {
            LogMessage("❌ Processing failed - Continuing to listen...");
            UpdateStatus("🔴 LIVE - Speak anytime (previous request failed)");
        }

        // Resume monitoring with reset state
        yield return new WaitForSeconds(0.5f); // Extra delay to ensure clean state
        ResetVoiceDetectionState();
        isRecording = true;
    }

    private void ResetVoiceDetectionState()
    {
        voiceDetected = false;
        confirmedVoiceDetected = false;
        consecutiveVoiceFrameCount = 0;
        lastVoiceTime = Time.time;
        LogMessage("🔄 Voice detection state reset");
    }
    
    private IEnumerator SaveAndProcessAudio(AudioClip clip, System.Action<bool> callback)
    {
        if (enableFastMode)
        {
            // FAST MODE: Xử lý trực tiếp từ AudioClip mà không lưu file
            yield return StartCoroutine(ProcessWithGeminiDirect(clip, callback));
        }
        else
        {
            // NORMAL MODE: Lưu file rồi xử lý (để backward compatibility)
            string filePath = "";
            bool saveSuccess = false;

            try
            {
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
                yield return StartCoroutine(ProcessWithGeminiOptimized(filePath, callback));
            }
            else
            {
                callback?.Invoke(false);
            }
        }
    }
    
    private IEnumerator ProcessWithGeminiDirect(AudioClip clip, System.Action<bool> callback)
    {
        if (clip == null)
        {
            callback?.Invoke(false);
            yield break;
        }

        // Chuyển đổi AudioClip thành byte array trực tiếp (NHANH HỚN)
        byte[] audioBytes = ConvertAudioClipToWavBytes(clip);
        if (audioBytes == null)
        {
            LogMessage("❌ Failed to convert audio clip");
            callback?.Invoke(false);
            yield break;
        }

        string audioBase64 = Convert.ToBase64String(audioBytes);

        // Tạo system prompt với conversation history
        string systemPrompt = BuildSystemPromptWithHistory();

        // ULTRA-FAST request
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
                max_output_tokens = 100, // Tăng lên để có câu trả lời đầy đủ hơn
                temperature = 0.4f       // Tăng temperature để câu trả lời tự nhiên hơn
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
            request.timeout = 15; // Tăng timeout để tránh request failed

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string textResponse = ProcessTextResponse(request.downloadHandler.text);
                if (!string.IsNullOrEmpty(textResponse))
                {
                    lastAIResponse = textResponse;
                    string estimatedUserInput = EstimateUserInputFromResponse(textResponse);

                    // Cập nhật UI hiển thị câu hỏi và trả lời
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
                LogMessage($"🔄 Retrying in next voice segment...");
                callback?.Invoke(false);
            }
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

        // Tạo system prompt với conversation history
        string systemPrompt = BuildSystemPromptWithHistory();

        // OPTIMIZED request với history context
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
                            text = systemPrompt
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
                max_output_tokens = 100,  // Tăng lên để có câu trả lời đầy đủ hơn
                temperature = 0.4f        // Tăng temperature để câu trả lời tự nhiên hơn
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
            request.timeout = 15; // Tăng timeout để tránh request failed
            
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                string textResponse = ProcessTextResponse(request.downloadHandler.text);
                if (!string.IsNullOrEmpty(textResponse))
                {
                    // Lưu response vào history
                    lastAIResponse = textResponse;

                    // Thêm vào conversation history với user input ước đoán
                    string estimatedUserInput = EstimateUserInputFromResponse(textResponse);

                    // Cập nhật UI hiển thị câu hỏi và trả lời
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
                LogMessage($"🔄 Retrying in next voice segment...");
                callback?.Invoke(false);
            }
        }
    }
    
    private IEnumerator ConvertToSpeechAndPlay(string text)
    {
        isPlayingResponse = true;

        // Detect language from AI response text (FRESH detection each time)
        string responseLanguage;
        if (!string.IsNullOrEmpty(forceLanguageCode))
        {
            responseLanguage = forceLanguageCode;
            LogMessage($"🔒 Forced language: {responseLanguage}");
        }
        else
        {
            responseLanguage = DetectLanguageFromText(text);
            LogMessage($"🔍 Auto-detected language: {responseLanguage}");
        }

        var voiceSettings = GetVoiceSettings(responseLanguage);

        // Debug logging để kiểm tra language detection
        LogMessage($"🗣️ Response text: '{text.Substring(0, Mathf.Min(50, text.Length))}...'");
        LogMessage($"🌍 Final language: {responseLanguage} → Voice: {voiceSettings.voiceName}");

        // Additional debug info
        bool hasVietnameseDiacritics = System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]");
        bool hasEnglishWords = System.Text.RegularExpressions.Regex.IsMatch(text.ToLower(), @"\b(the|and|or|but|in|on|at|to|for|of|with|by|from|about|into|through|during|before|after|above|below|up|down|out|off|over|under|again|further|then|once|here|there|when|where|why|how|all|any|both|each|few|more|most|other|some|such|no|nor|not|only|own|same|so|than|too|very|can|will|just|should|now|would|could|might|must|shall|may|ought|need|dare|used|going|want|like|know|think|see|get|make|take|come|go|say|tell|ask|give|find|feel|seem|look|try|work|call|move|live|believe|hold|bring|happen|write|provide|sit|stand|lose|pay|meet|include|continue|set|learn|change|lead|understand|watch|follow|stop|create|speak|read|allow|add|spend|grow|open|walk|win|offer|remember|love|consider|appear|buy|wait|serve|die|send|expect|build|stay|fall|cut|reach|kill|remain|suggest|raise|pass|sell|require|report|decide|pull)\b");
        LogMessage($"🔍 Debug: VN diacritics={hasVietnameseDiacritics}, EN words={hasEnglishWords}");

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
            request.timeout = 10; // Tăng timeout cho TTS để tránh lỗi
            
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
                string errorDetails = $"Result: {request.result}, Error: {request.error}";
                if (request.downloadHandler != null && !string.IsNullOrEmpty(request.downloadHandler.text))
                {
                    errorDetails += $", Response: {request.downloadHandler.text}";
                }
                LogMessage($"❌ TTS request failed: {errorDetails}");
                LogMessage($"🔄 Will continue listening without audio response...");
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

        // Reset voice detection state
        ResetVoiceDetectionState();

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
        LogMessage($"📊 Enhanced voice detection with {voiceVolumeThreshold:F3} threshold");

        UpdateStatus("Click START to begin new speech-to-speech session");
        ClearConversationDisplay(); // Reset conversation display
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

        string lowerText = text.ToLower();

        // PRIORITY 1: ENGLISH DETECTION FIRST (Most common in AI responses)
        // Check for common English words and patterns
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(the|and|or|but|in|on|at|to|for|of|with|by|from|about|into|through|during|before|after|above|below|up|down|out|off|over|under|again|further|then|once|here|there|when|where|why|how|all|any|both|each|few|more|most|other|some|such|no|nor|not|only|own|same|so|than|too|very|can|will|just|should|now|would|could|might|must|shall|may|ought|need|dare|used|going|want|like|know|think|see|get|make|take|come|go|say|tell|ask|give|find|feel|seem|look|try|work|call|move|live|believe|hold|bring|happen|write|provide|sit|stand|lose|pay|meet|include|continue|set|learn|change|lead|understand|watch|follow|stop|create|speak|read|allow|add|spend|grow|open|walk|win|offer|remember|love|consider|appear|buy|wait|serve|die|send|expect|build|stay|fall|cut|reach|kill|remain|suggest|raise|pass|sell|require|report|decide|pull)\b") &&
            !System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]"))
        {
            return "en-US";
        }

        // PRIORITY 2: VIETNAMESE - More strict detection
        // Must have Vietnamese diacritics OR multiple Vietnamese words
        bool hasVietnameseDiacritics = System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]");
        int vietnameseWordCount = System.Text.RegularExpressions.Regex.Matches(lowerText, @"\b(tôi|bạn|là|có|không|được|của|và|trong|với|từ|cho|về|này|đó|như|sẽ|đã|đang|rất|nhiều|cũng|hay|thì|nào|gì|ai|đâu|khi|nếu|vì|để|theo|sau|trước|giữa|ngoài|cùng|nhau|đều|chỉ|mà|hoặc|nhưng|tuy|dù|việt nam|asean|đông nam á)\b").Count;

        if (hasVietnameseDiacritics || vietnameseWordCount >= 2)
        {
            return "vi-VN";
        }

        // Thai - Check for Thai script and common words
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0E00-\u0E7F]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(สวัสดี|ขอบคุณ|ขอโทษ|ใช่|ไม่|มี|ไม่มี|ฉัน|คุณ|เขา|เธอ|มัน|พวกเขา|ของ|แล้ว|ใน|และ|หรือ|แต่|เพราะ|ดังนั้น|ถ้า|แล้ว|นี้|นั่น|อะไร|ที่ไหน|เมื่อไหร่|อย่างไร|ทำไม|ประเทศไทย|อาเซียน)\b"))
        {
            return "th-TH";
        }

        // Indonesian - Check for Indonesian words
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(halo|terima kasih|maaf|ya|tidak|ada|saya|anda|dia|mereka|dari|di|dan|atau|tapi|karena|jika|ini|itu|apa|dimana|kapan|bagaimana|mengapa|indonesia|asean|asia tenggara)\b"))
        {
            return "id-ID";
        }

        // Malay - Check for Malay words
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(hello|terima kasih|maaf|ya|tidak|ada|saya|awak|dia|mereka|dari|di|dan|atau|tetapi|kerana|jika|ini|itu|apa|mana|bila|bagaimana|mengapa|malaysia|asean|asia tenggara)\b"))
        {
            return "ms-MY";
        }

        // Filipino/Tagalog - Check for Filipino words
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(kumusta|salamat|paumanhin|oo|hindi|may|ako|ikaw|siya|sila|sa|at|o|pero|dahil|kung|ito|iyan|ano|saan|kailan|paano|bakit|pilipinas|asean)\b"))
        {
            return "fil-PH";
        }

        // Burmese - Check for Myanmar script
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u1000-\u109F]"))
        {
            return "my-MM";
        }

        // Khmer - Check for Khmer script
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u1780-\u17FF]"))
        {
            return "km-KH";
        }

        // Lao - Check for Lao script
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0E80-\u0EFF]"))
        {
            return "lo-LA";
        }

        // OTHER ASIAN LANGUAGES

        // Japanese - Check for hiragana, katakana, kanji
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(です|である|ます|だ|の|に|を|は|が|で|と|から|まで|について|という|こと|もの|人|時|日|年|月|週|今|昨日|明日|おはよう|こんにちは|こんばんは|ありがとう|すみません|はい|いいえ|アセアン)\b"))
        {
            return "ja-JP";
        }

        // Korean - Check for Hangul
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\uAC00-\uD7AF\u1100-\u11FF\u3130-\u318F]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(안녕|감사|죄송|네|아니|입니다|합니다|이다|있다|없다|하다|가다|오다|보다|듣다|말하다|먹다|마시다|자다|일어나다|좋다|나쁘다|크다|작다|많다|적다|빠르다|느리다|아세안)\b"))
        {
            return "ko-KR";
        }

        // Chinese (Simplified) - Check for Chinese characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u4E00-\u9FFF]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(你好|谢谢|对不起|是|不是|有|没有|我|你|他|她|它|们|的|了|在|和|或者|但是|因为|所以|如果|那么|这个|那个|什么|哪里|什么时候|怎么|为什么|东盟|东南亚)\b"))
        {
            return "zh-CN";
        }

        // Spanish - Check for Spanish words and characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[ñáéíóúü]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(hola|gracias|perdón|sí|no|es|está|hay|yo|tú|él|ella|nosotros|ustedes|ellos|de|en|y|o|pero|porque|si|entonces|este|ese|qué|dónde|cuándo|cómo|por qué)\b"))
        {
            return "es-ES";
        }

        // French - Check for French words and characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[àâäéèêëïîôöùûüÿç]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(bonjour|merci|pardon|oui|non|est|il y a|je|tu|il|elle|nous|vous|ils|elles|de|dans|et|ou|mais|parce que|si|alors|ce|cette|quoi|où|quand|comment|pourquoi)\b"))
        {
            return "fr-FR";
        }

        // German - Check for German words and characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[äöüß]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(hallo|danke|entschuldigung|ja|nein|ist|gibt|ich|du|er|sie|wir|ihr|sie|von|in|und|oder|aber|weil|wenn|dann|dies|das|was|wo|wann|wie|warum)\b"))
        {
            return "de-DE";
        }

        // Italian - Check for Italian words
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(ciao|grazie|scusa|sì|no|è|c'è|io|tu|lui|lei|noi|voi|loro|di|in|e|o|ma|perché|se|allora|questo|quello|cosa|dove|quando|come|perché)\b"))
        {
            return "it-IT";
        }

        // Portuguese - Check for Portuguese words
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[ãõç]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(olá|obrigado|desculpa|sim|não|é|há|eu|você|ele|ela|nós|vocês|eles|de|em|e|ou|mas|porque|se|então|este|esse|o que|onde|quando|como|por que)\b"))
        {
            return "pt-PT";
        }

        // Russian - Check for Cyrillic
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0400-\u04FF]") ||
            System.Text.RegularExpressions.Regex.IsMatch(lowerText, @"\b(привет|спасибо|извините|да|нет|есть|я|ты|он|она|мы|вы|они|в|и|или|но|потому что|если|тогда|это|что|где|когда|как|почему)\b"))
        {
            return "ru-RU";
        }

        // Arabic - Check for Arabic script
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0600-\u06FF]"))
        {
            return "ar-SA";
        }

        // Hindi - Check for Devanagari script
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0900-\u097F]"))
        {
            return "hi-IN";
        }

        // Default to English if no specific language detected
        return "en-US";
    }
    
    private (string languageCode, string voiceName, string gender) GetVoiceSettings(string languageCode)
    {
        return languageCode switch
        {
            // SOUTHEAST ASIA LANGUAGES (PRIORITY)
            "vi-VN" => ("vi-VN", "vi-VN-Standard-A", "FEMALE"),           // Vietnamese
            "th-TH" => ("th-TH", "th-TH-Standard-A", "FEMALE"),           // Thai
            "id-ID" => ("id-ID", "id-ID-Standard-A", "FEMALE"),           // Indonesian
            "ms-MY" => ("ms-MY", "ms-MY-Standard-A", "FEMALE"),           // Malay
            "fil-PH" => ("fil-PH", "fil-PH-Standard-A", "FEMALE"),        // Filipino
            "my-MM" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Burmese (fallback to English - limited TTS support)
            "km-KH" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Khmer (fallback to English - limited TTS support)
            "lo-LA" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Lao (fallback to English - limited TTS support)

            // OTHER ASIAN LANGUAGES
            "ja-JP" => ("ja-JP", "ja-JP-Standard-A", "FEMALE"),           // Japanese
            "ko-KR" => ("ko-KR", "ko-KR-Standard-A", "FEMALE"),           // Korean
            "zh-CN" => ("zh-CN", "zh-CN-Standard-A", "FEMALE"),           // Chinese Simplified
            "zh-TW" => ("zh-TW", "zh-TW-Standard-A", "FEMALE"),           // Chinese Traditional
            "hi-IN" => ("hi-IN", "hi-IN-Standard-A", "FEMALE"),           // Hindi
            "ta-IN" => ("ta-IN", "ta-IN-Standard-A", "FEMALE"),           // Tamil
            "te-IN" => ("te-IN", "te-IN-Standard-A", "FEMALE"),           // Telugu
            "bn-IN" => ("bn-IN", "bn-IN-Standard-A", "FEMALE"),           // Bengali

            // EUROPEAN LANGUAGES
            "es-ES" => ("es-ES", "es-ES-Standard-A", "FEMALE"),           // Spanish
            "fr-FR" => ("fr-FR", "fr-FR-Standard-A", "FEMALE"),           // French
            "de-DE" => ("de-DE", "de-DE-Standard-A", "FEMALE"),           // German
            "it-IT" => ("it-IT", "it-IT-Standard-A", "FEMALE"),           // Italian
            "pt-PT" => ("pt-PT", "pt-PT-Standard-A", "FEMALE"),           // Portuguese
            "ru-RU" => ("ru-RU", "ru-RU-Standard-A", "FEMALE"),           // Russian
            "nl-NL" => ("nl-NL", "nl-NL-Standard-A", "FEMALE"),           // Dutch
            "sv-SE" => ("sv-SE", "sv-SE-Standard-A", "FEMALE"),           // Swedish
            "da-DK" => ("da-DK", "da-DK-Standard-A", "FEMALE"),           // Danish
            "no-NO" => ("nb-NO", "nb-NO-Standard-A", "FEMALE"),           // Norwegian
            "fi-FI" => ("fi-FI", "fi-FI-Standard-A", "FEMALE"),           // Finnish
            "pl-PL" => ("pl-PL", "pl-PL-Standard-A", "FEMALE"),           // Polish
            "cs-CZ" => ("cs-CZ", "cs-CZ-Standard-A", "FEMALE"),           // Czech
            "sk-SK" => ("sk-SK", "sk-SK-Standard-A", "FEMALE"),           // Slovak
            "hu-HU" => ("hu-HU", "hu-HU-Standard-A", "FEMALE"),           // Hungarian
            "tr-TR" => ("tr-TR", "tr-TR-Standard-A", "FEMALE"),           // Turkish
            "el-GR" => ("el-GR", "el-GR-Standard-A", "FEMALE"),           // Greek

            // MIDDLE EASTERN & AFRICAN LANGUAGES
            "ar-SA" => ("ar-XA", "ar-XA-Standard-A", "FEMALE"),           // Arabic
            "he-IL" => ("he-IL", "he-IL-Standard-A", "FEMALE"),           // Hebrew
            "fa-IR" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Persian (fallback)
            "ur-PK" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Urdu (fallback)
            "sw-KE" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Swahili (fallback)

            // REGIONAL VARIANTS
            "pt-BR" => ("pt-BR", "pt-BR-Standard-A", "FEMALE"),           // Brazilian Portuguese
            "es-US" => ("es-US", "es-US-Standard-A", "FEMALE"),           // US Spanish
            "es-MX" => ("es-US", "es-US-Standard-A", "FEMALE"),           // Mexican Spanish
            "fr-CA" => ("fr-CA", "fr-CA-Standard-A", "FEMALE"),           // Canadian French
            "en-GB" => ("en-GB", "en-GB-Standard-A", "FEMALE"),           // British English
            "en-AU" => ("en-AU", "en-AU-Standard-A", "FEMALE"),           // Australian English
            "en-IN" => ("en-IN", "en-IN-Standard-A", "FEMALE"),           // Indian English
            "en-SG" => ("en-US", "en-US-Standard-C", "FEMALE"),           // Singapore English (fallback)

            // DEFAULT FALLBACK
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

    private void UpdateUserQuestion(string question)
    {
        if (userQuestionText != null)
        {
            userQuestionText.text = $"👤 User: {question}";
        }
        LogMessage($"👤 User Question: {question}");
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
            aiResponseText.text = "🤖 AI: (Ready to respond...)";
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
- Malay (Bahasa Melayu) → Respond in Malay
- Filipino/Tagalog → Respond in Filipino
- English → Respond in English
- Chinese (中文) → Respond in Chinese
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
User: 'How's the weather?' → 'I don't have access to current weather data. You can check local weather apps or websites for accurate information.'
User: 'Tell me about ASEAN' → 'ASEAN is a 10-member Southeast Asian political and economic union. It promotes regional cooperation and economic integration among member countries.'

";

        // Add conversation history if available
        if (conversationHistory.Count > 0)
        {
            basePrompt += "CONVERSATION CONTEXT (recent exchanges for reference only):\n";

            // Get last 3 exchanges to avoid overly long requests
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
        // Thêm entry mới
        conversationHistory.Add(new ConversationEntry(userInput, aiResponse));

        // Giới hạn số lượng history
        if (conversationHistory.Count > MAX_HISTORY_ENTRIES)
        {
            conversationHistory.RemoveAt(0); // Xóa entry cũ nhất
        }

        LogMessage($"💾 History updated: {conversationHistory.Count} entries");
    }

    private void ClearConversationHistory()
    {
        conversationHistory.Clear();
        LogMessage("🗑️ Conversation history cleared");
    }

    private byte[] ConvertAudioClipToWavBytes(AudioClip clip)
    {
        try
        {
            // Lấy dữ liệu audio từ clip
            float[] samples = new float[clip.samples * clip.channels];
            clip.GetData(samples, 0);

            // Chuyển đổi thành 16-bit PCM
            byte[] pcmData = new byte[samples.Length * 2];
            for (int i = 0; i < samples.Length; i++)
            {
                short sample = (short)(samples[i] * 32767f);
                pcmData[i * 2] = (byte)(sample & 0xFF);
                pcmData[i * 2 + 1] = (byte)((sample >> 8) & 0xFF);
            }

            // Tạo WAV header
            byte[] header = CreateWavHeader(clip.frequency, clip.channels, pcmData.Length);

            // Kết hợp header và data
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
        System.BitConverter.GetBytes(16).CopyTo(header, 16); // chunk size
        System.BitConverter.GetBytes((short)1).CopyTo(header, 20); // PCM format
        System.BitConverter.GetBytes((short)channels).CopyTo(header, 22);
        System.BitConverter.GetBytes(sampleRate).CopyTo(header, 24);
        System.BitConverter.GetBytes(sampleRate * channels * 2).CopyTo(header, 28); // byte rate
        System.BitConverter.GetBytes((short)(channels * 2)).CopyTo(header, 32); // block align
        System.BitConverter.GetBytes((short)16).CopyTo(header, 34); // bits per sample

        // data chunk
        System.Text.Encoding.ASCII.GetBytes("data").CopyTo(header, 36);
        System.BitConverter.GetBytes(dataLength).CopyTo(header, 40);

        return header;
    }

    private float CalculateOptimalTimeout()
    {
        if (!useAdaptiveTimeout)
        {
            // Sử dụng timeout cố định dựa trên mode
            return enableFastMode ? silenceDetectionTime : voiceDetectionTimeout;
        }

        // Adaptive timeout logic
        float currentSpeechDuration = Time.time - voiceStartTime;
        float baseTimeout = enableFastMode ? silenceDetectionTime : voiceDetectionTimeout;

        // Nếu người dùng đã nói lâu (>3s), cho thêm thời gian để họ có thể nghỉ ngơi giữa câu
        if (currentSpeechDuration > 3f)
        {
            baseTimeout = Mathf.Max(baseTimeout, 1.5f); // Tối thiểu 1.5s cho câu dài
        }
        // Nếu nói ngắn (<1s), có thể là câu ngắn nên timeout nhanh hơn
        else if (currentSpeechDuration < 1f)
        {
            baseTimeout = Mathf.Min(baseTimeout, 1.0f); // Tối đa 1s cho câu ngắn
        }

        return baseTimeout;
    }

    private string EstimateUserInputFromResponse(string aiResponse)
    {
        // Improved estimation method with more meaningful question generation

        if (string.IsNullOrEmpty(aiResponse))
            return "❓ [Question not detected]";

        // Analyze response to estimate question type
        string lowerResponse = aiResponse.ToLower();

        // Detect language first to generate appropriate question
        string detectedLang = DetectLanguageFromText(aiResponse);

        // Generate more meaningful questions based on response content and language

        // Greetings - Multi-language
        if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(hello|hi|xin chào|chào|สวัสดี|halo|selamat|kumusta|မင်္ဂလာပါ|ជំរាបសួរ|ສະບາຍດີ|こんにちは|안녕|你好|hola|bonjour|hallo|ciao|olá|привет|مرحبا|नमस्ते)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Xin chào!" :
                   detectedLang.StartsWith("th") ? "สวัสดีครับ" :
                   detectedLang.StartsWith("id") ? "Halo!" :
                   detectedLang.StartsWith("ms") ? "Hello!" :
                   detectedLang.StartsWith("fil") ? "Kumusta!" :
                   "Hello!";
        }

        // Weather questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(weather|thời tiết|อากาศ|cuaca|panahon|ရာသီဥတု|អាកាសធាតុ|ສະພາບອາກາດ|天気|날씨|天气|temperature|rain|sunny|cloudy)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Thời tiết hôm nay thế nào?" :
                   detectedLang.StartsWith("th") ? "อากาศวันนี้เป็นอย่างไร?" :
                   detectedLang.StartsWith("id") ? "Bagaimana cuaca hari ini?" :
                   "What's the weather like today?";
        }

        // Name/Identity questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(name|tên|ชื่อ|nama|pangalan|နာမည်|ឈ្មោះ|ຊື່|名前|이름|名字|tenaya|ai|assistant|bot)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Tên bạn là gì?" :
                   detectedLang.StartsWith("th") ? "คุณชื่ออะไร?" :
                   detectedLang.StartsWith("id") ? "Siapa nama Anda?" :
                   "What's your name?";
        }

        // Time questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(time|giờ|เวลา|waktu|oras|အချိန်|ពេលវេលា|ເວລາ|時間|시간|时间|clock|hour|minute)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Mấy giờ rồi?" :
                   detectedLang.StartsWith("th") ? "ตอนนี้กี่โมงแล้ว?" :
                   detectedLang.StartsWith("id") ? "Jam berapa sekarang?" :
                   "What time is it?";
        }

        // Thanks expressions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(thank|cảm ơn|ขอบคุณ|terima kasih|salamat|ကျေးဇူးတင်|អរគុណ|ຂອບໃຈ|ありがとう|감사|谢谢|gracias|merci|danke|grazie|obrigado|спасибо|شكرا|धन्यवाद)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Cảm ơn bạn!" :
                   detectedLang.StartsWith("th") ? "ขอบคุณครับ" :
                   detectedLang.StartsWith("id") ? "Terima kasih!" :
                   "Thank you!";
        }

        // ASEAN/Southeast Asia questions
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(asean|อาเซียน|အာဆီယံ|អាស៊ាន|ອາຊຽນ|アセアン|아세안|东盟|southeast asia|đông nam á|เอเชียตะวันออกเฉียงใต้|asia tenggara|timog silangang asya|အရှေ့တောင်အာရှ|អាស៊ីអាគ្នេយ៍|ອາຊີຕາເວັນອອກສຽງໃຕ້)\b"))
        {
            return detectedLang.StartsWith("vi") ? "ASEAN là gì?" :
                   detectedLang.StartsWith("th") ? "อาเซียนคืออะไร?" :
                   detectedLang.StartsWith("id") ? "Apa itu ASEAN?" :
                   "What is ASEAN?";
        }

        // General questions based on response content
        else if (System.Text.RegularExpressions.Regex.IsMatch(lowerResponse, @"\b(capital|thủ đô|เมืองหลวง|ibu kota|kabisera|မြို့တော်|រាជធានី|ນະຄອນຫຼວງ|首都|수도)\b"))
        {
            return detectedLang.StartsWith("vi") ? "Thủ đô của [quốc gia] là gì?" :
                   detectedLang.StartsWith("th") ? "เมืองหลวงของ[ประเทศ]คืออะไร?" :
                   detectedLang.StartsWith("id") ? "Apa ibu kota [negara]?" :
                   "What's the capital of [country]?";
        }

        // Fallback with more context from response
        else
        {
            // Try to extract key words from response to create better question
            string[] responseWords = lowerResponse.Split(' ');
            string keyWord = responseWords.Length > 2 ? responseWords[1] : "something";

            return detectedLang.StartsWith("vi") ? $"❓ [Hỏi về {keyWord}]" :
                   detectedLang.StartsWith("th") ? $"❓ [ถามเกี่ยวกับ {keyWord}]" :
                   detectedLang.StartsWith("id") ? $"❓ [Bertanya tentang {keyWord}]" :
                   $"❓ [Asked about {keyWord}]";
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

    [ContextMenu("Clear Conversation History")]
    public void ClearHistoryFromMenu()
    {
        ClearConversationHistory();
    }

    [ContextMenu("Show Conversation History")]
    public void ShowConversationHistory()
    {
        if (conversationHistory.Count == 0)
        {
            LogMessage("📝 No conversation history available");
            return;
        }

        LogMessage("\n📚 === CONVERSATION HISTORY ===");
        for (int i = 0; i < conversationHistory.Count; i++)
        {
            var entry = conversationHistory[i];
            LogMessage($"[{i + 1}] User: {entry.userInput}");
            LogMessage($"[{i + 1}] AI: {entry.aiResponse}");
            LogMessage($"    Time: {entry.timestamp:HH:mm:ss}");
            LogMessage("---");
        }
        LogMessage("=== END HISTORY ===\n");
    }

    [ContextMenu("Show Current Settings")]
    public void ShowCurrentSettings()
    {
        LogMessage("\n⚙️ === CURRENT SETTINGS ===");
        LogMessage($"🔇 Silence Detection Time: {silenceDetectionTime}s");
        LogMessage($"⏱️ Voice Detection Timeout: {voiceDetectionTimeout}s");
        LogMessage($"⚡ Fast Mode: {(enableFastMode ? "ENABLED" : "DISABLED")}");
        LogMessage($"🧠 Adaptive Timeout: {(useAdaptiveTimeout ? "ENABLED" : "DISABLED")}");
        LogMessage($"🎚️ Silence Threshold: {silenceThreshold}");
        LogMessage("=== END SETTINGS ===\n");
    }

    [ContextMenu("Test Quick Response (0.8s)")]
    public void SetQuickResponse()
    {
        silenceDetectionTime = 0.8f;
        LogMessage("⚡ Set to Quick Response: 0.8s silence detection");
    }

    [ContextMenu("Test Balanced Response (1.2s)")]
    public void SetBalancedResponse()
    {
        silenceDetectionTime = 1.2f;
        LogMessage("⚖️ Set to Balanced Response: 1.2s silence detection");
    }

    [ContextMenu("Test Patient Response (1.8s)")]
    public void SetPatientResponse()
    {
        silenceDetectionTime = 1.8f;
        LogMessage("🐌 Set to Patient Response: 1.8s silence detection");
    }

    [ContextMenu("Test Language Detection")]
    public void TestLanguageDetection()
    {
        LogMessage("\n🧪 === TESTING LANGUAGE DETECTION ===");

        string[] testTexts = {
            "Hello, how are you today?",
            "Xin chào, bạn có khỏe không?",
            "สวัสดี คุณสบายดีไหม",
            "Halo, apa kabar hari ini?",
            "こんにちは、元気ですか？",
            "안녕하세요, 오늘 어떠세요?",
            "你好，你今天好吗？"
        };

        foreach (string testText in testTexts)
        {
            string detected = DetectLanguageFromText(testText);
            var voice = GetVoiceSettings(detected);
            LogMessage($"Text: '{testText}' → {detected} ({voice.voiceName})");
        }

        LogMessage("=== END TEST ===\n");
    }

    [ContextMenu("Clear Force Language")]
    public void ClearForceLanguage()
    {
        forceLanguageCode = "";
        LogMessage("🔓 Force language cleared - Auto-detection enabled");
    }

    [ContextMenu("Force English")]
    public void ForceEnglish()
    {
        forceLanguageCode = "en-US";
        LogMessage("🔒 Forced to English (en-US)");
    }

    [ContextMenu("Force Vietnamese")]
    public void ForceVietnamese()
    {
        forceLanguageCode = "vi-VN";
        LogMessage("🔒 Forced to Vietnamese (vi-VN)");
    }

    [ContextMenu("Test English Response")]
    public void TestEnglishResponse()
    {
        string testText = "Hello, how are you today? I hope you are doing well.";
        LogMessage($"\n🧪 Testing English: '{testText}'");
        string detected = DetectLanguageFromText(testText);
        var voice = GetVoiceSettings(detected);
        LogMessage($"Result: {detected} → {voice.voiceName}");

        // Test debug info
        bool hasVietnameseDiacritics = System.Text.RegularExpressions.Regex.IsMatch(testText, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]");
        bool hasEnglishWords = System.Text.RegularExpressions.Regex.IsMatch(testText.ToLower(), @"\b(the|and|or|but|in|on|at|to|for|of|with|by|from|about|into|through|during|before|after|above|below|up|down|out|off|over|under|again|further|then|once|here|there|when|where|why|how|all|any|both|each|few|more|most|other|some|such|no|nor|not|only|own|same|so|than|too|very|can|will|just|should|now|would|could|might|must|shall|may|ought|need|dare|used|going|want|like|know|think|see|get|make|take|come|go|say|tell|ask|give|find|feel|seem|look|try|work|call|move|live|believe|hold|bring|happen|write|provide|sit|stand|lose|pay|meet|include|continue|set|learn|change|lead|understand|watch|follow|stop|create|speak|read|allow|add|spend|grow|open|walk|win|offer|remember|love|consider|appear|buy|wait|serve|die|send|expect|build|stay|fall|cut|reach|kill|remain|suggest|raise|pass|sell|require|report|decide|pull)\b");
        LogMessage($"Debug: VN diacritics={hasVietnameseDiacritics}, EN words={hasEnglishWords}\n");
    }

    [ContextMenu("Test Vietnamese Response")]
    public void TestVietnameseResponse()
    {
        string testText = "Xin chào, bạn có khỏe không? Tôi hy vọng bạn đang ổn.";
        LogMessage($"\n🧪 Testing Vietnamese: '{testText}'");
        string detected = DetectLanguageFromText(testText);
        var voice = GetVoiceSettings(detected);
        LogMessage($"Result: {detected} → {voice.voiceName}");

        // Test debug info
        bool hasVietnameseDiacritics = System.Text.RegularExpressions.Regex.IsMatch(testText, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]");
        bool hasEnglishWords = System.Text.RegularExpressions.Regex.IsMatch(testText.ToLower(), @"\b(the|and|or|but|in|on|at|to|for|of|with|by|from|about|into|through|during|before|after|above|below|up|down|out|off|over|under|again|further|then|once|here|there|when|where|why|how|all|any|both|each|few|more|most|other|some|such|no|nor|not|only|own|same|so|than|too|very|can|will|just|should|now|would|could|might|must|shall|may|ought|need|dare|used|going|want|like|know|think|see|get|make|take|come|go|say|tell|ask|give|find|feel|seem|look|try|work|call|move|live|believe|hold|bring|happen|write|provide|sit|stand|lose|pay|meet|include|continue|set|learn|change|lead|understand|watch|follow|stop|create|speak|read|allow|add|spend|grow|open|walk|win|offer|remember|love|consider|appear|buy|wait|serve|die|send|expect|build|stay|fall|cut|reach|kill|remain|suggest|raise|pass|sell|require|report|decide|pull)\b");
        LogMessage($"Debug: VN diacritics={hasVietnameseDiacritics}, EN words={hasEnglishWords}\n");
    }
    #endregion
} 