# 🎤 OpenAI Realtime API - Example Usage

## 📋 **Ví dụ Setup trong Scene Test hiện tại**

### **Bước 1: Thay thế Script hiện tại**

Nếu bạn đang sử dụng `SimpleGeminiSpeechTest` hoặc `GeminiLiveSpeechController`, hãy thay thế bằng `OpenAIRealtimeSpeechController`:

```csharp
// Trong GameObject hiện tại của bạn:
// 1. Remove component cũ (SimpleGeminiSpeechTest)
// 2. Add component OpenAIRealtimeSpeechController
// 3. Assign các UI references như cũ
```

### **Bước 2: Configure trong Inspector**

```
OpenAI Realtime Speech Controller (Script)
├── UI References
│   ├── Start Button: [Drag button Start từ scene]
│   ├── Stop Button: [Drag button Stop từ scene]
│   ├── Status Text: [Drag status text từ scene]
│   ├── Log Text: [Drag log text từ scene]
│   └── Audio Source: [Auto-assigned hoặc drag AudioSource]
│
├── OpenAI Configuration
│   ├── OpenAI Api Key: "sk-..." [Nhập API key của bạn]
│   ├── Model: "gpt-4o-realtime-preview-2024-10-01"
│   └── Voice: "alloy" [hoặc echo, fable, onyx, nova, shimmer]
│
├── Audio Configuration
│   ├── Sample Rate: 24000
│   ├── Recording Chunk Size: 0.1
│   └── Audio Format: "pcm16"
│
└── Session Configuration
    ├── Voice: "alloy"
    └── Enable Input Audio Transcription: ✓
```

---

## 🎯 **Test Flow Example**

### **Scenario 1: Basic Conversation**
```
1. User clicks START button
   → Status: "Connecting to OpenAI..."
   → Log: "🚀 Starting OpenAI Realtime session..."

2. WebSocket connects
   → Status: "🎤 Listening... Speak now!"
   → Log: "✅ WebSocket connected to OpenAI Realtime API"

3. User speaks: "Hello, how are you today?"
   → Log: "🎤 Speech detected"
   → Log: "📝 You said: Hello, how are you today?"

4. AI processes and responds
   → Status: "🤖 AI is thinking..."
   → Log: "🤖 AI response started"
   → Log: "💬 AI: I'm doing great, thank you for asking!"

5. AI audio plays
   → Status: "🔊 AI is speaking..."
   → Audio plays through AudioSource

6. Ready for next question
   → Status: "🎤 Ready for next question..."
   → Continues listening automatically
```

### **Scenario 2: Continuous Conversation**
```
User: "What's the weather like?"
AI: "I don't have access to real-time weather data..."

User: "Tell me a joke"
AI: "Why don't scientists trust atoms? Because they make up everything!"

User: "That's funny! Tell me another one"
AI: "Here's another one for you..."

[Conversation continues seamlessly]
```

---

## 🔧 **Customization Examples**

### **1. Change AI Personality**
```csharp
// Trong CreateSession() method, modify instructions:
instructions = "You are Tenaya, a friendly ASEAN tourism guide. " +
               "Provide helpful information about ASEAN countries, " +
               "culture, and attractions. Keep responses concise and engaging.";
```

### **2. Change Voice Style**
```csharp
// Trong Inspector hoặc code:
voice = "nova";  // Bright, energetic voice for tourism guide
// hoặc
voice = "fable"; // Expressive voice for storytelling
```

### **3. Add Language Detection**
```csharp
// Trong HandleRealtimeMessage method:
case "conversation.item.input_audio_transcription.completed":
    if (message.ContainsKey("transcript"))
    {
        string transcript = message["transcript"].ToString();
        
        // Detect language and adjust response
        if (IsVietnamese(transcript))
        {
            // Switch to Vietnamese mode
            UpdateSessionLanguage("vi-VN");
        }
        
        LogMessage($"📝 You said: {transcript}");
    }
    break;
```

### **4. Integration với Myaku Controller**
```csharp
[Header("Myaku Integration")]
public MyakuController myakuController;

private void OnAIResponseStart()
{
    // Animate Myaku when AI starts speaking
    if (myakuController != null)
    {
        myakuController.StartSpeakingAnimation();
    }
}

private void OnAIResponseEnd()
{
    // Stop Myaku animation when AI finishes
    if (myakuController != null)
    {
        myakuController.StopSpeakingAnimation();
    }
}
```

---

## 🎮 **Advanced Usage Examples**

