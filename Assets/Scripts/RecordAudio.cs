using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;
using NAudio.Wave;
using System.Text; 
using System.Threading;
using WebSocketSharp;
using Newtonsoft.Json.Linq;

public class RecordAudio : MonoBehaviour
{
    public MyakuController myakuController;
    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio"; // URL server 
    private string webSocketUrl = "ws://145.223.21.25:8001/ws/audio-chat"; // URL web socket 
    private string conversationId = "";
    private AudioClip recordedClip;
    private AudioClip audioClipToPlay; // AudioClip duy nhất dùng để phát
    [SerializeField] AudioSource audioSource;
    private bool isRequestInProgress = false; 
    private float startTime;
    private float recordingLength;

    public UnityEvent onAudioFinished; // Sự kiện khi audio kết thúc

    private MediaFoundationReader mediaFoundationReader; 
    private WaveOutEvent waveOut;
    private WaveOutEvent waveOutEvent;
    private BufferedWaveProvider waveProvider;

    private float beginQuestionTime;
    private float endAnswerTime;
    private CancellationTokenSource cancellationTokenSource; // Token source để hủy tác vụ
    private static HttpClient client = new HttpClient();
    private Coroutine audioCoroutine; // Để lưu coroutine

    private WebSocket ws;
    private List<byte> audioDataBuffer = new List<byte>(); // Buffer để lưu các chunk audio
    private List<byte> audioDataBufferToSaveFile = new List<byte>(); // Buffer để lưu các chunk audio
    private bool isReceivingAudio = false;

    private Queue<Action> mainThreadActions = new Queue<Action>();

    private int sampleRate = 24000; // Tần số mẫu (có thể thay đổi tùy thuộc vào dữ liệu âm thanh)
    private int channels = 1; // Số kênh âm thanh (mono hoặc stereo)

    private void Awake()
    {
        ConnectToWebSocket(webSocketUrl); // Thay URL WebSocket của bạn 
    }
    private void Start()
    {
        onAudioFinished.AddListener(OnAudioFinished);
        conversationId = Guid.NewGuid().ToString();
        //StartCoroutine(PlayRadio("http://ice3.somafm.com/defcon-128-mp3")); 
    }

    // Kết nối WebSocket
    public void ConnectToWebSocket(string url)
    {
        ws = new WebSocket(url);

        // Khi nhận được thông điệp từ WebSocket
        ws.OnMessage += (sender, e) =>
        {
            //Debug.Log("Received from server: " + e.Data);
            HandleWebSocketResponse(e.Data);
        };

        // Xử lý khi kết nối thành công
        ws.OnOpen += (sender, e) =>
        {
            Debug.Log("WebSocket Connected!");
        };
         
        // Xử lý khi WebSocket bị đóng
        ws.OnClose += (sender, e) =>
        {
            Debug.Log("WebSocket Closed!");
        };

        // Xử lý khi có lỗi xảy ra
        ws.OnError += (sender, e) =>
        {
            Debug.LogError("WebSocket Error: " + e.Message);
        };

        ws.Connect();
    }

    public void SendMessageToServer(string message)
    {
        if (ws != null)
        {
            ws.Send(message);
            Debug.Log("Sent to server: " + message);
        }
        else
        {
            Debug.LogWarning("WebSocket is not connected.");
        }
    }

