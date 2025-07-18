# 🚀 Hướng Dẫn Setup Gemini Live API - Speech-to-Speech

## 📋 **CHECKLIST SETUP**

### ✅ **Bước 1: Lấy Gemini API Key**
1. Truy cập [Google AI Studio](https://aistudio.google.com/)
2. Đăng nhập với Google account
3. Click **"Get API Key"** → **"Create API Key"**
4. Copy API key (dạng: `AIzaSyC...`)

### ✅ **Bước 2: Cấu Hình API Key**
Mở file `Assets/Resources/config.json` và thay:
```json
{
  "geminiApiKey": "YOUR_GEMINI_API_KEY_HERE"
}
```
Thành:
```json
{
  "geminiApiKey": "AIzaSyC_YOUR_ACTUAL_API_KEY_HERE"
}
```

### ✅ **Bước 3: Test Setup**
1. Attach script `GeminiLiveSetupHelper.cs` vào GameObject trong scene
2. Assign UI components (optional):
   - Status Text (TMP_Text)
   - Log Text (TMP_Text) 
   - Setup Button (Button)
   - Test Button (Button)
3. Run scene và check Console logs

### ✅ **Bước 4: Build & Test**
1. **Platform**: Android/iOS recommended (WebSocket work better)
2. **Permissions**: Enable Microphone permission
3. **Test Flow**:
   - Say **"Hey DT"** to activate
   - Speak your question (Vietnamese/English)
   - Listen for Tenaya's response

---

## 🔧 **TROUBLESHOOTING**

### ❌ **"Gemini API Key chưa được cấu hình"**
- ✅ Check file `Assets/Resources/config.json` 
- ✅ Ensure key doesn't have extra spaces/quotes
- ✅ Verify API key from [AI Studio](https://aistudio.google.com/)

### ❌ **"Cannot reach Gemini API"**
- ✅ Check internet connection
- ✅ Test API key with curl:
```bash
curl "https://generativelanguage.googleapis.com/v1/models?key=YOUR_API_KEY"
```
- ✅ Check if Gemini Live is available in your region

### ❌ **"WebSocket connection failed"**
- ✅ Test on real device (not Unity Editor)
- ✅ Check firewall/proxy settings
- ✅ Try alternative network (mobile hotspot)

### ❌ **"Cannot find microphone device"**
- ✅ Grant microphone permissions
- ✅ Test microphone hardware
- ✅ Check `PlayerSettings > Android > Permissions`

---

## 🎯 **QUICK TEST COMMANDS**

### Test API Connectivity:
```bash
curl -H "Authorization: Bearer YOUR_API_KEY" \
  "https://generativelanguage.googleapis.com/v1/models"
```

### Test Model Access:
```bash
curl "https://generativelanguage.googleapis.com/v1/models/gemini-2.5-flash-preview:generateContent?key=YOUR_API_KEY" \
  -H "Content-Type: application/json" \
  -d '{"contents":[{"parts":[{"text":"Hello"}]}]}'
```

---

## 📱 **PLATFORM SPECIFIC NOTES**

### **Android:**
- ✅ WebSocket support: Excellent
- ✅ Microphone: Auto-permission request
- ✅ Performance: Optimal

### **iOS:**
- ✅ WebSocket support: Excellent  
- ✅ Microphone: Manual permission grant
- ✅ Performance: Optimal

### **Unity Editor:**
- ⚠️ WebSocket support: Limited
- ⚠️ Microphone: May not work properly
- 🔧 Recommendation: Build to device for testing

### **WebGL:**
- ❌ WebSocket support: Very limited
- ❌ Not recommended for Gemini Live

---

## 🚀 **EXPECTED PERFORMANCE**

### **Connection Time:** < 2 seconds
### **First Response:** < 1 second  
### **Audio Quality:** 24kHz native
### **Latency:** 200-500ms
### **Languages:** Auto-detect Vietnamese/English

---

## 📞 **SUPPORT & DEBUGGING**

### Debug Information:
- Check Unity Console for `[GeminiLiveSetup]` logs
- Monitor `[RecordAudio]` logs for detailed flow
- Use `GeminiDebugHelper.cs` for diagnostics

### Important Log Messages:
```
✅ "Gemini Live WebSocket connected successfully"
✅ "Setup message sent successfully" 
✅ "API Key configured"
❌ "Error connecting to Gemini Live"
❌ "API key not configured"
```

### Alternative Solutions:
1. **Fallback 1:** HTTP API (automatic)
2. **Fallback 2:** Old method (Whisper + OpenAI + TTS)
3. **Manual Test:** Use existing debug scripts

---

## 🎉 **SUCCESS INDICATORS**

Bạn sẽ biết setup thành công khi:
- ✅ Console shows "Gemini Live WebSocket connected"
- ✅ "Hey DT" activates listening mode
- ✅ Voice input được detect
- ✅ Tenaya responds with natural voice
- ✅ No error messages in Console

---

**🎯 TIP:** Nếu gặp vấn đề, hãy chạy script `GeminiDebugHelper.cs` để chẩn đoán tự động! 