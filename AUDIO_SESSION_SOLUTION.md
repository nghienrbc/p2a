# Giải pháp Audio Session cho enableAudioFiltering = true

## Vấn đề
Khi `enableAudioFiltering = true`, âm thanh chỉ được gửi lên OpenAI khi vượt ngưỡng, dẫn đến OpenAI không phát hiện được `input_audio_buffer.speech_stopped`.

## Giải pháp đã triển khai

### Audio Session Logic
1. **Bắt đầu session**: Khi phát hiện âm lượng vượt ngưỡng lần đầu → `isAudioSessionActive = true`
2. **Trong session**: Gửi TẤT CẢ audio (kể cả yên lặng) lên OpenAI
3. **Kết thúc session**: Khi OpenAI phát hiện `speech_stopped` → `isAudioSessionActive = false`

## Quản lý Settings

### MySettingManager
- Thêm `enableAudioFilteringToggle` để bật/tắt audio filtering
- Sử dụng `voiceThresholdInputField` có sẵn cho volume threshold
- Lưu trữ settings vào PlayerPrefs:
  - `EnableAudioFiltering`: bool (0/1)
  - `VoiceThreshold`: float

### HybridRealtimeSpeechController
- Xóa UI controls cũ (`enableAudioFilteringToggle`, `volumeThresholdInput`)
- Load settings từ PlayerPrefs khi khởi động
- Có method `ReloadAudioFilteringSettings()` để reload từ MySettingManager

### Code thay đổi

**Thêm state variable:**
```csharp
private bool isAudioSessionActive = false; // Đã bắt đầu gửi audio lên OpenAI
```

**Logic xử lý audio:**
```csharp
if (enableAudioFiltering)
{
    float currentVolume = CalculateAudioVolume(audioData);
    
    // Nếu chưa bắt đầu audio session và phát hiện âm lượng vượt ngưỡng
    if (!isAudioSessionActive && currentVolume >= volumeThreshold)
    {
        isAudioSessionActive = true;
        LogMessage($"🎤 Audio session started - Volume: {currentVolume:F4} >= Threshold: {volumeThreshold:F4}");
    }
    
    // Nếu đã bắt đầu audio session, gửi tất cả audio (kể cả yên lặng)
    if (isAudioSessionActive)
    {
        byte[] pcmData = ConvertToPCM16(audioData);
        SendAudioToOpenAI(pcmData);
    }
}
```

**Reset session khi OpenAI phát hiện speech_stopped:**
```csharp
case "input_audio_buffer.speech_stopped":
    // Reset audio session - ngừng gửi audio cho đến khi có ngưỡng âm lượng lớn tiếp theo
    if (isAudioSessionActive)
    {
        isAudioSessionActive = false;
        LogMessage("🛑 Audio session ended - Waiting for next volume threshold trigger");
    }
```

## Lợi ích
1. ✅ Giảm xử lý ở OpenAI - chỉ gửi audio khi cần thiết
2. ✅ OpenAI vẫn phát hiện được speech_stopped vì nhận continuous audio stream trong session
3. ✅ Tự động tạo "session" từ lúc bắt đầu nói đến lúc ngừng nói
4. ✅ Không cần thay đổi UI hoặc tham số cấu hình

## Cách hoạt động
1. User im lặng → Không gửi audio
2. User bắt đầu nói (âm lượng > threshold) → Bắt đầu audio session → Gửi tất cả audio
3. User ngừng nói → OpenAI phát hiện silence → Gửi speech_stopped → Kết thúc session
4. Quay lại bước 1 cho lần nói tiếp theo

## Thay đổi đã thực hiện

### HybridRealtimeSpeechController.cs
- ❌ Xóa: `enableAudioFilteringToggle`, `volumeThresholdInput`
- ❌ Xóa: `SetupAudioFilteringUI()`, `OnAudioFilteringToggleChanged()`, `OnVolumeThresholdChanged()`
- ✅ Thêm: `LoadAudioFilteringSettings()`, `ReloadAudioFilteringSettings()`
- ✅ Load settings từ PlayerPrefs khi khởi động

### MySettingMaanger.cs
- ✅ Thêm: `enableAudioFilteringToggle` UI control
- ✅ Thêm: `LoadAudioFilteringSettings()`, `SaveAudioFilteringSettings()`
- ✅ Thêm: `ReloadHybridRealtimeSpeechControllerSettings()`
- ✅ Sử dụng `voiceThresholdInputField` có sẵn cho volume threshold
- ✅ Lưu trữ vào PlayerPrefs: `EnableAudioFiltering`, `VoiceThreshold`
