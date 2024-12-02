using BestHTTP;
//using NAudio.Wave;
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
using BestHTTP.Caching;
using System.Threading;
//using System.Diagnostics;

public class RecordAudio : MonoBehaviour
{
    public MyakuController myakuController;
    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio"; // URL server xử lý
    private string conversationId = "";
    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource;
    private bool isRequestInProgress = false;
    private HTTPRequest request;
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

    private void Start()
    {
        onAudioFinished.AddListener(OnAudioFinished);
        conversationId = Guid.NewGuid().ToString();
        //StartCoroutine(PlayRadio("http://ice3.somafm.com/defcon-128-mp3"));
    }
    private IEnumerator PlayRadio(string url)
    {
        yield return null;
        try
        {
            mediaFoundationReader = new MediaFoundationReader(url);
            waveOut = new WaveOutEvent();
            waveOut.Init(mediaFoundationReader);
            waveOut.Play();
        }
        catch (System.Exception ex)
        {
            Debug.LogError($"Error playing radio: {ex.Message}");
        }
    }
    void OnDestroy()
    {
        if (waveOut != null)
        {
            waveOut.Stop();
            waveOut.Dispose();
        }

        if (mediaFoundationReader != null)
        {
            mediaFoundationReader.Dispose();
        }
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
    }

    public void StopRecording()
    {
        Microphone.End(null);
        recordingLength = Time.realtimeSinceStartup - startTime;
        recordedClip = TrimClip(recordedClip, recordingLength);

        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");
        WavUtility.Save(audioFilePath, recordedClip);
        Debug.Log("Recording saved as " + audioFilePath);

        // kiểm tra nếu chưa nhấn giữ để thu âm thì chưa cho gửi câu hỏi đi
        // hủy mọi thứ đang diễn ra từ myaku
        if (audioSource.isPlaying)
        {
            audioSource.Stop();
            // Gọi sự kiện khi audio kết thúc
            onAudioFinished.Invoke();
            endAnswerTime = Time.time;
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
        //isRequestInProgress = false;
        //if (isRequestInProgress)
        //{
        //    Debug.LogWarning("A request is already in progress. Please wait.");
        //    return;
        //}

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

        using (HttpClient client = new HttpClient())
        {
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
                //HttpResponseMessage response = await client.SendAsync(request, HttpCompletionOption.ResponseHeadersRead);

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
                        AudioClip audioClip = await CreateAudioClipFromStream(audioStream, cancellationToken);
                        if (audioClip != null)
                        {
                            audioSource.clip = audioClip;
                            audioSource.Play();

                            myakuController.MyakuAnswer();
                            Debug.Log("Audio is playing...");

                            StartCoroutine(CheckAudioFinished());
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
    } 
    private async Task<AudioClip> CreateAudioClipFromStream(Stream audioStream, CancellationToken cancellationToken)
    {
        // Tạo mảng byte để lưu dữ liệu âm thanh
        using (MemoryStream memoryStream = new MemoryStream())
        {
            await audioStream.CopyToAsync(memoryStream, cancellationToken);
            byte[] audioBytes = memoryStream.ToArray();

            // Giả sử rằng đây là dữ liệu PCM (chỉ là ví dụ, bạn cần xác nhận kiểu dữ liệu từ API)
            // Nếu cần, bạn có thể sử dụng thư viện khác như NAudio để chuyển đổi sang định dạng PCM nếu tệp không phải WAV.
            float[] audioData = ConvertToFloatArray(audioBytes);  // Cần có hàm chuyển đổi từ byte[] sang float[] nếu cần

            // Tạo AudioClip từ dữ liệu PCM
            AudioClip audioClip = AudioClip.Create("StreamingAudio", audioData.Length, 1, 24000, false);
            audioClip.SetData(audioData, 0);

            return audioClip;
        }
    }

    private float[] ConvertToFloatArray(byte[] audioBytes)
    {
        // Đây là ví dụ cơ bản, bạn cần thực hiện chuyển đổi từ byte[] (thường là dữ liệu WAV hoặc MP3) sang mảng float[]
        // Nếu bạn có file WAV, có thể dùng một thư viện như NAudio để xử lý và chuyển đổi nó
        // Cách đơn giản là nếu file đã ở định dạng PCM, bạn có thể dùng một giải thuật để chuyển trực tiếp sang float[]
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
