using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;
using Newtonsoft.Json;
using System;
using System.IO;

/// <summary>
/// Simple Gemini Speech-to-Speech Test Script
/// Chỉ cần nhấn 1 button để test toàn bộ flow
/// Tương tự như demo từ Google AI Studio
/// </summary>
public class SimpleGeminiSpeechTest : MonoBehaviour
{
    #region Public Fields
    [Header("UI References")]
    public Button startButton;
    public TMP_Text statusText;
    public TMP_Text logText;
    public AudioSource audioSource;
    
    [Header("Configuration")]
    public string geminiApiKey = "AIzaSyDR5fVgJABDSkaVfmy-iimLzsLLOBkrBgA";
    public int recordingDuration = 10; // seconds
    public float silenceThreshold = 0.01f;
    #endregion
    
    #region Private Fields
    private bool isRecording = false;
    private bool isProcessing = false;
    private AudioClip recordedClip;
    private string logMessages = "";
    private string detectedLanguage = "en-US"; // Default to English, will be detected from response
    #endregion
    
    #region Unity Lifecycle
    private void Start()
    {
        InitializeComponent();
        LogMessage("🎤 Simple Gemini Speech Test Ready");
        UpdateStatus("Click START to begin speech-to-speech test");
    }
    #endregion
    
    #region Public Methods
    public void StartSpeechToSpeechTest()
    {
        if (isRecording || isProcessing)
        {
            LogMessage("⚠️ Already running test...");
            return;
        }
        
        StartCoroutine(SpeechToSpeechFlow());
    }
    #endregion
    
    #region Private Methods
    private void InitializeComponent()
    {
        if (startButton != null)
            startButton.onClick.AddListener(StartSpeechToSpeechTest);
            
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();
            
        ClearLogs();
    }
    
    private IEnumerator SpeechToSpeechFlow()
    {
        LogMessage("\n🚀 === STARTING SPEECH-TO-SPEECH TEST ===");
        
        // Step 1: Test API Key
        UpdateStatus("Testing API connectivity...");
        bool apiValid = false;
        yield return StartCoroutine(TestApiKey((valid) => apiValid = valid));
        
        if (!apiValid)
        {
            UpdateStatus("❌ API key test failed");
            yield break;
        }
        
        // Step 2: Record Audio
        UpdateStatus("🎤 Recording... Speak now!");
        bool recordSuccess = false;
        yield return StartCoroutine(RecordAudio((success) => recordSuccess = success));
        
        if (!recordSuccess)
        {
            UpdateStatus("❌ Recording failed");
            yield break;
        }
        
        // Step 3: Send to Gemini and get response
        UpdateStatus("🤖 Processing with Gemini...");
        string response = null;
        yield return StartCoroutine(SendToGemini((result) => response = result));
        
        if (string.IsNullOrEmpty(response))
        {
            UpdateStatus("❌ Gemini processing failed");
            yield break;
        }
        
        // Step 4: Convert to Speech and Play
        UpdateStatus("🔊 Converting to speech...");
        bool ttsSuccess = false;
        yield return StartCoroutine(TextToSpeech(response, (success) => ttsSuccess = success));
        
        if (ttsSuccess)
        {
            UpdateStatus("✅ Speech-to-Speech completed successfully!");
            LogMessage($"✅ Final response: {response}");
        }
        else
        {
            UpdateStatus("❌ Text-to-speech failed");
        }
        
        LogMessage("🏁 === TEST COMPLETED ===\n");
    }
    
