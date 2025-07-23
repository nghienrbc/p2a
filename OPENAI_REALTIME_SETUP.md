# 🎤 OpenAI Realtime API Speech-to-Speech Setup Guide

## 🚀 **QUICK SETUP**

### **Step 1: Chuẩn bị API Key**
1. Truy cập [OpenAI Platform](https://platform.openai.com/api-keys)
2. Tạo API key mới với quyền truy cập Realtime API
3. **Lưu ý**: Realtime API hiện tại chỉ available cho paid accounts

### **Step 2: Setup trong Scene Test**
1. Mở scene **TestScene** (hoặc scene test hiện tại của bạn)
2. Tìm GameObject có script test speech hiện tại
3. **Thay thế** script cũ bằng `OpenAIRealtimeSpeechController`

### **Step 3: Configure Script**
Trong Inspector của `OpenAIRealtimeSpeechController`:

```
OpenAI Configuration:
├── OpenAI Api Key: [Nhập API key của bạn]
├── Model: gpt-4o-realtime-preview-2024-10-01
└── Voice: alloy (hoặc: echo, fable, onyx, nova, shimmer)

Audio Configuration:
├── Sample Rate: 24000 (OpenAI yêu cầu 24kHz)
├── Recording Chunk Size: 0.1
└── Audio Format: pcm16

UI References:
├── Start Button: [Drag button Start]
├── Stop Button: [Drag button Stop]  
├── Status Text: [Drag status text]
├── Log Text: [Drag log text]
└── Audio Source: [Auto-assigned]
```

### **Step 4: Test Connection**
1. **Play** scene
2. **Click START** button
3. **Nói** câu hỏi (ví dụ: "Hello, how are you?")
4. **Đợi** AI trả lời realtime

---

## 🎯 **CÁCH HOẠT ĐỘNG**

### **Realtime Flow:**
```
1. Click START → Kết nối WebSocket với OpenAI
2. Tạo session → Cấu hình voice, audio format
3. Bắt đầu thu âm → Gửi audio chunks realtime
4. OpenAI xử lý → Trả về audio response realtime  
5. Phát audio → Tiếp tục lắng nghe câu hỏi mới
```

### **Expected Logs:**
```
🎤 OpenAI Realtime Speech Controller Ready
🚀 Starting OpenAI Realtime session...
✅ WebSocket connected to OpenAI Realtime API
✅ Session created successfully
🎤 Recording started - Sample rate: 24000Hz
🎤 Speech detected
📝 You said: Hello, how are you?
🤖 AI response started
💬 AI: I'm doing well, thank you for asking!
🔊 AI is speaking...
✅ AI response completed
🎤 Ready for next question...
```

---

## 🔧 **TROUBLESHOOTING**

### **❌ API Key Issues**
```
Error: "OpenAI API Key is required!"
Solution: Nhập API key trong Inspector field "OpenAI Api Key"

Error: "WebSocket connection timeout"
Solution: 
- Kiểm tra API key có đúng không
- Kiểm tra internet connection
- Verify account có access Realtime API
```

### **❌ Audio Issues**
```
Error: "No microphone devices found!"
Solution: 
- Grant microphone permission
- Check microphone is connected
- Restart Unity if needed

Error: Recording failed
Solution:
- Check microphone permissions in build settings
- Try different sample rate (24000Hz recommended)
```

### **❌ WebSocket Issues**
```
Error: "WebSocket error: Unauthorized"
Solution:
- Verify API key is correct
- Check account has Realtime API access
- Ensure sufficient credits

Error: "Connection closed"
Solution:
- Check network connectivity
- Verify WebSocket support on platform
- Try reconnecting
```

---

## ⚙️ **ADVANCED CONFIGURATION**

### **Voice Options:**
- **alloy**: Balanced, natural voice
- **echo**: Clear, professional voice  
- **fable**: Expressive, storytelling voice
- **onyx**: Deep, authoritative voice
- **nova**: Bright, energetic voice
- **shimmer**: Soft, gentle voice

### **Audio Quality:**
```csharp
// Trong script, có thể điều chỉnh:
sampleRate = 24000;  // OpenAI yêu cầu 24kHz
recordingChunkSize = 0.1f;  // Gửi audio mỗi 100ms
audioFormat = "pcm16";  // PCM 16-bit format
```

### **Session Instructions:**
```csharp
// Có thể customize AI behavior:
instructions = "You are a helpful AI assistant for ASEAN tourism. " +
               "Respond naturally and provide information about ASEAN countries.";
```

---

## 🎮 **PLATFORM SUPPORT**

### **✅ Supported Platforms:**
- **Windows** (Editor & Standalone)
- **Android** (với microphone permission)
- **iOS** (với microphone permission)
- **WebGL** (limited WebSocket support)

### **📱 Mobile Setup:**
1. **Android**: Enable microphone permission in Player Settings
2. **iOS**: Add microphone usage description
3. **Build Settings**: Ensure WebSocket support enabled

---

## 🔄 **INTEGRATION WITH EXISTING CODE**

### **Thay thế script cũ:**
```csharp
// Thay vì SimpleGeminiSpeechTest hoặc GeminiLiveSpeechController
// Sử dụng OpenAIRealtimeSpeechController

// Giữ nguyên UI setup:
// - Start Button
// - Stop Button  
// - Status Text
// - Log Text
```

### **API Key Management:**
```csharp
// Có thể load từ file config:
private void LoadApiKey()
{
    string configPath = Path.Combine(Application.persistentDataPath, "config.json");
    if (File.Exists(configPath))
    {
        var config = JsonConvert.DeserializeObject<Config>(File.ReadAllText(configPath));
        openAIApiKey = config.openAIApiKey;
    }
}
```

---

## 📊 **PERFORMANCE TIPS**

### **Optimize Audio:**
- Sử dụng 24kHz sample rate (yêu cầu của OpenAI)
- Chunk size 100ms để balance latency vs bandwidth
- PCM16 format cho quality tốt nhất

### **Optimize WebSocket:**
- Reuse connection cho multiple conversations
- Handle reconnection automatically
- Buffer audio chunks để tránh lag

### **Memory Management:**
- Clear audio queue sau mỗi response
- Limit log messages để tránh memory leak
- Dispose AudioClips sau khi sử dụng

---

## 🎯 **NEXT STEPS**

1. **Test** với scene hiện tại
2. **Customize** voice và instructions theo nhu cầu
3. **Integrate** với Myaku controller nếu cần
4. **Deploy** lên mobile để test realtime performance
5. **Monitor** usage và costs trên OpenAI dashboard
