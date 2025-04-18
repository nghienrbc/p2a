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

public class RecordAudio : MonoBehaviour
{
    public TMP_Text transcriptTxt;
    public TMP_Text responseTxt;
    public MyakuController myakuController;

    private string webSocketUrl = "ws://157.10.52.193:8000/ws/audio-chat/186462d7-3150-4b47-93e8-a349db63b307/null/f836ce6c-5910-47b7-8931-d3a11b65c8e5"; // URL web socket  
                                                                                                                                                    
    private string conversationId = "";
    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource;
    private float startTime;
    private float recordingLength;

    public UnityEvent onAudioFinished; // Sự kiện khi audio kết thúc 

    private float beginQuestionTime;
    private float endAnswerTime;
    private Coroutine audioCoroutine; // Để lưu coroutine 

    private List<byte> audioDataBuffer = new List<byte>(); // Buffer để lưu các chunk audio 
    private Queue<List<byte>> audioBuffersQueue = new Queue<List<byte>>(); // Hàng đợi chứa các buffer của từng response

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

    // Ping interval để duy trì kết nối
    private float pingInterval = 10f; // Gửi PING mỗi 10 giây
    private float lastPingTime = 0f;
    public bool isWakeWordDetected = false;
    public bool isSpeaking = false;
    public string status = "Initializing...";
    public float audioLevel = 0f;
    public bool isConnected = false;
    public string transcript = "";
    public string response = "";

    // Thêm biến để theo dõi stream audio
    private Queue<AudioClip> audioClipQueue = new Queue<AudioClip>();
    private bool isPlayingStreamAudio = false;
    private const int CHUNK_SIZE = 8192; // Tăng kích thước chunk để giảm số lần xử lý
    private const int SAMPLE_RATE = 24000; // Đảm bảo sample rate nhất quán
    private List<byte> audioBuffer = new List<byte>(); // Buffer tạm để tích lũy WAV header
    private bool isFirstChunk = true;

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

    // Class để deserialize JSON
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

        // Đọc file Config.json từ thư mục Resources
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
        // Yêu cầu quyền microphone
        if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
        {
            Permission.RequestUserPermission(Permission.Microphone);
        }
        // Yêu cầu quyền POST_NOTIFICATIONS (Android 13+)
        if (!Permission.HasUserAuthorizedPermission("android.permission.POST_NOTIFICATIONS"))
        {
            Permission.RequestUserPermission("android.permission.POST_NOTIFICATIONS");
        }

        // Khởi tạo plugin Android 

        using (AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            AndroidJavaObject activity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            audioPlugin = new AndroidJavaObject("com.unity3d.player.BackgroundAudioPlugin", activity);
        }
        // Bắt đầu thu âm liên tục

        Debug.Log("AudioPlugin: " + (audioPlugin != null ? "Not null" : "Null"));
        if (audioPlugin != null)
        {
            // Bắt đầu thu âm qua plugin Java
            audioPlugin.Call("startRecordingFromUnity");
        }
#endif
        onAudioFinished.AddListener(OnAudioFinished);
        conversationId = Guid.NewGuid().ToString();