    private IEnumerator TestApiKey(System.Action<bool> callback)
    {
        LogMessage("📡 Testing Gemini API key...");
        
        string testUrl = $"https://generativelanguage.googleapis.com/v1/models?key={geminiApiKey}";
        
        using (UnityWebRequest request = UnityWebRequest.Get(testUrl))
        {
            request.timeout = 10;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ API key is valid");
                callback?.Invoke(true);
            }
            else
            {
                LogMessage($"❌ API key test failed: {request.error}");
                LogMessage($"   Response code: {request.responseCode}");
                callback?.Invoke(false);
            }
        }
    }
    
    private IEnumerator RecordAudio(System.Action<bool> callback)
    {
        LogMessage("🎤 Starting audio recording...");
        
        // Check microphone permission
        if (Microphone.devices.Length == 0)
        {
            LogMessage("❌ No microphone devices found");
            callback?.Invoke(false);
            yield break;
        }
        
        string deviceName = Microphone.devices[0];
        LogMessage($"   Using microphone: {deviceName}");
        
        isRecording = true;
        recordedClip = Microphone.Start(deviceName, false, recordingDuration, 44100);
        
        float startTime = Time.time;
        float lastSoundTime = startTime;
        bool soundDetected = false;
        
        // Wait for recording with voice activity detection
        while (Microphone.IsRecording(deviceName) && isRecording)
        {
            // Check audio level
            float[] samples = new float[256];
            int micPosition = Microphone.GetPosition(deviceName);
            
            if (micPosition > 0)
            {
                recordedClip.GetData(samples, Mathf.Max(0, micPosition - 256));
                float level = GetAudioLevel(samples);
                
                if (level > silenceThreshold)
                {
                    soundDetected = true;
                    lastSoundTime = Time.time;
                    LogMessage($"   Audio level: {level:F3}");
                }
            }
            
            // Auto-stop conditions
            float currentTime = Time.time;
            if (!soundDetected && (currentTime - startTime > 5f))
            {
                LogMessage("⚠️ No voice detected in 5 seconds, stopping...");
                break;
            }
            
            if (soundDetected && (currentTime - lastSoundTime > 2f))
            {
                LogMessage("✅ Voice detected, silence for 2s, stopping...");
                break;
            }
            
            yield return null;
        }
        
        Microphone.End(deviceName);
        isRecording = false;
        
        if (soundDetected && recordedClip != null)
        {
            LogMessage("✅ Audio recording completed");
            SaveAudioClip();
            callback?.Invoke(true);
        }
        else
        {
            LogMessage("❌ No valid audio recorded");
            callback?.Invoke(false);
        }
    }
    
    private void SaveAudioClip()
    {
        try
        {
            string filePath = Path.Combine(Application.persistentDataPath, "test_audio.wav");
            WavUtility.Save(filePath, recordedClip);
            LogMessage($"   Audio saved to: {filePath}");
        }
        catch (System.Exception e)
        {
            LogMessage($"⚠️ Failed to save audio: {e.Message}");
        }
    }
    
    private IEnumerator SendToGemini(System.Action<string> callback)
    {
        LogMessage("🤖 Sending audio to Gemini API...");
        
        // Read audio file
        string audioPath = Path.Combine(Application.persistentDataPath, "test_audio.wav");
        if (!File.Exists(audioPath))
        {
            LogMessage("❌ Audio file not found");
            callback?.Invoke(null);
            yield break;
        }
        
        byte[] audioBytes = File.ReadAllBytes(audioPath);
        string audioBase64 = Convert.ToBase64String(audioBytes);
        LogMessage($"   Audio file size: {audioBytes.Length} bytes");
        
        // Create request
        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new object[]
                    {
                        new
                        {
                            text = "Listen to this audio and respond naturally in the EXACT SAME LANGUAGE that the user is speaking. " +
                                   "If they speak Vietnamese, respond in Vietnamese. If they speak English, respond in English. " +
                                   "If they speak any other language, respond in that same language. " +
                                   "Keep your response short and conversational (1-3 sentences). " +
                                   "Do not translate or change the language - use the exact same language as the input."
                        },
                        new
                        {
                            inline_data = new
                            {
                                mime_type = "audio/wav",
                                data = audioBase64
                            }
                        }
                    }
                }
            }
        };
        
        string jsonData = JsonConvert.SerializeObject(requestData);
        string url = $"https://generativelanguage.googleapis.com/v1/models/gemini-1.5-flash:generateContent?key={geminiApiKey}";
        
        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 30;
            
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    var response = Newtonsoft.Json.Linq.JObject.Parse(request.downloadHandler.text);
                    string text = response["candidates"]?[0]?["content"]?["parts"]?[0]?["text"]?.ToString();
                    
                    if (!string.IsNullOrEmpty(text))
                    {
                        LogMessage($"✅ Gemini response received: {text}");
                        
                        // Detect language from response for TTS
                        detectedLanguage = DetectLanguageFromText(text);
                        LogMessage($"   Detected language: {detectedLanguage}");
                        
                        callback?.Invoke(text);
                    }
                    else
                    {
                        LogMessage("❌ Empty response from Gemini");
                        callback?.Invoke(null);
                    }
                }
                catch (System.Exception e)
                {
                    LogMessage($"❌ Error parsing Gemini response: {e.Message}");
                    callback?.Invoke(null);
                }
            }
            else
            {
                LogMessage($"❌ Gemini API error: {request.error}");
                LogMessage($"   Response: {request.downloadHandler.text}");
                callback?.Invoke(null);
            }
        }
    }
    
    private IEnumerator TextToSpeech(string text, System.Action<bool> callback)
    {
        LogMessage("🔊 Converting text to speech...");
        
        // Get voice settings for detected language
        var voiceSettings = GetVoiceSettings(detectedLanguage);
        
        var requestData = new
        {
            input = new { text = text },
            voice = new 
            { 
                languageCode = voiceSettings.languageCode, 
                name = voiceSettings.voiceName, 
                ssmlGender = voiceSettings.gender 
            },
            audioConfig = new 
            { 
                audioEncoding = "LINEAR16",
                sampleRateHertz = 24000
            }
        };
        
        LogMessage($"   Using TTS voice: {voiceSettings.voiceName} ({voiceSettings.languageCode})");
        
        string jsonData = JsonConvert.SerializeObject(requestData);
        string url = "https://texttospeech.googleapis.com/v1/text:synthesize?key=AIzaSyCF2J81GFiPZ_itPBXrrPJ2d3oGW_R397c";
        
        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 20;
            
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                string audioContent = null;
                try
                {
                    var response = Newtonsoft.Json.Linq.JObject.Parse(request.downloadHandler.text);
                    audioContent = response["audioContent"]?.ToString();
                }
                catch (System.Exception e)
                {
                    LogMessage($"❌ Error parsing TTS response: {e.Message}");
                    callback?.Invoke(false);
                    yield break;
                }
                
                if (!string.IsNullOrEmpty(audioContent))
                {
                    yield return StartCoroutine(PlayAudioFromBase64(audioContent));
                    callback?.Invoke(true);
                }
                else
                {
                    LogMessage("❌ No audio content in TTS response");
                    callback?.Invoke(false);
                }
            }
            else
            {
                LogMessage($"❌ TTS API error: {request.error}");
                callback?.Invoke(false);
            }
        }
    }
    
    private IEnumerator PlayAudioFromBase64(string base64Audio)
    {
        LogMessage("🎵 Playing generated speech...");
        
        AudioClip clip = null;
        bool hasError = false;
        
        try
        {
            byte[] audioData = Convert.FromBase64String(base64Audio);
            
            // Skip WAV header (44 bytes)
            int headerSize = 44;
            int sampleCount = (audioData.Length - headerSize) / 2;
            float[] samples = new float[sampleCount];
            
            for (int i = 0; i < sampleCount; i++)
            {
                short sample = BitConverter.ToInt16(audioData, headerSize + i * 2);
                samples[i] = sample / 32768f;
            }
            
            clip = AudioClip.Create("TTSAudio", sampleCount, 1, 24000, false);
            clip.SetData(samples, 0);
            
            audioSource.clip = clip;
            audioSource.Play();
            
            LogMessage("✅ Playing generated speech...");
        }
        catch (System.Exception e)
        {
            LogMessage($"❌ Error playing audio: {e.Message}");
            hasError = true;
        }
        
        if (!hasError)
        {
            // Wait for audio to finish
            yield return new WaitUntil(() => !audioSource.isPlaying);
            LogMessage("✅ Speech playback completed");
        }
        
        // Cleanup
        if (clip != null)
        {
            Destroy(clip);
        }
    }
    
    private float GetAudioLevel(float[] samples)
    {
        float sum = 0f;
        for (int i = 0; i < samples.Length; i++)
        {
            sum += samples[i] * samples[i];
        }
        return Mathf.Sqrt(sum / samples.Length);
    }
    
    private void LogMessage(string message)
    {
        logMessages += message + "\n";
        
        if (logText != null)
        {
            logText.text = logMessages;
        }
        
        Debug.Log($"[SimpleGeminiTest] {message}");
        
        // Keep logs manageable
        if (logMessages.Length > 3000)
        {
            string[] lines = logMessages.Split('\n');
            logMessages = string.Join("\n", lines, lines.Length - 20, 20);
        }
    }
    
    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
        
        LogMessage($"Status: {status}");
    }
    
    private void ClearLogs()
    {
        logMessages = "";
        if (logText != null)
        {
            logText.text = "";
        }
    }
    #endregion
    
    #region Context Menu Methods
    [ContextMenu("Test Speech-to-Speech")]
    public void TestFromMenu()
    {
        StartSpeechToSpeechTest();
    }
    
    [ContextMenu("Clear Logs")]
    public void ClearLogsFromMenu()
    {
        ClearLogs();
    }
    
    [ContextMenu("Test API Key Only")]
    public void TestApiKeyOnly()
    {
        StartCoroutine(TestApiKey((valid) => {
            LogMessage($"API Key test result: {(valid ? "✅ Valid" : "❌ Invalid")}");
        }));
    }
    #endregion

    private string DetectLanguageFromText(string text)
    {
        if (string.IsNullOrEmpty(text)) return "en-US";
        
        // Simple language detection based on character patterns
        // Vietnamese: Contains Vietnamese characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[àáảãạăắằẳẵặâấầẩẫậèéẻẽẹêếềểễệìíỉĩịòóỏõọôốồổỗộơớờởỡợùúủũụưứừửữựỳýỷỹỵđĐ]"))
        {
            LogMessage("   → Vietnamese text detected");
            return "vi-VN";
        }
        
        // Japanese: Contains hiragana, katakana, or kanji
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF]"))
        {
            LogMessage("   → Japanese text detected");
            return "ja-JP";
        }
        
        // Korean: Contains Hangul
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\uAC00-\uD7AF]"))
        {
            LogMessage("   → Korean text detected");
            return "ko-KR";
        }
        
        // Chinese: Contains Chinese characters (broader range)
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u4E00-\u9FFF]"))
        {
            LogMessage("   → Chinese text detected");
            return "zh-CN";
        }
        
        // Thai: Contains Thai characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0E00-\u0E7F]"))
        {
            LogMessage("   → Thai text detected");
            return "th-TH";
        }
        
        // Arabic: Contains Arabic characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0600-\u06FF]"))
        {
            LogMessage("   → Arabic text detected");
            return "ar-XA";
        }
        
        // Russian: Contains Cyrillic characters
        if (System.Text.RegularExpressions.Regex.IsMatch(text, @"[\u0400-\u04FF]"))
        {
            LogMessage("   → Russian text detected");
            return "ru-RU";
        }
        
        // French: Common French words/patterns
        if (System.Text.RegularExpressions.Regex.IsMatch(text.ToLower(), @"\b(le|la|les|un|une|des|je|tu|il|elle|nous|vous|ils|elles|est|sont|avoir|être|ça|où|très|mais|avec|pour|par|sur|dans|sans|sous|entre|pendant|depuis|après|avant|contre|vers|chez|jusque|malgré|selon|parmi|sauf|hormis|excepté|durant|moyennant|concernant|touchant|nonobstant|outre|quant)\b"))
        {
            LogMessage("   → French text detected");
            return "fr-FR";
        }
        
        // Spanish: Common Spanish words/patterns
        if (System.Text.RegularExpressions.Regex.IsMatch(text.ToLower(), @"\b(el|la|los|las|un|una|unos|unas|de|del|al|y|o|pero|porque|que|como|cuando|donde|quien|cual|este|esta|estos|estas|ese|esa|esos|esas|aquel|aquella|aquellos|aquellas|mi|tu|su|nuestro|vuestro|mío|tuyo|suyo|soy|eres|es|somos|sois|son|he|has|ha|hemos|habéis|han|muy|más|menos|también|tampoco|sí|no)\b"))
        {
            LogMessage("   → Spanish text detected");
            return "es-ES";
        }
        
        // German: Common German words/patterns
        if (System.Text.RegularExpressions.Regex.IsMatch(text.ToLower(), @"\b(der|die|das|ein|eine|und|oder|aber|denn|sondern|ich|du|er|sie|es|wir|ihr|bin|bist|ist|sind|seid|haben|hast|hat|habt|mit|nach|bei|von|zu|in|an|auf|für|durch|über|unter|vor|hinter|neben|zwischen|während|seit|bis|gegen|ohne|um|statt|trotz|wegen|innerhalb|außerhalb|oberhalb|unterhalb|diesseits|jenseits|längs|entlang|gemäß|entsprechend|zufolge|laut|kraft|mangels|mittels|vermöge|bezüglich|hinsichtlich|angesichts|anläßlich|aufgrund|infolge|zwecks|halber|wegen|um)\b"))
        {
            LogMessage("   → German text detected");
            return "de-DE";
        }
        
        // Italian: Common Italian words/patterns  
        if (System.Text.RegularExpressions.Regex.IsMatch(text.ToLower(), @"\b(il|lo|la|i|gli|le|un|uno|una|di|a|da|in|con|su|per|tra|fra|e|o|ma|però|se|che|come|quando|dove|chi|quale|questo|questa|questi|queste|quello|quella|quelli|quelle|mio|tuo|suo|nostro|vostro|loro|sono|sei|è|siamo|siete|ho|hai|ha|abbiamo|avete|hanno|molto|più|menos|anche|non|sì|bene|male|dove|quando|come|perché)\b"))
        {
            LogMessage("   → Italian text detected");
            return "it-IT";
        }
        
        // Portuguese: Common Portuguese words/patterns
        if (System.Text.RegularExpressions.Regex.IsMatch(text.ToLower(), @"\b(o|a|os|as|um|uma|uns|umas|de|do|da|dos|das|em|no|na|nos|nas|para|por|com|sem|sobre|sob|entre|durante|desde|até|contra|através|ao|à|aos|às|pelo|pela|pelos|pelas|este|esta|estes|estas|esse|essa|esses|essas|aquele|aquela|aqueles|aquelas|eu|tu|ele|ela|nós|vós|eles|elas|sou|és|é|somos|sois|são|tenho|tens|tem|temos|tendes|têm|muito|mais|menos|também|não|sim|bem|mal|onde|quando|como|porque|que)\b"))
        {
            LogMessage("   → Portuguese text detected");
            return "pt-PT";
        }
        
        // Default to English if no other language detected
        LogMessage("   → Defaulting to English");
        return "en-US";
    }
    
    private (string languageCode, string voiceName, string gender) GetVoiceSettings(string languageCode)
    {
        return languageCode switch
        {
            "vi-VN" => ("vi-VN", "vi-VN-Standard-A", "FEMALE"),
            "ja-JP" => ("ja-JP", "ja-JP-Standard-A", "FEMALE"),
            "ko-KR" => ("ko-KR", "ko-KR-Standard-A", "FEMALE"), 
            "zh-CN" => ("zh-CN", "zh-CN-Standard-A", "FEMALE"),
            "th-TH" => ("th-TH", "th-TH-Standard-A", "FEMALE"),
            "ar-XA" => ("ar-XA", "ar-XA-Standard-A", "FEMALE"),
            "ru-RU" => ("ru-RU", "ru-RU-Standard-A", "FEMALE"),
            "fr-FR" => ("fr-FR", "fr-FR-Standard-A", "FEMALE"),
            "es-ES" => ("es-ES", "es-ES-Standard-A", "FEMALE"),
            "de-DE" => ("de-DE", "de-DE-Standard-A", "FEMALE"),
            "it-IT" => ("it-IT", "it-IT-Standard-A", "FEMALE"),
            "pt-PT" => ("pt-PT", "pt-PT-Standard-A", "FEMALE"),
            _ => ("en-US", "en-US-Standard-C", "FEMALE") // Default English
        };
    }
} 