using BestHTTP;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.Networking;

public class RecordAudio : MonoBehaviour
{
    private string serverUrl = "http://145.223.21.25:8001/audio-to-audio"; // URL server xử lý

    private AudioClip recordedClip;
    [SerializeField] AudioSource audioSource; 

    public void StartRecording()
    {
        string device = Microphone.devices.Length > 0 ? Microphone.devices[0] : "";
        if(device != "")
        { 
            int sampleRate = 44100;
            int lengthSec = 3599; 
            recordedClip = Microphone.Start(device, false, lengthSec, sampleRate);
        }
    }

    public void StopRecording()
    {
        Microphone.End(null);
    }

    public void PlayRecording()
    {
        Debug.Log("Play audio");
        audioSource.clip = recordedClip;
        audioSource.Play();
    }

    public void UploadAndProcessAudio()
    {
        if (!HasRecordedAudio())
        {
            Debug.LogError("No recorded audio available to upload.");
            return;
        }

        // Lấy file audio đã ghi âm từ RecordAudio
        byte[] audioData = GetAudioData();
        string conversationId = Guid.NewGuid().ToString(); // Random conversation_id

        // Tạo yêu cầu POST
        HTTPRequest request = new HTTPRequest(new Uri(serverUrl), HTTPMethods.Post, OnRequestFinished);

        // Đặt content type là audio/mpeg
        request.SetHeader("Content-Type", "audio/mpeg");

        // Tạo form data
        request.AddField("conversation_id", "4b97d8d1-7182-496b-894f-26f477bf9db5");

        // Đặt audio file
        request.AddBinaryData("audio_file", audioData, "recorded_audio.mp3", "audio/mpeg");

        Debug.Log("Uploading audio...");
        request.Send();
    }

    private void OnRequestFinished(HTTPRequest req, HTTPResponse resp)
    {
        if (resp == null || !resp.IsSuccess)
        {
            Debug.LogError("Error uploading audio: " + (resp != null ? resp.Message : "Unknown error"));
            return;
        }

        Debug.Log("Audio uploaded successfully. Processing response...");

        // Nhận file audio trả về từ server
        byte[] responseAudioData = resp.Data;

        // Phát audio nhận về
        StartCoroutine(PlayReceivedAudio(responseAudioData));
    }

    private IEnumerator PlayReceivedAudio(byte[] audioData)
    {
        // Lưu file audio nhận được vào bộ nhớ tạm
        string tempFilePath = Path.Combine(Application.temporaryCachePath, "processed_audio.mp3");
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

            // Phát audio nhận về
            audioSource.clip = audioClip;
            audioSource.Play();
            Debug.Log("Playing received audio.");
        }
    }
    public bool HasRecordedAudio()
    {
        return recordedClip != null;
    }

    public byte[] GetAudioData()
    {
        if (recordedClip == null)
        {
            Debug.LogError("No recorded clip available.");
            return null;
        }

        // Trích xuất dữ liệu âm thanh từ AudioClip
        float[] samples = new float[recordedClip.samples * recordedClip.channels];
        recordedClip.GetData(samples, 0);

        // Chuyển đổi float[] thành byte[] (PCM 16-bit)
        byte[] audioData = ConvertFloatToPCM16(samples);

        return audioData;
    }

    private byte[] ConvertFloatToPCM16(float[] samples)
    {
        // Tạo byte[] với kích thước gấp đôi float[] (2 byte cho mỗi mẫu PCM 16-bit)
        byte[] pcm16Data = new byte[samples.Length * 2];
        for (int i = 0; i < samples.Length; i++)
        {
            // Giới hạn giá trị float từ -1.0 đến 1.0 trong dải PCM 16-bit (-32768 đến 32767)
            short pcmSample = (short)Mathf.Clamp(samples[i] * 32767, -32768, 32767);

            // Chuyển đổi short thành 2 byte (Little Endian)
            pcm16Data[i * 2] = (byte)(pcmSample & 0xFF);
            pcm16Data[i * 2 + 1] = (byte)((pcmSample >> 8) & 0xFF);
        }

        return pcm16Data;
    }

}
