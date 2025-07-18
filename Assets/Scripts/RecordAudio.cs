using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Http;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Events;
using NAudio.Wave;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using TMPro;
using System.Text.RegularExpressions;
using UnityEngine.Networking;
using UnityEngine.Android;
using System.Threading;
using System.Net.WebSockets;

public class RecordAudio : MonoBehaviour
{
    // Add this at the top of the class:
    public static RecordAudio Instance { get; private set; }
    public TMP_Text transcriptTxt;
    public TMP_Text responseTxt;
    public MyakuController myakuController;
    private AndroidJavaObject audioPlugin;

    public bool enableHeyDT = true;

    [SerializeField] private AudioSource audioSource;

    private AudioClip recordedClip;
    private float startTimeRecord = 0f;
    private bool isRecordingByButton = false;
    private bool isHoldingOnButton = false;
    private float recordingLength;
    private List<Coroutine> runningCoroutines;

    public UnityEvent onAudioFinished;
    private float endAnswerTime;
    private StreamBuffer streamBuffer;
    private string openAiApiKey = "";
    private string groqKey = "";
    private string googleApiKey = "";
    private string geminiApiKey = "";
    private string preferredLanguage = "en-US"; // Ngôn ngữ mặc định là tiếng Anh
    private List<(int index, AudioClip clip)> audioClips = new List<(int, AudioClip)>();
    private const int SAMPLE_RATE = 24000;
    private bool isEnableMic = false;

    // Lịch sử chat
    private List<(string question, string answer)> chatHistory = new List<(string, string)>();
    private const float SESSION_TIMEOUT = 90f; // 1 phút

    private string selectedSTTLanguage = ""; // Ngôn ngữ được chọn cho Google STT

    // Gemini Live API variables
    private ClientWebSocket geminiWebSocket;
    private CancellationTokenSource cancellationTokenSource;
    private bool isGeminiSessionActive = false;
    private Queue<byte[]> audioQueue = new Queue<byte[]>();
    private bool isRecordingForGemini = false;

    // Danh sách ngôn ngữ được Google Cloud TTS hỗ trợ
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
    // Thêm HttpClient tĩnh để tái sử dụng
    //private static readonly HttpClient httpClient = new HttpClient { Timeout = TimeSpan.FromSeconds(45) };

    private class StreamBuffer
    {
        private string currentBuffer = "";
        private readonly int minChunkSize;
        private static readonly Regex sentenceSplitRegex = new Regex(@"(?<!\w\.\w.)(?<![A-Z][a-z]\.)(?<=\.|\?|!)\s");

        public StreamBuffer(int minChunkSize = 50)
        {
            this.minChunkSize = minChunkSize;
        }

        public List<string> AddText(string text)
        {
            currentBuffer += text;
            var sentences = sentenceSplitRegex.Split(currentBuffer);
            var completeSentences = sentences.Take(sentences.Length - 1).ToList();

            var result = completeSentences
                .Select(s => s.Trim())
                .Where(s => s.Length >= minChunkSize || !string.IsNullOrEmpty(s))
                .ToList();

            currentBuffer = sentences.Length > 0 ? sentences[sentences.Length - 1] : "";
            return result;
        }

        public string GetCurrentBuffer()
        {
            return currentBuffer;
        }

        public void ClearBuffer()
        {
            currentBuffer = "";
        }
    }

    [System.Serializable]
    public class Config
    {
        public string openAIApiKey;
        public string groqKey;
        public string googleApiKey;
        public string geminiApiKey;
        public string preferredLanguage; // Ngôn ngữ TTS mặc định
    }

    private void Awake()
    {
        Instance = this;
        streamBuffer = new StreamBuffer();
        runningCoroutines = new List<Coroutine>();

        // Load config
        TextAsset configFile = Resources.Load<TextAsset>("config");
        if (configFile != null)
        {
            Config config = JsonUtility.FromJson<Config>(configFile.text);
            openAiApiKey = config.openAIApiKey;
            groqKey = config.groqKey;
            googleApiKey = config.googleApiKey;
            geminiApiKey = config.geminiApiKey;
            preferredLanguage = string.IsNullOrEmpty(config.preferredLanguage) ? "en-US" : config.preferredLanguage;

            // Kiểm tra ngôn ngữ được chọn có hợp lệ không
            if (!SupportedLanguages.ContainsKey(preferredLanguage))
            {
                Debug.LogWarning($"Ngôn ngữ mặc định {preferredLanguage} không được hỗ trợ. Chuyển về en-US.");
                preferredLanguage = "en-US";
            }
        }
        else
        {
            Debug.LogError("Không tìm thấy file Config.json trong Resources!");
        }

        // Kiểm tra quyền microphone trên Android
        if (Application.platform == RuntimePlatform.Android)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
            }
        }
    }

    private void Start()
    {
        onAudioFinished.AddListener(OnAudioFinished);

#if UNITY_ANDROID
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }
        if (!Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
        {
            Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
        }

        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            audioPlugin = new AndroidJavaObject("com.unity3d.player.BackgroundAudioPlugin", activity);
        }

        Debug.Log("AudioPlugin: " + (audioPlugin != null ? "Not null" : "Null"));
        if (audioPlugin != null)
        {
            audioPlugin.Call("startRecordingFromUnity");
            //audioPlugin.Call("requestIgnoreBatteryOptimizations"); // Yêu cầu bỏ tối ưu hóa pin
        }
