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
    private float startTime;
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
    private const float SESSION_TIMEOUT = 60f; // 1 phút

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
        { "ar-XA", "ar-XA-Standard-A" },
        { "bn-IN", "bn-IN-Standard-A" },
        { "bg-BG", "bg-BG-Standard-A" },
        { "ca-ES", "ca-ES-Standard-A" },
        { "zh-CN", "cmn-CN-Standard-A" },
        { "zh-TW", "cmn-TW-Standard-A" },
        { "hr-HR", "hr-HR-Standard-A" },
        { "cs-CZ", "cs-CZ-Standard-A" },
        { "da-DK", "da-DK-Standard-A" },
        { "nl-NL", "nl-NL-Standard-A" },
        { "en-AU", "en-AU-Standard-A" },
        { "en-IN", "en-IN-Standard-A" },
        { "en-GB", "en-GB-Standard-A" },
        { "en-SG", "en-SG-Standard-A" },
        { "en-US", "en-US-Standard-A" },
        { "fi-FI", "fi-FI-Standard-A" },
        { "fr-FR", "fr-FR-Standard-A" },
        { "fr-CA", "fr-CA-Standard-A" },
        { "de-DE", "de-DE-Standard-A" },
        { "el-GR", "el-GR-Standard-A" },
        { "gu-IN", "gu-IN-Standard-A" },
        { "he-IL", "he-IL-Standard-A" },
        { "hi-IN", "hi-IN-Standard-A" },
        { "hu-HU", "hu-HU-Standard-A" },
        { "id-ID", "id-ID-Standard-A" },
        { "it-IT", "it-IT-Standard-A" },
        { "ja-JP", "ja-JP-Standard-A" },
        { "kn-IN", "kn-IN-Standard-A" },
        { "km-KH", "km-KH-Standard-A" },
        { "ko-KR", "ko-KR-Standard-A" },
        { "lo-LA", "lo-LA-Standard-A" },
        { "lv-LV", "lv-LV-Standard-A" },
        { "lt-LT", "lt-LT-Standard-A" },
        { "ms-MY", "ms-MY-Standard-A" },
        { "ml-IN", "ml-IN-Standard-A" },
        { "mr-IN", "mr-IN-Standard-A" },
        { "my-MM", "my-MM-Standard-A" },
        { "nb-NO", "nb-NO-Standard-A" },
        { "fil-PH", "fil-PH-Standard-A" },
        { "pl-PL", "pl-PL-Standard-A" },
        { "pt-BR", "pt-BR-Standard-A" },
        { "pt-PT", "pt-PT-Standard-A" },
        { "pa-IN", "pa-IN-Standard-A" },
        { "ro-RO", "ro-RO-Standard-A" },
        { "ru-RU", "ru-RU-Standard-A" },
        { "sr-RS", "sr-RS-Standard-A" },
        { "sk-SK", "sk-SK-Standard-A" },
        { "sl-SI", "sl-SI-Standard-A" },
        { "es-ES", "es-ES-Standard-A" },
        { "es-US", "es-US-Standard-A" },
        { "sw-TZ", "sw-TZ-Standard-A" },
        { "sv-SE", "sv-SE-Standard-A" },
        { "ta-IN", "ta-IN-Standard-A" },
        { "te-IN", "te-IN-Standard-A" },
        { "th-TH", "th-TH-Standard-A" },
        { "tr-TR", "tr-TR-Standard-A" },
        { "uk-UA", "uk-UA-Standard-A" },
        { "vi-VN", "vi-VN-Standard-A" }
    };

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
            audioPlugin.Call("requestIgnoreBatteryOptimizations"); // Yêu cầu bỏ tối ưu hóa pin
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
            UIManager.Instance.connectionTxt.text = "Tôi không nghe thấy câu hỏi, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        string transcription = null;
        yield return StartCoroutine(TranscribeAudioPhase((trans) => transcription = trans));

        if (string.IsNullOrEmpty(transcription))
        {
            Debug.LogError("Không thể chuyển đổi giọng nói thành văn bản");
            UIManager.Instance.connectionTxt.text = "Không thể nhận dạng câu hỏi, vui lòng thử lại";
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
            UIManager.Instance.connectionTxt.text = "Tôi không thể trả lời câu hỏi này, vui lòng thử lại";
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

        Debug.Log("Hoàn tất quy trình RecordQuestion");
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
                    UIManager.Instance.connectionTxt.text = "Vui lòng cấp quyền microphone để ghi âm";
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
            UIManager.Instance.connectionTxt.text = "Không tìm thấy thiết bị microphone";
            onComplete?.Invoke(false);
            yield break;
        }

        AudioClip questionClip = Microphone.Start(device, false, (int)limitTimeRecord, sampleRate);
        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool hasSoundDetected = false;
        float silenceThreshold = PlayerPrefs.GetFloat("AudibleThreshold", 0.005f);
        Debug.Log($"Ngưỡng âm lượng thu âm: {silenceThreshold}");

        yield return new WaitForSeconds(0.1f);

        float maxvolume = 0f;
        while (Microphone.IsRecording(device))
        {
            float[] data = new float[256];
            int position = Microphone.GetPosition(device);
            if (position > 0)
            {
                questionClip.GetData(data, position - data.Length);
                float volume = CalculateVolume(data);
                UIManager.Instance.connectionTxt.text = $"Âm lượng hiện tại: { volume} ";
                Debug.Log($"Âm lượng hiện tại: {volume}");
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
                if (!hasSoundDetected && (currentTime - startTime > 5f))
                {
                    Debug.Log("Không phát hiện tiếng nói trong 5 giây, hủy ghi âm");
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
            UIManager.Instance.connectionTxt.text = "Không phát hiện tiếng nói, vui lòng thử lại";
            // kết thúc ghi âm, cho phép heyDT
            enableHeyDT = true;
            onComplete?.Invoke(false);
            if (audioPlugin != null) audioPlugin.Call("resumeRecordingFromUnity");
            yield break;
        }

        // kết thúc ghi âm, cho phép heyDT
        enableHeyDT = true;

        Debug.Log("Kết thúc ghi âm, xử lý câu hỏi");
        UIManager.Instance.connectionTxt.text = "Đang xử lý câu hỏi của bạn...";
        myakuController.MyakuThinking();

        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
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
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
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

    private IEnumerator GenerateAnswerPhase(string transcription, Action<string> onComplete)
    {
        Debug.Log("Gửi câu hỏi và nhận câu trả lời");

        var messages = new List<object>
        {
            new { role = "system", content = "You are a researcher on Southeast Asia and ASEAN." },
            new { role = "system", content = "Your name is DT. You were designed and developed by the Simulation and Visualization Center - Duy Tan University" },
            new { role = "system", content = "Answer briefly in 1 to 5 sentences, each sentence under 16 words. Make sure the tone is friendly and the answer is easy to understand." },
            new { role = "system", content = "Phải trả lời lại theo đúng ngôn ngữ mà người dùng sử dụng để hỏi." },
            //new { role = "system", content = "If asked questions like: Who created you?, Who are you? Or similar questions, let them know that you were designed and developed by the Simulation and Visualization Center - Duy Tan University" },
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
            model = "gpt-4o",
            messages = messages.ToArray(),
            temperature = 0.7
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
                    string answer = json["choices"][0]["message"]["content"].Value<string>();
                    Debug.Log($"Nhận câu trả lời thành công: {answer}");
                    UIManager.Instance.connectionTxt.text = $"Câu trả lời {answer}";
                    onComplete?.Invoke(answer);
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

    private IEnumerator TextToSpeechAndPlayPhase(string answer)
    {
        float startTime = Time.realtimeSinceStartup;
        Debug.Log($"Bắt đầu xử lý Text-to-Speech tại: {startTime}");

        if (string.IsNullOrEmpty(googleApiKey))
        {
            Debug.LogError("Google API Key chưa được thiết lập trong config.json");
            UIManager.Instance.connectionTxt.text = "Lỗi: Không tìm thấy Google API Key";
            yield break;
        }

        List<string> sentences = streamBuffer.AddText(answer + " ");
        if (streamBuffer.GetCurrentBuffer().Length > 0)
        {
            sentences.Add(streamBuffer.GetCurrentBuffer());
            streamBuffer.ClearBuffer();
        }

        // Hiển thị ngôn ngữ được phát hiện cho câu đầu tiên
        if (sentences.Count > 0)
        {
            string detectedLanguage = DetectLanguage(sentences[0]);
            string languageName = SupportedLanguages.ContainsKey(detectedLanguage) ? SupportedLanguages[detectedLanguage] : detectedLanguage;
            Debug.Log($"Ngôn ngữ được phát hiện: {languageName} ({detectedLanguage})");
            //UIManager.Instance.connectionTxt.text = $"Đang phát âm bằng {languageName}...";
        }

        int currentPlayIndex = 0;
        bool isFirstSentencePlayed = false;

        audioClips.Clear();

        for (int i = 0; i < sentences.Count; i++)
        {
            runningCoroutines.Add(StartCoroutine(ProcessTTSSentence(i, sentences[i])));
        }

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
                myakuController.MyakuAnswer();
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
                yield return null;
            }
        }

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

        Debug.Log("Phát xong tất cả câu.");
        myakuController.MyakuStopAnswer();
        onAudioFinished.Invoke();
    }

    private IEnumerator ProcessTTSSentence(int index, string sentence)
    {
        if (string.IsNullOrWhiteSpace(sentence))
        {
            lock (audioClips)
            {
                Debug.Log($"Câu {index} trắng, bỏ qua.");
            }
            yield break;
        }

        Debug.Log($"Đang xử lý câu {index}: {sentence}");

        string languageCode = DetectLanguage(sentence);
        if (!SupportedLanguages.ContainsKey(languageCode))
        {
            Debug.LogWarning($"Ngôn ngữ {languageCode} không được hỗ trợ. Chuyển về {preferredLanguage}.");
            languageCode = preferredLanguage;
        }

        Task<HttpResponseMessage> ttsTask = SynthesizeSpeechAsync(sentence, languageCode);
        yield return StartCoroutine(RunTask(ttsTask));

        HttpResponseMessage response = ttsTask.Result;
        if (!response.IsSuccessStatusCode)
        {
            string errorContent = response.Content.ReadAsStringAsync().Result;
            Debug.LogError($"Lỗi TTS API cho câu {index}: {response.StatusCode}, {errorContent}");
            lock (audioClips)
            {
                Debug.Log($"Câu {index} lỗi.");
            }
            yield break;
        }

        string responseJson = response.Content.ReadAsStringAsync().Result;
        var jsonResponse = JObject.Parse(responseJson);
        string audioContent = jsonResponse["audioContent"].Value<string>();
        byte[] wavData = Convert.FromBase64String(audioContent);

        int headerSize = 44;
        if (wavData.Length < headerSize)
        {
            Debug.LogError($"Dữ liệu WAV không hợp lệ cho câu {index}");
            lock (audioClips)
            {
                Debug.Log($"Câu {index} lỗi.");
            }
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
    }

    private async Task<HttpResponseMessage> SynthesizeSpeechAsync(string sentence, string languageCode)
    {
        using (var client = new HttpClient())
        {
            client.Timeout = TimeSpan.FromSeconds(30);

            // Lấy giọng nói chuẩn từ VoiceMappings
            string voiceName = VoiceMappings.ContainsKey(languageCode) ? VoiceMappings[languageCode] : $"{languageCode}-Standard-A";
            var voiceConfig = new { languageCode = languageCode, name = voiceName, ssmlGender = "MALE" };

            var ttsRequestData = new
            {
                input = new { ssml = $"<speak>{sentence}</speak>" },
                voice = voiceConfig,
                audioConfig = new { audioEncoding = "LINEAR16", sampleRateHertz = SAMPLE_RATE, speakingRate = 1.0 }
            };

            var jsonContent = new StringContent(
                JsonConvert.SerializeObject(ttsRequestData),
                Encoding.UTF8,
                "application/json"
            );

            string url = $"https://texttospeech.googleapis.com/v1/text:synthesize?key={googleApiKey}";
            Debug.Log($"Gửi request TTS: {url}, Voice: {voiceName}");
            return await client.PostAsync(url, jsonContent);
        }
    } 
 
    private string DetectLanguage(string text)
    {
        if (string.IsNullOrEmpty(text)) return preferredLanguage;

        // Ký tự đặc trưng cho các ngôn ngữ Đông Nam Á
        string vietnameseChars = "àáạảãâầấậẩẫăằắặẳẵèéẹẻẽêềếệểễìíịỉĩòóọỏõôồốộổỗơờớợởỡùúụủũưừứựửữỳýỵỷỹ";
        string thaiChars = "กขฃคฅฆงจฉชซฌญฎฏฐฑฒณดตถทธนบปผฝพฟภมยรลวศษสหฬอฮ";
        string khmerChars = "កខគឃងចឆជឈញដឋឌឍណតថទធនបផពភមយរលវឝឞសហឡអ";
        string laoChars = "ກຂຄງຈຉຊຍດຕຖທນບປຜຝພຟມຢຣລວສຫອຮ";
        string myanmarChars = "ကခဂဃငစဆဇဈဉညဋဌဍဎဏတထဒဓနပဖဗဘမယရလဝသဟဠအ";
        string tagalogChars = "ñÑ"; // Tagalog sử dụng Latin, thêm ký tự đặc trưng như ñ

        // Phát hiện ngôn ngữ Đông Nam Á
        if (text.Any(c => vietnameseChars.Contains(c))) return "vi-VN"; // Tiếng Việt
        if (text.Any(c => thaiChars.Contains(c))) return "th-TH"; // Tiếng Thái
        if (text.Any(c => khmerChars.Contains(c))) return "km-KH"; // Tiếng Khmer
        if (text.Any(c => laoChars.Contains(c))) return "lo-LA"; // Tiếng Lào
        if (text.Any(c => myanmarChars.Contains(c))) return "my-MM"; // Tiếng Myanmar
        if (text.Any(c => tagalogChars.Contains(c))) return "fil-PH"; // Tiếng Tagalog

        // Phát hiện các ngôn ngữ Đông Nam Á khác dựa trên Unicode
        if (text.Any(c => c >= 0x1780 && c <= 0x17FF)) return "km-KH"; // Tiếng Khmer
        if (text.Any(c => c >= 0x0E80 && c <= 0x0EFF)) return "lo-LA"; // Tiếng Lào
        if (text.Any(c => c >= 0x1000 && c <= 0x109F)) return "my-MM"; // Tiếng Myanmar
        if (text.Any(c => c >= 0x0B00 && c <= 0x0B7F)) return "ta-IN"; // Tiếng Tamil (Singapore)
        if (text.Any(c => c >= 0x4E00 && c <= 0x9FFF)) return "zh-CN"; // Tiếng Trung (Singapore)
        if (text.Any(c => c >= 0x0600 && c <= 0x06FF)) return "ms-MY"; // Tiếng Malay (Latin, nhưng kiểm tra thêm)

        // Phát hiện các ngôn ngữ khác
        if (text.Any(c => c >= 0xAC00 && c <= 0xD7AF)) return "ko-KR"; // Tiếng Hàn
        if (text.Any(c => c >= 0x3040 && c <= 0x30FF)) return "ja-JP"; // Tiếng Nhật
        if (text.Any(c => c >= 0x0400 && c <= 0x04FF)) return "ru-RU"; // Tiếng Nga
        if (text.Any(c => c >= 0x0900 && c <= 0x097F)) return "hi-IN"; // Tiếng Hindi
        if (text.Any(c => c >= 0x0600 && c <= 0x06FF)) return "ar-XA"; // Tiếng Ả Rập
        if (text.Any(c => c >= 0x0590 && c <= 0x05FF)) return "he-IL"; // Tiếng Hebrew
        if (text.Any(c => c >= 0x0C00 && c <= 0x0C7F)) return "te-IN"; // Tiếng Telugu
        if (text.Any(c => c >= 0x0A80 && c <= 0x0AFF)) return "gu-IN"; // Tiếng Gujarati
        if (text.Any(c => c >= 0x0370 && c <= 0x03FF)) return "el-GR"; // Tiếng Hy Lạp

        // Kiểm tra lịch sử chat
        lock (chatHistory)
        {
            var lastQuestion = chatHistory.LastOrDefault().question;
            if (!string.IsNullOrEmpty(lastQuestion))
            {
                if (lastQuestion.Any(c => vietnameseChars.Contains(c))) return "vi-VN";
                if (lastQuestion.Any(c => thaiChars.Contains(c))) return "th-TH";
                if (lastQuestion.Any(c => khmerChars.Contains(c))) return "km-KH";
                if (lastQuestion.Any(c => laoChars.Contains(c))) return "lo-LA";
                if (lastQuestion.Any(c => myanmarChars.Contains(c))) return "my-MM";
                if (lastQuestion.Any(c => tagalogChars.Contains(c))) return "fil-PH";
                if (lastQuestion.Any(c => c >= 0x1780 && c <= 0x17FF)) return "km-KH";
                if (lastQuestion.Any(c => c >= 0x0E80 && c <= 0x0EFF)) return "lo-LA";
                if (lastQuestion.Any(c => c >= 0x1000 && c <= 0x109F)) return "my-MM";
                if (lastQuestion.Any(c => c >= 0x0B00 && c <= 0x0B7F)) return "ta-IN";
                if (lastQuestion.Any(c => c >= 0x4E00 && c <= 0x9FFF)) return "zh-CN";
                if (lastQuestion.Any(c => c >= 0x0600 && c <= 0x06FF)) return "ms-MY";
                if (lastQuestion.Any(c => c >= 0xAC00 && c <= 0xD7AF)) return "ko-KR";
                if (lastQuestion.Any(c => c >= 0x3040 && c <= 0x30FF)) return "ja-JP";
                if (lastQuestion.Any(c => c >= 0x0400 && c <= 0x04FF)) return "ru-RU";
                if (lastQuestion.Any(c => c >= 0x0900 && c <= 0x097F)) return "hi-IN";
                if (lastQuestion.Any(c => c >= 0x0600 && c <= 0x06FF)) return "ar-XA";
                if (lastQuestion.Any(c => c >= 0x0590 && c <= 0x05FF)) return "he-IL";
                if (lastQuestion.Any(c => c >= 0x0C00 && c <= 0x0C7F)) return "te-IN";
                if (lastQuestion.Any(c => c >= 0x0A80 && c <= 0x0AFF)) return "gu-IN";
                if (lastQuestion.Any(c => c >= 0x0370 && c <= 0x03FF)) return "el-GR";
            }
        }

        // Fallback cho Đông Timor (không có Tetum)
        if (text.Contains("Timor") || text.Contains("Tetum")) return "id-ID"; // Tiếng Indonesia là ngôn ngữ giao tiếp phổ biến ở Đông Timor

        // Mặc định sử dụng ngôn ngữ được cấu hình
        return preferredLanguage;
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
        if (!isEnableMic)
        {
            isEnableMic = true;
        }
        StartCoroutine(ResetSessionIfNeeded());
        // Kiểm tra quyền microphone trước khi ghi âm
        if (Application.platform == RuntimePlatform.Android && !Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
            UIManager.Instance.connectionTxt.text = "Vui lòng cấp quyền microphone để ghi âm";
            return;
        }

        UIManager.Instance.recordingIndicator.gameObject.SetActive(true);
        UIManager.Instance.connectionTxt.text = "";

        CleanBeforeMakeQuestion();
        // bắt đầu lắng nghe câu hỏi mới
        myakuController.MyakuListen(false); 
    }

    public void StopRecording()
    {
        if (!isEnableMic) return;

        UIManager.Instance.recordingIndicator.gameObject.SetActive(false);
        Microphone.End(null);
        recordingLength = Time.realtimeSinceStartup - startTime;

        if (recordedClip != null)
        {
            recordedClip = TrimClip(recordedClip, recordingLength);
            string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
            WavUtility.Save(audioFilePath, recordedClip);
            myakuController.MyakuThinking();
            UIManager.Instance.connectionTxt.text = "Let me think about the answer for a moment!";
            StartCoroutine(ProcessAudioResponse(audioFilePath));
        }
        else
        {
            UIManager.Instance.connectionTxt.text = "Device cannot record, please check device status";
            myakuController.MyakuHello();
        }
    }

    private IEnumerator ProcessAudioResponse(string audioFilePath)
    {
        string transcription = null;
        yield return StartCoroutine(TranscribeAudioPhase((trans) => transcription = trans));

        if (string.IsNullOrEmpty(transcription))
        {
            Debug.LogError("Không thể chuyển đổi giọng nói thành văn bản");
            UIManager.Instance.connectionTxt.text = "Không thể nhận dạng câu hỏi, vui lòng thử lại";
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
            UIManager.Instance.connectionTxt.text = "Tôi không thể trả lời câu hỏi này, vui lòng thử lại";
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
            StartCoroutine(RecordQuestion());
        }
        else
        {
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
                startTime = Time.realtimeSinceStartup;
            }
            else
            {
                Debug.Log("No microphone device found!");
                UIManager.Instance.connectionTxt.text = "Không tìm thấy thiết bị microphone";
            }
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
    }
}