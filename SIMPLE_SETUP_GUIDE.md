# 🚀 Quick Setup Guide - Gemini Live Simple

## ✨ **Chỉ 1 script duy nhất - GeminiLiveSpeechController_Simple.cs**

### 📋 **5 bước setup nhanh (5 phút)**

#### **Bước 1: Add Script vào Scene**
1. Tạo empty GameObject → đặt tên "GeminiLiveManager"
2. Add component `GeminiLiveSpeechController_Simple`
3. Add component `AudioSource` vào cùng GameObject

#### **Bước 2: Setup UI (Tối thiểu)**
Tạo UI elements và assign vào script:

```
Canvas
├── StartButton (Button)
├── StatusText (TextMeshPro - Text)
├── UserText (TextMeshPro - Text)  
└── AIText (TextMeshPro - Text)
```

#### **Bước 3: Configure API Keys**
Trong Inspector của `GeminiLiveSpeechController_Simple`:
```
🔑 API Configuration:
- Gemini Api Key: [YOUR_GEMINI_API_KEY]
- Tts Api Key: [YOUR_GEMINI_API_KEY]  // Same key works for both

⚡ Quick Settings:
- Voice Threshold: 0.02
- Recording Timeout: 3
- Sample Rate: 16000
```

#### **Bước 4: Assign UI References**
```
🎤 Basic UI References:
- Start Button: [Assign StartButton]
- Status Text: [Assign StatusText]
- User Text: [Assign UserText]
- Ai Text: [Assign AIText]
- Audio Source: [Auto-assigned]

🤖 Myaku Animation (Optional):
- Myaku Controller: [Assign if you have MyakuController]
```

#### **Bước 5: Test**
1. Play scene
2. Click START button hoặc nói "Hey DT"
3. Nói câu hỏi (ví dụ: "What is ASEAN?")
4. Đợi AI trả lời

---

## 🎯 **Tính năng đầy đủ trong 1 script:**

### ✅ **Có sẵn:**
- 🎤 **Voice detection** - Tự động phát hiện giọng nói
- 🤖 **Gemini AI** - Speech-to-text với Gemini 1.5 Flash
- 🔊 **Text-to-Speech** - Google TTS với giọng tự nhiên
- 📱 **Wake word** - "Hey DT" detection (Android)
- 🎭 **Myaku animations** - Tích hợp sẵn (optional)
- 🌍 **Multilingual** - Tự động detect ngôn ngữ
- 🧠 **Knowledge base** - ASEAN, EXPO 2025, P2A, DTU

### 🚫 **Không có (để tối giản):**
- Không có multiple modes
- Không có complex manager
- Không có WebSocket dependency
- Không có benchmark tools
- Không có testing frameworks

---

## 🔧 **Troubleshooting nhanh:**

### **1. API Key Issues:**
```
❌ "API key not valid"
✅ Solution: 
- Copy chính xác key từ Google AI Studio
- Đảm bảo không có space/newline
- Test với browser trước
```

### **2. Microphone Issues:**
```
❌ "No microphone found"
✅ Solution:
- Check microphone permissions
- Test trong other apps trước
- Try different microphone device
```

### **3. Audio Not Working:**
```
❌ "No response from AI"
✅ Solution:
- Check voice threshold (thử 0.01 hoặc 0.03)
- Nói to và rõ hơn
- Check internet connection
- Increase recording timeout
```

### **4. Compilation Errors:**
```
❌ "Missing references"
✅ Solution:
- Ensure TextMeshPro package imported
- Check all UI references assigned
- Restart Unity if needed
```

---

## 📊 **Expected Performance:**

| Action | Time | Quality |
|--------|------|---------|
| **Voice Detection** | <0.5s | Good |
| **API Processing** | 1-3s | High |
| **TTS Generation** | 1-2s | High |
| **Total Response** | **2-5s** | **Excellent** |

---

## 🎮 **Usage Examples:**

### **English Questions:**
- "What is ASEAN?"
- "Tell me about EXPO 2025"
- "What is P2A?"
- "Take a photo" (triggers camera)

### **Vietnamese Questions:**
- "ASEAN là gì?"
- "Kể về EXPO 2025"
- "P2A là gì?"
- "Chụp ảnh cho tôi"

### **Wake Word:**
- Nói "Hey DT" để bắt đầu
- Auto-start session
- Hands-free operation

---

## 💡 **Pro Tips:**

1. **Voice Threshold Tuning:**
   - Quiet environment: `0.015`
   - Normal environment: `0.02` (default)
   - Noisy environment: `0.03-0.05`

2. **Recording Timeout:**
   - Fast speakers: `2s`
   - Normal speakers: `3s` (default)
   - Slow speakers: `4-5s`

3. **Better Audio Quality:**
   - Speak clearly and not too fast
   - Keep 20-30cm from microphone
   - Avoid background noise

4. **Testing:**
   - Start with simple questions
   - Test wake word in quiet place
   - Check Console logs for debugging

---

## 🚀 **Ready to use! Chỉ 1 script, setup 5 phút, hoạt động ngay!**

**🎯 Next:** Sau khi test thành công, bạn có thể fine-tune voice threshold và timeout theo environment cụ thể của bạn. 