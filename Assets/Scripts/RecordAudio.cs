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
    private bool isRequestInProgress = false;
    private HTTPRequest request;
    private float startTime;
    private float recordingLength;

    public void StartRecording()
    {
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
        //if (!HasRecordedAudio())
        //{
        //    Debug.LogError("No recorded audio available to upload.");
        //    return;
        //}

        if (isRequestInProgress)
        {
            Debug.LogWarning("A request is already in progress. Please wait.");
            return;
        }


        string  audioFilePath = Path.Combine(Application.persistentDataPath, "audio_record.wav");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }
        // Lấy file audio đã ghi âm từ RecordAudio
        //byte[] audioData = GetAudioData();
        byte[] audioData = File.ReadAllBytes(audioFilePath);
        string conversationId = Guid.NewGuid().ToString(); // Random conversation_id

        StartCoroutine(WaitAndSendRequest(audioData, conversationId));  
    }

    public void UploadAndProcessAudio2()
    {
        //if (!HasRecordedAudio())
        //{
        //    Debug.LogError("No recorded audio available to upload.");
        //    return;
        //}

        if (isRequestInProgress)
        {
            Debug.LogWarning("A request is already in progress. Please wait.");
            return;
        }


        string audioFilePath = Path.Combine(Application.persistentDataPath, "audio_sample.mp3");

        if (!File.Exists(audioFilePath))
        {
            Debug.LogError("Audio file not found at path: " + audioFilePath);
            return;
        }
        // Lấy file audio đã ghi âm từ RecordAudio
        //byte[] audioData = GetAudioData();
        byte[] audioData = File.ReadAllBytes(audioFilePath);
        string conversationId = Guid.NewGuid().ToString(); // Random conversation_id

        StartCoroutine(WaitAndSendRequest(audioData, conversationId));
    }

    //public static void ConvertPCMToMP3(float[] samples, int sampleRate, int channels, string outputPath)
    //{
    //    // Tạo file WAV từ dữ liệu PCM
    //    byte[] wavData = ConvertToWAV(samples, sampleRate, channels);

    //    using (var mp3FileStream = new FileStream(outputPath, FileMode.Create))
    //    using (var wavStream = new MemoryStream(wavData))
    //    using (var reader = new RawSourceWaveStream(wavStream, new WaveFormat(sampleRate, 16, channels)))
    //    using (var writer = new LameMP3FileWriter(mp3FileStream, reader.WaveFormat, LAMEPreset.VBR_90))
    //    {
    //        reader.CopyTo(writer);
    //    }
    //}

    private static byte[] ConvertToWAV(float[] samples, int sampleRate, int channels)
    {
        using (var memoryStream = new MemoryStream())
        {
            using (var writer = new BinaryWriter(memoryStream))
            {
                // Ghi header WAV
                writer.Write(new[] { 'R', 'I', 'F', 'F' });
                writer.Write(36 + samples.Length * 2); // Chunk size
                writer.Write(new[] { 'W', 'A', 'V', 'E' });
                writer.Write(new[] { 'f', 'm', 't', ' ' });
                writer.Write(16); // Subchunk size
                writer.Write((short)1); // Audio format (PCM)
                writer.Write((short)channels);
                writer.Write(sampleRate);
                writer.Write(sampleRate * channels * 2);
                writer.Write((short)(channels * 2)); // Block align
                writer.Write((short)16); // Bits per sample
                writer.Write(new[] { 'd', 'a', 't', 'a' });
                writer.Write(samples.Length * 2);

                // Ghi dữ liệu PCM
                foreach (float sample in samples)
                {
                    short pcmSample = (short)Mathf.Clamp(sample * 32767, -32768, 32767);
                    writer.Write(pcmSample);
                }
            }
            return memoryStream.ToArray();
        }
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
        try
        {
            if (resp == null || !resp.IsSuccess)
            {
                request.Dispose(); // Giải phóng tài nguyên trong mọi trường hợp
                Debug.LogError("Error uploading audio: " + (resp != null ? resp.Message : "Unknown error"));
                return;
            }

            Debug.Log("Audio uploaded successfully. Processing response..."); 
            // Nhận file audio trả về từ server
            byte[] responseAudioData = resp.Data;

            // Phát audio nhận về
            StartCoroutine(PlayReceivedAudio(responseAudioData));
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
        //float[] samples = new float[recordedClip.samples * recordedClip.channels];
        //recordedClip.GetData(samples, 0);
        //byte[] wavData = ConvertToWAV(samples, recordedClip.frequency, recordedClip.channels);

        byte[] mp3 = WavToMp3.ConvertWavToMp3(recordedClip, 128);
        //EncodeMP3.SaveMp3(recordedClip, $"{Application.streamingAssetsPath}/mp3File", 128);
        // Trích xuất dữ liệu âm thanh từ AudioClip

        // Chuyển đổi float[] thành byte[] (PCM 16-bit)
        //byte[] audioData = ConvertFloatToPCM16(samples);

        return mp3;
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
