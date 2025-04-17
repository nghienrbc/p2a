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
                                                                                                                                                          //private string webSocketUrl = "ws://157.10.52.193:8000/ws/audio-chat/05f92190-303a-4e27-b0aa-a0bbfc0309bb/null/0c77c804-4ef5-48b8-98f4-68d3fa77bf63"; // URL web socket  

    private string conversationId = "";
    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource;
    private float startTime;
    private float recordingLength;

    public UnityEvent onAudioFinished; // Sự kiện khi audio kết thúc 

    private float beginQuestionTime;
    private float endAnswerTime;
    private Coroutine audioCoroutine; // Để lưu coroutine 

    private WebSocket ws;
    //private WebSocket webSocket;
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
            Debug.Log("API Key loaded: " + openAiApiKey);
            Debug.Log("groq Key loaded: " + groqKey);
        }
        else
        {
            Debug.LogError("Không tìm thấy file Config.json trong Resources!");
        }

    }

    private void Start()
    {
        //ConnectWebSocket();
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

        for (int i = 0; i < Microphone.devices.Length; i++)
        {
            Debug.Log("micro device " + i + ": " + Microphone.devices[i]);
            UIManager.Instance.connectionTxt.text = UIManager.Instance.connectionTxt.text + "micro device " + i + ": " + Microphone.devices[i] + "\n";
        }
    }

    private async void ConnectWebSocket()
    {
        if (ws != null)
        {
            await ws.Close();
        }
        await Task.Delay(2000); // Đợi 2 giây trước khi reconnect
        WebSocketHandler(webSocketUrl);
    }

    // Kết nối WebSocket
    public async void WebSocketHandler(string url)
    {
        ws = new WebSocket(url);

        ws.OnOpen += () =>
        {
            isWebSocketOpen = true;
            Debug.Log("WebSocket Connected!");
            status = "Listening for wake word 123...";
            UpdateUI();

        };

        ws.OnError += (e) =>
        {
            Debug.LogError("WebSocket Error: " + e);
        };

        ws.OnClose += (e) =>
        {
            isWebSocketOpen = false;
            Debug.Log("WebSocket Closed!");
        };


        ws.OnMessage += (bytes) =>
        {
            string message = System.Text.Encoding.UTF8.GetString(bytes);
            Debug.Log("Message nhận được từ ws: " + message);
            HandleWebSocketMessage(message);
        };

        // Keep trying to connect
        while (true)
        {
            try
            {
                await ws.Connect();
                break;
            }
            catch (Exception e)
            {
                Debug.LogError("WebSocket connection failed: " + e.Message);
                await Task.Delay(1000); // Delay 1 second before retrying
            }
        }
    }

    public async void SendMessageToServer(string message)
    {
        if (ws != null && ws.State == WebSocketState.Open)
        {
            await ws.SendText(message);
            Debug.Log("Sent to server: " + message);
            myakuController.MyakuThinking();
        }
        else
        {
            Debug.LogWarning("WebSocket is not connected.");
        }
    }

    public async void OpenConnection()
    {
        if (ws.State != WebSocketState.Open)
        {
            Debug.Log("Connecting to WebSocket...");
            await ws.Connect();
        }
    }

    public async void CloseConnection()
    {
        if (ws.State == WebSocketState.Open)
        {
            Debug.Log("Closing WebSocket...");
            await ws.Close();
        }
    }

    public async void ResetWebSocketConnection()
    {
        await ws.Close();
        await Task.Delay(50); // 50ms delay
        await ws.Connect();
    }

    private void OnApplicationQuit()
    {
        CloseConnection();
    }

    private void Update()
    {
        // Gửi PING định kỳ để duy trì kết nối
        //if (Time.time - lastPingTime >= pingInterval)
        //{
        //    SendPing();
        //    lastPingTime = Time.time;
        //}

#if !UNITY_WEBGL || UNITY_EDITOR
        if (ws != null)
        {
            ws.DispatchMessageQueue();
        }
#endif

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
    private void SendPing()
    {
        if (ws != null && ws.State == WebSocketState.Open)
        {
            ws.SendText("{\"type\":\"ping\"}");
        }
    }

    // Xử lý dữ liệu trả về từ WebSocket
    /*private void HandleWebSocketResponse(string response)
    {
        try
        {
            JObject jsonResponse = JObject.Parse(response);
            if (jsonResponse["type"] != null)
            {
                string responseType = jsonResponse["type"].ToString();
                //if (responseType != "audio_chunk" && responseType != "text_response")
                //{
                //    Debug.Log("Received message text:" + jsonResponse);
                //}

                // Kiểm tra type có phải là "text_response" không

                if (responseType == "error")
                {
                    string content = jsonResponse["message"].ToString();  // Lấy nội dung của "text" 
                    Debug.LogError("Received error: " + content);

                    EnqueueMainThreadAction(() => HandleAudioError());
                }
                else if (responseType == "transcript")
                {
                    isEnableRecieveAudioChunkMessage = true;
                    EnqueueMainThreadAction(() =>
                    {
                        UIManager.Instance.ShowHideTestPanel(true);
                        transcriptTxt.text = jsonResponse["text"].ToString();
                    });
                    Debug.Log("Received transcript text: " + jsonResponse["text"].ToString() + " with language: " + jsonResponse["language"].ToString());
                }
                else if (responseType == "text_response")
                {
                    if (!isEnableRecieveAudioChunkMessage) return;
                    string content = jsonResponse["text"].ToString();  // Lấy nội dung của "text"
                    EnqueueMainThreadAction(() =>
                    {
                        UIManager.Instance.ShowHideTestPanel(true);
                        responseTxt.text = responseTxt.text + "..." + content + "\n";
                    });

                    Debug.Log("Received text_response: " + content);
                    // nếu đã có chunk trong buffer, tức là đây không phải text_response đầu tiên
                    // tiến hành lưu toàn bộ buffer vào list buffer và gọi hàm play
                    if (audioDataBuffer.Count > 0)
                    {
                        var bufferCopy = new List<byte>(audioDataBuffer);
                        audioBuffersQueue.Enqueue(bufferCopy);
                        Debug.Log("add to queue");
                        audioDataBuffer.Clear();
                        EnqueueMainThreadAction(() => HandlePlayAudio());
                    }
                }
                else if (responseType == "audio_chunk")
                {
                    if (!isEnableRecieveAudioChunkMessage) return;
                    string content = jsonResponse["audio"].ToString();  // Lấy nội dung của "audio"  
                    byte[] audioBytes = Convert.FromBase64String(content); // Chuyển base64 thành byte[]
                    Debug.Log("Received audio_chunk");
                    audioDataBuffer.AddRange(audioBytes);
                }
                // Nếu nhận được type "audio_complete", kết thúc việc phát âm thanh
                else if (responseType == "audio_complete")
                {
                    if (!isEnableRecieveAudioChunkMessage) return;
                    isEnableRecieveAudioChunkMessage = false;
                    Debug.Log("Audio streaming complete.");
                    if (audioDataBuffer.Count > 0)
                    {
                        var bufferCopy = new List<byte>(audioDataBuffer);
                        audioBuffersQueue.Enqueue(bufferCopy);
                        Debug.Log("add to queue final");
                        audioDataBuffer.Clear();
                        EnqueueMainThreadAction(() => StartCoroutine(WaitForAudioToFinish()));
                    }
                    else
                    {
                        EnqueueMainThreadAction(() =>
                            {
                                UIManager.Instance.connectionTxt.text = "Cannot Answer. Tap the record button on the screen or press the button on Myaku to ask me some question.";
                                myakuController.animator.SetBool("answer", false);
                            }
                        );   
                    }
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error processing WebSocket response: " + e.Message);
        }
    }*/

    private async void HandleWebSocketResponse1(string response)
    {
        try
        {
            JObject jsonResponse = JObject.Parse(response);
            if (jsonResponse["type"] != null)
            {
                string responseType = jsonResponse["type"].ToString();


                if (responseType == "error")
                {
                    string content = jsonResponse["message"].ToString();  // Lấy nội dung của "text" 
                    Debug.LogError("Received error: " + content);

                    EnqueueMainThreadAction(() => HandleAudioError());
                }
                else if (responseType == "transcript")
                {
                    isEnableRecieveAudioChunkMessage = true;
                    EnqueueMainThreadAction(() =>
                    {
                        UIManager.Instance.ShowHideTestPanel(true);
                        transcriptTxt.text = jsonResponse["text"].ToString();
                    });
                    Debug.Log("Received transcript text: " + jsonResponse["text"].ToString() + " with language: " + jsonResponse["language"].ToString());
                }
                else if (responseType == "text_response")
                {
                    if (!isEnableRecieveAudioChunkMessage) return;
                    string content = jsonResponse["text"].ToString();  // Lấy nội dung của "text"
                    EnqueueMainThreadAction(() =>
                    {
                        UIManager.Instance.ShowHideTestPanel(true);
                        responseTxt.text = responseTxt.text + "..." + content + "\n";
                    });

                    Debug.Log("Received text_response: " + content);
                    processingQueue.Enqueue(content);
                }

                // Nếu nhận được type "audio_complete", kết thúc việc phát âm thanh
                else if (responseType == "audio_complete")
                {
                    if (!isEnableRecieveAudioChunkMessage) return;
                    isEnableRecieveAudioChunkMessage = false;
                    Debug.Log("Audio streaming complete.");
                    isProcessing = true;
                    // gọi xữ lý gửi tts
                    await ProcessQueue();
                }
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error processing WebSocket response: " + e.Message);
        }
    }

    private void HandlePlayAudio()
    {
        // nếu đang không chạy audio
        if (!audioSource.isPlaying)
        {
            StartCoroutine(PlayCurrentAudio());
        }
    }
    private void HandleAudioError()
    {
        UIManager.Instance.connectionTxt.text = "I didn't hear your question, please ask again.";
        myakuController.MyakuHello();
        audioSource.clip = null;
        Resources.UnloadUnusedAssets();
    }
    private IEnumerator PlayCurrentAudio()
    {
        // Sau khi phát xong, dọn dẹp buffer và bắt đầu kiểm tra xem có âm thanh nào tiếp theo
        yield return new WaitUntil(() => !audioSource.isPlaying);
        // Nếu có âm thanh khác trong queue, phát tiếp
        if (audioBuffersQueue.Count > 0)
        {
            myakuController.MyakuAnswer();
            var nextBuffer = audioBuffersQueue.Dequeue();
            Debug.Log("dequeue");
            byte[] nextAudioBytes = nextBuffer.ToArray();
            AudioClip nextAudioClip = CreateAudioClipFromBytes(nextAudioBytes);
            audioSource.clip = nextAudioClip;
            audioSource.Play();
            isPlayingAudio = true;
        }
    }

    private IEnumerator PlayRemainAudioInQueue()
    {
        yield return new WaitUntil(() => !audioSource.isPlaying);
        if (audioBuffersQueue.Count > 0)
        {
            // Tính toán tổng kích thước của tất cả các buffer trong queue
            int totalLength = 0;
            foreach (var buffer in audioBuffersQueue)
            {
                totalLength += buffer.Count;
            }

            // Tạo một mảng byte đủ lớn để chứa tất cả dữ liệu âm thanh
            byte[] allAudioBytes = new byte[totalLength];
            int currentIndex = 0;

            // Dequeue và gộp tất cả các buffer vào mảng allAudioBytes
            while (audioBuffersQueue.Count > 0)
            {
                var nextBuffer = audioBuffersQueue.Dequeue();
                //Debug.Log("Dequeueing buffer, size: " + nextBuffer.Count);

                // Kiểm tra và đảm bảo mảng allAudioBytes có đủ dung lượng
                if (currentIndex + nextBuffer.Count > allAudioBytes.Length)
                {
                    // Tăng kích thước của mảng nếu cần thiết
                    int newLength = currentIndex + nextBuffer.Count;
                    Array.Resize(ref allAudioBytes, newLength);
                    //Debug.Log("Resized allAudioBytes to: " + newLength);
                }

                // Sao chép dữ liệu từ buffer vào mảng allAudioBytes
                nextBuffer.CopyTo(0, allAudioBytes, currentIndex, nextBuffer.Count);
                currentIndex += nextBuffer.Count;
            }

            // Tạo AudioClip từ mảng byte đã gộp lại
            AudioClip nextAudioClip = CreateAudioClipFromBytes(allAudioBytes);
            audioSource.clip = nextAudioClip;
            audioSource.Play();
            isPlayingAudio = true;


            // Dừng các coroutine trước đó nếu có
            if (audioCoroutine != null)
            {
                StopCoroutine(audioCoroutine);
            }
            audioCoroutine = StartCoroutine(CheckAudioFinished());
        }
    }

    // Hàm chờ cho đến khi audioSource không còn play
    private IEnumerator WaitForAudioToFinish()
    {
        // Chờ cho đến khi audioSource không còn chơi
        while (audioSource.isPlaying)
        {
            yield return null; // Đợi một frame
        }
        // Sau khi audioSource không còn chơi, gọi EnqueueMainThreadAction

        StartCoroutine(PlayRemainAudioInQueue());
    }

    // Tạo và phát AudioClip từ buffer dữ liệu audio
    private IEnumerator PlayAudio()
    {
        if (audioDataBuffer.Count > 0)
        {
            byte[] audioBytes = audioDataBuffer.ToArray();

            // Tạo AudioClip từ mảng byte
            AudioClip audioClip = CreateAudioClipFromBytes(audioBytes);

            if (audioClip != null)
            {
                audioSource.clip = audioClip;
                audioSource.Play();
            }
            else
            {
                Debug.LogError("Failed to create AudioClip from audio data.");
            }

            // Sau khi phát, làm sạch buffer (hoặc tiếp tục nhận thêm dữ liệu âm thanh)
            audioDataBuffer.Clear();
            isBeginPlay = false;
        }
        yield return null;
    }

    // Tạo AudioClip từ mảng byte
    private AudioClip CreateAudioClipFromBytes(byte[] audioData)
    {
        try
        {
            float[] audioFloatArray = ConvertByteArrayToFloatArray(audioData);
            AudioClip audioClip = AudioClip.Create("WebSocketAudio", audioFloatArray.Length, 1, 24000, false);
            audioClip.SetData(audioFloatArray, 0);
            return audioClip;
        }
        catch (Exception e)
        {
            Debug.LogError("Failed to create AudioClip: " + e.Message);
            return null;
        }
    }

    // Chuyển đổi byte[] thành float[] để tạo AudioClip (chỉ áp dụng cho PCM audio)
    private float[] ConvertByteArrayToFloatArray(byte[] byteArray)
    {
        float[] floatArray = new float[byteArray.Length / 2]; // PCM 16-bit mono
        for (int i = 0; i < floatArray.Length; i++)
        {
            short sample = BitConverter.ToInt16(byteArray, i * 2);
            floatArray[i] = sample / 32768f; // Chuyển đổi từ 16-bit PCM sang giá trị float (-1.0f đến 1.0f)
        }
        return floatArray;
    }

    // Enqueue action to execute on the main thread
    private void EnqueueMainThreadAction(Action action)
    {
        lock (mainThreadActions)
        {
            mainThreadActions.Enqueue(action);
        }
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
                //for (int i = 0; i < Microphone.devices.Length; i++)
                //{
                //    Debug.Log("micro device " + i + ": " + Microphone.devices[i]);
                //    UIManager.Instance.connectionTxt.text = UIManager.Instance.connectionTxt.text + "micro device " + i + ": " + Microphone.devices[i] + "\n";
                //}
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
        //ResetWebSocketConnection();
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
            string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");
            WavUtility.Save(audioFilePath, recordedClip);


            if (!File.Exists(audioFilePath))
            {
                Debug.LogError("Audio file not found at path: " + audioFilePath);
                return;
            }
            //Lấy file audio đã ghi âm từ RecordAudio
            byte[] audioBytes = File.ReadAllBytes(audioFilePath);
            string base64Audio = Convert.ToBase64String(audioBytes);

            string filePath = Path.Combine(Application.persistentDataPath, "audioBase64.txt");
            // Lưu chuỗi Base64 vào file text
            File.WriteAllText(filePath, base64Audio);

            beginQuestionTime = Time.time;
            float timeDifference = beginQuestionTime - endAnswerTime;

            if (timeDifference > 15f)
            {
                Debug.Log("Đã quá thời gian cho một conversation");
                conversationId = Guid.NewGuid().ToString(); // Random conversation_id
            }

            //ResetWebSocketConnection();

            string jsonMessage = CreateJsonMessage(conversationId, base64Audio);
            SendMessageToServer(jsonMessage);
            Debug.Log("Đã send message: " + jsonMessage);
        }
        else
        {
            UIManager.Instance.connectionTxt.text = "Device cannot record, please check device status";
            myakuController.MyakuHello();
        }
    }

    // Tạo JSON message
    private string CreateJsonMessage(string conversationId, string base64Audio)
    {
        return $"{{\"conversation_id\": \"{conversationId}\", \"audio_data\": \"{base64Audio}\"}}";
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

    private IEnumerator CheckAudioFinished()
    {
        while (audioSource.isPlaying)
        {
            yield return null;
        }
        // Gọi sự kiện khi audio kết thúc
        onAudioFinished.Invoke();
        endAnswerTime = Time.time;
    }

    private void OnAudioFinished()
    {
        Debug.Log("Audio finished playing!");
        UIManager.Instance.connectionTxt.text = "Tap the record button on the screen or press the button on Myaku to ask me some question.";
        myakuController.animator.SetBool("answer", false);
        audioSource.clip = null;
        Resources.UnloadUnusedAssets();
    }

    /*public void TestSendFromAudioFile()
    {
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }
        //Lấy file audio đã ghi âm từ RecordAudio
        byte[] audioBytes = File.ReadAllBytes(audioFilePath);
        string base64Audio = Convert.ToBase64String(audioBytes);

        // ResetWebSocketConnection();

        string jsonMessage = CreateJsonMessage(conversationId, base64Audio);
        SendMessageToServer(jsonMessage);
        Debug.Log("Đã send message: " + jsonMessage);
    }*/

    private async Task ProcessQueue()
    {
        while (isProcessing)
        {
            if (processingQueue.Count > 0)
            {
                var sentence = processingQueue.Dequeue();
                Debug.Log("sentence: " + sentence);
                await ProcessTTS(sentence);
            }
            await Task.Delay(100); // Small delay to prevent busy waiting
        }
    }

    private async Task ProcessTTS(string sentence)
    {
        try
        {
            // Bắt đầu stream audio
            await StreamAudioFromText(sentence);
            // Bắt đầu phát audio
            StartCoroutine(PlayStreamAudio());
        }
        catch (Exception e)
        {
            Debug.LogError($"TTS processing error: {e.Message}");
        }
    }

    private async Task StreamAudioFromText(string text, string voiceStyle = "default")
    {
        var settings = voiceSettings[voiceStyle];
        isFirstChunk = true;
        audioBuffer.Clear();
        
        Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Bắt đầu stream audio cho text: {text}");
        float startTime = Time.realtimeSinceStartup;

        using (var client = new HttpClient())
        {
            client.DefaultRequestHeaders.Add("Authorization", $"Bearer {openAiApiKey}");

            var requestData = new
            {
                model = settings.model,
                voice = settings.voice,
                input = text,
                response_format = "wav",
                speed = 1.0f
            };

            var jsonContent = new StringContent(
                JsonConvert.SerializeObject(requestData), 
                Encoding.UTF8, 
                "application/json"
            );

            using (var response = await client.PostAsync(
                "https://api.openai.com/v1/audio/speech",
                jsonContent))
            {
                response.EnsureSuccessStatusCode();
                Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Nhận response từ API sau {(Time.realtimeSinceStartup - startTime):F2} giây");

                using (var stream = await response.Content.ReadAsStreamAsync())
                {
                    byte[] buffer = new byte[CHUNK_SIZE];
                    int bytesRead;
                    int chunkCount = 0;

                    // Đọc WAV header (44 bytes đầu tiên)
                    byte[] wavHeader = new byte[44];
                    await stream.ReadAsync(wavHeader, 0, 44);
                    audioBuffer.AddRange(wavHeader);
                    Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Đã đọc WAV header");

                    while ((bytesRead = await stream.ReadAsync(buffer, 0, buffer.Length)) > 0)
                    {
                        chunkCount++;
                        byte[] chunk = new byte[bytesRead];
                        Array.Copy(buffer, chunk, bytesRead);
                        audioBuffer.AddRange(chunk);

                        // Khi buffer đủ lớn, xử lý thành audio clip
                        if (audioBuffer.Count >= CHUNK_SIZE * 2)
                        {
                            Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Xử lý chunk #{chunkCount}, kích thước: {audioBuffer.Count} bytes");
                            await ProcessAudioChunk(audioBuffer.ToArray());
                            audioBuffer.Clear();
                            audioBuffer.AddRange(wavHeader);
                        }
                    }

                    // Xử lý bytes còn lại trong buffer
                    if (audioBuffer.Count > 44)
                    {
                        Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Xử lý chunk cuối cùng, kích thước: {audioBuffer.Count} bytes");
                        await ProcessAudioChunk(audioBuffer.ToArray());
                    }

                    Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Hoàn thành stream, tổng số chunk: {chunkCount}");
                }
            }
        }
    }

    private async Task ProcessAudioChunk(byte[] wavData)
    {
        try
        {
            float chunkStartTime = Time.realtimeSinceStartup;
            
            // Bỏ qua WAV header nếu không phải chunk đầu tiên
            int startIndex = isFirstChunk ? 44 : 44;
            int dataLength = wavData.Length - startIndex;

            // Chuyển đổi WAV data thành float array
            float[] audioFloatArray = new float[dataLength / 2];
            for (int i = 0; i < audioFloatArray.Length; i++)
            {
                short sample = BitConverter.ToInt16(wavData, startIndex + i * 2);
                audioFloatArray[i] = sample / 32768f;
            }

            // Tạo AudioClip
            AudioClip audioClip = AudioClip.Create(
                "StreamChunk", 
                audioFloatArray.Length,
                1, // mono
                SAMPLE_RATE,
                false
            );
            audioClip.SetData(audioFloatArray, 0);

            float processingTime = Time.realtimeSinceStartup - chunkStartTime;
            Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Chunk xử lý xong sau {processingTime:F3}s, độ dài audio: {audioClip.length:F2}s");

            // Thêm vào queue để phát
            lock (audioClipQueue)
            {
                audioClipQueue.Enqueue(audioClip);
                Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Đã thêm chunk vào queue, số lượng trong queue: {audioClipQueue.Count}");
            }

            isFirstChunk = false;
        }
        catch (Exception e)
        {
            Debug.LogError($"[{DateTime.Now:HH:mm:ss.fff}] Error processing audio chunk: {e.Message}");
        }
    }

    private IEnumerator PlayStreamAudio()
    {
        isPlayingStreamAudio = true;
        AudioClip currentClip = null;
        int playedChunks = 0;

        Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Bắt đầu phát stream audio");

        while (isPlayingStreamAudio)
        {
            // Nếu không đang phát audio
            if (!audioSource.isPlaying)
            {
                // Lấy clip tiếp theo từ queue nếu có
                lock (audioClipQueue)
                {
                    if (audioClipQueue.Count > 0)
                    {
                        currentClip = audioClipQueue.Dequeue();
                        playedChunks++;
                        Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Phát chunk #{playedChunks}, độ dài: {currentClip.length:F2}s, còn lại trong queue: {audioClipQueue.Count}");
                    }
                }

                if (currentClip != null)
                {
                    audioSource.clip = currentClip;
                    audioSource.Play();
                    
                    // Đợi cho đến khi phát xong clip hiện tại
                    yield return new WaitForSeconds(currentClip.length);
                    
                    // Giải phóng clip đã phát
                    Destroy(currentClip);
                    currentClip = null;
                }
                else
                {
                    // Kiểm tra xem còn đang nhận stream không
                    if (audioClipQueue.Count == 0)
                    {
                        yield return new WaitForSeconds(0.1f);
                    }
                }
            }
            yield return null;
        }

        Debug.Log($"[{DateTime.Now:HH:mm:ss.fff}] Kết thúc phát stream audio, tổng số chunk đã phát: {playedChunks}");

        // Cleanup khi kết thúc
        if (currentClip != null)
        {
            Destroy(currentClip);
        }
        
        lock (audioClipQueue)
        {
            while (audioClipQueue.Count > 0)
            {
                var clip = audioClipQueue.Dequeue();
                Destroy(clip);
            }
        }
    }

    // Sửa lại phương thức ProcessTTSCoroutine
    private IEnumerator ProcessTTSCoroutine(string text)
    {
        // Reset trạng thái
        isPlayingStreamAudio = false;
        isFirstChunk = true;
        audioBuffer.Clear();
        
        lock (audioClipQueue)
        {
            while (audioClipQueue.Count > 0)
            {
                var clip = audioClipQueue.Dequeue();
                Destroy(clip);
            }
        }

        var task = ProcessTTS(text);
        while (!task.IsCompleted)
        {
            yield return null;
        }

        if (task.IsFaulted)
        {
            Debug.LogError($"ProcessTTS failed: {task.Exception}");
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

    byte[] ConvertAudioToBytes(float[] data, int sampleRate)
    {
        short[] shortData = new short[data.Length];
        for (int i = 0; i < data.Length; i++)
        {
            shortData[i] = (short)(data[i] * short.MaxValue);
        }

        byte[] byteData = new byte[shortData.Length * 2];
        Buffer.BlockCopy(shortData, 0, byteData, 0, byteData.Length);
        return byteData;
    }


    IEnumerator RecordQuestion()
    {
        // Khởi tạo các biến theo dõi thời gian và âm lượng
        int sampleRate = 16000;
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        questionClip = Microphone.Start(device, false, 30, sampleRate); // Tăng thời gian tối đa lên 30s để đủ buffer

        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool hasSoundDetected = false;
        float silenceThreshold = 0.01f; // Ngưỡng để xác định im lặng
        
        // Đợi 0.5s để tránh nhiễu ban đầu
        yield return new WaitForSeconds(0.5f);

        while (Microphone.IsRecording(null))
        {
            float[] data = new float[256];
            int position = Microphone.GetPosition(null);
            if (position > 0)
            {
                questionClip.GetData(data, position - data.Length);
                float volume = CalculateVolume(data);

                // Nếu phát hiện có âm thanh (volume lớn hơn ngưỡng)
                if (volume > silenceThreshold)
                {
                    hasSoundDetected = true;
                    lastSoundTime = Time.time;
                }

                // Kiểm tra các điều kiện dừng
                float currentTime = Time.time;
                
                // Điều kiện 1: Nếu chưa phát hiện âm thanh và đã im lặng quá 5s
                if (!hasSoundDetected && (currentTime - startTime > 5f))
                {
                    Debug.Log("Không phát hiện tiếng nói trong 5s đầu, hủy ghi âm");
                    Microphone.End(null);
                    yield break; // Thoát khỏi coroutine
                }

                // Điều kiện 2: Nếu đã phát hiện âm thanh và im lặng quá 3s
                if (hasSoundDetected && (currentTime - lastSoundTime > 3f))
                {
                    Debug.Log("Phát hiện im lặng 3s sau khi có tiếng nói, kết thúc ghi âm");
                    break; // Thoát khỏi vòng lặp để xử lý audio
                }
            }
            yield return null;
        }

        // Dừng ghi âm
        Microphone.End(null);

        // Chỉ xử lý audio nếu đã phát hiện có tiếng nói
        if (hasSoundDetected && questionClip != null)
        {
            Debug.Log("Kết thúc ghi âm, xử lý audio");
            string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record_for_openAI.wav");
            WavUtility.Save(audioFilePath, questionClip);

            if (!File.Exists(audioFilePath))
            {
                Debug.LogError("Audio file not found at path: " + audioFilePath);
                yield break;
            }

            byte[] audioBytes = File.ReadAllBytes(audioFilePath);
            Debug.Log($"Audio file saved at: {audioFilePath}, size: {audioBytes.Length} bytes");

            yield return SendAudioToWhisper(audioBytes, (transcription) =>
            {
                if (transcription != null)
                {
                    Debug.Log($"Received transcription: {transcription}");
                    StartCoroutine(SendTextToChatCompletions(transcription, (answer) =>
                    {
                        if (answer != null)
                        {
                            Debug.Log($"Received answer: {answer}");
                            if (UIManager.Instance != null)
                            {
                                UIManager.Instance.connectionTxt.text = answer;
                                StartCoroutine(ProcessTTSCoroutine(answer));
                            }
                        }
                        else
                        {
                            Debug.LogError("Failed to get answer from Chat Completions API");
                        }
                    }));
                }
                else
                {
                    Debug.LogError("Failed to get transcription from Whisper API");
                }
            });
        }
        else
        {
            Debug.Log("Không phát hiện tiếng nói, hủy xử lý audio");
        }
    }



    IEnumerator SendAudioToWhisper(byte[] wavData, System.Action<string> onTranscriptionReceived)
    {
        string url = "https://api.groq.com/openai/v1/audio/transcriptions";
        string apiKey = groqKey;

        WWWForm form = new WWWForm();
        form.AddBinaryData("file", wavData, "audio.wav", "audio/wav");
        form.AddField("model", "whisper-large-v3");
        form.AddField("temperature", 0);
        form.AddField("response_format", "verbose_json");

        using (UnityWebRequest request = UnityWebRequest.Post(url, form))
        {
            request.SetRequestHeader("Authorization", $"Bearer {apiKey}");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string response = request.downloadHandler.text;
                JObject json = JObject.Parse(response);
                string transcription = json["text"].Value<string>();
                Debug.Log($"Transcription: {transcription}");
                onTranscriptionReceived?.Invoke(transcription);
            }
            else
            {
                Debug.LogError($"Whisper API error: {request.error}");
                onTranscriptionReceived?.Invoke(null);
            }
        }
    }

    IEnumerator SendTextToChatCompletions(string questionText, System.Action<string> onAnswerReceived)
    {
        string url = "https://api.openai.com/v1/chat/completions";
        string apiKey = openAiApiKey;

        var payload = new
        {
            model = "gpt-4o",
            messages = new[]
            {
                new { role= "system", content = "Bạn là chuyên gia nghiên cứu về Đông Nam Á và tổ chức ASEAN"},
                new { role= "system", content = "Trả lời người dùng ngắn gọn 1,2 câu"},
                new { role = "user", content = questionText }
            },
            temperature = 0.7
        };

        //string jsonPayload = JsonUtility.ToJson(payload);
        string jsonPayload = JsonConvert.SerializeObject(payload);
        Debug.Log("jsonPayload: " + jsonPayload);
        byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonPayload);

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Authorization", $"Bearer {apiKey}");
            request.SetRequestHeader("Content-Type", "application/json");

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                string response = request.downloadHandler.text;
                JObject json = JObject.Parse(response);
                string answer = json["choices"][0]["message"]["content"].Value<string>();
                Debug.Log($"Answer: {answer}");
                onAnswerReceived?.Invoke(answer);
            }
            else
            {
                Debug.LogError($"Chat Completions API error: {request.error}");
                onAnswerReceived?.Invoke(null);
            }
        }
    }

    // Nhận dữ liệu âm thanh từ Java
    public void OnAudioDataReceived(string base64Audio)
    {
        Debug.Log($"Received base64 string: {base64Audio}");
        Debug.Log($"Base64 string length: {base64Audio.Length}");
        // Gửi dữ liệu âm thanh qua WebSocket
        if (ws != null && ws.State == WebSocketState.Open)
        {
            try
            {
                // Chuyển base64 thành bytes và gửi qua WebSocket
                byte[] audioBytes = Convert.FromBase64String(base64Audio);
                Debug.Log($"Decoded length: {audioBytes.Length}");
                ws.Send(audioBytes);
                Debug.Log("Sent audio data to WebSocket server");
            }
            catch (Exception e)
            {
                Debug.LogError($"Failed to send audio data: {e.Message}");
                //ConnectWebSocket();
            }
        }
        else
        {
            Debug.LogWarning("WebSocket is not open, cannot send audio data");
        }
    }


    private void HandleWebSocketMessage(string message)
    {
        try
        {
            // Giả định message là JSON, sử dụng SimpleJSON hoặc Newtonsoft.Json để parse 
            JObject data = JObject.Parse(message);

            string type = data["type"].ToString();
            switch (type)
            {
                case "wake_word_detected":
                    isWakeWordDetected = true;
                    status = "I am hearing ...";
                    Debug.Log("Wake word detected!");
                    
                    // Thông báo cho Java plugin về việc phát hiện wake word
                    if (audioPlugin != null)
                    {
                        audioPlugin.Call("notifyWakeWordDetected");
                        Debug.Log("Notified Java plugin about wake word detection");
                    }
                    else
                    {
                        Debug.LogError("audioPlugin is null, cannot notify about wake word");
                    }
                    
                    // Đợi một khoảng thời gian để cho phép service xử lý và mở app nếu cần
                    StartCoroutine(StartRecordingAfterDelay());
                    break;

                case "speech_started":
                    isSpeaking = true;
                    status = "Listening to your command...";
                    break;

                case "please_continue":
                    status = "Ask anything you want";
                    break;

                case "speech_ended":
                    isSpeaking = false;
                    status = "Processing your command...";
                    break;

                case "transcript":
                    transcript = data["text"].ToString();
                    status = "Transcript: " + transcript;
                    break;

                case "log":
                    Debug.Log("Log: " + data["message"]);
                    break;

                case "text_response":
                    response += data["text"];
                    status = data["text"].ToString();
                    break;

                case "listening_for_wake_word":
                    isWakeWordDetected = false;
                    isSpeaking = false;
                    status = "Listening for wake word nè...";
                    // Reset transcript và response sau 5 giây
                    //Invoke(nameof(ResetTranscriptAndResponse), 5f);
                    break;

                case "error":
                    Debug.LogError($"Error: {data["message"]}");
                    status = "Error occurred. Listening for wake word...";
                    break;
            }

            UpdateUI();
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to parse WebSocket message: {e.Message}");
        }
    }

    private void ResetTranscriptAndResponse()
    {
        transcript = "";
        response = "";
        UpdateUI();
    }

    private void UpdateUI()
    {
        if (UIManager.Instance != null)
        {
            UIManager.Instance.connectionTxt.text = status;
            transcriptTxt.text = transcript;
            responseTxt.text = response;
        }
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
}

