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

    private float lastStopTime;
    private bool isOver30s = false;


    // read from wave header:
    int bytesPerSec;
    int frames;
    float lengthInSec;

    // calculated:
    int downloadedBytes;
     
    int dataPos;
    int samplePos;

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
        UploadAndProcessAudio();
    }

    public void PlayRecording()
    {
        Debug.Log("Play audio");
        audioSource.clip = recordedClip;
        audioSource.Play();
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
        if (isRequestInProgress)
        {
            Debug.LogWarning("A request is already in progress. Please wait.");
            return;
        } 

        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }

        // kiểm tra nếu sau 30s không có câu hỏi gì cho myaku thì tạo mới conversationId
        if (isOver30s)
        {
            conversationId = Guid.NewGuid().ToString(); // Random conversation_id
        } 
        // Lấy file audio đã ghi âm từ RecordAudio 
        byte[] audioData = File.ReadAllBytes(audioFilePath);

        //StartCoroutine(WaitAndSendRequest(audioData, conversationId)); 
        await SendAudioAndPlayStream();
       //StartCoroutine(SendAudioAndStreamResponse());
    }


    // Hàm gọi để gửi POST request với file audio
    public IEnumerator SendAudioAndStreamResponse()
    {
        // Đọc file WAV từ đĩa
        string conversationId = Guid.NewGuid().ToString(); // Random conversation_id
        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            yield return null;
        }

        // Lấy file audio đã ghi âm từ RecordAudio 
        byte[] audioData = File.ReadAllBytes(audioFilePath);

        // Tạo form data để gửi lên server
        WWWForm form = new WWWForm();
        form.AddField("conversation_id", conversationId); // Conversation ID tùy chỉnh
        form.AddBinaryData("audio_file", audioData, "audio_sample.wav", "audio/wav");

        // Tạo UnityWebRequest POST
        using (UnityWebRequest webRequest = UnityWebRequest.Post(serverUrl, form))
        {
            // Thiết lập để nhận dữ liệu stream
            webRequest.downloadHandler = new DownloadHandlerBuffer(); // Dùng DownloadHandlerBuffer để tải raw data
            webRequest.SendWebRequest(); // Gửi request

            // Chờ cho đến khi tải xong hoặc có lỗi xảy ra
            while (!webRequest.isDone)
            {
                if (webRequest.isNetworkError || webRequest.isHttpError)
                {
                    Debug.LogError("Request failed: " + webRequest.error);
                    yield break;
                }

                // Khi đã nhận được đủ dữ liệu (ví dụ: hơn 1024 bytes), phát audio ngay lập tức
                if (webRequest.downloadedBytes > 1024)
                {
                    Debug.Log("đang play");
                    // Lấy dữ liệu byte audio từ response
                    byte[] audioResponseData = webRequest.downloadHandler.data;

                    // Giải mã audio byte thành AudioClip (nếu dữ liệu trả về là WAV)
                    AudioClip audioClip = WavUtility.ToAudioClip(audioResponseData, "AudioStream");

                    // Phát âm thanh ngay lập tức
                    audioSource.clip = audioClip;
                    audioSource.Play();

                }

                yield return null;
            }

            // Kiểm tra nếu request thành công và có dữ liệu
            if (webRequest.isDone && !webRequest.isNetworkError && !webRequest.isHttpError)
            {
                Debug.Log("Audio stream complete.");
            }
        }
    }

    private async Task SendAudioAndPlayStream()
    {
        Debug.Log("Bắt đầu SendAudioAndPlayStream");
        isRequestInProgress = true;
        myakuController.MyakuThinking();

        using (HttpClient client = new HttpClient())
        {
            string conversationId = Guid.NewGuid().ToString(); // Random conversation_id
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

            // Gửi yêu cầu POST với HttpCompletionOption.ResponseHeadersRead
            HttpResponseMessage response = await client.SendAsync(request, HttpCompletionOption.ResponseHeadersRead);

            // Gửi yêu cầu POST đến API
            //HttpResponseMessage response = await client.PostAsync(serverUrl, formContent);

            response.EnsureSuccessStatusCode();

            //using (Stream stream = await response.Content.ReadAsStreamAsync())
            //{
            //    var tempFilePath = Path.Combine(Path.GetTempPath(), "tempAudio.mp3");
            //    using (var fileStream = new FileStream(tempFilePath, FileMode.Create, FileAccess.Write, FileShare.None))
            //    {
            //        await stream.CopyToAsync(fileStream);
            //    }
            // Load the audio file as an AudioClip
            //byte[] audioData = File.ReadAllBytes(tempFilePath);
            //AudioClip audioClip = WavUtility.ToAudioClip(audioData, "tempAudio");

            //// Set the AudioClip to the AudioSource and play it
            //audioSource.clip = audioClip;
            //audioSource.Play();
            //}

            if (response.IsSuccessStatusCode)
            {
                // Phản hồi header đã được nhận
                Debug.Log("Header received. Start receiving stream...");

                Debug.Log("Audio is start playing 111...");
                // Lấy stream âm thanh từ response
                //Stream audioStream = await response.Content.ReadAsStreamAsync();
                using (Stream audioStream = await response.Content.ReadAsStreamAsync())
                {
                    // Tạo file tạm trong thư mục tạm của hệ thống
                    string tempFilePath = Path.Combine(Application.temporaryCachePath, "tempAudio.wav");

                    // Mở FileStream để ghi dữ liệu vào file
                    using (var fileStream = new FileStream(tempFilePath, FileMode.Create, FileAccess.Write, FileShare.None))
                    {
                        // Khởi tạo BufferedWaveProvider để phát âm thanh ngay lập tức
                        waveProvider = new BufferedWaveProvider(new WaveFormat(44100, 16, 2));  // Chỉnh WaveFormat nếu cần
                    waveOutEvent = new WaveOutEvent();
                    waveOutEvent.Init(waveProvider);
                    waveOutEvent.Play();

                    // Đọc stream và thêm vào BufferedWaveProvider để phát
                    byte[] buffer = new byte[4096];
                    int bytesRead;
                    while ((bytesRead = await audioStream.ReadAsync(buffer, 0, buffer.Length)) > 0)
                    {
                        waveProvider.AddSamples(buffer, 0, bytesRead);
                            // Ghi dữ liệu vào file tạm
                            await fileStream.WriteAsync(buffer, 0, bytesRead);
                            Debug.Log($"Written {bytesRead} bytes to temp file.");


                            await Task.Delay(5);  // Thêm độ trễ nhỏ để điều chỉnh tốc độ phát
                        }
                        Debug.Log("Audio is playing and saved to temporary file.");
                    }

                    Debug.Log("Audio is playing...");
                }
            }
            else
            {
                Debug.LogError("Failed to retrieve audio stream from API");
            }
        }
    }


    private IEnumerator WaitAndSendRequest(byte[] audioData, string conversationId)
    {
        isRequestInProgress = true;
        myakuController.MyakuThinking();

        request = new HTTPRequest(new Uri(serverUrl), HTTPMethods.Post, OnRequestFinished);
        request.SetHeader("Content-Type", "multipart/form-data");
        request.AddField("conversation_id", conversationId);
        request.AddBinaryData("audio_file", audioData, "audio_sample.wav", "audio/wav");
        request.StreamChunksImmediately = true;
        request.StreamFragmentSize = 4096;
        request.OnDownloadProgress = OnDownloadProgress;
        request.OnUploadProgress = OnUploadProgressDelegate;
        request.OnStreamingData = OnStreamingDataReceived;
        Debug.Log("Uploading audio...");
        request.Send(); 
        //yield return new WaitUntil(() => request.IsDone);
        yield return new WaitUntil(() => !isRequestInProgress);
        // Nếu yêu cầu thành công, bắt đầu phát âm thanh
        //if (request.Response.IsSuccess)
        //{ 
        //    Debug.Log("không ổn dồi...");
        //    byte[] resAudioData = request.Response.Data;
        //    AudioClip audioClip = WavUtility.ToAudioClip(resAudioData, "AudioStream");
        //    audioSource.clip = audioClip;
        //    audioSource.Play();
        //}
        //else
        //{
        //    Debug.LogError("Audio stream failed: " + request.Response.StatusCode);
        //}
    }

    private void OnDownloadProgress(HTTPRequest request, long downloaded, long downloadLength)
    {
        // Tính toán tỷ lệ tải (phần trăm)
        float progress = (float)downloaded / downloadLength * 100f;
        //Debug.Log($"Download progress: {progress:F2}% ({downloaded} / {downloadLength} bytes)");

    }
    private void OnUploadProgressDelegate(HTTPRequest request, long downloaded, long downloadLength)
    {
        // Tính toán tỷ lệ tải (phần trăm)
        float progress = (float)downloaded / downloadLength * 100f;
       // Debug.Log($"Upload progress: {progress:F2}% ({downloaded} / {downloadLength} bytes)");

    }
    // Callback nhận dữ liệu từng phần (stream)
    private bool OnStreamingDataReceived(HTTPRequest request, HTTPResponse response, byte[] dataFragment, int dataFragmentLength)
    {
        Debug.Log("dataFragmentLength: " + dataFragmentLength);

        StartCoroutine(PlayReceivedAudioChunk(dataFragment));
        // Trả về true để tiếp tục nhận dữ liệu 
        return true;
    }

    private IEnumerator PlayReceivedAudioChunk(byte[] audioData)
    {
        // Chuyển đổi dữ liệu nhận được thành AudioClip
        AudioClip audioClip = WavUtility.ToAudioClip(audioData, "AudioStream");

        // Phát audio ngay lập tức
        if (audioClip != null)
        {
            audioSource.clip = audioClip;
            audioSource.Play();
            Debug.Log("Playing audio chunk." + audioData);

            // Chờ cho đến khi âm thanh phát xong
            yield return new WaitUntil(() => !audioSource.isPlaying);
        }
        else
        {
            Debug.LogError("Failed to create audio clip from chunk.");
        }
    }

    private void OnRequestFinished(HTTPRequest req, HTTPResponse resp)
    {
        try
        {
            if (resp == null || !resp.IsSuccess)
            {
                request.Dispose(); // Giải phóng tài nguyên trong mọi trường hợp
                Debug.LogError("Error uploading audio: " + (resp != null ? resp.Message : "Unknown error"));

                UIManager.Instance.connectionTxt.text = "An error occurred, please help me check the network connection!."; 
                myakuController.animator.SetTrigger("hello");

                return;
            }

            Debug.Log("Audio uploaded successfully. Processing response..."); 
            // Nhận file audio trả về từ server
            byte[] responseAudioData = resp.Data;

            // Phát audio nhận về
           //StartCoroutine(PlayReceivedAudio(responseAudioData));
        }
        finally
        {
            request.Dispose(); // Giải phóng tài nguyên trong mọi trường hợp
            isRequestInProgress = false;
        }  
    }


    private IEnumerator PlayReceivedAudio(byte[] audioData)
    {
        // Lưu file audio nhận được vào bộ nhớ tạm
        string tempFilePath = Path.Combine(Application.temporaryCachePath, "processed_audio.wav");
        File.WriteAllBytes(tempFilePath, audioData);

        // Tải audio file vào AudioClip
        using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip("file://" + tempFilePath, AudioType.MPEG))
        {
            yield return www.SendWebRequest();

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError("Error loading audio: " + www.error);
                yield break;
            }

            AudioClip audioClip = DownloadHandlerAudioClip.GetContent(www);

            myakuController.MyakuAnswer();
            // Phát audio nhận về
            audioSource.clip = audioClip;
            audioSource.Play();
            Debug.Log("Playing received audio.");
            StartCoroutine(CheckAudioFinished());
        }
    }

    private IEnumerator CheckAudioFinished()
    {
        while (audioSource.isPlaying)
        {
            yield return null;
        } 
        // Gọi sự kiện khi audio kết thúc
        onAudioFinished.Invoke();
        float currentStopTime = Time.time;

        if (lastStopTime != 0f)
        {
            float timeDifference = currentStopTime - lastStopTime;

            if (timeDifference > 30f)
            {
                Debug.Log("Khoảng thời gian giữa hai lần gọi hàm là hơn 30 giây.");
                isOver30s = true;
            }
            else
            {
                isOver30s = false;
                Debug.Log("Khoảng thời gian giữa hai lần gọi hàm là dưới 30 giây.");
            }
        }

        // Cập nhật thời gian lần gọi hiện tại
        lastStopTime = currentStopTime;
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

    void FeedAudio(List<byte[]> buffer)
    {
        while (buffer.Count > 0)
        {
            byte[] sourceData = buffer[0];
            float[] data = new float[sourceData.Length - dataPos];

            // byte(0..255) to float(-1..1) conversion
            for (int i = 0; i < data.Length; ++i)
                data[i] = (127 - sourceData[i]) / 128f;

            // give the converted data to the audio clip
            audioSource.clip.SetData(data, samplePos);

            // set up next time's position
            samplePos += data.Length;
            dataPos = 0;

            // remove the processed data
            buffer.RemoveAt(0);

            // for download statistics
            downloadedBytes += sourceData.Length;
        }

        // if not already playing, start playing
        if (!audioSource.isPlaying)
            audioSource.Play();
    }

    /// <summary>
    /// VERY simple wav header parser. For this streaming sample we are only supporting 8 bit PCMs with one channel(mono).
    /// </summary>
    /// <returns>The position, where the actual sound data starts. (Should be 44 - the length of the wav header)</returns>
    int ReadWavData(byte[] data)
    {
        using (BinaryReader br = new BinaryReader(new MemoryStream(data, false)))
        {
            br.ReadChars(4); //"RIFF"
            br.ReadInt32(); // length
            br.ReadChars(4); //"WAVE"
            string chunk = new string(br.ReadChars(4)); //"fmt "
            int chunkLength = br.ReadInt32();

            //1 == uncompressed PCM
            if (br.ReadInt16() != 1)
                throw new Exception("Not supported format");

            if (br.ReadInt16() != 1)
                throw new Exception("Too much channel! Try a mono one.");

            br.ReadInt32();
            bytesPerSec = br.ReadInt32();
            br.ReadInt16(); // block align

            // bits per sample
            if (br.ReadInt16() != 8)
                throw new Exception("Too mutch bits per sample! Try an 8 bit one.");
            br.ReadChars(chunkLength - 16);
            chunk = new string(br.ReadChars(4));
            try
            {
                while (chunk.ToLower() != "data")
                {
                    br.ReadChars(br.ReadInt32());
                    chunk = new string(br.ReadChars(4));
                }
            }
            catch
            {
                throw new Exception("No data found!");
            }

            // chunk length:
            frames = br.ReadInt32();

            lengthInSec = frames / (float)bytesPerSec;

            return (int)br.BaseStream.Position;
        }
    }

}
