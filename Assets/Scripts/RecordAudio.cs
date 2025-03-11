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
    private string webSocketUrl = "ws://13.250.59.163:8001/ws/audio-chat"; // URL web socket  
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
    private WebSocket webSocket;
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
    private string openAiApiKey = "12345";
    private Dictionary<string, (string model, string voice)> voiceSettings;

    private bool isProcessing;
    private bool isActive;

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
            //audioPlugin.Call("testSendMessage");
            // Bắt đầu thu âm qua plugin Java
            audioPlugin.Call("startRecordingFromUnity");
            audioPlugin.Call("testSendMessage");

            WebSocketHandler(webSocketUrl);
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


    // Kết nối WebSocket
    public async void WebSocketHandler(string url)
    {
        ws = new WebSocket(url);

        ws.OnOpen += () =>
        {
            isWebSocketOpen = true;
            Debug.Log("WebSocket Connected!");
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
            HandleWebSocketResponse1(message);
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

                // Nếu phát hiện "OK Google", tạm dừng thu âm liên tục và ghi âm câu hỏi
                //if (message.Contains("Detected OK Google"))
                //{
                //    isListeningContinuously = false;
                //    StartCoroutine(RecordQuestion());
                //}
                //else if (message.Contains("I heard:"))
                //{
                //    // Hiển thị câu trả lời từ server
                //    responseText.text = message;
                //    // Tiếp tục thu âm liên tục sau khi nhận câu trả lời
                //    StartCoroutine(ResumeContinuousRecording());
                //}
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
        //for (int i = 0; i < Microphone.devices.Length; i++)
        //{
        //    Debug.Log("micro device " + i + ": " + Microphone.devices[i]);
        //    if (Microphone.devices[i].Contains("JBL TUNE520BT") || Microphone.devices[i].Contains("BluetoothHFP"))
        //    {
        //        device = Microphone.devices[i];
        //    }
        //}
        //if (device == "" && Microphone.devices.Length > 0)
        //{
        //    device = Microphone.devices[0];
        //}
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

    /*//public void StartRecordingFromMyaku()
    //{
    //    myakuController.MyakuListen();
    //    StopAllCoroutines(); 

    //    if (audioSource.isPlaying)
    //    {
    //        audioSource.Stop();
    //        endAnswerTime = Time.time;
    //    }
    //    audioSource.clip = null;
    //    Resources.UnloadUnusedAssets();

    //    mainThreadActions.Clear();

    //    audioDataBuffer.Clear();
    //    // Tùy chọn, giải phóng bộ nhớ nếu cần
    //    while (audioBuffersQueue.Count > 0)
    //    {
    //        var buffer = audioBuffersQueue.Dequeue();
    //        buffer.Clear(); // Xóa dữ liệu trong list (nếu cần)
    //    }
    //    audioBuffersQueue.Clear(); // Xóa tất cả các phần tử trong queue  

    //    ResetWebSocketConnection();
    //    isAnswering = false;
    //    responseTxt.text = "";
    //}*/


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

    //public void SendQuestionFromMyakyDevice(string base64Audio)
    //{ 
    //    beginQuestionTime = Time.time;
    //    float timeDifference = beginQuestionTime - endAnswerTime;

    //    if (timeDifference > 15f)
    //    {
    //        Debug.Log("Đã quá thời gian cho một conversation");
    //        conversationId = Guid.NewGuid().ToString(); // Random conversation_id
    //    }
    //    Debug.Log("base64Audio: " + base64Audio);
    //    string jsonMessage = CreateJsonMessage(conversationId, base64Audio);
    //    SendMessageToServer(jsonMessage);
    //}

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

    public void TestSendFromAudioFile()
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
    }


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
            //OnTextResponseReceived?.Invoke(sentence);
            var audioData = await GenerateAudioFromText(sentence);
            var audioClip = await ConvertToAudioClip(audioData);

            if (!isProcessing) return;

            PlayAudioClip(audioClip);
        }
        catch (Exception e)
        {
            //OnError?.Invoke($"TTS error: {e.Message}");
            Debug.LogError($"TTS processing error: {e.Message}");
        }
    }
    private async Task<byte[]> GenerateAudioFromText(string text, string voiceStyle = "default")
    {
        var settings = voiceSettings[voiceStyle];

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

            //var response = await client.PostAsJsonAsync(
            //    "https://api.openai.com/v1/audio/speech ",
            //    requestData
            //);

            var jsonContent = new StringContent(JsonConvert.SerializeObject(requestData), Encoding.UTF8, "application/json");
            var response = await client.PostAsync("https://api.openai.com/v1/audio/speech", jsonContent);

            response.EnsureSuccessStatusCode();
            return await response.Content.ReadAsByteArrayAsync();
        }
    }

    private async Task<AudioClip> ConvertToAudioClip(byte[] audioData)
    {
        // Create a temporary file to store the WAV data
        string tempPath = $"{Application.persistentDataPath}/temp_audio.wav";
        await System.IO.File.WriteAllBytesAsync(tempPath, audioData);


        AudioClip audioClip = CreateAudioClipFromBytes(audioData);


        //// Use UnityWebRequest to load the audio clip
        //using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip("file://" + tempPath, AudioType.WAV))
        //{
        //    // Create a TaskCompletionSource to await the UnityWebRequest
        //    var tcs = new TaskCompletionSource<bool>();

        //    // Send the web request
        //    var operation = www.SendWebRequest();

        //    // Listen for the completion of the request
        //    operation.completed += (asyncOp) =>
        //    {
        //        if (www.result == UnityWebRequest.Result.Success)
        //        {
        //            tcs.SetResult(true); // Mark the task as completed
        //        }
        //        else
        //        {
        //            tcs.SetException(new Exception($"Failed to load audio clip: {www.error}"));
        //        }
        //    };

        //    // Wait for the task to complete
        //    await tcs.Task;

        //    // Return the audio clip
        //    return DownloadHandlerAudioClip.GetContent(www);
        //}
        return audioClip;
    }

    private void PlayAudioClip(AudioClip clip)
    {
        audioSource.clip = clip;
        audioSource.Play();
    }

    IEnumerator RecordQuestion()
    {

        // Ghi âm trong 10 giây hoặc đến khi im lặng
        int sampleRate = 16000; // Khớp với SAMPLE_RATE trong Java
        int lengthSeconds = 10; // Thời gian tối đa 10 giây
        questionClip = Microphone.Start(null, false, lengthSeconds, sampleRate);

        // Chờ người dùng ngừng nói (hoặc 10 giây)
        yield return new WaitForSeconds(0.5f); // Đợi 0.5 giây để tránh nhiễu ban đầu

        float maxVolume = 0f;
        while (Microphone.IsRecording(null))
        {
            float[] data = new float[256];
            int offset = 0;
            int read = Microphone.GetPosition(null) - offset;
            if (read > 0)
            {
                questionClip.GetData(data, offset);
                float volume = CalculateVolume(data);
                maxVolume = Mathf.Max(maxVolume, volume);

                // Nếu im lặng quá lâu (volume thấp), dừng ghi âm
                if (maxVolume < 0.01f && Time.timeSinceLevelLoad - (Time.timeSinceLevelLoad - 0.5f) > 1f) // Im lặng 1 giây
                {
                    Microphone.End(null);
                    break;
                }
            }
            yield return null;
        }

        // Gửi câu hỏi qua WebSocket
        if (questionClip != null)
        {
            float[] samplesData = new float[questionClip.samples];
            questionClip.GetData(samplesData, 0);
            byte[] byteData = ConvertAudioToBytes(samplesData, sampleRate);
            string base64Audio = Convert.ToBase64String(byteData);
            webSocket.SendText(base64Audio);
            Debug.Log("Sent question as base64");
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

    // Nhận dữ liệu âm thanh từ Java
    public void OnAudioDataReceived(string base64Audio)
    {
        UIManager.Instance.connectionTxt.text = base64Audio;
        //if (isListeningContinuously && webSocket != null && webSocket.State == WebSocketState.Open)
        //{
        //webSocket.SendText(base64Audio);
        Debug.Log("Sent 2s audio as base64");
        //}
    }

}

