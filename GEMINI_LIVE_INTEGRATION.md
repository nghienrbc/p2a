# Tích hợp Gemini Live API cho Speech-to-Speech

## Tổng quan

Đã thay thế quy trình speech-to-text cũ (whisper-large-v3-turbo + OpenAI + Google TTS) bằng **Gemini Live API** để có được:

- **Speech-to-Speech trực tiếp** với độ trễ thấp
- **Voice Activity Detection (VAD)** tự động
- **Nhận dạng đa ngôn ngữ** tự động
- **Chất lượng âm thanh tự nhiên** với native audio
- **Hiệu suất cao hơn** và đơn giản hóa architecture

## Các thay đổi chính

### 1. Thay thế RecordQuestion()
- **Trước**: RecordAudioPhase → TranscribeAudioPhase → GenerateAnswerPhase → TextToSpeechAndPlayPhase
- **Sau**: GeminiLiveConversation() - một quy trình speech-to-speech duy nhất

### 2. Tính năng mới
- **Real-time streaming**: Audio được stream trực tiếp đến Gemini Live
- **Voice Activity Detection**: Tự động phát hiện khi người dùng bắt đầu/kết thúc nói
- **Interruption handling**: Có thể ngắt lời AI khi đang trả lời
- **Native audio output**: Chất lượng giọng nói tự nhiên hơn

### 3. Cấu hình
```json
{
  "geminiApiKey": "YOUR_GEMINI_API_KEY_HERE"
}
```

## Luồng hoạt động mới

### 1. Khởi tạo Session
```csharp
InitializeGeminiLiveSession()
├── Kết nối WebSocket đến Gemini Live API
├── Gửi setup message với cấu hình
│   ├── Model: gemini-2.5-flash-preview-native-audio-dialog
│   ├── Response modality: AUDIO
│   ├── Voice: Aoede
│   └── System instruction: Tenaya personality
└── Bắt đầu listening cho responses
```

### 2. Audio Streaming
```csharp
StartGeminiAudioStreaming()
├── Kiểm tra quyền microphone
├── Tạm dừng BackgroundAudioPlugin
├── Bắt đầu RecordAndStreamToGemini()
│   ├── Ghi âm real-time (16kHz, mono)
│   ├── Voice Activity Detection
│   ├── Chuyển đổi sang 16-bit PCM
│   ├── Stream đến Gemini Live
│   └── Gửi audioStreamEnd khi kết thúc
└── Khôi phục BackgroundAudioPlugin
```

### 3. Response Processing
```csharp
ListenForGeminiResponses()
├── Nhận WebSocket messages
├── ProcessGeminiResponse()
│   ├── Parse JSON response
│   ├── Extract audio data (base64)
│   ├── Convert to AudioClip (24kHz)
│   └── Play through AudioSource
└── Handle turn complete/interruption
```

## Ưu điểm của Gemini Live API

### 1. Hiệu suất
- **Độ trễ thấp**: ~200-500ms so với ~2-5s của quy trình cũ
- **Streaming real-time**: Không cần chờ hoàn thành ghi âm
- **Native audio**: Không cần TTS riêng biệt

### 2. Chất lượng
- **Voice Activity Detection**: Tự động phát hiện speech boundaries
- **Natural speech**: Giọng nói tự nhiên hơn với emotion và intonation
- **Multilingual**: Tự động nhận dạng và phản hồi bằng ngôn ngữ phù hợp

### 3. Đơn giản
- **Một API call**: Thay vì 3 API calls riêng biệt
- **Ít error handling**: Gemini Live xử lý nhiều edge cases
- **Automatic language detection**: Không cần detect language riêng

## Cấu hình chi tiết

### Model Configuration
```csharp
model = "gemini-2.5-flash-preview-native-audio-dialog"
response_modalities = ["AUDIO"]
voice_name = "Aoede"
```

### Audio Settings
- **Input**: 16kHz, 16-bit PCM, mono
- **Output**: 24kHz, 16-bit PCM, mono
- **Streaming**: Real-time chunks

### Voice Activity Detection
- **Start sensitivity**: Tự động
- **End sensitivity**: 3 giây im lặng
- **Timeout**: 10 giây không có tiếng nói
- **Max duration**: 30 giây

## Xử lý lỗi

### 1. Connection Issues
- Retry connection với exponential backoff
- Fallback về quy trình cũ nếu cần

### 2. Audio Issues
- Kiểm tra quyền microphone
- Validate audio format
- Handle WebSocket disconnection

### 3. API Limits
- Monitor usage và rate limits
- Implement queuing nếu cần

## Testing và Debug

