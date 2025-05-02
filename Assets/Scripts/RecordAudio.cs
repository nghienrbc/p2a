using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net.Http;
using UnityEngine;
using UnityEngine.Events;
using NAudio.Wave;
using System.Threading;
using System.Threading.Tasks;
using NativeWebSocket;
using Newtonsoft.Json.Linq;
using TMPro;
using UnityEngine.Android;
using System.Text.RegularExpressions;
using System.Linq;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System.Text;

using Google.Cloud.TextToSpeech.V1;
using Google.Apis.Auth.OAuth2;
using Google.Apis.Services;

public class RecordAudio : MonoBehaviour
{
    public TMP_Text transcriptTxt;
    public TMP_Text responseTxt;
    public MyakuController myakuController;

    private string webSocketUrl = "ws://157.10.52.193:8000/ws/audio-chat/186462d7-3150-4b47-93e8-a349db63b307/null/f836ce6c-5910-47b7-8931-d3a11b65c8e5";
    private string conversationId = "";
    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource;
    private float startTime;
    private float recordingLength;

    public UnityEvent onAudioFinished;
    private float beginQuestionTime;
    private float endAnswerTime;
    private Coroutine audioCoroutine;
    private List<byte> audioDataBuffer = new List<byte>();
    private Queue<List<byte>> audioBuffersQueue = new Queue<List<byte>>();
    private bool isReceivingAudio = false;
    private bool isPlayingAudio = false;
    private Queue<Action> mainThreadActions = new Queue<Action>();
    private bool isBeginPlay = false;
    private bool isWebSocketOpen = false;
    private bool isAnswering = false;
    private bool isEnableMic = false;
    private bool isEnableRecieveAudioChunkMessage = false;
    private AndroidJavaObject audioPlugin;
    private bool isRunning = false;
    private bool isListeningContinuously = true;
    private AudioClip questionClip;
    private StreamBuffer streamBuffer;
    private Queue<string> processingQueue;
    private string openAiApiKey = "";
    private string groqKey = "";
    private Dictionary<string, (string model, string voice)> voiceSettings;
    private bool isProcessing;
    private bool isActive;
    private float pingInterval = 10f;
    private float lastPingTime = 0f;
    public bool isWakeWordDetected = false;
    public bool isSpeaking = false;
    public string status = "Initializing...";
    public float audioLevel = 0f;
    public bool isConnected = false;
    public string transcript = "";
    public string response = "";
    private List<(int index, AudioClip clip)> audioClips = new List<(int, AudioClip)>();
    private bool isPlayingStreamAudio = false;
    private const int CHUNK_SIZE = 8192;
    private const int SAMPLE_RATE = 24000;
    private List<byte> audioBuffer = new List<byte>();
    private bool isFirstChunk = true;

    // Lịch sử chat
    private List<(string question, string answer)> chatHistory = new List<(string, string)>();
    private const float SESSION_TIMEOUT = 60f; // 1 phút

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
    }

    private void Awake()
    {
        streamBuffer = new StreamBuffer();
        processingQueue = new Queue<string>();

        voiceSettings = new Dictionary<string, (string model, string voice)>
        {
            { "default", ("tts-1", "alloy") },
            { "casual", ("tts-1", "nova") },
            { "formal", ("tts-1", "onyx") }
        };

        TextAsset configFile = Resources.Load<TextAsset>("config");
        if (configFile != null)
        {
            Config config = JsonUtility.FromJson<Config>(configFile.text);
            openAiApiKey = config.openAIApiKey;
            groqKey = config.groqKey;
        }
        else
        {
            Debug.LogError("Không tìm thấy file Config.json trong Resources!");
        }
    }

    private void Start()
    {
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
        }
