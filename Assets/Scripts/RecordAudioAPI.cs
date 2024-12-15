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

public class RecordAudioAPI: MonoBehaviour
{
    public MyakuController myakuController;
    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio"; // URL server   
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
     
     
    private void Start()
    {
        onAudioFinished.AddListener(OnAudioFinished);
        conversationId = Guid.NewGuid().ToString();
        //StartCoroutine(PlayRadio("http://ice3.somafm.com/defcon-128-mp3")); 
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
         
        beginQuestionTime = Time.time;
        float timeDifference = beginQuestionTime - endAnswerTime;

        if (timeDifference > 15f)
        {
            Debug.Log("Đã quá thời gian cho một conversation");
            conversationId = Guid.NewGuid().ToString(); // Random conversation_id
        }
        UploadAndProcessAudio();
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