### **1. Wake Word Detection**
```csharp
// Thêm wake word detection trước khi start session
private bool DetectWakeWord(string transcript)
{
    string[] wakeWords = { "hey tenaya", "hello tenaya", "hi tenaya" };
    string lowerTranscript = transcript.ToLower();
    
    return wakeWords.Any(word => lowerTranscript.Contains(word));
}
```

### **2. Context-Aware Responses**
```csharp
// Maintain conversation context
private List<string> conversationHistory = new List<string>();

private void AddToHistory(string userInput, string aiResponse)
{
    conversationHistory.Add($"User: {userInput}");
    conversationHistory.Add($"AI: {aiResponse}");
    
    // Keep only last 10 exchanges
    if (conversationHistory.Count > 20)
    {
        conversationHistory.RemoveRange(0, 2);
    }
}
```

### **3. Error Recovery**
```csharp
private void HandleConnectionError()
{
    LogMessage("❌ Connection lost, attempting to reconnect...");
    
    // Auto-reconnect after 3 seconds
    StartCoroutine(ReconnectAfterDelay(3f));
}

private IEnumerator ReconnectAfterDelay(float delay)
{
    yield return new WaitForSeconds(delay);
    
    if (!isConnected)
    {
        LogMessage("🔄 Attempting to reconnect...");
        StartRealtimeConversation();
    }
}
```

---

## 📱 **Mobile-Specific Examples**

### **Android Setup**
```csharp
// Check permissions on Android
private bool CheckMicrophonePermission()
{
    #if UNITY_ANDROID && !UNITY_EDITOR
    return Permission.HasUserAuthorizedPermission(Permission.Microphone);
    #else
    return true;
    #endif
}

private void RequestMicrophonePermission()
{
    #if UNITY_ANDROID && !UNITY_EDITOR
    if (!Permission.HasUserAuthorizedPermission(Permission.Microphone))
    {
        Permission.RequestUserPermission(Permission.Microphone);
    }
    #endif
}
```

### **iOS Setup**
```csharp
// Handle iOS audio session
private void ConfigureIOSAudioSession()
{
    #if UNITY_IOS && !UNITY_EDITOR
    // Configure audio session for recording and playback
    AudioSettings.OnAudioConfigurationChanged += OnAudioConfigChanged;
    #endif
}
```

---

## 🔍 **Debug Examples**

### **1. Audio Quality Monitoring**
```csharp
private void MonitorAudioQuality()
{
    if (microphoneClip != null)
    {
        float[] samples = new float[1024];
        microphoneClip.GetData(samples, Microphone.GetPosition(microphoneDevice) - 1024);
        
        float rms = CalculateRMS(samples);
        LogMessage($"🎵 Audio level: {rms:F3}");
        
        if (rms < 0.001f)
        {
            LogMessage("⚠️ Audio level very low - check microphone");
        }
    }
}
```

### **2. WebSocket Message Logging**
```csharp
private void LogWebSocketMessage(string messageType, Dictionary<string, object> message)
{
    if (enableDetailedLogging)
    {
        string json = JsonConvert.SerializeObject(message, Formatting.Indented);
        Debug.Log($"[WebSocket] {messageType}:\n{json}");
    }
}
```

### **3. Performance Monitoring**
```csharp
private void MonitorPerformance()
{
    float frameTime = Time.unscaledDeltaTime;
    if (frameTime > 0.033f) // > 30 FPS
    {
        LogMessage($"⚠️ Frame time high: {frameTime * 1000:F1}ms");
    }
    
    long memoryUsage = System.GC.GetTotalMemory(false);
    LogMessage($"📊 Memory usage: {memoryUsage / 1024 / 1024}MB");
}
```

---

## 🎯 **Integration với Scene hiện tại**

### **Giữ nguyên UI Layout**
```
Existing UI:
├── Start Button → Connect to OpenAIRealtimeSpeechController.StartRealtimeConversation()
├── Stop Button → Connect to OpenAIRealtimeSpeechController.StopRealtimeConversation()
├── Status Text → Shows current status (Listening, Processing, Speaking)
└── Log Text → Shows detailed conversation log
```

### **Thêm Features mới**
```
Optional UI additions:
├── Voice Selector Dropdown → Choose AI voice (alloy, echo, fable, etc.)
├── Language Toggle → Switch between English/Vietnamese
├── Volume Slider → Control AI response volume
└── Connection Status Indicator → Show WebSocket connection state
```

Với setup này, bạn có thể dễ dàng thay thế script hiện tại và có ngay chức năng speech-to-speech realtime với OpenAI!
