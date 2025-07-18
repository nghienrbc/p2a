using System;
using System.IO;
using UnityEngine;

/// <summary>
/// Utility class for saving AudioClip to WAV files
/// </summary>
public static class WavUtility
{
    const int HEADER_SIZE = 44;

    public static bool Save(string filePath, AudioClip clip)
    {
        if (!filePath.ToLower().EndsWith(".wav"))
        {
            filePath += ".wav";
        }

        var dirPath = Path.GetDirectoryName(filePath);
        if (!Directory.Exists(dirPath))
        {
            Directory.CreateDirectory(dirPath);
        }

        // Delete existing file
        if (File.Exists(filePath))
        {
            File.Delete(filePath);
        }

        float[] samples = new float[clip.samples];
        clip.GetData(samples, 0);

        using (FileStream fileStream = File.Create(filePath))
        {
            ConvertAndWrite(fileStream, samples, clip.frequency, clip.channels);
        }

        return true;
    }

    private static void ConvertAndWrite(FileStream fileStream, float[] samples, int frequency, int channels)
    {
        var hz = frequency;
        var length = samples.Length;
        var bytesPerSample = 2;

        var fileSize = 36 + length * bytesPerSample;
        var byteRate = hz * channels * bytesPerSample;

        // RIFF header
        var riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
        fileStream.Write(riff, 0, 4);

        var chunkSize = BitConverter.GetBytes(fileSize);
        fileStream.Write(chunkSize, 0, 4);

        var wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
        fileStream.Write(wave, 0, 4);

        // Format sub-chunk
        var fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
        fileStream.Write(fmt, 0, 4);

        var subChunk1 = BitConverter.GetBytes(16);
        fileStream.Write(subChunk1, 0, 4);

        var audioFormat = BitConverter.GetBytes((ushort)1);
        fileStream.Write(audioFormat, 0, 2);

        var numChannels = BitConverter.GetBytes((ushort)channels);
        fileStream.Write(numChannels, 0, 2);

        var sampleRate = BitConverter.GetBytes(hz);
        fileStream.Write(sampleRate, 0, 4);

        var byteRateBytes = BitConverter.GetBytes(byteRate);
        fileStream.Write(byteRateBytes, 0, 4);

        var blockAlign = (ushort)(channels * bytesPerSample);
        fileStream.Write(BitConverter.GetBytes(blockAlign), 0, 2);

        var bitsPerSample = BitConverter.GetBytes((ushort)(bytesPerSample * 8));
        fileStream.Write(bitsPerSample, 0, 2);

        // Data sub-chunk
        var dataString = System.Text.Encoding.UTF8.GetBytes("data");
        fileStream.Write(dataString, 0, 4);

        var subChunk2 = BitConverter.GetBytes(length * bytesPerSample);
        fileStream.Write(subChunk2, 0, 4);

        // Convert and write samples
        foreach (var sample in samples)
        {
            var intData = (short)(sample * short.MaxValue);
            var bytesData = BitConverter.GetBytes(intData);
            fileStream.Write(bytesData, 0, bytesData.Length);
        }
    }
}