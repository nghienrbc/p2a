# 🚀 Gemini Live API Setup Guide

## Giới thiệu
`GeminiLiveSpeechController.cs` là phiên bản nâng cao sử dụng Gemini Live API với WebSocket để đạt được:
- **Ultra-low latency**: < 500ms response time
- **Real-time streaming**: Audio được stream liên tục thay vì gửi chunks
- **Native audio support**: Chất lượng giọng nói tự nhiên nhất
- **Voice Activity Detection**: Do API xử lý, chính xác hơn

## 📋 Requirements

### 1. WebSocket Package
Cài đặt NativeWebSocket package qua Unity Package Manager:

```
Window → Package Manager → + → Add package from git URL:
https://github.com/endel/NativeWebSocket.git#upm
```

**Hoặc** thêm vào `Packages/manifest.json`:
```json
{
  "dependencies": {
    "com.endel.nativewebsocket": "https://github.com/endel/NativeWebSocket.git#upm"
  }
}
```

### 2. Gemini API Key
- Đảm bảo API key có quyền truy cập Gemini Live API
- Cập nhật `geminiApiKey` trong Inspector

### 3. Model Configuration
Chọn model phù hợp:
- **Native Audio** (recommended): `gemini-2.5-flash-preview-native-audio-dialog`
- **Half-Cascade**: `gemini-live-2.5-flash-preview`

## 🔧 Setup Instructions

### Step 1: Add Script to Scene
1. Tạo empty GameObject → đặt tên "GeminiLiveManager"
2. Add component `GeminiLiveSpeechController`
3. Assign các UI references trong Inspector

### Step 2: Configure Settings
```csharp
[Header("Gemini Live API Configuration")]
geminiApiKey = "YOUR_API_KEY_HERE"
useNativeAudioModel = true  // Recommended for best quality

[Header("Live API Features")]
enableVoiceActivityDetection = true
enableSessionManagement = true
enableThinkingMode = false  // Enable for complex responses

[Header("Audio Parameters")]
inputSampleRate = 16000    // Required by API
outputSampleRate = 24000   // API output format
bufferSize = 1024         // Streaming buffer
```

### Step 3: Update UI References
Assign trong Inspector:
- `startButton`: Button để start live session
- `statusText`: Hiển thị trạng thái session
- `logText`: Debug logs
- `audioSource`: Phát audio response
- `userQuestionText`: Hiển thị câu hỏi user
- `aiResponseText`: Hiển thị response AI
- `myakuController`: Animation controller

## 🎯 Usage Comparison

### EnhancedSpeechController (REST API)
```csharp
// Traditional approach
1. Record audio chunk
2. Stop recording
3. Send to Gemini API
4. Wait for text response
5. Send text to TTS API
6. Play audio response
// Total: ~2-3 seconds
```

### GeminiLiveSpeechController (WebSocket)
```csharp
// Live streaming approach
1. Continuous audio streaming
2. Real-time API processing
3. Immediate audio response
4. Overlapping conversations possible
// Total: ~300-500ms
```

## 🚀 Performance Benefits

| Feature | Enhanced (REST) | Live (WebSocket) |
|---------|----------------|------------------|
| Latency | 2-3 seconds | 300-500ms |
| Audio Quality | TTS synthetic | Native/Natural |
| Interruption | Not supported | Supported |
| Conversation Flow | Turn-based | Real-time |
| CPU Usage | Medium | Low |
| Bandwidth | Burst | Continuous |

## 🎮 Controls

### Public Methods
```csharp
// Start live session
GeminiLiveSpeechController.Instance.StartLiveSession();

// Stop live session
GeminiLiveSpeechController.Instance.StopLiveSession();

// Reload settings
GeminiLiveSpeechController.Instance.ReloadVoiceDetectionSettings();
```

### Wake Word Integration
- "Hey DT" automatically starts live session
- Same AudioPlugin integration as EnhancedSpeechController

## 🔧 Troubleshooting

### Common Issues

1. **WebSocket Connection Failed**
   ```
   Check API key permissions
   Ensure internet connectivity
   Verify model availability
   ```

2. **Audio Not Streaming**
   ```
   Check microphone permissions
   Verify sample rate (must be 16000Hz)
   Check buffer size settings
   ```

3. **No Audio Response**
   ```
   Verify AudioSource component
   Check output sample rate (24000Hz)
   Ensure response modalities include "AUDIO"
   ```

### Debug Logs
Enable detailed logging:
```csharp
showRealTimeAudioLevel = true  // Show audio levels
// Check Console for WebSocket messages
```

## 🔄 Migration from EnhancedSpeechController

### Option 1: Replace Completely
1. Backup current scene
2. Replace `EnhancedSpeechController` with `GeminiLiveSpeechController`
3. Update UI references
4. Test thoroughly

### Option 2: Side-by-side (Recommended)
1. Keep both scripts in scene
2. Add toggle in UI to switch between modes
3. Disable one at a time during runtime

### Example Toggle Code:
```csharp
public void SwitchToLiveMode()
{
    EnhancedSpeechController.Instance.gameObject.SetActive(false);
    GeminiLiveSpeechController.Instance.gameObject.SetActive(true);
}

public void SwitchToEnhancedMode()
{
    GeminiLiveSpeechController.Instance.gameObject.SetActive(false);
    EnhancedSpeechController.Instance.gameObject.SetActive(true);
}
```

## 📊 Performance Monitoring

### Real-time Metrics
- Audio level monitoring
- WebSocket connection status
- Response latency tracking
- Voice detection accuracy

### UI Indicators
- `WarningTxt`: Real-time audio levels
- `statusText`: Session status
- `logText`: Detailed debug info

## 🎵 Audio Configuration

### Input Requirements (to API)
```
Format: 16-bit PCM
Sample Rate: 16000 Hz
Channels: Mono
Encoding: Base64 for streaming
```

### Output Format (from API)
```
Format: 16-bit PCM  
Sample Rate: 24000 Hz
Channels: Mono
Playback: Direct AudioClip
```

## 🌐 Network Considerations

### Bandwidth Usage
- Continuous streaming: ~32 kbps upload
- Response audio: ~48 kbps download
- Total: ~80 kbps sustained

### Connection Requirements
- Stable internet (WiFi recommended)
- Low packet loss (<1%)
- Consistent latency (<100ms to Google servers)

## 🔮 Future Enhancements

### Planned Features
1. **Multi-language detection** in real-time
2. **Emotion recognition** from voice
3. **Speaker identification** for multi-user scenarios
4. **Background noise suppression** 
5. **Conversation summarization**

### Advanced Usage
- Integration with other Google AI services
- Custom model fine-tuning
- Multi-modal input (video + audio)

---

**💡 Tip**: Start with `useNativeAudioModel = true` and `enableVoiceActivityDetection = true` for optimal experience!

**🚨 Important**: Gemini Live API is still in preview - expect occasional updates to the API interface. 