    // Xử lý dữ liệu trả về từ WebSocket
    private void HandleWebSocketResponse(string response)
    {  
        try
        {
            // Giải mã JSON// Chuyển chuỗi JSON nhận được thành JObject để dễ dàng truy cập các trường
            JObject jsonResponse = JObject.Parse(response);
            // Kiểm tra type có phải là "text_response" không
            if (jsonResponse["type"] != null && jsonResponse["type"].ToString() == "transcript")
            {
                string content = jsonResponse["text"].ToString();  // Lấy nội dung của "text"
                Debug.Log("Received transcript text: " + content);

            }
            else if (jsonResponse["type"] != null && jsonResponse["type"].ToString() == "text_response")
            {
                string content = jsonResponse["text"].ToString();  // Lấy nội dung của "text"
                Debug.Log("Received text: " + content);

            }
            else if (jsonResponse["type"] != null && jsonResponse["type"].ToString() == "audio_chunk")
            {    
                string content = jsonResponse["audio"].ToString();  // Lấy nội dung của "audio"  
                byte[] audioBytes = Convert.FromBase64String(content); // Chuyển base64 thành byte[]
                Debug.Log("Received audio chunk");
                audioDataBufferToSaveFile.AddRange(audioBytes);
                EnqueueMainThreadAction(() => ProcessAudioChunk(audioBytes));
            } 
            // Nếu nhận được type "audio_complete", kết thúc việc phát âm thanh
            else if (jsonResponse["type"] != null && jsonResponse["type"].ToString() == "audio_complete")
            {
                Debug.Log("Audio streaming complete.");
                //StartCoroutine(PlayAudio());  // Dùng Coroutine để phát âm thanh
                //Debug.Log("Play audio 1 lần nào!");
                EnqueueMainThreadAction(() => StartCoroutine(PlayAudio()));
                //isReceivingAudio = false; // Dừng nhận âm thanh
                EnqueueMainThreadAction(() => SaveAudioToFile(audioDataBufferToSaveFile));
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error processing WebSocket response: " + e.Message);
        }
    }

    private void SaveAudioToFile(List<byte> audioData)
    {
        // Lấy đường dẫn thư mục persistentDataPath
        string filePath = Path.Combine(Application.persistentDataPath, "audioOutput.wav");

        // Ghi dữ liệu vào file
        try
        {
            // Kiểm tra xem file đã tồn tại chưa, nếu có thì xóa trước khi ghi mới
            if (File.Exists(filePath))
            {
                File.Delete(filePath);
            }

            // Ghi byte array vào file
            File.WriteAllBytes(filePath, audioData.ToArray());
            Debug.Log($"Audio file saved at {filePath}");
        }
        catch (Exception e)
        {
            Debug.LogError($"Error saving audio file: {e.Message}");
        }
    }

    // This method should be called every frame to process the queued actions on the main thread
    void Update()
    {
        // Process all actions in the queue on the main thread
        while (mainThreadActions.Count > 0)
        {
            Action action = null;

            lock (mainThreadActions)
            {
                action = mainThreadActions.Dequeue();
            }

            // Execute the action
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

    private bool isBeginPlay = false;
    // Xử lý và thêm audio chunk vào buffer
    private void ProcessAudioChunk(byte[] audioChunk)
    {
        if (!isReceivingAudio)
        {
            isReceivingAudio = true;
            audioDataBuffer.Clear(); // Xóa buffer trước khi bắt đầu nhận audio mới
        }

        //// Thêm audio chunk vào buffer
        audioDataBuffer.AddRange(audioChunk);
        Debug.Log("nhận thêm dữ liệu: " + audioChunk.Length);

        // Tiến hành phát audio nếu đã có đủ dữ liệu (hoặc có thể phát ngay khi nhận chunk đầu tiên)
        // kiểm tra để chắc chắn không gọi 2 coroutine cùng lúc khi audio chưa play, vì rất có thể chưa kịp play thì đã nhận chunk tiếp theo
        if (audioDataBuffer.Count > 0 && !audioSource.isPlaying && isBeginPlay == false)
        {
            //Gọi PlayAudio trong Coroutine để đảm bảo hoạt động trên Main Thread
            Debug.Log("audioDataBuffer.Count: " + audioDataBuffer.Count);
            Debug.Log("Play audio nào!");
            isBeginPlay = true;
            StartCoroutine(PlayAudio());
        } 
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


    public void StartRecording()
    {
        myakuController.MyakuListen();
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        if(device != "")
        { 
            int sampleRate = 44100;
            int lengthSec = 3599; 
            recordedClip = Microphone.Start(device, false, lengthSec, sampleRate);
            startTime = Time.realtimeSinceStartup;
        }
        if (audioSource.isPlaying)
        {
            audioSource.Stop(); 
            endAnswerTime = Time.time;
        }
        audioSource.clip = null;
        if (isRequestInProgress)
        {
            cancellationTokenSource?.Cancel();
            Debug.Log("Cancelling previous request...");
        }
    }

    public void StopRecording()
    {
        Microphone.End(null);
        recordingLength = Time.realtimeSinceStartup - startTime;
        recordedClip = TrimClip(recordedClip, recordingLength);

        //byte[] audioBytes = ConvertAudioClipToByteArray(recordedClip);
        //string base64Audio = Convert.ToBase64String(audioBytes); 
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");
       // WavUtility.Save(audioFilePath, recordedClip);
       // Debug.Log("Recording saved as " + audioFilePath);
         

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }
        // Lấy file audio đã ghi âm từ RecordAudio 
        byte[] audioBytes = File.ReadAllBytes(audioFilePath);
        string base64Audio = Convert.ToBase64String(audioBytes);

        string conversationId = Guid.NewGuid().ToString();
        string jsonMessage = CreateJsonMessage(conversationId, base64Audio);
        SendMessageToServer(jsonMessage);
        Debug.Log("Đã send message");
        //UploadAndProcessAudio();
    }

    // Chuyển AudioClip thành mảng byte[]
    private byte[] ConvertAudioClipToByteArray(AudioClip clip)
    {
        int sampleCount = clip.samples * clip.channels;
        float[] audioData = new float[sampleCount];
        clip.GetData(audioData, 0);

        byte[] byteArray = new byte[sampleCount * 2]; // 16-bit âm thanh => 2 bytes mỗi sample
        int byteIndex = 0;

        for (int i = 0; i < audioData.Length; i++)
        {
            short sample = (short)(audioData[i] * short.MaxValue); // Chuyển đổi float thành 16-bit
            byte[] sampleBytes = BitConverter.GetBytes(sample);
            Array.Copy(sampleBytes, 0, byteArray, byteIndex, 2);
            byteIndex += 2;
        }

        return byteArray;
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

    public async void UploadAndProcessAudio()
    { 
        // kiểm tra nếu sau 15s không có câu hỏi gì cho myaku thì tạo mới conversationId
        beginQuestionTime = Time.time;
        float timeDifference = beginQuestionTime - endAnswerTime;

        if (timeDifference > 15f)
        {
            Debug.Log("Đã quá thời gian cho một conversation");
            conversationId = Guid.NewGuid().ToString(); // Random conversation_id
        }
        cancellationTokenSource = new CancellationTokenSource();
        await SendAudioAndPlayStream();
    }

    private async Task SendAudioAndPlayStream( )
    {
        if (isRequestInProgress)
        {
            cancellationTokenSource?.Cancel();
            Debug.Log("Cancelling previous request...");
        }
        // Tạo mới CancellationTokenSource mỗi khi gọi lại hàm
        cancellationTokenSource = new CancellationTokenSource();
        CancellationToken cancellationToken = cancellationTokenSource.Token;

        Debug.Log("Bắt đầu SendAudioAndPlayStream");
        isRequestInProgress = true;
        myakuController.MyakuThinking();
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }
        // Lấy file audio đã ghi âm từ RecordAudio 
        byte[] audioData = File.ReadAllBytes(audioFilePath);

        // Tạo một MultipartFormDataContent để gửi file audio
        var formContent = new MultipartFormDataContent();
        formContent.Add(new ByteArrayContent(audioData), "audio_file", "audio_sample.wav");
        formContent.Add(new StringContent(conversationId, Encoding.UTF8), "conversation_id");

        // Tạo HttpRequestMessage với phương thức POST
        var request = new HttpRequestMessage(HttpMethod.Post, serverUrl)
        {
            Content = formContent
        };

        // Đo thời gian gửi yêu cầu
        System.Diagnostics.Stopwatch stopwatch = System.Diagnostics.Stopwatch.StartNew();
        try
        {
            // Gửi yêu cầu POST với HttpCompletionOption.ResponseHeadersRead
            HttpResponseMessage response = await client.SendAsync(request, HttpCompletionOption.ResponseHeadersRead, cancellationToken); 
            response.EnsureSuccessStatusCode();

            // Đo thời gian nhận phản hồi đầu tiên (bao gồm cả headers)
            stopwatch.Stop();
            Debug.Log($"Time to receive headers: {stopwatch.ElapsedMilliseconds} ms");

            if (response.IsSuccessStatusCode)
            {
                // Phản hồi header đã được nhận
                Debug.Log("Header received. Start receiving stream...");
                // Lấy stream âm thanh từ response 
                using (Stream audioStream = await response.Content.ReadAsStreamAsync())
                {

                    // Đọc và phát âm thanh từ stream
                    //await StreamAudioAndPlay(audioStream, audioSource, cancellationToken);

                    AudioClip audioClip = await CreateAudioClipFromStream(audioStream, cancellationToken);
                    if (audioClip != null)
                    {
                        audioSource.clip = audioClip;
                        audioSource.Play();

                        myakuController.MyakuAnswer();
                        Debug.Log("Audio is playing...");

                        // Dừng các coroutine trước đó nếu có
                        if (audioCoroutine != null)
                        {
                            StopCoroutine(audioCoroutine);
                        }

                        audioCoroutine = StartCoroutine(CheckAudioFinished());
                    }
                    else
                    {
                        Debug.LogError("Failed to load audio clip");
                    }
                }
            }
            else
            {
                Debug.LogError("Failed to retrieve audio stream from API");
            }
        }
        catch (OperationCanceledException)
        {
            Debug.Log("Operation was canceled.");
        }
        catch (Exception ex)
        {
            Debug.LogError($"Error: {ex.Message}");
        }
        finally
        {
            isRequestInProgress = false;
        } 
    }

    private async Task StreamAudioAndPlay(Stream audioStream, AudioSource audioSource, CancellationToken cancellationToken)
    {
        // Tạo AudioClip có khả năng stream dữ liệu 
        AudioClip audioClip = AudioClip.Create("StreamingAudio", 24000 * 10, 1, 24000, true); // Giả sử 10 giây âm thanh
        audioSource.clip = audioClip;
        audioSource.Play();

        // Đọc dữ liệu từ audioStream và stream vào AudioClip (Unity sẽ tự động xử lý việc phát)
        byte[] buffer = new byte[1024];
        int bytesRead;
        while ((bytesRead = await audioStream.ReadAsync(buffer, 0, buffer.Length, cancellationToken)) > 0)
        {
            // Tạo một MemoryStream để xử lý buffer và stream âm thanh vào AudioClip
            MemoryStream memoryStream = new MemoryStream(buffer, 0, bytesRead);

            // Phát âm thanh từ buffer
            // Unity sẽ tự động xử lý buffer và phát âm thanh nếu AudioClip được tạo với stream = true
            audioClip.LoadAudioData();
        }

        // Đảm bảo âm thanh đã được tải và phát liên tục từ stream
        Debug.Log("Audio is playing...");
    }

    // Hàm chuyển đổi byte[] (16-bit PCM) sang float[]
    private float[] ConvertBytesToFloats(byte[] byteBuffer, int bytesRead)
    {
        int sampleCount = bytesRead / 2; // Mỗi mẫu PCM 16-bit chiếm 2 byte
        float[] floatBuffer = new float[sampleCount];

        for (int i = 0; i < sampleCount; i++)
        {
            short sample = BitConverter.ToInt16(byteBuffer, i * 2); // Chuyển đổi 2 byte thành short
            floatBuffer[i] = sample / 32768f; // Chuyển đổi từ short (-32768 -> 32767) sang float (-1f -> 1f)
        }

        return floatBuffer;
    }


    private async Task<AudioClip> CreateAudioClipFromStream(Stream audioStream, CancellationToken cancellationToken)
    {
        // Tạo mảng byte để lưu dữ liệu âm thanh
        using (MemoryStream memoryStream = new MemoryStream())
        {
            await audioStream.CopyToAsync(memoryStream, cancellationToken);
            byte[] audioBytes = memoryStream.ToArray(); 
            float[] audioData = ConvertToFloatArray(audioBytes);  // Cần có hàm chuyển đổi từ byte[] sang float[] nếu cần

            // Tạo AudioClip từ dữ liệu PCM
            AudioClip audioClip = AudioClip.Create("StreamingAudio", audioData.Length, 1, 24000, false);
            audioClip.SetData(audioData, 0);
            Resources.UnloadUnusedAssets();  // Giải phóng tài nguyên không còn sử dụng (tùy chọn)
            return audioClip;
        }
    }

    private float[] ConvertToFloatArray(byte[] audioBytes)
    { 
        int sampleCount = audioBytes.Length / 2;  // Giả sử mỗi mẫu là 2 bytes (16 bit)
        float[] audioData = new float[sampleCount];

        for (int i = 0; i < sampleCount; i++)
        {
            short sample = BitConverter.ToInt16(audioBytes, i * 2);  // Đọc 2 bytes làm một sample 16-bit
            audioData[i] = sample / 32768.0f;  // Chuyển đổi từ short (-32768 to 32767) sang float (-1.0 to 1.0)
        }

        return audioData;
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

    public bool HasRecordedAudio()
    {
        return recordedClip != null;
    }

    // Hàm gọi để hủy tác vụ
    public void CancelOperation()
    {
        if (isRequestInProgress)
        {
            cancellationTokenSource?.Cancel();
            Debug.Log("Cancelling operation...");
        }
    }
}