#endif
        onAudioFinished.AddListener(OnAudioFinished);
        conversationId = Guid.NewGuid().ToString();
    }

    private void Update()
    {
        while (mainThreadActions.Count > 0)
        {
            Action action = null;
            lock (mainThreadActions)
            {
                action = mainThreadActions.Dequeue();
            }
            action?.Invoke();
        }

        // Kiểm tra timeout session
        if (endAnswerTime > 0 && Time.time - endAnswerTime > SESSION_TIMEOUT)
        {
            ResetSession();
        }
    }

    private void EnqueueMainThreadAction(Action action)
    {
        lock (mainThreadActions)
        {
            mainThreadActions.Enqueue(action);
        }
    }

    private void OnAudioFinished()
    {
        Debug.Log("Audio finished playing!");
        myakuController.MyakuStopAnswer();
        audioSource.clip = null;
        Resources.UnloadUnusedAssets();
        endAnswerTime = Time.time; // Cập nhật thời gian kết thúc trả lời
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
        conversationId = Guid.NewGuid().ToString();
        endAnswerTime = 0;
    }

    private IEnumerator RecordQuestion()
    {
        // Kiểm tra và reset session nếu cần
        yield return StartCoroutine(ResetSessionIfNeeded());

        // Giai đoạn 1: Ghi âm câu hỏi
        bool recordingSuccess = false;
        yield return StartCoroutine(RecordAudioPhase((success) => recordingSuccess = success));

        if (!recordingSuccess)
        {
            Debug.Log("Ghi âm thất bại, kết thúc quy trình");
            UIManager.Instance.connectionTxt.text = "Tôi không nghe thấy câu hỏi, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        // Giai đoạn 2: Chuyển đổi âm thanh thành văn bản
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

        // Giai đoạn 3: Tạo câu trả lời
        string answer = null;
        yield return StartCoroutine(GenerateAnswerPhase(transcription, (ans) => answer = ans));

        if (string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Không nhận được câu trả lời");
            UIManager.Instance.connectionTxt.text = "Tôi không thể trả lời câu hỏi này, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        // Lưu câu hỏi và câu trả lời vào lịch sử
        lock (chatHistory)
        {
            chatHistory.Add((transcription, answer));
        }

        Debug.Log($"Câu trả lời: {answer}");
        UIManager.Instance.connectionTxt.text = answer;

        // Giai đoạn 4 & 5: Chuyển đổi văn bản thành giọng nói và phát âm thanh
        yield return StartCoroutine(TextToSpeechAndPlayPhase(answer));

        Debug.Log("Hoàn tất quy trình RecordQuestion");
    }

    // Giai đoạn 0: Kiểm tra và reset session nếu cần
    private IEnumerator ResetSessionIfNeeded()
    {
        if (endAnswerTime > 0 && Time.time - endAnswerTime > SESSION_TIMEOUT)
        {
            ResetSession();
        }
        yield return null;
    }

    // Giai đoạn 1: Ghi âm câu hỏi
    private IEnumerator RecordAudioPhase(Action<bool> onComplete)
    {
        Debug.Log("Bắt đầu ghi âm câu hỏi sau khi phát hiện wake word");

        float limitTimeRecord = PlayerPrefs.GetFloat("LimitTimeRecord", 10f);
        Debug.Log($"Thời gian giới hạn thu âm: {limitTimeRecord} giây");

        int sampleRate = 16000;
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        if (string.IsNullOrEmpty(device))
        {
            Debug.LogError("Không tìm thấy thiết bị microphone");
            onComplete?.Invoke(false);
            yield break;
        }

        questionClip = Microphone.Start(device, false, (int)limitTimeRecord, sampleRate);

        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool hasSoundDetected = false;
        float silenceThreshold = PlayerPrefs.GetFloat("AudibleThreshold", 0.35f);
        Debug.Log($"Ngưỡng âm lượng thu âm: {silenceThreshold}");

        yield return new WaitForSeconds(0.5f);

        while (Microphone.IsRecording(device))
        {
            float[] data = new float[256];
            int position = Microphone.GetPosition(device);
            if (position > 0)
            {
                questionClip.GetData(data, position - data.Length);
                float volume = CalculateVolume(data);
                audioLevel = volume;

                if (volume > silenceThreshold)
                {
                    hasSoundDetected = true;
                    lastSoundTime = Time.time;
                }

                float currentTime = Time.time;
                if (!hasSoundDetected && (currentTime - startTime > 5f))
                {
                    Debug.Log("Không phát hiện tiếng nói trong 5 giây, hủy ghi âm");
                    Microphone.End(device);
                    onComplete?.Invoke(false);
                    yield break;
                }

                if (hasSoundDetected && (currentTime - lastSoundTime > 2f))
                {
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
            onComplete?.Invoke(false);
            yield break;
        }

        Debug.Log("Kết thúc ghi âm, xử lý câu hỏi");
        UIManager.Instance.connectionTxt.text = "Đang xử lý câu hỏi của bạn...";
        myakuController.MyakuThinking();

        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
        WavUtility.Save(audioFilePath, questionClip);

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Không tìm thấy file audio: " + audioFilePath);
            onComplete?.Invoke(false);
            yield break;
        }

        Debug.Log($"Đã lưu file audio: {audioFilePath}");
        onComplete?.Invoke(true);
    }

    // Giai đoạn 2: Chuyển đổi âm thanh thành văn bản
    private IEnumerator TranscribeAudioPhase(Action<string> onComplete)
    {
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
        byte[] audioBytes = File.ReadAllBytes(audioFilePath);
        Debug.Log($"Đã đọc file audio: {audioFilePath}, kích thước: {audioBytes.Length} bytes");

        Debug.Log("Bắt đầu chuyển đổi audio thành văn bản");

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

    // Giai đoạn 3: Tạo câu trả lời
    private IEnumerator GenerateAnswerPhase(string transcription, Action<string> onComplete)
    {
        Debug.Log("Gửi câu hỏi và nhận câu trả lời");

        var messages = new List<object>
    {
        new { role = "system", content = "Bạn là chuyên gia nghiên cứu về Đông Nam Á và tổ chức ASEAN" },
        new { role = "system", content = "Trả lời người dùng ngắn gọn trong 1 đến 5 câu, mỗi câu dưới 16 từ. Đảm bảo ngữ điệu thân thiện và trả lời dễ hiểu." }
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
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonPayload);

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
                JObject json = JObject.Parse(response);
                string answer = json["choices"][0]["message"]["content"].Value<string>();
                Debug.Log($"Nhận câu trả lời thành công: {answer}");
                onComplete?.Invoke(answer);
            }
            else
            {
                Debug.LogError($"Lỗi API Chat: {request.error}, Response: {request.downloadHandler?.text}");
                onComplete?.Invoke(null);
            }
        }
    }

    // Giai đoạn 4 & 5: Chuyển đổi văn bản thành giọng nói và phát âm thanh
    private IEnumerator TextToSpeechAndPlayPhase(string answer)
    {
        // Ghi lại thời gian bắt đầu xử lý TTS
        float startTime = Time.realtimeSinceStartup;
        Debug.Log($"Bắt đầu xử lý Text-to-Speech tại: {startTime}");

        Debug.Log("Chuyển đổi câu trả lời thành giọng nói và phát liên tục");

        // Chia câu trả lời thành các câu
        List<string> sentences = streamBuffer.AddText(answer + " ");
        if (streamBuffer.GetCurrentBuffer().Length > 0)
    {
            sentences.Add(streamBuffer.GetCurrentBuffer());
            streamBuffer.ClearBuffer();
        }

        // Xử lý và phát audio liên tục
        List<Coroutine> ttsCoroutines = new List<Coroutine>();
        int completedTtsCount = 0;
        int currentPlayIndex = 0; 
        bool isFirstSentencePlayed = false;

        // Hàm xử lý TTS cho một câu
        IEnumerator ProcessTTSSentence(int index, string sentence)
        {
            if (string.IsNullOrWhiteSpace(sentence))
            {
                lock (audioClips)
                {
                    completedTtsCount++;
                    Debug.Log($"Câu {index} trắng, tăng completedTtsCount: {completedTtsCount}/{sentences.Count}");
                }
                yield break;
            }

            Debug.Log($"Chuyển đổi câu {index}: {sentence}");

            var settings = voiceSettings["default"];
            using (var client = new HttpClient())
            {
                client.DefaultRequestHeaders.Add("Authorization", $"Bearer {openAiApiKey}");
                client.Timeout = TimeSpan.FromSeconds(30);

                var ttsRequestData = new
                {
                    model = settings.model,
                    voice = settings.voice,
                    input = sentence,
                    response_format = "wav",
                    speed = 1.0f
                };

                var jsonContent = new StringContent(
                    JsonConvert.SerializeObject(ttsRequestData),
                    Encoding.UTF8,
                    "application/json"
                );

                Debug.Log($"Gửi request TTS cho câu {index}: {sentence}");
                var ttsTask = client.PostAsync("https://api.openai.com/v1/audio/speech", jsonContent);
                while (!ttsTask.IsCompleted)
                {
                    yield return null;
                }

                HttpResponseMessage ttsResponse;
                try
                {
                    if (ttsTask.IsFaulted)
                    {
                        throw ttsTask.Exception;
                    }
                    ttsResponse = ttsTask.Result;
                }
                catch (Exception e)
                {
                    Debug.LogError($"Lỗi khi gửi request TTS cho câu {index}: {e.Message}");
                    lock (audioClips)
                    {
                        completedTtsCount++;
                        Debug.Log($"Câu {index} lỗi, tăng completedTtsCount: {completedTtsCount}/{sentences.Count}");
                    }
                    yield break;
                }

                if (!ttsResponse.IsSuccessStatusCode)
                {
                    Debug.LogError($"Lỗi TTS API cho câu {index}: {ttsResponse.StatusCode}, {ttsResponse.ReasonPhrase}");
                    lock (audioClips)
                    {
                        completedTtsCount++;
                        Debug.Log($"Câu {index} lỗi, tăng completedTtsCount: {completedTtsCount}/{sentences.Count}");
                    }
                    yield break;
                }

                Debug.Log($"Nhận response TTS thành công cho câu {index}");
                var streamTask = ttsResponse.Content.ReadAsStreamAsync();
                while (!streamTask.IsCompleted)
                {
                    yield return null;
                }

                if (streamTask.IsFaulted)
                {
                    Debug.LogError($"Lỗi khi đọc stream cho câu {index}: {streamTask.Exception}");
                    lock (audioClips)
                    {
                        completedTtsCount++;
                        Debug.Log($"Câu {index} lỗi, tăng completedTtsCount: {completedTtsCount}/{sentences.Count}");
                    }
                    yield break;
                }

                var stream = streamTask.Result;
                MemoryStream memoryStream = new MemoryStream();
                byte[] buffer = new byte[4096];
                int bytesRead;
                while ((bytesRead = stream.Read(buffer, 0, buffer.Length)) > 0)
                {
                    memoryStream.Write(buffer, 0, bytesRead);
                    yield return null;
                }

                byte[] wavData = memoryStream.ToArray();
                int headerSize = 44;
                float[] audioFloatArray = new float[(wavData.Length - headerSize) / 2];
                for (int i = 0; i < audioFloatArray.Length; i++)
                {
                    short sample = BitConverter.ToInt16(wavData, headerSize + i * 2);
                    audioFloatArray[i] = sample / 32768f;
                }

                AudioClip audioClip = AudioClip.Create(
                    $"TTS_Sentence_{index}",
                    audioFloatArray.Length,
                    1,
                    SAMPLE_RATE,
                    false
                );
                audioClip.SetData(audioFloatArray, 0);

                lock (audioClips)
                {
                    audioClips.Add((index, audioClip));
                    completedTtsCount++;
                    Debug.Log($"Đã thêm AudioClip cho câu {index}. completedTtsCount: {completedTtsCount}/{sentences.Count}");
                }
            }
        }

        // Bắt đầu xử lý TTS cho tất cả các câu
        lock (audioClips)
        {
            audioClips.Clear();
        }
        for (int i = 0; i < sentences.Count; i++)
        {
            ttsCoroutines.Add(StartCoroutine(ProcessTTSSentence(i, sentences[i])));
        }

        // Phát audio liên tục theo thứ tự
        while (currentPlayIndex < sentences.Count)
        {
            AudioClip nextClip = null;
            lock (audioClips)
            {
                var clipItem = audioClips.FirstOrDefault(x => x.index == currentPlayIndex);
                if (clipItem.clip != null)
                {
                    nextClip = clipItem.clip;
                    audioClips.Remove(clipItem);
                }
            }

            if (nextClip != null && !audioSource.isPlaying)
            {
                Debug.Log($"Phát câu {currentPlayIndex}: {sentences[currentPlayIndex]}");
                myakuController.MyakuAnswer();
                audioSource.clip = nextClip;
                audioSource.Play();
                // Ghi lại thời gian khi phát câu đầu tiên
                if (currentPlayIndex == 0 && !isFirstSentencePlayed)
                {
                    float endTime = Time.realtimeSinceStartup;
                    float waitTime = endTime - startTime;
                    Debug.Log($"Thời gian chờ từ bắt đầu TTS đến phát câu đầu tiên: {waitTime:F2} giây");
                    isFirstSentencePlayed = true;
                }

                yield return new WaitUntil(() => !audioSource.isPlaying);
                Destroy(nextClip);
                currentPlayIndex++;
            }
            else
            {
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

        foreach (var coroutine in ttsCoroutines)
        {
            if (coroutine != null)
            {
                StopCoroutine(coroutine);
            }
        }

        Debug.Log("Hoàn tất phát tất cả câu, gọi MyakuStopAnswer");
        myakuController.MyakuStopAnswer();
        onAudioFinished.Invoke();
    }
    float CalculateVolume(float[] data)
    {
        float sum = 0f;
        foreach (float sample in data)
        {
            sum += sample * sample;
        }
        return Mathf.Sqrt(sum / data.Length);
    }

    public void StartAudioService()
    {
        StartCoroutine(RecordQuestion());
    }

    private IEnumerator StartRecordingAfterDelay()
    {
        yield return new WaitForSeconds(0.5f);
        Debug.Log("Starting to record question after delay");
        StartCoroutine(RecordQuestion());
    }

    public void OnAppOpened(string openReason)
    {
        Debug.Log("Ứng dụng được mở với lý do: " + openReason);
        if (openReason == "wake_word")
        {
            Debug.Log("Ứng dụng tự động mở do phát hiện wake word");
            StartCoroutine(StartRecordingAfterDelay());
            myakuController.MyakuListen();
        }
        else if (openReason == "user")
        {
            Debug.Log("Ứng dụng được người dùng mở từ launcher");
        }
    }

    public void OnWakeWordDetected()
    {
        Debug.Log("Ứng dụng tự động mở do phát hiện wake word khi ở foreground");
        StartCoroutine(StartRecordingAfterDelay());
        myakuController.MyakuListen();
    }

    private void OnApplicationQuit()
    {
    }

    public void StartRecording()
    {
        if (isEnableMic == false)
        {
            if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
            {
                // Nếu chưa cấp quyền, yêu cầu cấp quyền
                UIManager.Instance.connectionTxt.text = "chưa cấp quyền sử dụng micro device";
                Debug.Log("chưa cấp quyền sử dụng micro device");
                Permission.RequestUserPermission(Permission.Microphone);
                return;
            }
            else
            {
                isEnableMic = true; 
            }
        }

        isEnableRecieveAudioChunkMessage = false;

        UIManager.Instance.recordingIndicator.gameObject.SetActive(true);
        UIManager.Instance.connectionTxt.text = "";

        myakuController.MyakuListen();
        StopAllCoroutines();

        if (audioSource.isPlaying)
        {
            audioSource.Stop();
            endAnswerTime = Time.time;
        }
        audioSource.clip = null;
        Resources.UnloadUnusedAssets();

        mainThreadActions.Clear();

        audioDataBuffer.Clear();
        // Tùy chọn, giải phóng bộ nhớ nếu cần
        while (audioBuffersQueue.Count > 0)
        {
            var buffer = audioBuffersQueue.Dequeue();
            buffer.Clear(); // Xóa dữ liệu trong list (nếu cần)
        }
        audioBuffersQueue.Clear(); // Xóa tất cả các phần tử trong queue  
        responseTxt.text = "";


        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : ""; 
        if (device != "")
        {
            int sampleRate = 44100;
            int lengthSec = 45; // ghi âm tối đa 45s
            recordedClip = Microphone.Start(device, false, lengthSec, sampleRate);
            startTime = Time.realtimeSinceStartup;
        }
        else
        {
            Debug.LogError("No microphone device found!");
        }
    }

    public void StopRecording()
    {
        if (!isEnableMic) return;

        UIManager.Instance.connectionTxt.text = "Let me think about the answer for a moment!";
        UIManager.Instance.recordingIndicator.gameObject.SetActive(false);
        Microphone.End(null);
        recordingLength = Time.realtimeSinceStartup - startTime;

        if (recordedClip != null)
        {
            recordedClip = TrimClip(recordedClip, recordingLength);

            //byte[] audioBytes = ConvertAudioClipToByteArray(recordedClip); 
            string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
            WavUtility.Save(audioFilePath, recordedClip);
            myakuController.MyakuThinking();
            // Bắt đầu xử lý các giai đoạn: chuyển đổi âm thanh, tạo câu trả lời, và phát âm thanh
            StartCoroutine(ProcessAudioResponse(audioFilePath));
        }
        else
        {
            UIManager.Instance.connectionTxt.text = "Device cannot record, please check device status";
            myakuController.MyakuHello();
        }
    }
    // Coroutine xử lý các giai đoạn sau khi ghi âm
    private IEnumerator ProcessAudioResponse(string audioFilePath)
    {
        // Giai đoạn 2: Chuyển đổi âm thanh thành văn bản
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

        // Giai đoạn 3: Tạo câu trả lời
        string answer = null;
        yield return StartCoroutine(GenerateAnswerPhase(transcription, (ans) => answer = ans));

        if (string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Không nhận được câu trả lời");
            UIManager.Instance.connectionTxt.text = "Tôi không thể trả lời câu hỏi này, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        // Lưu câu hỏi và câu trả lời vào lịch sử
        lock (chatHistory)
        {
            chatHistory.Add((transcription, answer));
        }

        Debug.Log($"Câu trả lời: {answer}");
        UIManager.Instance.connectionTxt.text = answer;

        // Giai đoạn 4 & 5: Chuyển đổi văn bản thành giọng nói và phát âm thanh
        yield return StartCoroutine(TextToSpeechAndPlayPhase(answer));

        Debug.Log("Hoàn tất xử lý âm thanh và trả lời");
    }
    private AudioClip TrimClip(AudioClip clip, float length)
    {
        int samples = (int)(clip.frequency * length);
        float[] data = new float[samples];
        clip.GetData(data, 0);

        AudioClip trimmedClip = AudioClip.Create(clip.name, samples,
            clip.channels, clip.frequency, false);
        trimmedClip.SetData(data, 0);

        return trimmedClip;
    } 

}