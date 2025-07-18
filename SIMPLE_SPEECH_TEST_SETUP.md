# 🎤 Simple Gemini Speech-to-Speech Test

## 🚀 **QUICK SETUP**

### **Step 1: Create New Scene**
1. **File → New Scene**
2. **Save** scene as "GeminiSpeechTest"

### **Step 2: Setup GameObject**
1. **Create Empty GameObject** → Name it "SpeechTester"
2. **Attach Components:**
   - `SimpleGeminiSpeechTest.cs`
   - `AudioSource` component

### **Step 3: Create UI**
```
Create UI Elements:
├── Canvas
│   ├── Button → Name: "StartButton"
│   ├── Text (TMP) → Name: "StatusText"
│   └── Text (TMP) → Name: "LogText" (scroll area)
```

### **Step 4: Connect UI to Script**
In `SimpleGeminiSpeechTest` component:
- **Start Button** → Drag StartButton
- **Status Text** → Drag StatusText  
- **Log Text** → Drag LogText
- **Audio Source** → Auto-assigned

### **Step 5: Configure API Key**
Check `geminiApiKey` field in inspector:
```
AIzaSyDR5fVgJABDSkaVfmy-iimLzsLLOBkrBgA
```

---

## 🎯 **HOW TO TEST**

### **Test Flow:**
1. **Click "START" button**
2. **Speak** when you see "🎤 Recording... Speak now!"
3. **Wait** for processing
4. **Listen** to AI response

### **Expected Logs:**
```
🎤 Simple Gemini Speech Test Ready
🚀 === STARTING SPEECH-TO-SPEECH TEST ===
📡 Testing Gemini API key...
✅ API key is valid
🎤 Starting audio recording...
   Using microphone: [Your Mic]
   Audio level: 0.123
✅ Voice detected, silence for 2s, stopping...
✅ Audio recording completed
🤖 Sending audio to Gemini API...
   Audio file size: 123456 bytes
✅ Gemini response received: Hello! How can I help you?
🔊 Converting text to speech...
🎵 Playing generated speech...
✅ Playing generated speech...
✅ Speech playback completed
✅ Speech-to-Speech completed successfully!
🏁 === TEST COMPLETED ===
```

---

## 🔧 **TROUBLESHOOTING**

### **❌ API Key Test Failed**
- Check internet connection
- Verify API key is correct
- Check Google Cloud Console quotas

### **❌ Recording Failed**
- Grant microphone permission
- Check `Microphone.devices` in console
- Adjust `silenceThreshold` in inspector

### **❌ Gemini Processing Failed**
- Check response in console logs
- Try different audio quality
- Verify API key has Gemini access

### **❌ Text-to-Speech Failed**
- Check Google TTS API key
- Verify network connectivity
- Try different voice settings

---

## ⚙️ **CONFIGURATION OPTIONS**

### **In Inspector:**
- **Recording Duration**: Max recording time (default: 10s)
- **Silence Threshold**: Voice detection sensitivity (default: 0.01f)
- **Gemini API Key**: Your API key

### **In Code - Easy Modifications:**
```csharp
// Change TTS voice
languageCode = "vi-VN"  // Vietnamese
name = "vi-VN-Standard-A"

// Change prompt
text = "Respond in Vietnamese. Keep it short."

// Change model
gemini-1.5-flash → gemini-2.0-flash
```

---

## 🎉 **SUCCESS INDICATORS**

### **✅ Everything Working:**
- API key validates
- Microphone records audio
- Gemini processes speech → text
- TTS converts text → speech
- Audio plays successfully

### **📊 Performance:**
- **Recording**: 2-10 seconds
- **Gemini API**: 3-8 seconds  
- **TTS**: 2-5 seconds
- **Total**: ~10-20 seconds

---

## 🔄 **NEXT STEPS**

### **If This Works:**
1. ✅ **Gemini API** is functional
2. ✅ **Audio pipeline** works
3. ✅ **TTS system** operational
4. → **Integrate into main app**

### **If Fails at Specific Step:**
- **API Key** → Check Google Console
- **Recording** → Check permissions
- **Gemini** → Try different model
- **TTS** → Check Google TTS API

### **Integration Back to Main App:**
```csharp
// Copy working parts to RecordAudio.cs:
// 1. Audio recording logic
// 2. Gemini HTTP request format  
// 3. TTS conversion method
// 4. Error handling patterns
```

---

## 🎯 **SINGLE BUTTON TESTING**

**Just click START and speak!** 

The script handles everything:
- ✅ API validation
- ✅ Audio recording with voice detection
- ✅ Gemini processing
- ✅ Text-to-speech conversion
- ✅ Audio playback
- ✅ Complete logging

**Perfect for debugging and isolating issues!** 