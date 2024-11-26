using BestHTTP;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.Networking;


public class RecordAudio : MonoBehaviour
{
    public MyakuController myakuController;
    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio"; // URL server xử lý

    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource;
    private bool isRequestInProgress = false;
    private HTTPRequest request;
    private float startTime;
    private float recordingLength;
     
    private AudioClip audioClip; // AudioClip để chứa stream audio
    private bool isPlaying = false;

    private const int sampleRate = 44100; // Sample rate của audio (tùy theo stream của bạn)
    private int channels = 2;            // Số kênh (1: mono, 2: stereo)
    private int bufferSize = 8192;       // Kích thước buffer dữ liệu

    private float[] audioBuffer;
    private int bufferIndex = 0;
    private bool isStreaming = false;


    public UnityEvent onAudioFinished; // Sự kiện khi audio kết thúc

    private void Start()
    {
        onAudioFinished.AddListener(OnAudioFinished);
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

    public void UploadAndProcessAudio()
    { 
        if (isRequestInProgress)
        {
            Debug.LogWarning("A request is already in progress. Please wait.");
            return;
        }

        myakuController.MyakuThinking();

        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }
        // Lấy file audio đã ghi âm từ RecordAudio 
        byte[] audioData = File.ReadAllBytes(audioFilePath);
        string conversationId = Guid.NewGuid().ToString(); // Random conversation_id

        StartCoroutine(WaitAndSendRequest(audioData, conversationId));  
    }
     
  

    private IEnumerator WaitAndSendRequest(byte[] audioData, string conversationId)
    {
        isRequestInProgress = true;

        request = new HTTPRequest(new Uri(serverUrl), HTTPMethods.Post, OnRequestFinished);
        request.SetHeader("Content-Type", "multipart/form-data");
        request.AddField("conversation_id", "4b97d8d1-7182-496b-894f-26f477bf9db5");
        request.AddBinaryData("audio_file", audioData, "audio_sample.mp3", "audio/mpeg");

        Debug.Log("Uploading audio...");
        request.Send();

        yield return new WaitUntil(() => !isRequestInProgress);
    }

    private void OnRequestFinished(HTTPRequest req, HTTPResponse resp)
    {
        //try
        //{
        //    if (resp == null || !resp.IsSuccess)
        //    {
        //        request.Dispose(); // Giải phóng tài nguyên trong mọi trường hợp
        //        Debug.LogError("Error uploading audio: " + (resp != null ? resp.Message : "Unknown error"));

        //        UIManager.Instance.connectionTxt.text = "An error occurred, please help me check the network connection!."; 
        //        myakuController.animator.SetTrigger("hello");

        //        return;
        //    }

        //    Debug.Log("Audio uploaded successfully. Processing response..."); 
        //    // Nhận file audio trả về từ server
        //    byte[] responseAudioData = resp.Data;

        //    // Phát audio nhận về
        //    StartCoroutine(PlayReceivedAudio(responseAudioData));
        //}
        //finally
        //{
        //    request.Dispose(); // Giải phóng tài nguyên trong mọi trường hợp
        //    isRequestInProgress = false;
        //}  
        if (resp.IsSuccess)
        {
            // Phản hồi thành công, đọc stream audio từ response
            StartCoroutine(PlayAudioStream(resp));
        }
        else
        {
            Debug.LogError("Failed to load audio: " + resp.StatusCode);
        }
    }

    IEnumerator PlayAudioStream(HTTPResponse response)
    {
        // Đọc dữ liệu từ stream
        var audioStream = response.DataAsStream;

        // Tạo AudioClip từ stream
        audioClip = AudioClip.Create("StreamedAudio", (int)audioStream.Length, 1, 44100, false);

        // Đọc từng phần dữ liệu stream và cập nhật vào AudioClip
        float[] audioData = new float[audioStream.Length / 2]; // Giả sử mỗi sample là 2 bytes (16-bit PCM)
        int bytesRead = 0;

        while (bytesRead < audioStream.Length)
        {
            // Đọc dữ liệu từ stream
            int chunkSize = Mathf.Min(1024, audioStream.Length - bytesRead); // Đọc theo từng phần nhỏ
            byte[] buffer = new byte[chunkSize];
            int bytesReadThisTime = audioStream.Read(buffer, 0, chunkSize);

            // Chuyển byte sang float và cập nhật AudioClip
            for (int i = 0; i < bytesReadThisTime / 2; i++)
            {
                audioData[i] = (short)(buffer[i * 2] | buffer[i * 2 + 1] << 8) / 32768.0f; // Định dạng 16-bit PCM
            }

            // Update audio clip với dữ liệu mới
            audioClip.SetData(audioData, 0);
            bytesRead += bytesReadThisTime;

            // Phát âm thanh khi đã nhận đủ dữ liệu
            if (!isPlaying && bytesRead >= audioStream.Length)
            {
                audioSource.clip = audioClip;
                audioSource.Play();
                isPlaying = true;
            }

            yield return null; // Chờ cho đến frame tiếp theo
        }
    }

    //private IEnumerator PlayReceivedAudio(byte[] audioData)
    //{
    //    // Lưu file audio nhận được vào bộ nhớ tạm
    //    string tempFilePath = Path.Combine(Application.temporaryCachePath, "processed_audio.mp3");
    //    File.WriteAllBytes(tempFilePath, audioData);

    //    // Tải audio file vào AudioClip
    //    using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip("file://" + tempFilePath, AudioType.MPEG))
    //    {
    //        yield return www.SendWebRequest();

    //        if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
    //        {
    //            Debug.LogError("Error loading audio: " + www.error);
    //            yield break;
    //        }

    //        AudioClip audioClip = DownloadHandlerAudioClip.GetContent(www);

    //        myakuController.MyakuAnswer();
    //        // Phát audio nhận về
    //        audioSource.clip = audioClip;
    //        audioSource.Play();
    //        Debug.Log("Playing received audio.");
    //        StartCoroutine(CheckAudioFinished());
    //    }
    //}

    private System.Collections.IEnumerator CheckAudioFinished()
    {
        while (audioSource.isPlaying)
        {
            yield return null;
        } 
        // Gọi sự kiện khi audio kết thúc
        onAudioFinished.Invoke();
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
}