#endif
    }

    private void Update()
    {
        // Kiểm tra timeout session
        if (endAnswerTime > 0 && Time.time - endAnswerTime > SESSION_TIMEOUT)
        {
            ResetSession();
        }
    }

    private void OnAudioFinished()
    {
        Debug.Log("Audio finished playing!");
        myakuController.MyakuStopAnswer();
        audioSource.clip = null;
        Resources.UnloadUnusedAssets();
        endAnswerTime = Time.time;
    }

    private void ResetSession()
    {
        Debug.Log("Session hết hạn. Bắt đầu session mới.");
        lock (chatHistory)
        {
            chatHistory.Clear();
        }
        lock (audioClips)
        {
            foreach (var (_, clip) in audioClips)
            {
                Destroy(clip);
            }
            audioClips.Clear();
        }

        endAnswerTime = 0;
    }

    private IEnumerator ResetSessionIfNeeded()
    {
        if (endAnswerTime > 0 && Time.time - endAnswerTime > SESSION_TIMEOUT)
        {
            Debug.Log("Session timeout exceeded. Resetting session.");
            ResetSession();
        }
        yield return null;
    }

    private IEnumerator RecordQuestion()
    {
        yield return StartCoroutine(ResetSessionIfNeeded());

        // Sử dụng Gemini Live API thay vì quy trình cũ
        yield return StartCoroutine(GeminiLiveConversation());

        Debug.Log("Hoàn tất quy trình RecordQuestion với Gemini Live API");
    }

    // Phương thức mới sử dụng Gemini Live API cho speech-to-speech
    private IEnumerator GeminiLiveConversation()
    {
        if (string.IsNullOrEmpty(geminiApiKey))
        {
            Debug.LogError("Gemini API Key chưa được thiết lập trong config.json");
            UIManager.Instance.connectionTxt.text = "Lỗi: Không tìm thấy khóa API Gemini";
            HandleRecordingFailure();
            yield break;
        }

        // Nếu nhận được câu hỏi thành công trong chế độ chờ, dừng timer và bắt đầu thinking
        if (myakuController.IsWaitingForNextQuestion())
        {
            myakuController.EndWaitingForNextQuestion();
        }

        UIManager.Instance.connectionTxt.text = "Testing Gemini API connectivity...";

        // Test API connectivity trước
        bool apiReachable = false;
        yield return StartCoroutine(TestGeminiApiConnectivity((result) => apiReachable = result));

        if (!apiReachable)
        {
            Debug.LogError("Cannot reach Gemini API. Falling back to old method.");
            UIManager.Instance.connectionTxt.text = "Gemini API unavailable, using fallback...";
            yield return StartCoroutine(FallbackToOldMethod());
            yield break;
        }

        // SKIP WebSocket due to connectivity issues - go directly to HTTP
        Debug.LogWarning("Skipping WebSocket due to network restrictions. Using HTTP alternative.");
        UIManager.Instance.connectionTxt.text = "Using Gemini HTTP alternative...";
        yield return StartCoroutine(GeminiHttpAlternative());
        
        Debug.Log("Hoàn tất Gemini conversation với HTTP alternative");
    }

    // Test Gemini API connectivity trước khi thử WebSocket
    private IEnumerator TestGeminiApiConnectivity(System.Action<bool> onComplete)
    {
        Debug.Log("Testing Gemini API connectivity...");

        // Test 1: Basic models endpoint
        string testUrl = $"https://generativelanguage.googleapis.com/v1/models?key={geminiApiKey}";

        using (UnityWebRequest request = UnityWebRequest.Get(testUrl))
        {
            request.timeout = 10;
            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                Debug.Log("✅ Gemini API is reachable");
                
                // Parse response to check for Live API models
                try
                {
                    var response = Newtonsoft.Json.Linq.JObject.Parse(request.downloadHandler.text);
                    var models = response["models"];
                    
                    bool hasLiveModel = false;
                    if (models != null)
                    {
                        foreach (var model in models)
                        {
                            string modelName = model["name"]?.ToString() ?? "";
                            Debug.Log($"Available model: {modelName}");
                            
                            if (modelName.Contains("live") || 
                                modelName.Contains("2.0-flash") ||
                                modelName.Contains("2.5-flash"))
                            {
                                hasLiveModel = true;
                                Debug.Log($"✅ Found Live-compatible model: {modelName}");
                            }
                        }
                    }
                    
                    if (!hasLiveModel)
                    {
                        Debug.LogWarning("⚠️ No Live API models found - region may not support Live API");
                    }
                }
                catch (System.Exception e)
                {
                    Debug.LogWarning($"Error parsing models response: {e.Message}");
                }
                
                // Test 2: Try basic generateContent endpoint
                yield return StartCoroutine(TestBasicGenerateContent());
                
                onComplete?.Invoke(true);
            }
            else
            {
                Debug.LogWarning($"❌ Gemini API test failed: {request.error}");
                Debug.LogWarning($"Response Code: {request.responseCode}");
                Debug.LogWarning($"Response: {request.downloadHandler.text}");
                onComplete?.Invoke(false);
            }
        }
    }
    
    // Test basic generateContent to verify API key works
    private IEnumerator TestBasicGenerateContent()
    {
        Debug.Log("Testing basic generateContent endpoint...");
        
        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new[]
                    {
                        new { text = "Hello, respond with 'API test successful'" }
                    }
                }
            }
        };

        string jsonData = Newtonsoft.Json.JsonConvert.SerializeObject(requestData);
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
                Debug.Log("✅ Basic generateContent test successful");
            }
            else
            {
                Debug.LogWarning($"⚠️ Basic generateContent test failed: {request.error}");
                Debug.LogWarning($"Response: {request.downloadHandler.text}");
            }
        }
    }

    // Fallback về phương pháp cũ nếu Gemini Live không khả dụng
    private IEnumerator FallbackToOldMethod()
    {
        Debug.Log("Using fallback method (old speech-to-text pipeline)");

        bool recordingSuccess = false;
        yield return StartCoroutine(RecordAudioPhase((success) => recordingSuccess = success));

        if (!recordingSuccess)
        {
            Debug.Log("Ghi âm thất bại, kết thúc quy trình");
            UIManager.Instance.connectionTxt.text = "I didn't hear the question, please try again. Say 'Hey DT' to ask!";

            if (!HandleRecordingFailure())
            {
                yield break;
            }
        }

        string transcription = null;
        yield return StartCoroutine(TranscribeAudioPhase((trans) => transcription = trans));

        if (string.IsNullOrEmpty(transcription))
        {
            Debug.LogError("Không thể chuyển đổi giọng nói thành văn bản");
            UIManager.Instance.connectionTxt.text = "Question could not be recognized, please try again";

            if (!HandleRecordingFailure())
            {
                yield break;
            }
        }

        Debug.Log($"Văn bản nhận dạng được: {transcription}");
        UIManager.Instance.connectionTxt.text = transcription;

        myakuController.MyakuThinking();

        string answer = null;
        yield return StartCoroutine(GenerateAnswerPhase(transcription, (ans) => answer = ans));

        if (string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Không nhận được câu trả lời");
            UIManager.Instance.connectionTxt.text = "I cannot answer this question, please try again";

            if (!HandleRecordingFailure())
            {
                yield break;
            }
        }

        lock (chatHistory)
        {
            chatHistory.Add((transcription, answer));
        }

        Debug.Log($"Câu trả lời: {answer}");
        UIManager.Instance.connectionTxt.text = answer;

        yield return StartCoroutine(TextToSpeechAndPlayPhase(answer));
        Debug.Log("Hoàn tất quy trình fallback");
    }

    // Alternative method sử dụng HTTP API thay vì WebSocket
    private IEnumerator GeminiHttpAlternative()
    {
        Debug.Log("Using Gemini HTTP alternative method");
        UIManager.Instance.connectionTxt.text = "I'm listening! Ask me something!";
        
        // Show listening animation
        myakuController.MyakuListen(false);

        // Ghi âm audio như bình thường
        bool recordingSuccess = false;
        yield return StartCoroutine(RecordAudioPhase((success) => recordingSuccess = success));

        if (!recordingSuccess)
        {
            Debug.Log("Ghi âm thất bại");
            UIManager.Instance.connectionTxt.text = "I didn't hear the question, please try again. Say 'Hey DT' to ask!";
            HandleRecordingFailure();
            yield break;
        }

        UIManager.Instance.connectionTxt.text = "Processing your question...";
        myakuController.MyakuThinking();

        // Sử dụng Gemini API để transcribe và generate response
        string transcription = null;
        string answer = null;

        yield return StartCoroutine(GeminiHttpTranscribeAndGenerate((trans, ans) => {
            transcription = trans;
            answer = ans;
        }));

        if (string.IsNullOrEmpty(transcription) || string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Gemini HTTP API failed, falling back to old method");
            yield return StartCoroutine(FallbackToOldMethod());
            yield break;
        }

        Debug.Log($"Gemini HTTP - Transcription: {transcription}");
        Debug.Log($"Gemini HTTP - Answer: {answer}");

        UIManager.Instance.connectionTxt.text = answer;

        lock (chatHistory)
        {
            chatHistory.Add((transcription, answer));
        }

        // Sử dụng Google TTS để phát âm
        yield return StartCoroutine(TextToSpeechAndPlayPhase(answer));
        Debug.Log("Hoàn tất Gemini HTTP alternative");
    }

    // Sử dụng Gemini HTTP API cho transcription và generation
    private IEnumerator GeminiHttpTranscribeAndGenerate(System.Action<string, string> onComplete)
    {
        // Đọc file audio đã ghi
        string audioFilePath = Path.Combine(Application.persistentDataPath, "recorded_audio.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found for Gemini HTTP API");
            onComplete?.Invoke(null, null);
            yield break;
        }

        // Convert audio to base64
        byte[] audioBytes = File.ReadAllBytes(audioFilePath);
        string audioBase64 = System.Convert.ToBase64String(audioBytes);

        // Tạo request cho Gemini API
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
                            text = "Listen to this audio and provide a response in the same language. " +
                                   "You are Tenaya, created by Simulation and Visualization Center - Duy Tan University. " +
                                   "Provide a concise response with 1-5 sentences, each under 20 words. " +
                                   "Focus on Southeast Asia and ASEAN expertise."
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
            request.timeout = 30;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    JObject response = JObject.Parse(request.downloadHandler.text);

                    // Parse response theo cấu trúc Gemini API
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
                                var firstPart = parts[0];
                                string responseText = firstPart["text"]?.ToString();

                                if (!string.IsNullOrEmpty(responseText))
                                {
                                    // Giả sử transcription là phần đầu của response (có thể cải thiện)
                                    string transcription = "Audio transcribed"; // Placeholder

                                    Debug.Log($"Gemini HTTP response: {responseText}");
                                    onComplete?.Invoke(transcription, responseText);
                                    yield break;
                                }
                            }
                        }
                    }

                    Debug.LogError("Invalid response structure from Gemini API");
                    Debug.LogError($"Response: {request.downloadHandler.text}");
                    onComplete?.Invoke(null, null);
                }
                catch (System.Exception e)
                {
                    Debug.LogError($"Error parsing Gemini HTTP response: {e.Message}");
                    Debug.LogError($"Response: {request.downloadHandler.text}");
                    onComplete?.Invoke(null, null);
                }
            }
            else
            {
                Debug.LogError($"Gemini HTTP API failed: {request.error}");
                Debug.LogError($"Response: {request.downloadHandler.text}");
                onComplete?.Invoke(null, null);
            }
        }
    }

    // Khởi tạo Gemini Live WebSocket session
    private IEnumerator InitializeGeminiLiveSession()
    {
        Debug.Log("Starting Gemini Live session initialization...");
        Debug.Log($"API Key length: {geminiApiKey?.Length ?? 0}");

        bool hasError = false;
        string errorMessage = "";

        // Khởi tạo WebSocket
        cancellationTokenSource = new CancellationTokenSource();
        geminiWebSocket = new ClientWebSocket();

        // Thử các cách thiết lập headers khác nhau
        try
        {
            // Method 1: Authorization header (standard)
            geminiWebSocket.Options.SetRequestHeader("Authorization", $"Bearer {geminiApiKey}");
            Debug.Log("Set Authorization header successfully");
        }
        catch (Exception e)
        {
            Debug.LogWarning($"Failed to set Authorization header: {e.Message}");

            // Method 2: Thử với API key trong URL query parameter
            try
            {
                // Sẽ thêm API key vào URL thay vì header
                Debug.Log("Will try API key in URL parameter instead");
            }
            catch (Exception e2)
            {
                hasError = true;
                errorMessage = $"Error setting headers: {e2.Message}";
            }
        }

        if (hasError)
        {
            Debug.LogError(errorMessage);
            isGeminiSessionActive = false;
            yield break;
        }

        // Thử các URL endpoints khác nhau
        string[] possibleUris = {
            // Latest Gemini Live endpoint format
            $"wss://generativelanguage.googleapis.com/ws/google.ai.generativelanguage.v1alpha.GenerativeService/BidiGenerateContent?key={geminiApiKey}",
            
            // Alternative endpoint without API key in URL (uses Authorization header)
            "wss://generativelanguage.googleapis.com/ws/google.ai.generativelanguage.v1alpha.GenerativeService/BidiGenerateContent",
            
            // Standard model endpoint
            $"wss://generativelanguage.googleapis.com/v1alpha/models/gemini-2.0-flash-live-001:streamGenerateContent?key={geminiApiKey}",
            
            // Fallback to regular 2.5 Flash model
            $"wss://generativelanguage.googleapis.com/v1alpha/models/gemini-2.5-flash:streamGenerateContent?key={geminiApiKey}"
        };

        bool connected = false;

        for (int i = 0; i < possibleUris.Length && !connected; i++)
        {
            string uri = possibleUris[i];
            Debug.Log($"Trying connection attempt {i + 1}: {uri.Substring(0, Math.Min(100, uri.Length))}...");

            // Reset WebSocket for each attempt
            if (i > 0)
            {
                try
                {
                    geminiWebSocket?.Dispose();
                }
                catch (Exception e)
                {
                    Debug.LogWarning($"Error disposing WebSocket: {e.Message}");
                }

                geminiWebSocket = new ClientWebSocket();

                // Set headers again if not using API key in URL
                if (!uri.Contains("key="))
                {
                    try
                    {
                        geminiWebSocket.Options.SetRequestHeader("Authorization", $"Bearer {geminiApiKey}");
                    }
                    catch (Exception e)
                    {
                        Debug.LogWarning($"Error setting headers on retry: {e.Message}");
                        continue; // Skip this attempt
                    }
                }
            }

            // Kết nối WebSocket
            Task connectTask = null;
            try
            {
                connectTask = geminiWebSocket.ConnectAsync(new Uri(uri), cancellationTokenSource.Token);
            }
            catch (Exception e)
            {
                Debug.LogWarning($"Connection attempt {i + 1} exception during ConnectAsync: {e.Message}");
                continue;
            }

            // Wait with timeout
            float timeout = 10f;
            float elapsed = 0f;
            while (!connectTask.IsCompleted && elapsed < timeout)
            {
                elapsed += Time.deltaTime;
                yield return null;
            }

            // Kiểm tra kết quả kết nối
            if (connectTask.IsCompleted)
            {
                if (connectTask.Exception != null)
                {
                    Debug.LogWarning($"Connection attempt {i + 1} failed: {connectTask.Exception.GetBaseException().Message}");
                    if (connectTask.Exception.InnerException != null)
                    {
                        Debug.LogWarning($"Inner exception: {connectTask.Exception.InnerException.Message}");
                    }
                }
                else if (geminiWebSocket.State == WebSocketState.Open)
                {
                    Debug.Log($"✅ Gemini Live WebSocket connected successfully on attempt {i + 1}");
                    connected = true;
                }
                else
                {
                    Debug.LogWarning($"Connection attempt {i + 1} failed: WebSocket state = {geminiWebSocket.State}");
                }
            }
            else
            {
                Debug.LogWarning($"Connection attempt {i + 1} timed out after {timeout} seconds");
                try
                {
                    cancellationTokenSource.Cancel();
                    cancellationTokenSource = new CancellationTokenSource();
                }
                catch (Exception e)
                {
                    Debug.LogWarning($"Error cancelling token: {e.Message}");
                }
            }
        }

        if (connected)
        {
            // Gửi setup message
            yield return StartCoroutine(SendGeminiSetupMessage());

            // Bắt đầu listening cho responses
            StartCoroutine(ListenForGeminiResponses());

            isGeminiSessionActive = true;
        }
        else
        {
            Debug.LogError("❌ All connection attempts failed. Possible issues:");
            Debug.LogError("1. Invalid API key");
            Debug.LogError("2. Network/Firewall blocking WebSocket connections");
            Debug.LogError("3. Gemini Live API not available in your region");
            Debug.LogError("4. API endpoint URL changed");
            Debug.LogError("5. Unity WebSocket implementation issues");

            isGeminiSessionActive = false;

            // Fallback suggestion
            UIManager.Instance.connectionTxt.text = "Gemini Live unavailable. Using fallback method...";
        }
    }

    // Gửi setup message cho Gemini Live
    private IEnumerator SendGeminiSetupMessage()
    {
        var setupMessage = new
        {
            setup = new
            {
                model = "models/gemini-2.0-flash-live-001", // Updated to latest Live model
                generation_config = new
                {
                    response_modalities = new[] { "AUDIO" },
                    speech_config = new
                    {
                        voice_config = new
                        {
                            prebuilt_voice_config = new
                            {
                                voice_name = "Aoede"
                            }
                        }
                    }
                },
                system_instruction = new
                {
                    parts = new[]
                    {
                        new
                        {
                            text = "You are Tenaya, created by Simulation and Visualization Center - Duy Tan University. " +
                                   "Answer in the same language as the user's question. " +
                                   "Provide a concise response with 1-5 sentences, each under 20 words. " +
                                   "Use continuous prose, avoiding bullet points, lists, or enumerated formats. " +
                                   "Focus on Southeast Asia and ASEAN expertise. " +
                                   "Do not include URLs, extra introductions, or unnecessary details. " +
                                   "Strictly adhere to the sentence, word limit, and prose format."
                        }
                    }
                },
                tools = new object[0] // Empty tools array
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(setupMessage);
        byte[] messageBytes = Encoding.UTF8.GetBytes(jsonMessage);

        var sendTask = geminiWebSocket.SendAsync(new ArraySegment<byte>(messageBytes), WebSocketMessageType.Text, true, cancellationTokenSource.Token);
        yield return new WaitUntil(() => sendTask.IsCompleted);

        if (sendTask.Exception != null)
        {
            Debug.LogError($"Error sending setup message: {sendTask.Exception.Message}");
        }
        else
        {
            Debug.Log("Setup message sent successfully");
        }
    }

    // Lắng nghe responses từ Gemini Live
    private IEnumerator ListenForGeminiResponses()
    {
        byte[] buffer = new byte[4096];

        while (geminiWebSocket.State == WebSocketState.Open && !cancellationTokenSource.Token.IsCancellationRequested)
        {
            var receiveTask = geminiWebSocket.ReceiveAsync(new ArraySegment<byte>(buffer), cancellationTokenSource.Token);
            yield return new WaitUntil(() => receiveTask.IsCompleted);

            // Kiểm tra lỗi sau khi task hoàn thành
            if (receiveTask.Exception != null)
            {
                Debug.LogError($"Error receiving from Gemini Live: {receiveTask.Exception.Message}");
                break;
            }

            if (receiveTask.Result.MessageType == WebSocketMessageType.Text)
            {
                string responseText = Encoding.UTF8.GetString(buffer, 0, receiveTask.Result.Count);
                yield return StartCoroutine(ProcessGeminiResponse(responseText));
            }
            else if (receiveTask.Result.MessageType == WebSocketMessageType.Binary)
            {
                // Xử lý audio data
                byte[] audioData = new byte[receiveTask.Result.Count];
                Array.Copy(buffer, audioData, receiveTask.Result.Count);
                yield return StartCoroutine(PlayGeminiAudio(audioData));
            }

            yield return null;
        }
    }

    // Xử lý response từ Gemini
    private IEnumerator ProcessGeminiResponse(string responseText)
    {
        JObject response = null;
        bool parseError = false;

        // Parse JSON response
        try
        {
            response = JObject.Parse(responseText);
        }
        catch (Exception e)
        {
            Debug.LogError($"Error parsing Gemini response: {e.Message}");
            parseError = true;
        }

        if (parseError || response == null)
        {
            yield break;
        }

        // Kiểm tra setup acknowledgment
        if (response["setupComplete"] != null)
        {
            Debug.Log("Gemini Live setup completed");
            yield break;
        }

        // Kiểm tra server content
        if (response["serverContent"] != null)
        {
            var serverContent = response["serverContent"];

            // Kiểm tra model turn với audio data
            if (serverContent["modelTurn"] != null)
            {
                var modelTurn = serverContent["modelTurn"];
                if (modelTurn["parts"] != null)
                {
                    foreach (var part in modelTurn["parts"])
                    {
                        if (part["inlineData"] != null)
                        {
                            string audioBase64 = part["inlineData"]["data"]?.ToString();
                            if (!string.IsNullOrEmpty(audioBase64))
                            {
                                byte[] audioBytes = null;
                                try
                                {
                                    audioBytes = Convert.FromBase64String(audioBase64);
                                }
                                catch (Exception e)
                                {
                                    Debug.LogError($"Error converting base64 audio: {e.Message}");
                                    continue;
                                }

                                if (audioBytes != null)
                                {
                                    yield return StartCoroutine(PlayGeminiAudio(audioBytes));
                                }
                            }
                        }
                    }
                }
            }

            // Kiểm tra turn complete
            if (serverContent["turnComplete"]?.Value<bool>() == true)
            {
                Debug.Log("Gemini turn completed");
                // Có thể bắt đầu lắng nghe câu hỏi tiếp theo
                yield return StartCoroutine(HandleTurnComplete());
            }

            // Kiểm tra interrupted
            if (serverContent["interrupted"]?.Value<bool>() == true)
            {
                Debug.Log("Gemini generation interrupted");
                // Dừng phát audio hiện tại nếu có
                audioSource.Stop();
            }
        }
    }

    // Phát audio từ Gemini Live
    private IEnumerator PlayGeminiAudio(byte[] audioData)
    {
        // Chuyển đổi audio data thành AudioClip
        // Gemini Live trả về 24kHz, 16-bit PCM audio
        int sampleRate = 24000;
        int channels = 1;
        int sampleCount = audioData.Length / 2; // 16-bit = 2 bytes per sample

        if (sampleCount <= 0)
        {
            Debug.LogWarning("Invalid audio data length");
            yield break;
        }

        float[] samples = new float[sampleCount];
        bool conversionError = false;

        try
        {
            for (int i = 0; i < sampleCount; i++)
            {
                short sample = BitConverter.ToInt16(audioData, i * 2);
                samples[i] = sample / 32768f;
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error converting audio data: {e.Message}");
            conversionError = true;
        }

        if (conversionError)
        {
            yield break;
        }

        AudioClip clip = AudioClip.Create("GeminiAudio", sampleCount, channels, sampleRate, false);
        clip.SetData(samples, 0);

        // Phát audio
        if (!audioSource.isPlaying)
        {
            myakuController.MyakuAnswer();
        }

        audioSource.clip = clip;
        audioSource.Play();

        // Chờ audio phát xong
        yield return new WaitUntil(() => !audioSource.isPlaying);

        // Cleanup
        Destroy(clip);
    }

    // Xử lý khi turn complete
    private IEnumerator HandleTurnComplete()
    {
        // Kết thúc phát audio
        onAudioFinished.Invoke();

        // Có thể bắt đầu lắng nghe câu hỏi tiếp theo hoặc kết thúc session
        yield return new WaitForSeconds(1f);

        // Đóng Gemini session
        yield return StartCoroutine(CloseGeminiSession());
    }

    // Bắt đầu audio streaming với Gemini Live
    private IEnumerator StartGeminiAudioStreaming()
    {
        if (!isGeminiSessionActive)
        {
            yield break;
        }

        // Kiểm tra quyền microphone trên Android
        if (Application.platform == RuntimePlatform.Android)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
                yield return new WaitUntil(() => Permission.HasUserAuthorizedPermission(Permission.Microphone));
                if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
                {
                    Debug.LogError("Quyền microphone bị từ chối trên Android");
                    UIManager.Instance.connectionTxt.text = "Please grant microphone permission to record";
                    yield break;
                }
            }

            // Tạm dừng BackgroundAudioPlugin
            if (audioPlugin != null)
            {
                audioPlugin.Call("pauseRecordingFromUnity");
                yield return new WaitForSeconds(0.5f);
            }
        }

        isRecordingForGemini = true;
        enableHeyDT = false;

        // Bắt đầu ghi âm và streaming
        yield return StartCoroutine(RecordAndStreamToGemini());

        enableHeyDT = true;
        isRecordingForGemini = false;

        // Khôi phục BackgroundAudioPlugin
        if (Application.platform == RuntimePlatform.Android && audioPlugin != null)
        {
            audioPlugin.Call("resumeRecordingFromUnity");
        }
    }

    // Ghi âm và stream đến Gemini Live
    private IEnumerator RecordAndStreamToGemini()
    {
        float limitTimeRecord = PlayerPrefs.GetFloat("LimitTimeRecord", 30f); // Tăng thời gian cho conversation
        int sampleRate = 16000; // Gemini Live yêu cầu 16kHz
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";

        if (string.IsNullOrEmpty(device))
        {
            Debug.LogError("Không tìm thấy thiết bị microphone");
            UIManager.Instance.connectionTxt.text = "Cannot find any microphone device";
            yield break;
        }

        AudioClip micClip = Microphone.Start(device, false, (int)limitTimeRecord, sampleRate);
        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool hasSoundDetected = false;
        float silenceThreshold = PlayerPrefs.GetFloat("AudibleThreshold", 0.005f);

        yield return new WaitForSeconds(0.1f);

        int lastPosition = 0;

        while (Microphone.IsRecording(device) && isRecordingForGemini && isGeminiSessionActive)
        {
            int currentPosition = Microphone.GetPosition(device);

            if (currentPosition > lastPosition)
            {
                // Có dữ liệu audio mới
                int sampleCount = currentPosition - lastPosition;
                float[] audioData = new float[sampleCount];
                micClip.GetData(audioData, lastPosition);

                // Kiểm tra âm lượng
                float volume = CalculateVolume(audioData);
                UIManager.Instance.volumeTxt.text = $"Current volume: {volume}";

                if (volume > silenceThreshold)
                {
                    hasSoundDetected = true;
                    lastSoundTime = Time.time;

                    // Chuyển đổi sang 16-bit PCM và gửi đến Gemini
                    yield return StartCoroutine(SendAudioToGemini(audioData, sampleRate));
                }

                lastPosition = currentPosition;
            }

            // Kiểm tra timeout
            float currentTime = Time.time;
            if (!hasSoundDetected && (currentTime - startTime > 10f))
            {
                Debug.Log("Không phát hiện tiếng nói trong 10 giây, kết thúc ghi âm");
                break;
            }

            if (hasSoundDetected && (currentTime - lastSoundTime > 3f))
            {
                Debug.Log("Phát hiện im lặng 3 giây sau khi có tiếng nói, kết thúc ghi âm");
                break;
            }

            if (currentTime - startTime > limitTimeRecord)
            {
                Debug.Log("Đạt đến giới hạn thời gian thu âm, kết thúc ghi âm");
                break;
            }

            yield return null;
        }

        Microphone.End(device);

        if (hasSoundDetected)
        {
            // Gửi signal kết thúc audio stream
            yield return StartCoroutine(SendAudioStreamEnd());
            UIManager.Instance.connectionTxt.text = "Processing your question...";
            myakuController.MyakuThinking();
        }
        else
        {
            UIManager.Instance.connectionTxt.text = "Voice not detected, please try again!";
            yield return StartCoroutine(CloseGeminiSession());
        }
    }

    // Gửi audio data đến Gemini Live
    private IEnumerator SendAudioToGemini(float[] audioData, int sampleRate)
    {
        // Chuyển đổi float array sang 16-bit PCM
        byte[] pcmData = new byte[audioData.Length * 2];
        bool conversionError = false;

        try
        {
            for (int i = 0; i < audioData.Length; i++)
            {
                short sample = (short)(audioData[i] * 32767f);
                byte[] sampleBytes = BitConverter.GetBytes(sample);
                pcmData[i * 2] = sampleBytes[0];
                pcmData[i * 2 + 1] = sampleBytes[1];
            }
        }
        catch (Exception e)
        {
            Debug.LogError($"Error converting audio data: {e.Message}");
            conversionError = true;
        }

        if (conversionError)
        {
            yield break;
        }

        // Tạo realtime input message
        var realtimeInput = new
        {
            realtimeInput = new
            {
                mediaChunks = new[]
                {
                    new
                    {
                        data = Convert.ToBase64String(pcmData),
                        mimeType = $"audio/pcm;rate={sampleRate}"
                    }
                }
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(realtimeInput);
        byte[] messageBytes = Encoding.UTF8.GetBytes(jsonMessage);

        if (geminiWebSocket.State == WebSocketState.Open)
        {
            var sendTask = geminiWebSocket.SendAsync(new ArraySegment<byte>(messageBytes), WebSocketMessageType.Text, true, cancellationTokenSource.Token);
            yield return new WaitUntil(() => sendTask.IsCompleted);

            if (sendTask.Exception != null)
            {
                Debug.LogError($"Error sending audio to Gemini: {sendTask.Exception.Message}");
            }
        }
    }

    // Gửi signal kết thúc audio stream
    private IEnumerator SendAudioStreamEnd()
    {
        var streamEndMessage = new
        {
            realtimeInput = new
            {
                audioStreamEnd = true
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(streamEndMessage);
        byte[] messageBytes = Encoding.UTF8.GetBytes(jsonMessage);

        if (geminiWebSocket.State == WebSocketState.Open)
        {
            var sendTask = geminiWebSocket.SendAsync(new ArraySegment<byte>(messageBytes), WebSocketMessageType.Text, true, cancellationTokenSource.Token);
            yield return new WaitUntil(() => sendTask.IsCompleted);

            if (sendTask.Exception != null)
            {
                Debug.LogError($"Error sending audio stream end: {sendTask.Exception.Message}");
            }
            else
            {
                Debug.Log("Audio stream end signal sent");
            }
        }
    }

    // Đóng Gemini session
    private IEnumerator CloseGeminiSession()
    {
        isGeminiSessionActive = false;
        isRecordingForGemini = false;

        if (cancellationTokenSource != null)
        {
            cancellationTokenSource.Cancel();
        }

        if (geminiWebSocket != null && geminiWebSocket.State == WebSocketState.Open)
        {
            var closeTask = geminiWebSocket.CloseAsync(WebSocketCloseStatus.NormalClosure, "Session ended", CancellationToken.None);
            yield return new WaitUntil(() => closeTask.IsCompleted);

            if (closeTask.Exception != null)
            {
                Debug.LogError($"Error closing WebSocket: {closeTask.Exception.Message}");
            }
            else
            {
                Debug.Log("Gemini WebSocket closed");
            }
        }

        if (geminiWebSocket != null)
        {
            try
            {
                geminiWebSocket.Dispose();
            }
            catch (Exception e)
            {
                Debug.LogError($"Error disposing WebSocket: {e.Message}");
            }
            geminiWebSocket = null;
        }

        if (cancellationTokenSource != null)
        {
            try
            {
                cancellationTokenSource.Dispose();
            }
            catch (Exception e)
            {
                Debug.LogError($"Error disposing cancellation token: {e.Message}");
            }
            cancellationTokenSource = null;
        }
    }

    // Phương thức helper để xử lý lỗi ghi âm
    private bool HandleRecordingFailure()
    {
        if (myakuController.IsWaitingForNextQuestion())
        {
            Debug.Log("Đang trong chế độ chờ câu hỏi tiếp theo, sẽ thử lại sau 2 giây...");
            // Thử lại sau một khoảng thời gian ngắn
            StartCoroutine(RetryListeningAfterDelay(2.0f));
            return false; // return false để break khỏi RecordQuestion hiện tại
        }
        else
        {
            UIManager.Instance.connectionTxt.text = "Xin chao, xao chin";
            myakuController.MyakuHello();
            return false; // return false để break khỏi RecordQuestion
        }
    }

    private IEnumerator RetryListeningAfterDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        if (myakuController.IsWaitingForNextQuestion())
        {
            Debug.Log("Thử lại lắng nghe câu hỏi tiếp theo...");
            UIManager.Instance.connectionTxt.text = "Thử lại lắng nghe câu hỏi tiếp theo...";

            StartListeningForNextQuestion();
        }
    }

    private IEnumerator RecordAudioPhase(Action<bool> onComplete)
    {
        Debug.Log("Bắt đầu ghi âm câu hỏi");

        // Kiểm tra quyền microphone trên Android
        if (Application.platform == RuntimePlatform.Android)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                Permission.RequestUserPermission(Permission.Microphone);
                yield return new WaitUntil(() => Permission.HasUserAuthorizedPermission(Permission.Microphone));
                if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
                {
                    Debug.LogError("Quyền microphone bị từ chối trên Android");
                    UIManager.Instance.connectionTxt.text = "Please grant microphone permission to record";
                    onComplete?.Invoke(false);
                    yield break;
                }
            }
            // Tạm dừng BackgroundAudioPlugin
            if (audioPlugin != null)
            {
                audioPlugin.Call("pauseRecordingFromUnity");
                yield return new WaitForSeconds(0.5f); // Đợi để giải phóng microphone
            }
        }

        float limitTimeRecord = PlayerPrefs.GetFloat("LimitTimeRecord", 10f);
        Debug.Log($"Thời gian giới hạn thu âm: {limitTimeRecord} giây");

        int sampleRate = 44100;
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        if (string.IsNullOrEmpty(device))
        {
            Debug.LogError("Không tìm thấy thiết bị microphone");
            UIManager.Instance.connectionTxt.text = "Cannot find any microphone device";
            onComplete?.Invoke(false);
            yield break;
        }

        AudioClip questionClip = Microphone.Start(device, false, (int)limitTimeRecord, sampleRate);
        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool hasSoundDetected = false;
        float silenceThreshold = PlayerPrefs.GetFloat("AudibleThreshold", 0.005f);
        Debug.Log($"Ngưỡng âm lượng thu âm: {silenceThreshold}");

        yield return new WaitForSeconds(0.01f);

        UIManager.Instance.connectionTxt.text = $"I'm hearing! Ask me something!";
        float maxvolume = 0f;
        while (Microphone.IsRecording(device))
        {
            float[] data = new float[256];
            int position = Microphone.GetPosition(device);
            if (position > 0)
            {
                questionClip.GetData(data, position - data.Length);
                float volume = CalculateVolume(data);
                UIManager.Instance.volumeTxt.text = $"Current volume: { volume} ";
                //Debug.Log($"Âm lượng hiện tại: {volume}");
                if (volume > maxvolume)
                {
                    maxvolume = volume;
                }
                if (volume > silenceThreshold)
                {
                    hasSoundDetected = true;
                    lastSoundTime = Time.time;
                }

                float currentTime = Time.time;
                if (!hasSoundDetected && (currentTime - startTime > 10f))
                {
                    Debug.Log("Không phát hiện tiếng nói trong 10 giây, hủy ghi âm");
                    UIManager.Instance.volumeTxt.text = $"max volume: { maxvolume} ";
                    Microphone.End(device);
                    // kết thúc ghi âm, cho phép heyDT
                    enableHeyDT = true;
                    onComplete?.Invoke(false);
                    if (audioPlugin != null) audioPlugin.Call("resumeRecordingFromUnity");
                    yield break;
                }

                if (hasSoundDetected && (currentTime - lastSoundTime > 2f))
                {
                    UIManager.Instance.volumeTxt.text = $"max volume: { maxvolume} ";
                    Debug.Log($"max volume: {maxvolume}");
                    Debug.Log("Phát hiện im lặng 2 giây sau khi có tiếng nói, kết thúc ghi âm");
                    break;
                }

                if (currentTime - startTime > limitTimeRecord)
                {
                    Debug.Log("Đạt đến giới hạn thời gian thu âm, kết thúc ghi âm");
                    break;
                }
            }
            yield return null;
        }

        Microphone.End(device);

        if (!hasSoundDetected || questionClip == null)
        {
            Debug.Log("Không phát hiện tiếng nói, hủy xử lý");
            UIManager.Instance.connectionTxt.text = "Voice not detected, please try again!";
            // kết thúc ghi âm, cho phép heyDT
            enableHeyDT = true;
            onComplete?.Invoke(false);
            if (audioPlugin != null) audioPlugin.Call("resumeRecordingFromUnity");
            yield break;
        }

        // kết thúc ghi âm, cho phép heyDT
        enableHeyDT = true;

        Debug.Log("Kết thúc ghi âm, xử lý câu hỏi");
        UIManager.Instance.connectionTxt.text = "Processing your question...";
        // Đã xóa myakuController.MyakuThinking(); vì nó sẽ được gọi trong RecordQuestion

        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_stt.wav");
        WavUtility.Save(audioFilePath, questionClip);

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Không tìm thấy file audio: " + audioFilePath);
            onComplete?.Invoke(false);
            if (audioPlugin != null) audioPlugin.Call("resumeRecordingFromUnity");
            yield break;
        }

        Debug.Log($"Đã lưu file audio: {audioFilePath}");
        onComplete?.Invoke(true);
        if (audioPlugin != null) audioPlugin.Call("resumeRecordingFromUnity");
    }

    private IEnumerator TranscribeAudioPhase(Action<string> onComplete)
    {
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_stt.wav");
        byte[] audioBytes = File.ReadAllBytes(audioFilePath);
        Debug.Log($"Đã đọc file audio: {audioFilePath}, kích thước: {audioBytes.Length} bytes");

        WWWForm form = new WWWForm();
        form.AddBinaryData("file", audioBytes, "audio.wav", "audio/wav");
        form.AddField("model", "whisper-large-v3-turbo");
        form.AddField("temperature", 0);
        form.AddField("response_format", "verbose_json"); 

        using (UnityWebRequest request = UnityWebRequest.Post("https://api.groq.com/openai/v1/audio/transcriptions", form))
        {
            request.SetRequestHeader("Authorization", $"Bearer {groqKey}");
            request.timeout = 30;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string response = request.downloadHandler.text;
                JObject json = JObject.Parse(response);
                string transcription = json["text"].Value<string>();
                Debug.Log($"Chuyển đổi giọng nói thành văn bản thành công: {transcription}");
                onComplete?.Invoke(transcription);
            }
            else
            {
                Debug.LogError($"Lỗi API Whisper: {request.error}, Response: {request.downloadHandler?.text}");
                onComplete?.Invoke(null);
            }
        }
    }

    private IEnumerator GenerateAnswerPhase(string transcription, Action<string> onComplete)
    {
        Debug.Log("Gửi câu hỏi và nhận câu trả lời");

        var messages = new List<object>
        {
            new {
                role = "system",
                content = "You are Tenaya, created by Simulation and Visualization Center - Duy Tan University. " +
                "Answer in the same language as the user's question. " +
                "Provide a concise response with 1-5 sentences, each under 20 words. " +
                "Use continuous prose, avoiding bullet points, lists, or enumerated formats. " +
                "Focus on Southeast Asia and ASEAN expertise. " +
                "Do not include URLs, extra introductions, or unnecessary details. " +
                "Strictly adhere to the sentence, word limit, and prose format." },
        };

        lock (chatHistory)
        {
            foreach (var (question, ans) in chatHistory)
            {
                messages.Add(new { role = "user", content = question });
                messages.Add(new { role = "assistant", content = ans });
            }
        }

        messages.Add(new { role = "user", content = transcription });

        var payload = new
        {
            //model = "gpt-4o-search-preview",
            model = "gpt-4.1-mini-2025-04-14",
            messages = messages.ToArray(),
            temperature = 0.7
            //max_tokens = 150 // Giới hạn ~100 từ (5 câu x 20 từ)
        };

        string jsonPayload = JsonConvert.SerializeObject(payload);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest request = new UnityWebRequest("https://api.openai.com/v1/chat/completions", "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Authorization", $"Bearer {openAiApiKey}");
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 30;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string response = request.downloadHandler.text;
                try
                {
                    JObject json = JObject.Parse(response);
                    string rawAnswer = json["choices"][0]["message"]["content"].Value<string>();
                    Debug.Log($"Câu trả lời gốc: {rawAnswer}");

                    // Xử lý chuỗi để lọc bỏ URL, [], (), và ##
                    string processedAnswer = CleanResponse(rawAnswer);
                    Debug.Log($"Câu trả lời sau xử lý: {processedAnswer}");

                    UIManager.Instance.connectionTxt.text = $"Câu trả lời {processedAnswer}";
                    onComplete?.Invoke(processedAnswer);
                }
                catch (JsonException e)
                {
                    Debug.LogError($"Lỗi phân tích JSON: {e.Message}");
                    onComplete?.Invoke(null);
                }
            }
            else
            {
                Debug.LogError($"Lỗi API Chat: {request.error}, Response: {request.downloadHandler?.text}");
                onComplete?.Invoke(null);
            }
        }
    }

    // Hàm xử lý chuỗi để loại bỏ URL, [], (), và ##
    private string CleanResponse(string input)
    {
        // Loại bỏ ## và các từ liên quan
        string result = Regex.Replace(input, @"##.*?(?:\n|$)", "");

        // Loại bỏ URL (http, https)
        result = Regex.Replace(result, @"https?://[^\s\]\)]+", "");

        // Loại bỏ văn bản trong dấu [] (bao gồm cả lồng nhau)
        result = Regex.Replace(result, @"\[([^\[\]]*)\]", "");

        // Loại bỏ văn bản trong dấu () (bao gồm cả lồng nhau)
        while (Regex.IsMatch(result, @"\([^()]*\)"))
        {
            result = Regex.Replace(result, @"\([^()]*\)", "");
        }

        // Loại bỏ các chuỗi ký tự * liên tiếp
        result = Regex.Replace(result, @"\*+", "");

        // Loại bỏ khoảng trắng thừa và dòng trống
        result = Regex.Replace(result, @"\s+", " ").Trim();

        return result;
    }

    private IEnumerator TextToSpeechAndPlayPhase(string answer)
    {
        float startTime = Time.realtimeSinceStartup;
        Debug.Log($"Bắt đầu xử lý Text-to-Speech tại: {startTime}");

        if (string.IsNullOrEmpty(googleApiKey))
        {
            Debug.LogError("Google API Key chưa được thiết lập trong config.json");
            UIManager.Instance.connectionTxt.text = "Lỗi: Không tìm thấy khóa API Google";
            myakuController.MyakuHello();
            yield break;
        }

        Debug.Log($"Câu trả lời đầy đủ là: {answer}");

        // Tách câu đầu tiên để phát hiện ngôn ngữ
        string firstSentence = GetFirstSentence(answer);
        Debug.Log($"Câu đầu tiên để phát hiện ngôn ngữ: {firstSentence}");

        // Phát hiện ngôn ngữ cho câu đầu tiên
        string detectedLanguage = null;
        yield return StartCoroutine(DetectLanguage(firstSentence, (lang) => detectedLanguage = lang));

        if (string.IsNullOrEmpty(detectedLanguage))
        {
            detectedLanguage = preferredLanguage;
            Debug.LogWarning($"Không phát hiện được ngôn ngữ, sử dụng ngôn ngữ mặc định: {detectedLanguage}");
        }

        string languageName = SupportedLanguages.ContainsKey(detectedLanguage) ? SupportedLanguages[detectedLanguage] : detectedLanguage;
        Debug.Log($"Ngôn ngữ được phát hiện: {languageName} ({detectedLanguage})");
        UIManager.Instance.WarningTxt.text = $"Phát âm bằng: {languageName}";

        List<string> sentences = streamBuffer.AddText(answer).Where(s => !string.IsNullOrWhiteSpace(s)).ToList();
        Debug.Log($"Danh sách câu hợp lệ: {string.Join(", ", sentences)}");
        if (streamBuffer.GetCurrentBuffer().Length > 0)
        {
            string lastSentence = streamBuffer.GetCurrentBuffer().Trim();
            if (!string.IsNullOrWhiteSpace(lastSentence))
            {
                sentences.Add(lastSentence);
            }
            streamBuffer.ClearBuffer();
        }

        if (sentences.Count == 0)
        {
            Debug.LogError("Không có câu hợp lệ để xử lý TTS");
            UIManager.Instance.connectionTxt.text = "Không có văn bản hợp lệ để chuyển thành giọng nói";
            myakuController.MyakuHello();
            yield break;
        }


        int currentPlayIndex = 0;
        bool isFirstSentencePlayed = false;
        bool anySentenceProcessed = false;
        float timeout = 60f; // Timeout 60 giây làm giới hạn an toàn
 
        audioClips.Clear();
        runningCoroutines.Clear();

        // Xử lý và phát từng câu tuần tự
        // for (int i = 0; i < sentences.Count; i++)
        // {
        //     if (string.IsNullOrWhiteSpace(sentences[i]))
        //     {
        //         Debug.LogWarning($"Câu {i} rỗng hoặc không hợp lệ, bỏ qua");
        //         continue;
        //     }

        //     float sentenceStartTime = Time.realtimeSinceStartup;
        //     Debug.Log($"Bắt đầu xử lý TTS cho câu {i}: {sentences[i]}");

        //     // Xử lý TTS cho câu hiện tại
        //     bool ttsSuccess = false;
        //     yield return StartCoroutine(ProcessTTSSentence(i, sentences[i], detectedLanguage, (success) =>
        //     {
        //         ttsSuccess = success;
        //         if (success)
        //         {
        //             anySentenceProcessed = true;
        //             Debug.Log($"Câu {i} được xử lý TTS thành công");
        //         }
        //         else
        //         {
        //             Debug.LogWarning($"Câu {i} xử lý TTS thất bại");
        //         }
        //     }));

        //     // Kiểm tra và phát audio clip nếu TTS thành công
        //     AudioClip clipToPlay = null;
        //     lock (audioClips)
        //     {
        //         var found = audioClips.FirstOrDefault(x => x.index == i);
        //         if (found.clip != null)
        //         {
        //             clipToPlay = found.clip;
        //             audioClips.Remove(found);
        //         }
        //     }

        //     if (clipToPlay != null && ttsSuccess)
        //     {
        //         Debug.Log($"Phát câu {i}: {sentences[i]}");
        //         myakuController.MyakuAnswer();
        //         audioSource.clip = clipToPlay;
        //         audioSource.Play();

        //         float waitTime = Time.realtimeSinceStartup - startTime;
        //         Debug.Log($"Thời gian chờ phát câu {i}: {waitTime:F2} giây");

        //         yield return new WaitUntil(() => !audioSource.isPlaying);
        //         Destroy(clipToPlay);
        //     }
        //     else
        //     {
        //         Debug.LogWarning($"Không phát được câu {i} do TTS thất bại hoặc không có clip");
        //     }

        //     // Kiểm tra timeout cho toàn bộ quá trình
        //     if (Time.realtimeSinceStartup - startTime > 60f)
        //     {
        //         Debug.LogWarning($"Timeout toàn bộ quá trình TTS sau {60f} giây, dừng xử lý");
        //         break;
        //     }
        // }

        // Khởi động xử lý TTS cho tất cả các câu
        for (int i = 0; i < sentences.Count; i++)
        {
            runningCoroutines.Add(StartCoroutine(ProcessTTSSentence(i, sentences[i], detectedLanguage, (success) =>
            {
                if (success) anySentenceProcessed = true;
            })));
        }

        // Phát các câu đã xử lý
        while (currentPlayIndex < sentences.Count)
        {
            AudioClip clipToPlay = null;
            lock (audioClips)
            {
                var found = audioClips.FirstOrDefault(x => x.index == currentPlayIndex);
                if (found.clip != null)
                {
                    clipToPlay = found.clip;
                    audioClips.Remove(found);
                }
            }

            if (clipToPlay != null && !audioSource.isPlaying)
            {
                Debug.Log($"Phát câu {currentPlayIndex}: {sentences[currentPlayIndex]}");
                
                // Chỉ gọi MyakuAnswer một lần khi bắt đầu phát câu đầu tiên
                if (!isFirstSentencePlayed)
                {
                    myakuController.MyakuAnswer();
                }
                
                audioSource.clip = clipToPlay;
                audioSource.Play();

                if (!isFirstSentencePlayed)
                {
                    float waitTime = Time.realtimeSinceStartup - startTime;
                    Debug.Log($"Thời gian chờ phát câu đầu tiên: {waitTime:F2} giây");
                    isFirstSentencePlayed = true;
                }

                yield return new WaitUntil(() => !audioSource.isPlaying);
                Destroy(clipToPlay);
                currentPlayIndex++;
            }
            else
            {
                // Kiểm tra timeout an toàn
                if (Time.realtimeSinceStartup - startTime > timeout)
                {
                    Debug.LogWarning("Đã hết thời gian timeout, dừng phát âm thanh");
                    break;
                }
                yield return null;
            }
        }

        // Dọn dẹp
        lock (audioClips)
        {
            foreach (var (_, clip) in audioClips)
            {
                Destroy(clip);
            }
            audioClips.Clear();
        }

        foreach (var coroutine in runningCoroutines)
        {
            if (coroutine != null)
            {
                StopCoroutine(coroutine);
            }
        }
        runningCoroutines.Clear();

        if (!anySentenceProcessed)
        {
            Debug.LogError($"Không có câu nào được xử lý thành công qua TTS. Tổng số câu: {sentences.Count}. Kiểm tra: API Key hợp lệ? Kết nối mạng ổn định? Dữ liệu âm thanh trả về từ API có hợp lệ?");
            UIManager.Instance.connectionTxt.text = "Không thể chuyển văn bản thành giọng nói, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        Debug.Log("Phát xong tất cả câu.");
        // Không gọi MyakuStopAnswer ở đây nữa, để OnAudioFinished xử lý
        onAudioFinished.Invoke();
    }

    // Hàm mới để tách câu đầu tiên
    private string GetFirstSentence(string text)
    {
        if (string.IsNullOrEmpty(text)) return text;

        // Sử dụng regex để tách văn bản thành các câu
        var sentences = Regex.Split(text, @"(?<=[.!?])\s+")
            .Select(s => s.Trim())
            .Where(s => !string.IsNullOrEmpty(s))
            .ToArray();

        // Nếu chỉ có 1 câu, trả về câu đó
        if (sentences.Length == 1)
        {
            Debug.Log($"Chỉ có 1 câu: {sentences[0]}");
            return sentences[0];
        }

        // Nếu có nhiều câu, tìm câu đầu tiên có hơn 10 từ
        string selectedSentence = null;
        foreach (var sentence in sentences)
        {
            string[] words = sentence.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            if (words.Length > 10)
            {
                selectedSentence = sentence;
                Debug.Log($"Chọn câu đầu tiên có hơn 10 từ ({words.Length} từ): {selectedSentence}");
                break;
            }
        }

        // Nếu không có câu nào hơn 10 từ, lấy câu dài nhất
        if (selectedSentence == null)
        {
            selectedSentence = sentences
                .OrderByDescending(s => s.Split(' ', StringSplitOptions.RemoveEmptyEntries).Length)
                .FirstOrDefault();
            if (selectedSentence != null)
            {
                var wordCount = selectedSentence.Split(' ', StringSplitOptions.RemoveEmptyEntries).Length;
                Debug.Log($"Không có câu nào hơn 10 từ, chọn câu dài nhất ({wordCount} từ): {selectedSentence}");
            }
        }

        return selectedSentence ?? text; // Dự phòng: trả về toàn bộ văn bản nếu không tách được câu
    }
    private IEnumerator ProcessTTSSentence(int index, string sentence, string languageCode, Action<bool> onComplete)
    {
        if (string.IsNullOrWhiteSpace(sentence))
        {
            lock (audioClips)
            {
                Debug.Log($"Câu {index} trắng, bỏ qua.");
                UIManager.Instance.WarningTxt.text = "Có câu trắng";
            }
            onComplete?.Invoke(false);
            yield break;
        }

        Debug.Log($"Đang xử lý câu {index}: {sentence}");

        if (!SupportedLanguages.ContainsKey(languageCode))
        {
            Debug.LogWarning($"Ngôn ngữ {languageCode} không được hỗ trợ. Chuyển về {preferredLanguage}.");
            languageCode = preferredLanguage;
        }

        int retryCount = 0;
        const int maxRetries = 2;
        bool success = false;
        while (retryCount <= maxRetries && !success)
        {
            HttpResponseMessage response = null;
            yield return StartCoroutine(SynthesizeSpeechAsync(sentence, languageCode, (res) => response = res));

            if (response == null || !response.IsSuccessStatusCode)
            {
                string errorContent = response?.Content.ReadAsStringAsync().Result ?? "Unknown error";
                Debug.LogError($"Lỗi TTS API cho câu {index}: {response?.StatusCode}, {errorContent}");
                retryCount++;
                if (retryCount > maxRetries)
                {
                    Debug.LogError($"Hết số lần thử lại cho câu {index}. Bỏ qua.");
                    lock (audioClips)
                    {
                        Debug.Log($"Câu {index} lỗi sau {maxRetries} lần thử.");
                    }
                    onComplete?.Invoke(false);
                    yield break;
                }
                Debug.Log($"Thử lại lần {retryCount} cho câu {index}...");
                yield return new WaitForSeconds(0.5f);
                continue;
            }

            string responseJson = response.Content.ReadAsStringAsync().Result;
            var jsonResponse = JObject.Parse(responseJson);
            string audioContent = jsonResponse["audioContent"].Value<string>();
            if (string.IsNullOrEmpty(audioContent))
            {
                Debug.LogError($"Không có dữ liệu âm thanh trong phản hồi TTS cho câu {index}");
                onComplete?.Invoke(false);
                yield break;
            }

            byte[] wavData = Convert.FromBase64String(audioContent);

            int headerSize = 44;
            if (wavData.Length < headerSize)
            {
                Debug.LogError($"Dữ liệu WAV không hợp lệ cho câu {index}");
                lock (audioClips)
                {
                    Debug.Log($"Câu {index} lỗi.");
                }
                onComplete?.Invoke(false);
                yield break;
            }

            float[] samples = new float[(wavData.Length - headerSize) / 2];
            for (int i = 0; i < samples.Length; i++)
            {
                short sample = BitConverter.ToInt16(wavData, headerSize + i * 2);
                samples[i] = sample / 32768f;
            }

            AudioClip clip = AudioClip.Create($"TTS_{index}", samples.Length, 1, SAMPLE_RATE, false);
            clip.SetData(samples, 0);

            lock (audioClips)
            {
                audioClips.Add((index, clip));
                Debug.Log($"Đã thêm clip {index}");
            }
            success = true;
            onComplete?.Invoke(true);
        }
    }

    private IEnumerator SynthesizeSpeechAsync(string sentence, string languageCode, Action<HttpResponseMessage> onComplete)
    {
        string voiceName = VoiceMappings.ContainsKey(languageCode) ? VoiceMappings[languageCode] : $"{preferredLanguage}-Standard-A";
        var ttsRequestData = new
        {
            input = new { ssml = $"<speak>{sentence}</speak>" },
            voice = new { languageCode, name = voiceName, ssmlGender = "MALE" },
            audioConfig = new { audioEncoding = "LINEAR16", sampleRateHertz = SAMPLE_RATE, speakingRate = 1.0 }
        };

        string jsonPayload = JsonConvert.SerializeObject(ttsRequestData);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest request = new UnityWebRequest($"https://texttospeech.googleapis.com/v1/text:synthesize?key={googleApiKey}", "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 15; // Giảm timeout xuống 15 giây

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                onComplete?.Invoke(new HttpResponseMessage(System.Net.HttpStatusCode.OK) { Content = new StringContent(request.downloadHandler.text) });
            }
            else
            {
                Debug.LogError($"Lỗi TTS API: {request.error}, Response: {request.downloadHandler?.text}");
                onComplete?.Invoke(new HttpResponseMessage(System.Net.HttpStatusCode.BadRequest) { Content = new StringContent(request.downloadHandler?.text ?? "") });
            }
        }
    }
    private IEnumerator DetectLanguageWithTranslateAPI(string text, Action<string> onComplete)
    {
        if (string.IsNullOrEmpty(text) || string.IsNullOrEmpty(googleApiKey))
        {
            Debug.LogWarning("Văn bản rỗng hoặc thiếu Google API Key, trả về preferredLanguage.");
            onComplete?.Invoke(preferredLanguage);
            yield break;
        }

        var requestData = new
        {
            q = text
        };

        string jsonPayload = JsonConvert.SerializeObject(requestData);
        byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest request = new UnityWebRequest($"https://translation.googleapis.com/language/translate/v2/detect?key={googleApiKey}", "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 15; // Giảm timeout xuống 15 giây

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string responseJson = request.downloadHandler.text;
                Debug.Log($"Phản hồi từ Cloud Translate API: {responseJson}");
                try
                {
                    var jsonResponse = JObject.Parse(responseJson);
                    string detectedLanguage = jsonResponse["data"]?["detections"]?[0]?[0]?["language"]?.Value<string>();

                    if (string.IsNullOrEmpty(detectedLanguage))
                    {
                        Debug.LogWarning("Không phát hiện được ngôn ngữ, trả về preferredLanguage.");
                        onComplete?.Invoke(preferredLanguage);
                    }
                    else
                    {
                        string normalizedLanguage = NormalizeLanguageCode(detectedLanguage);
                        Debug.Log($"Ngôn ngữ phát hiện: {normalizedLanguage}");
                        onComplete?.Invoke(SupportedLanguages.ContainsKey(normalizedLanguage) ? normalizedLanguage : preferredLanguage);
                    }
                }
                catch (JsonException ex)
                {
                    Debug.LogError($"Lỗi phân tích JSON: {ex.Message}");
                    onComplete?.Invoke(preferredLanguage);
                }
            }
            else
            {
                Debug.LogError($"Lỗi API Translate: {request.error}, Response: {request.downloadHandler?.text}");
                onComplete?.Invoke(preferredLanguage);
            }
        }
    }
    

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

        return languageMap.ContainsKey(languageCode) ? languageMap[languageCode] : preferredLanguage;
    }

    private IEnumerator DetectLanguage(string text, Action<string> onComplete)
    {
        if (string.IsNullOrEmpty(text))
        {
            onComplete?.Invoke(preferredLanguage);
            yield break;
        }

        yield return StartCoroutine(DetectLanguageWithTranslateAPI(text, onComplete));
    }

    private IEnumerator RunTask(Task task)
    {
        while (!task.IsCompleted)
        {
            yield return null;
        }

        if (task.IsFaulted)
        {
            Debug.LogError($"Task failed: {task.Exception}");
            throw task.Exception;
        }
    }

    private float CalculateVolume(float[] data)
    {
        float sum = 0f;
        foreach (float sample in data)
        {
            sum += sample * sample;
        }
        return Mathf.Sqrt(sum / data.Length);
    }

    public void StartAudioService() // for testing
    {
        CleanBeforeMakeQuestion();
        myakuController.MyakuListen(true);
        // không cho phép gọi hey DT khi chưa hoàn thành xong việc hỏi
        enableHeyDT = false;
    }     

    public void OnAppOpened(string openReason)
    {
        Debug.Log("Ứng dụng được mở với lý do: " + openReason);
        if (openReason == "wake_word")
        {
            Debug.Log("Ứng dụng tự động mở do phát hiện wake word"); 
            myakuController.MyakuListen(true);
        }
        else if (openReason == "user")
        {
            Debug.Log("Ứng dụng được người dùng mở từ launcher");
        }
    }
    private void CleanBeforeMakeQuestion()
    {
        // dừng phát câu trả lời ngay lập tức
        if (audioSource.isPlaying)
        {
            audioSource.Stop();
            endAnswerTime = Time.time;
        }
        audioSource.clip = null;
        lock (audioClips)
        {
            foreach (var (_, clip) in audioClips)
            {
                Destroy(clip);
            }
            audioClips.Clear();
        }
        foreach (var coroutine in runningCoroutines)
        {
            if (coroutine != null)
            {
                StopCoroutine(coroutine);
            }
        }
        runningCoroutines.Clear();
        StopAllCoroutines();
    }
    public void OnWakeWordDetected()
    {        
        Debug.Log("Ứng dụng tự động mở do phát hiện wake word khi ở foreground");
        CleanBeforeMakeQuestion();
        Resources.UnloadUnusedAssets();
        myakuController.MyakuListen(true);
        // không cho phép gọi hey DT khi chưa hoàn thành xong việc hỏi
        enableHeyDT = false;
    }

    public bool GetEnableHeyDT()
    {
        return enableHeyDT;
    }

    public void StartRecording()
    {
        isHoldingOnButton = true;
        if (!isEnableMic)
        {
            isEnableMic = true;
        }
        StartCoroutine(ResetSessionIfNeeded());
        // Kiểm tra quyền microphone trước khi ghi âm
        if (Application.platform == RuntimePlatform.Android && !Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
            UIManager.Instance.connectionTxt.text = "Please grant microphone permission to record";
            return;
        }

        UIManager.Instance.recordingIndicator.gameObject.SetActive(true);
        UIManager.Instance.connectionTxt.text = "";

        CleanBeforeMakeQuestion();
        // bắt đầu lắng nghe câu hỏi mới

        if (audioPlugin != null) audioPlugin.Call("pauseRecordingFromUnity");
        myakuController.MyakuListen(false); 
    }

    public void StopRecording()
    {
        if (!isEnableMic) return;

        UIManager.Instance.recordingIndicator.gameObject.SetActive(false);
        Microphone.End(null);
        recordingLength = Time.realtimeSinceStartup - startTimeRecord;
        Debug.Log("Thời gian ghi âm: " + recordingLength);

        if (audioPlugin != null) audioPlugin.Call("resumeRecordingFromUnity");
        if (recordedClip != null && isRecordingByButton == true)
        { 
            Debug.Log("Thời gian stop: " + Time.realtimeSinceStartup);
            recordedClip = TrimClip(recordedClip, recordingLength);
            string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_stt.wav");
            WavUtility.Save(audioFilePath, recordedClip);
            myakuController.MyakuThinking();
            UIManager.Instance.connectionTxt.text = "Let me think about the answer for a moment!";
            StartCoroutine(ProcessAudioResponse(audioFilePath));
        }
        else
        {
            UIManager.Instance.connectionTxt.text = "Device cannot record or record time too short";
            myakuController.MyakuHello(); 
        }
        isHoldingOnButton = false;
        isRecordingByButton = false;
    }

    private IEnumerator ProcessAudioResponse(string audioFilePath)
    {
        string transcription = null;
        yield return StartCoroutine(TranscribeAudioPhase((trans) => transcription = trans));
        if (string.IsNullOrEmpty(transcription))
        {
            Debug.LogError("Không thể chuyển đổi giọng nói thành văn bản");
            UIManager.Instance.connectionTxt.text = "Question could not be recognized, please try again";
            myakuController.MyakuHello();
            yield break;
        }

        Debug.Log($"Văn bản nhận dạng được: {transcription}");
        UIManager.Instance.connectionTxt.text = transcription;

        string answer = null;
        yield return StartCoroutine(GenerateAnswerPhase(transcription, (ans) => answer = ans));

        if (string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Không nhận được câu trả lời");
            UIManager.Instance.connectionTxt.text = "I cannot answer this question, please try again";
            myakuController.MyakuHello();
            yield break;
        }

        lock (chatHistory)
        {
            chatHistory.Add((transcription, answer));
        }

        Debug.Log($"Câu trả lời: {answer}");
        UIManager.Instance.connectionTxt.text = answer;

        yield return StartCoroutine(TextToSpeechAndPlayPhase(answer));
        Debug.Log("Hoàn tất xử lý âm thanh và trả lời");
    }

    private AudioClip TrimClip(AudioClip clip, float length)
    {
        int samples = (int)(clip.frequency * length);
        float[] data = new float[samples];
        clip.GetData(data, 0);

        AudioClip trimmedClip = AudioClip.Create(clip.name, samples, clip.channels, clip.frequency, false);
        trimmedClip.SetData(data, 0);

        return trimmedClip;
    }

    // Add this new method:
    public void StartRecordingAfterSound(bool fromHeyDT)
    {
        Debug.Log("Starting recording after sound played and delay");
        
        if (fromHeyDT)
        { 
            // Tạm dừng audio plugin khi bắt đầu ghi âm câu hỏi
            #if UNITY_ANDROID
            if (audioPlugin != null)
            {
                audioPlugin.Call("pauseRecordingFromUnity");
            }
            #endif
            
            StartCoroutine(RecordQuestion()); 
        }
        else
        {
            if (!isHoldingOnButton) return;
            if (!isEnableMic)
            {
                isEnableMic = true;
            }

            string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
            if (device != "")
            {
                int sampleRate = 44100;
                int lengthSec = 45;
                recordedClip = Microphone.Start(device, false, lengthSec, sampleRate);
                startTimeRecord = Time.realtimeSinceStartup;
                Debug.Log("Thời gian bắt đầu ghi âm:" + startTimeRecord);
                isRecordingByButton = true;
            }
            else
            {
                Debug.Log("No microphone device found!");
                UIManager.Instance.connectionTxt.text = "Microphone device not found";
            }
        } 
    }

    public void NationFlagLanguageButtonClick(string nationLanguage)
    {
        selectedSTTLanguage = nationLanguage;
        CleanBeforeMakeQuestion();
        myakuController.MyakuListen(true);
        // không cho phép gọi hey DT khi chưa hoàn thành xong việc hỏi
        enableHeyDT = false;
    }

    private void OnApplicationPause(bool pauseStatus)
    {
        if (pauseStatus && Application.platform == RuntimePlatform.Android && audioPlugin != null)
        {
            Debug.Log("Ứng dụng vào background, dừng dịch vụ ghi âm");
            audioPlugin.Call("stopRecording");
        }
        else if (!pauseStatus && Application.platform == RuntimePlatform.Android && audioPlugin != null)
        {
            Debug.Log("Ứng dụng quay lại foreground, gọi onAppEnterForeground");
            audioPlugin.Call("onAppEnterForeground");
        }
    }
    private void OnDestroy()
    {
        StopAllCoroutines();
        Instance = null;

        // Cleanup Gemini Live session
        if (isGeminiSessionActive)
        {
            StartCoroutine(CloseGeminiSession());
        }

        lock (audioClips)
        {
            foreach (var (_, clip) in audioClips) Destroy(clip);
            audioClips.Clear();
        }
        lock (chatHistory) chatHistory.Clear();
        audioPlugin?.Dispose();
       // httpClient.Dispose(); // Dọn dẹp HttpClient
    }

    // Phương thức để bắt đầu lắng nghe câu hỏi tiếp theo
    public void StartListeningForNextQuestion()
    {
        if (myakuController.IsWaitingForNextQuestion())
        {
            Debug.Log("Bắt đầu lắng nghe câu hỏi tiếp theo...");
            
            // Tạm dừng audio plugin để tránh xung đột
            #if UNITY_ANDROID
            if (audioPlugin != null)
            {
                audioPlugin.Call("pauseRecordingFromUnity");
            }
            #endif
            
            StartCoroutine(RecordQuestion());
        }
    }

    // Phương thức để khởi động lại BackgroundAudioPlugin cho wake word
    public void ResumeWakeWordListening()
    {
        #if UNITY_ANDROID
        if (audioPlugin != null)
        {
            audioPlugin.Call("resumeRecordingFromUnity");
            Debug.Log("Đã khởi động lại lắng nghe wake word");
        }
        #endif
    }
}