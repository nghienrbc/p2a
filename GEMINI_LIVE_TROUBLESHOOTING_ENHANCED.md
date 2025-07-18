# 🔧 Gemini Live API - Enhanced Troubleshooting Guide

## 🚨 **COMMON ERROR: WebSocket Connection Failed**

### **Error Messages:**
```
❌ All connection attempts failed. Possible issues:
Không thể kết nối đến Gemini Live API, thử phương pháp HTTP alternative
```

---

## 🔍 **ROOT CAUSE ANALYSIS**

### **1. API Availability Issues**
- **Gemini Live API chưa rollout đầy đủ** trong tất cả regions
- **Model versions cũ** đã bị deprecated
- **Regional restrictions** cho Live API features

### **2. WebSocket Technical Issues**
- **Unity Editor limitations** với WebSocket connections
- **Firewall/Network restrictions** chặn WebSocket traffic
- **API endpoint changes** từ Google

### **3. Configuration Issues**
- **API key không có quyền** truy cập Live API
- **Model names không chính xác**
- **Setup message format cũ**

---

## ✅ **IMMEDIATE SOLUTIONS**

### **Solution 1: Verify API Key & Models**

#### **Step 1:** Test your API key manually
```bash
# Test in browser hoặc Postman
GET https://generativelanguage.googleapis.com/v1/models?key=YOUR_API_KEY
```

#### **Step 2:** Check available models
- Look for models containing: `live`, `2.0-flash`, `2.5-flash`
- If no Live models found → Your region doesn't support Live API yet

#### **Step 3:** Update config.json
```json
{
  "geminiApiKey": "YOUR_ACTUAL_API_KEY_HERE",
  "preferredLanguage": "en-US"
}
```

### **Solution 2: Use Manual Test Script**

#### **Attach GeminiLiveManualTest.cs to GameObject:**
```csharp
// This script will run comprehensive diagnostics
// Check Console for detailed analysis
```

#### **Run test để xác định exact issue:**
1. API key validity
2. Available models
3. Basic generation test
4. Audio capabilities
5. Platform compatibility
6. Network diagnostics

### **Solution 3: Enable HTTP Fallback (Automatic)**

Code đã có built-in fallback system:
```
WebSocket → HTTP Alternative → Old Method (Whisper + OpenAI + TTS)
```

**HTTP Alternative** sẽ tự động chạy khi WebSocket fails.

### **Solution 4: Platform-Specific Fixes**

#### **Unity Editor:**
```csharp
#if UNITY_EDITOR
// WebSocket có limitations trong Editor
// Build và test trên real device
#endif
```

#### **Android Build:**
- Ensure proper **Internet permissions**
- Check **firewall settings**
- Test trên **real device**, không phải emulator

#### **Network Requirements:**
- Outbound HTTPS (443) allowed
- WebSocket (WSS) traffic allowed
- No corporate proxy blocking

---

## 🛠 **STEP-BY-STEP DEBUGGING**

### **Debug Level 1: Basic API Test**
```csharp
// Attach GeminiLiveSetupHelper.cs
// Click "Test API" button
// Check console logs for details
```

### **Debug Level 2: Manual Diagnostics**
```csharp
// Attach GeminiLiveManualTest.cs  
// Click "Run Manual Test"
// Review comprehensive report
```

### **Debug Level 3: Code Analysis**
Check these key points:
1. **API Key loading:** `config.json` file exists và được đọc đúng
2. **Model names:** Using latest available models
3. **WebSocket URLs:** Updated endpoints
4. **Error handling:** Detailed error messages in Console

---

## 🎯 **EXPECTED BEHAVIOR**

### **Normal Flow:**
```
1. Test API connectivity ✅
2. Initialize WebSocket ✅  
3. Send setup message ✅
4. Start audio streaming ✅
5. Receive audio responses ✅
```

### **Fallback Flow (When WebSocket fails):**
```
1. WebSocket fails ❌
2. HTTP Alternative ✅
3. Record audio ✅
4. Send to Gemini HTTP API ✅
5. Get text response ✅
6. Use Google TTS ✅
```

### **Last Resort (When all Gemini fails):**
```
1. WebSocket fails ❌
2. HTTP Alternative fails ❌
3. Old Method (Whisper + OpenAI + TTS) ✅
```

---

## 🌍 **REGIONAL AVAILABILITY**

### **Gemini Live API Regions:**
- ✅ **US, Canada** - Full availability
- ⚠️ **Europe** - Limited availability  
- ❌ **Asia** - Very limited/Not available
- ❌ **Vietnam** - Not available yet

### **Workarounds for Unsupported Regions:**
1. **Use HTTP fallback** (automatic)
2. **Use old method** (Whisper + OpenAI + TTS)
3. **VPN to supported region** (may violate ToS)

---

## 🔧 **QUICK FIXES**

### **Fix 1: Update Model Configuration**
```csharp
// In RecordAudio.cs, line ~723
model = "models/gemini-1.5-flash" // Fallback to stable model
```

### **Fix 2: Force HTTP Mode**
```csharp
// Skip WebSocket attempt, go straight to HTTP
private IEnumerator GeminiLiveConversation()
{
    // Comment out WebSocket initialization
    // yield return StartCoroutine(InitializeGeminiLiveSession());
    
    // Go directly to HTTP alternative
    yield return StartCoroutine(GeminiHttpAlternative());
}
```

### **Fix 3: Disable Gemini Completely**
```csharp
// In GeminiLiveConversation(), line ~370
private IEnumerator GeminiLiveConversation()
{
    // Force fallback to old method
    yield return StartCoroutine(FallbackToOldMethod());
    yield break;
}
```

---

## 📊 **SUCCESS INDICATORS**

### **✅ Gemini Live Working:**
```
✅ Gemini API is reachable
✅ Found Live-compatible model
✅ Gemini Live WebSocket connected successfully
✅ Setup message sent successfully
I'm listening! Ask me something!
```

### **⚡ HTTP Fallback Working:**
```
❌ WebSocket connection failed
✅ Using Gemini HTTP alternative
✅ HTTP generation successful
Processing your question...
```

### **🔄 Old Method Working:**
```
❌ Gemini Live unavailable
✅ Using fallback method
✅ Whisper transcription successful
✅ OpenAI generation successful
✅ Google TTS successful
```

---

## 🆘 **CONTACT & SUPPORT**

### **If all solutions fail:**
1. **Check Google AI Studio** for account status
2. **Verify billing** và quotas
3. **Test with different API key**
4. **Report issue** với detailed logs từ manual test
5. **Use old method** temporarily

### **Logs to Include:**
- Console output từ `GeminiLiveManualTest`
- Network connectivity test results  
- Available models list
- Platform và Unity version info

---

## 🎉 **SUCCESS CHECKLIST**

- [ ] API key valid và working
- [ ] Models list retrieved successfully  
- [ ] Basic text generation works
- [ ] Audio capabilities confirmed
- [ ] Platform compatibility verified
- [ ] Network connectivity confirmed
- [ ] WebSocket connection successful OR HTTP fallback working

**Remember:** Fallback methods ensure functionality even if Live API không available! 