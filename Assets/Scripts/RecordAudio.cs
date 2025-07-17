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
    private string preferredLanguage = "en-US"; // Ngôn ngữ mặc định là tiếng Anh
    private List<(int index, AudioClip clip)> audioClips = new List<(int, AudioClip)>();
    private const int SAMPLE_RATE = 24000;
    private bool isEnableMic = false;

    // Lịch sử chat
    private List<(string question, string answer)> chatHistory = new List<(string, string)>();
    private const float SESSION_TIMEOUT = 90f; // 1 phút

    private string selectedSTTLanguage = ""; // Ngôn ngữ được chọn cho Google STT 

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
        bool recordingSuccess = false;
        yield return StartCoroutine(RecordAudioPhase((success) => recordingSuccess = success));

        if (!recordingSuccess)
        {
            Debug.Log("Ghi âm thất bại, kết thúc quy trình");
            UIManager.Instance.connectionTxt.text = "I didn't hear the question, please try again. Say 'Hey DT' to ask!";
            
            // Kiểm tra chế độ chờ câu hỏi tiếp theo
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
            
            // Kiểm tra chế độ chờ câu hỏi tiếp theo
            if (!HandleRecordingFailure())
            {
                yield break;
            }
        }

        Debug.Log($"Văn bản nhận dạng được: {transcription}");
        UIManager.Instance.connectionTxt.text = transcription;

        // Nếu nhận được câu hỏi thành công trong chế độ chờ, dừng timer và bắt đầu thinking
        if (myakuController.IsWaitingForNextQuestion())
        {
            myakuController.EndWaitingForNextQuestion();
        }
        
        // Bắt đầu animation thinking khi xử lý câu hỏi
        myakuController.MyakuThinking();

        string answer = null;
        yield return StartCoroutine(GenerateAnswerPhase(transcription, (ans) => answer = ans));

        if (string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Không nhận được câu trả lời");
            UIManager.Instance.connectionTxt.text = "I cannot answer this question, please try again";
            
            // Kiểm tra chế độ chờ câu hỏi tiếp theo
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
        Debug.Log("Hoàn tất quy trình RecordQuestion");
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
        form.AddField("model", "whisper-large-v3");
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

    //private IEnumerator TranscribeAudioGooglePhase(Action<string> onComplete)
    //{
    //    if (string.IsNullOrEmpty(googleApiKey))
    //    {
    //        Debug.LogError("Khóa API Google chưa được thiết lập trong config.json");
    //        UIManager.Instance.connectionTxt.text = "Lỗi: Không tìm thấy khóa API Google";
    //        onComplete?.Invoke(null);
    //        yield break;
    //    }

    //    string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_stt.wav");
    //    byte[] audioBytes = File.ReadAllBytes(audioFilePath);
    //    Debug.Log($"Đã đọc file âm thanh cho Google STT: {audioFilePath}, kích thước: {audioBytes.Length} bytes");

    //    string base64Audio = Convert.ToBase64String(audioBytes);
    //    string languageCode = string.IsNullOrEmpty(selectedSTTLanguage) ? preferredLanguage : selectedSTTLanguage;

    //    var sttRequestData = new
    //    {
    //        config = new
    //        {
    //            encoding = "LINEAR16",
    //            sampleRateHertz = 44100,
    //            languageCode = languageCode,
    //            enableAutomaticPunctuation = true
    //        },
    //        audio = new
    //        {
    //            content = base64Audio
    //        }
    //    };

    //    string jsonPayload = JsonConvert.SerializeObject(sttRequestData);
    //    byte[] bodyRaw = Encoding.UTF8.GetBytes(jsonPayload);

    //    using (UnityWebRequest request = new UnityWebRequest("https://speech.googleapis.com/v1/speech:recognize?key=" + googleApiKey, "POST"))
    //    {
    //        request.uploadHandler = new UploadHandlerRaw(bodyRaw);
    //        request.downloadHandler = new DownloadHandlerBuffer();
    //        request.SetRequestHeader("Content-Type", "application/json");
    //        request.timeout = 30;

    //        yield return request.SendWebRequest();

    //        if (request.result == UnityWebRequest.Result.Success)
    //        {
    //            string response = request.downloadHandler.text;
    //            try
    //            {
    //                JObject json = JObject.Parse(response);
    //                string transcription = json["results"]?[0]?["alternatives"]?[0]?["transcript"]?.Value<string>();
    //                if (!string.IsNullOrEmpty(transcription))
    //                {
    //                    Debug.Log($"Chuyển đổi Google STT thành công: {transcription}");
    //                    onComplete?.Invoke(transcription);
    //                }
    //                else
    //                {
    //                    Debug.LogError("Không tìm thấy văn bản trong phản hồi Google STT");
    //                    onComplete?.Invoke(null);
    //                }
    //            }
    //            catch (JsonException e)
    //            {
    //                Debug.LogError($"Lỗi phân tích JSON Google STT: {e.Message}");
    //                onComplete?.Invoke(null);
    //            }
    //        }
    //        else
    //        {
    //            Debug.LogError($"Lỗi API Google STT: {request.error}, Phản hồi: {request.downloadHandler?.text}");
    //            onComplete?.Invoke(null);
    //        }
    //    }
    //}

    private IEnumerator GenerateAnswerPhase(string transcription, Action<string> onComplete)
    {
        Debug.Log("Gửi câu hỏi và nhận câu trả lời");

        var messages = new List<object>
        {
            new {
                role = "system",
            //    content = "Answer users briefly in 1 to 5 sentences, each under 20 words. Ensure a friendly tone and clear responses. " +
            //"##VERY IMPORTANT: You must respond in the same language the user uses to ask. " +
            //"Your name is Tenaya. You were designed and developed by the Simulation and Visualization Center - Duy Tan University. " +
            //"You are an expert in Southeast Asia and ASEAN. " +
            //"##REMEMBER: Only introduce yourself as instructed, do not add any extra information, and only respond when asked. " +
            //"Do NOT return any URLs or web addresses, only provide the facts." },
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

    //private IEnumerator ProcessTTSSentence(int index, string sentence, string languageCode, Action<bool> onComplete)
    //{
    //    if (string.IsNullOrWhiteSpace(sentence))
    //    {
    //        lock (audioClips)
    //        {
    //            Debug.Log($"Câu {index} trắng, bỏ qua.");
    //            UIManager.Instance.WarningTxt.text = "Có câu trắng";
    //        }
    //        onComplete?.Invoke(false);
    //        yield break;
    //    }

    //    Debug.Log($"Đang xử lý câu {index}: {sentence}");

    //    if (!SupportedLanguages.ContainsKey(languageCode))
    //    {
    //        Debug.LogWarning($"Ngôn ngữ {languageCode} không được hỗ trợ. Chuyển về {preferredLanguage}.");
    //        languageCode = preferredLanguage;
    //    }

    //    int retryCount = 0;
    //    const int maxRetries = 2;
    //    bool success = false;
    //    while (retryCount <= maxRetries && !success)
    //    {
    //        Task<HttpResponseMessage> ttsTask = SynthesizeSpeechAsync(sentence, languageCode);
    //        yield return StartCoroutine(RunTask(ttsTask));

    //        HttpResponseMessage response = ttsTask.Result;
    //        if (!response.IsSuccessStatusCode)
    //        {
    //            string errorContent = response.Content.ReadAsStringAsync().Result;
    //            Debug.LogError($"Lỗi TTS API cho câu {index}: {response.StatusCode}, {errorContent}");
    //            retryCount++;
    //            if (retryCount > maxRetries)
    //            {
    //                Debug.LogError($"Hết số lần thử lại cho câu {index}. Bỏ qua.");
    //                lock (audioClips)
    //                {
    //                    Debug.Log($"Câu {index} lỗi sau {maxRetries} lần thử.");
    //                }
    //                onComplete?.Invoke(false);
    //                yield break;
    //            }
    //            Debug.Log($"Thử lại lần {retryCount} cho câu { index}...");
    //            yield return new WaitForSeconds(0.5f);
    //            continue;
    //        }

    //        string responseJson = response.Content.ReadAsStringAsync().Result;
    //        var jsonResponse = JObject.Parse(responseJson);
    //        string audioContent = jsonResponse["audioContent"].Value<string>();
    //        if (string.IsNullOrEmpty(audioContent))
    //        {
    //            Debug.LogError($"Không có dữ liệu âm thanh trong phản hồi TTS cho câu {index}");
    //            onComplete?.Invoke(false);
    //            yield break;
    //        }

    //        byte[] wavData = Convert.FromBase64String(audioContent);

    //        int headerSize = 44;
    //        if (wavData.Length < headerSize)
    //        {
    //            Debug.LogError($"Dữ liệu WAV không hợp lệ cho câu {index}");
    //            lock (audioClips)
    //            {
    //                Debug.Log($"Câu {index} lỗi.");
    //            }
    //            onComplete?.Invoke(false);
    //            yield break;
    //        }

    //        float[] samples = new float[(wavData.Length - headerSize) / 2];
    //        for (int i = 0; i < samples.Length; i++)
    //        {
    //            short sample = BitConverter.ToInt16(wavData, headerSize + i * 2);
    //            samples[i] = sample / 32768f;
    //        }

    //        AudioClip clip = AudioClip.Create($"TTS_{index}", samples.Length, 1, SAMPLE_RATE, false);
    //        clip.SetData(samples, 0);

    //        lock (audioClips)
    //        {
    //            audioClips.Add((index, clip));
    //            Debug.Log($"Đã thêm clip {index}");
    //        }
    //        success = true;
    //        onComplete?.Invoke(true);
    //    }
    //}

    //private async Task<HttpResponseMessage> SynthesizeSpeechAsync(string sentence, string languageCode)
    //{
    //    string voiceName = VoiceMappings.ContainsKey(languageCode) ? VoiceMappings[languageCode] : $"{preferredLanguage}-Standard-A";
    //    var voiceConfig = new { languageCode, name = voiceName, ssmlGender = "MALE" };

    //    var ttsRequestData = new
    //    {
    //        input = new { ssml = $"<speak>{sentence}</speak>" },
    //        voice = voiceConfig,
    //        audioConfig = new { audioEncoding = "LINEAR16", sampleRateHertz = SAMPLE_RATE, speakingRate = 1.0 }
    //    };

    //    var jsonContent = new StringContent(
    //        JsonConvert.SerializeObject(ttsRequestData),
    //        Encoding.UTF8,
    //        "application/json"
    //    );

    //    string url = $"https://texttospeech.googleapis.com/v1/text:synthesize?key={googleApiKey}";
    //    Debug.Log($"Gửi request TTS: {url}, Voice: {voiceName}");
    //    return await httpClient.PostAsync(url, jsonContent);
    //}
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
    //private async Task<string> DetectLanguageWithTranslateAPI(string text)
    //{
    //    if (string.IsNullOrEmpty(text) || string.IsNullOrEmpty(googleApiKey))
    //    {
    //        Debug.LogWarning("Văn bản rỗng hoặc thiếu Google API Key, trả về preferredLanguage.");
    //        return preferredLanguage;
    //    }

    //    var requestData = new
    //    {
    //        q = text
    //    };

    //    var jsonContent = new StringContent(
    //        JsonConvert.SerializeObject(requestData),
    //        Encoding.UTF8,
    //        "application/json"
    //    );

    //    string url = $"https://translation.googleapis.com/language/translate/v2/detect?key={googleApiKey}";
    //    Debug.Log($"Gửi yêu cầu phát hiện ngôn ngữ: URL={url}, Text={text}");

    //    try
    //    {
    //        var response = await httpClient.PostAsync(url, jsonContent);

    //        if (!response.IsSuccessStatusCode)
    //        {
    //            string errorContent = await response.Content.ReadAsStringAsync();
    //            Debug.LogError($"Lỗi Cloud Translate API: Status={response.StatusCode}, Error={errorContent}");
    //            return preferredLanguage;
    //        }

    //        string responseJson = await response.Content.ReadAsStringAsync();
    //        Debug.Log($"Phản hồi từ Cloud Translate API: {responseJson}");
    //        var jsonResponse = JObject.Parse(responseJson);
    //        string detectedLanguage = jsonResponse["data"]?["detections"]?[0]?[0]?["language"]?.Value<string>();

    //        if (string.IsNullOrEmpty(detectedLanguage))
    //        {
    //            Debug.LogWarning("Không phát hiện được ngôn ngữ từ Cloud Translate API, trả về preferredLanguage.");
    //            return preferredLanguage;
    //        }

    //        string normalizedLanguage = NormalizeLanguageCode(detectedLanguage);
    //        Debug.Log($"Ngôn ngữ phát hiện từ Cloud Translate API: {normalizedLanguage}");
    //        return SupportedLanguages.ContainsKey(normalizedLanguage) ? normalizedLanguage : preferredLanguage;
    //    }
    //    catch (Exception ex)
    //    {
    //        Debug.LogError($"Lỗi khi gọi Cloud Translate API: {ex.Message}");
    //        return preferredLanguage;
    //    }
    //}

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

    //private async Task<string> DetectLanguage(string text)
    //{
    //    if (string.IsNullOrEmpty(text)) return preferredLanguage;

    //    string detectedLanguage = await DetectLanguageWithTranslateAPI(text);
    //    if (!string.IsNullOrEmpty(detectedLanguage) && detectedLanguage != preferredLanguage)
    //    {
    //        return detectedLanguage;
    //    } 

    //    return preferredLanguage;
    //}
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