### 1. Logs quan trọng
```
"Gemini Live WebSocket connected successfully"
"Setup message sent successfully"
"Audio stream end signal sent"
"Gemini turn completed"
```

### 2. Error patterns
```
"Error initializing Gemini Live session"
"Error sending audio to Gemini"
"Error receiving from Gemini Live"
```

### 3. Performance metrics
- Connection time: < 2s
- First response: < 1s
- Audio quality: 24kHz native

## Migration Notes

### Backward Compatibility
- Quy trình cũ vẫn được giữ lại (commented)
- Có thể switch back bằng cách thay đổi RecordQuestion()

### Configuration
- Thêm `geminiApiKey` vào config.json
- Các API keys khác vẫn được giữ cho fallback

### Dependencies
- Thêm System.Net.WebSockets
- Thêm System.Threading
- Giữ nguyên các dependencies cũ

## Hướng dẫn Setup và Test

### 1. Lấy Gemini API Key
1. Truy cập [Google AI Studio](https://aistudio.google.com/)
2. Đăng nhập với Google account
3. Tạo API key mới
4. Copy API key

### 2. Cấu hình API Key
Mở file `Assets/Resources/config.json` và thêm:
```json
{
  "geminiApiKey": "YOUR_ACTUAL_GEMINI_API_KEY_HERE"
}
```

### 3. Test Gemini Live API
1. **Build và chạy ứng dụng**
2. **Kiểm tra logs quan trọng:**
   - "Gemini Live WebSocket connected successfully"
   - "Setup message sent successfully"
   - "Gemini Live setup completed"

3. **Test speech-to-speech:**
   - Nói "Hey DT" để kích hoạt
   - Nói câu hỏi bằng tiếng Việt hoặc tiếng Anh
   - Kiểm tra phản hồi audio từ Tenaya

### 4. Troubleshooting

#### Lỗi kết nối WebSocket
```
Error: "Failed to connect to Gemini Live"
```
**Giải pháp:**
- Kiểm tra API key đúng format
- Kiểm tra kết nối internet
- Kiểm tra firewall/proxy settings

#### Lỗi Audio không phát
```
Error: "Error playing Gemini audio"
```
**Giải pháp:**
- Kiểm tra AudioSource component
- Kiểm tra volume settings
- Kiểm tra audio format (24kHz, 16-bit)

#### Lỗi Microphone
```
Error: "Cannot find any microphone device"
```
**Giải pháp:**
- Cấp quyền microphone cho app
- Kiểm tra microphone hardware
- Test trên device thật (không phải emulator)

### 5. Performance Monitoring

#### Metrics quan trọng:
- **Connection time**: < 2 giây
- **First response**: < 1 giây
- **Audio latency**: < 500ms
- **Voice detection**: < 100ms

#### Debug logs:
```csharp
Debug.Log($"Connection time: {connectionTime}ms");
Debug.Log($"Audio chunk sent: {audioData.Length} bytes");
Debug.Log($"Response received: {responseTime}ms");
```

### 6. Fallback Strategy

Nếu Gemini Live API không khả dụng, có thể fallback về quy trình cũ:

```csharp
// Trong RecordQuestion(), thay đổi:
if (string.IsNullOrEmpty(geminiApiKey) || !isGeminiLiveAvailable)
{
    // Fallback to old process
    yield return StartCoroutine(OldRecordQuestionProcess());
}
else
{
    // Use Gemini Live
    yield return StartCoroutine(GeminiLiveConversation());
}
```

### 7. Optimization Tips

#### Giảm độ trễ:
- Sử dụng smaller audio chunks (256 samples)
- Optimize WebSocket buffer size
- Pre-warm connection

#### Cải thiện chất lượng:
- Noise reduction preprocessing
- Audio gain normalization
- Echo cancellation

#### Tiết kiệm bandwidth:
- Audio compression (nếu Gemini hỗ trợ)
- Adaptive bitrate
- Connection pooling

### 8. Security Considerations

#### API Key Protection:
- Không hardcode API key trong code
- Sử dụng environment variables
- Implement key rotation

#### Audio Privacy:
- Local audio processing khi có thể
- Encrypt audio streams
- Clear audio buffers sau khi sử dụng

### 9. Monitoring và Analytics

#### Track metrics:
- Success rate của speech recognition
- Average response time
- User satisfaction scores
- Error frequency

#### Logging:
```csharp
// Log user interactions
Analytics.LogEvent("speech_to_speech_started");
Analytics.LogEvent("speech_recognition_success", responseTime);
Analytics.LogEvent("audio_playback_completed");
```