        //for (int i = 0; i < Microphone.devices.Length; i++)
        //{
        //    Debug.Log("micro device " + i + ": " + Microphone.devices[i]);
        //    UIManager.Instance.connectionTxt.text = UIManager.Instance.connectionTxt.text + "micro device " + i + ": " + Microphone.devices[i] + "\n";
        //}
    } 

    private void Update()
    {  
        // Process all actions in the queue on the main thread
        while (mainThreadActions.Count > 0)
        {
            Action action = null;

            lock (mainThreadActions)
            {
                action = mainThreadActions.Dequeue();
            }

            action?.Invoke();
        }
    } 
     
    // Enqueue action to execute on the main thread
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
        //UIManager.Instance.connectionTxt.text = "Tap the record button on the screen or press the button on Myaku to ask me some question.";
        myakuController.MyakuStopAnswer();
        audioSource.clip = null;
        Resources.UnloadUnusedAssets();
    }

    // Tạo và quản lý quy trình xử lý âm thanh hoàn chỉnh
    IEnumerator RecordQuestion()
    {
        Debug.Log("Bắt đầu ghi âm câu hỏi sau khi phát hiện wake word"); 

        // Khởi tạo ghi âm
        int sampleRate = 16000;
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        questionClip = Microphone.Start(device, false, 30, sampleRate);

        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool hasSoundDetected = false;
        float silenceThreshold = 0.05f; // Ngưỡng để xác định im lặng
        
        // Đợi 0.5s để tránh nhiễu ban đầu
        yield return new WaitForSeconds(0.5f);

        // Vòng lặp kiểm tra âm thanh
        while (Microphone.IsRecording(null))
        {
            float[] data = new float[256];
            int position = Microphone.GetPosition(null);
            if (position > 0)
            {
                questionClip.GetData(data, position - data.Length);
                float volume = CalculateVolume(data);
                audioLevel = volume; // Cập nhật mức âm thanh cho UI

                // Phát hiện âm thanh
                if (volume > silenceThreshold)
                {
                    hasSoundDetected = true;
                    lastSoundTime = Time.time;
                }

                float currentTime = Time.time;
                
                // Chưa phát hiện âm thanh sau 5s
                if (!hasSoundDetected && (currentTime - startTime > 5f))
                {
                    Debug.Log("Không phát hiện tiếng nói trong 5s, hủy ghi âm");
                    Microphone.End(null);
                    UIManager.Instance.connectionTxt.text = "Tôi không nghe thấy câu hỏi, vui lòng thử lại";
                    myakuController.MyakuHello();
                    yield break;
                }

                // Đã phát hiện âm thanh và im lặng 2s
                if (hasSoundDetected && (currentTime - lastSoundTime > 2f))
                {
                    Debug.Log("Phát hiện im lặng 2s sau khi có tiếng nói, kết thúc ghi âm");
                    break;
                }
            }
            yield return null;
        }

        // Dừng ghi âm và xử lý
        Microphone.End(null);

        if (!hasSoundDetected || questionClip == null)
        {
            Debug.Log("Không phát hiện tiếng nói, hủy xử lý");
            UIManager.Instance.connectionTxt.text = "Tôi không nghe thấy câu hỏi, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        // Xử lý câu hỏi
        Debug.Log("Kết thúc ghi âm, xử lý câu hỏi");
        UIManager.Instance.connectionTxt.text = "Đang xử lý câu hỏi của bạn...";
        myakuController.MyakuThinking();
        
        // Lưu audio và chuyển đổi sang file WAV
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
        WavUtility.Save(audioFilePath, questionClip);

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Không tìm thấy file audio: " + audioFilePath);
            UIManager.Instance.connectionTxt.text = "Có lỗi xảy ra, không thể xử lý âm thanh";
            myakuController.MyakuHello();
            yield break;
        }

        byte[] audioBytes = File.ReadAllBytes(audioFilePath);
        Debug.Log($"Đã lưu file audio: {audioFilePath}, kích thước: {audioBytes.Length} bytes");

        // Bước 1: Chuyển đổi audio thành văn bản
        Debug.Log("Bắt đầu chuyển đổi audio thành văn bản");
        string transcription = null;

        // Gọi API Whisper
        WWWForm form = new WWWForm();
        form.AddBinaryData("file", audioBytes, "audio.wav", "audio/wav");
        form.AddField("model", "whisper-large-v3");
        form.AddField("temperature", 0);
        form.AddField("response_format", "verbose_json");

        using (UnityWebRequest request = UnityWebRequest.Post("https://api.groq.com/openai/v1/audio/transcriptions", form))
        {
            request.SetRequestHeader("Authorization", $"Bearer {groqKey}");
            request.timeout = 30; // 30 giây timeout

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string response = request.downloadHandler.text;
                JObject json = JObject.Parse(response);
                transcription = json["text"].Value<string>();
                Debug.Log($"Chuyển đổi giọng nói thành văn bản thành công: {transcription}");
            }
            else
            {
                Debug.LogError($"Lỗi API Whisper: {request.error}, Response: {request.downloadHandler?.text}");
                UIManager.Instance.connectionTxt.text = "Không thể nhận dạng câu hỏi, vui lòng thử lại";
                myakuController.MyakuHello();
                yield break;
            }
        }

        if (string.IsNullOrEmpty(transcription))
        {
            Debug.LogError("Không thể chuyển đổi giọng nói thành văn bản");
            UIManager.Instance.connectionTxt.text = "Không thể nhận dạng câu hỏi, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        Debug.Log($"Văn bản nhận dạng được: {transcription}");
        UIManager.Instance.connectionTxt.text = transcription;

        // Bước 2: Gửi câu hỏi và nhận câu trả lời
        Debug.Log("Gửi câu hỏi và nhận câu trả lời");
        string answer = null;

        var payload = new
        {
            model = "gpt-4o",
            messages = new[]
            {
                new { role= "system", content = "Bạn là chuyên gia nghiên cứu về Đông Nam Á và tổ chức ASEAN"},
                new { role= "system", content = "Trả lời người dùng ngắn gọn 1-2 câu. Đảm bảo ngữ điệu thân thiện và trả lời dễ hiểu."},
                new { role = "user", content = transcription }
            },
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
            request.timeout = 30; // 30 giây timeout

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string response = request.downloadHandler.text;
                JObject json = JObject.Parse(response);
                answer = json["choices"][0]["message"]["content"].Value<string>();
                Debug.Log($"Nhận câu trả lời thành công: {answer}");
            }
            else
            {
                Debug.LogError($"Lỗi API Chat: {request.error}, Response: {request.downloadHandler?.text}");
                UIManager.Instance.connectionTxt.text = "Tôi không thể trả lời câu hỏi này, vui lòng thử lại";
                myakuController.MyakuHello();
                yield break;
            }
        }

        if (string.IsNullOrEmpty(answer))
        {
            Debug.LogError("Không nhận được câu trả lời");
            UIManager.Instance.connectionTxt.text = "Tôi không thể trả lời câu hỏi này, vui lòng thử lại";
            myakuController.MyakuHello();
            yield break;
        }

        Debug.Log($"Câu trả lời: {answer}");
        UIManager.Instance.connectionTxt.text = answer;

        // Bước 3: Chuyển đổi câu trả lời thành giọng nói và phát
        Debug.Log("Chuyển đổi câu trả lời thành giọng nói");
        
        // Xóa queue audio cũ
        lock (audioClipQueue)
        {
            while (audioClipQueue.Count > 0)
            {
                var clip = audioClipQueue.Dequeue();
                Destroy(clip);
            }
        }


        // Gọi API TextToSpeech
        var settings = voiceSettings["default"];
        using (var client = new HttpClient())
        {
            client.DefaultRequestHeaders.Add("Authorization", $"Bearer {openAiApiKey}");
            client.Timeout = TimeSpan.FromSeconds(30);

            var ttsRequestData = new
            {
                model = settings.model,
                voice = settings.voice,
                input = answer,
                response_format = "wav",
                speed = 1.0f
            };

            var jsonContent = new StringContent(
                JsonConvert.SerializeObject(ttsRequestData), 
                Encoding.UTF8, 
                "application/json"
            );

            Debug.Log("Gửi request TTS");
            HttpResponseMessage ttsResponse = null;
            
            // Tạo task bên ngoài try-catch
            var ttsTask = client.PostAsync("https://api.openai.com/v1/audio/speech", jsonContent);
            
            // Đợi task hoàn thành (bên ngoài try-catch)
            while (!ttsTask.IsCompleted)
            {
                yield return null;
            }
            
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
                Debug.LogError($"Lỗi khi gửi request TTS: {e.Message}");
                myakuController.MyakuHello();
                yield break;
            }

            if (!ttsResponse.IsSuccessStatusCode)
            {
                Debug.LogError($"Lỗi TTS API: {ttsResponse.StatusCode}, {ttsResponse.ReasonPhrase}");
                myakuController.MyakuHello();
                yield break;
            }

            Debug.Log("Nhận response TTS thành công");
            
            // Đọc stream
            var streamTask = ttsResponse.Content.ReadAsStreamAsync();
            while (!streamTask.IsCompleted)
            {
                yield return null;
            }
            
            if (streamTask.IsFaulted)
            {
                Debug.LogError($"Lỗi khi đọc stream: {streamTask.Exception}");
                myakuController.MyakuHello();
                yield break;
            }
            
            var stream = streamTask.Result;
            MemoryStream memoryStream = new MemoryStream();
            
            // Copy stream vào memory stream
            byte[] buffer = new byte[4096];
            int bytesRead;
            while ((bytesRead = stream.Read(buffer, 0, buffer.Length)) > 0)
            {
                memoryStream.Write(buffer, 0, bytesRead);
                yield return null; // Cho phép Unity tiếp tục chạy các frame
            }
            
            byte[] wavData = memoryStream.ToArray();

            // Chuyển đổi WAV data thành AudioClip
            int headerSize = 44; // WAV header size
            float[] audioFloatArray = new float[(wavData.Length - headerSize) / 2];
            for (int i = 0; i < audioFloatArray.Length; i++)
            {
                short sample = BitConverter.ToInt16(wavData, headerSize + i * 2);
                audioFloatArray[i] = sample / 32768f;
            }

            // Tạo AudioClip
            AudioClip audioClip = AudioClip.Create(
                "TTS_Response", 
                audioFloatArray.Length,
                1, // mono
                SAMPLE_RATE,
                false
            );
            audioClip.SetData(audioFloatArray, 0);


            // Chuẩn bị giao diện
            myakuController.MyakuAnswer();

            // Phát audio
            audioSource.clip = audioClip;
            audioSource.Play();

            // Đợi cho audio phát xong
            while (audioSource.isPlaying)
            {
                yield return null;
            }

            // Dọn dẹp
            Destroy(audioClip);
            myakuController.MyakuStopAnswer();
            onAudioFinished.Invoke();
        }
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
        // Đợi để ứng dụng có thời gian mở lên
        yield return new WaitForSeconds(0.5f);
        Debug.Log("Starting to record question after delay");
        StartCoroutine(RecordQuestion());
    }

    // Nhận thông báo từ Java khi ứng dụng được mở
    public void OnAppOpened(string openReason)
    {
        Debug.Log("Ứng dụng được mở với lý do: " + openReason);
        if (openReason == "wake_word")
        {
            // Xử lý khi ứng dụng mở do wake word
            Debug.Log("Ứng dụng tự động mở do phát hiện wake word");
            // Ví dụ: Chuyển sang màn hình đặc biệt hoặc phát âm thanh
            StartCoroutine(StartRecordingAfterDelay());
            myakuController.MyakuListen();
        }
        else if (openReason == "user")
        {
            // Xử lý khi người dùng mở lần đầu
            Debug.Log("Ứng dụng được người dùng mở từ launcher");
            // Ví dụ: Hiển thị màn hình chính
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
}