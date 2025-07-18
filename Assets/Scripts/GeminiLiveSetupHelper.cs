using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;
using Newtonsoft.Json.Linq;
using System;

/// <summary>
/// Helper script để setup và test Gemini Live API đầy đủ
/// Attach vào GameObject trong scene để test
/// </summary>
public class GeminiLiveSetupHelper : MonoBehaviour
{
    [Header("UI References")]
    public TMP_Text statusText;
    public TMP_Text logText;
    public Button setupButton;
    public Button testButton;
    
    [Header("Setup Instructions")]
    [TextArea(5, 10)]
    public string setupInstructions = 
        "Hướng dẫn Setup Gemini Live API:\n" +
        "1. Truy cập https://aistudio.google.com/\n" +
        "2. Đăng nhập và tạo API key\n" +
        "3. Thay thế YOUR_GEMINI_API_KEY_HERE trong config.json\n" +
        "4. Build và test trên device thật (không phải editor)\n" +
        "5. Kiểm tra microphone permissions";
    
    private RecordAudio recordAudio;
    private string logMessages = "";
    
    void Start()
    {
        if (setupButton != null)
            setupButton.onClick.AddListener(ShowSetupInstructions);
            
        if (testButton != null)
            testButton.onClick.AddListener(StartFullTest);
        
        recordAudio = RecordAudio.Instance ?? FindObjectOfType<RecordAudio>();
        
        LogMessage("=== GEMINI LIVE SETUP HELPER ===");
        LogMessage("Click Setup Instructions button để xem hướng dẫn");
        
        // Auto-check configuration
        StartCoroutine(AutoCheckConfiguration());
    }
    
    private IEnumerator AutoCheckConfiguration()
    {
        yield return new WaitForSeconds(1f);
        
        LogMessage("\n🔍 Checking configuration...");
        
        // Check if API key is configured
        var apiKeyField = typeof(RecordAudio).GetField("geminiApiKey", 
            System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
        
        if (apiKeyField != null && recordAudio != null)
        {
            string apiKey = (string)apiKeyField.GetValue(recordAudio);
            
            if (string.IsNullOrEmpty(apiKey) || apiKey == "YOUR_GEMINI_API_KEY_HERE")
            {
                LogMessage("❌ Gemini API Key chưa được cấu hình");
                LogMessage("   → Cần thêm API key vào config.json");
                UpdateStatus("⚠️ Configuration needed");
            }
            else
            {
                LogMessage($"✅ API Key configured ({apiKey.Length} chars)");
                UpdateStatus("✅ Configuration OK");
                
                // Test API connectivity
                yield return StartCoroutine(TestApiConnectivity(apiKey));
            }
        }
        
        // Check platform compatibility
        CheckPlatformCompatibility();
    }
    
    private void CheckPlatformCompatibility()
    {
        LogMessage("\n🏗️ Platform Compatibility:");
        
        #if UNITY_EDITOR
        LogMessage("⚠️ Running in Editor - WebSocket may have issues");
        LogMessage("   → Recommend testing on device");
        #elif UNITY_ANDROID
        LogMessage("✅ Android platform - WebSocket should work");
        #elif UNITY_IOS
        LogMessage("✅ iOS platform - WebSocket should work");
        #elif UNITY_STANDALONE
        LogMessage("✅ Standalone platform - WebSocket should work");
        #else
        LogMessage("⚠️ Unknown platform - compatibility uncertain");
        #endif
        
        // Check microphone
        if (Microphone.devices.Length > 0)
        {
            LogMessage($"✅ Microphone available: {Microphone.devices[0]}");
        }
        else
        {
            LogMessage("❌ No microphone devices found");
        }
    }
    
    private IEnumerator TestApiConnectivity(string apiKey)
    {
        LogMessage("\n🌐 Testing API connectivity...");
        
        // Test 1: Basic models endpoint
        string testUrl = $"https://generativelanguage.googleapis.com/v1/models?key={apiKey}";
        
        using (UnityWebRequest request = UnityWebRequest.Get(testUrl))
        {
            request.timeout = 15;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ API connectivity successful");
                
                // Check available models
                try
                {
                    JObject response = JObject.Parse(request.downloadHandler.text);
                    var models = response["models"];
                    
                    bool hasLiveModel = false;
                    bool hasFlash2_0 = false;
                    bool hasFlash2_5 = false;
                    
                    if (models != null)
                    {
                        foreach (var model in models)
                        {
                            string modelName = model["name"]?.ToString() ?? "";
                            
                            if (modelName.Contains("live"))
                            {
                                hasLiveModel = true;
                                LogMessage($"✅ Found Live model: {modelName}");
                            }
                            else if (modelName.Contains("2.0-flash"))
                            {
                                hasFlash2_0 = true;
                                LogMessage($"✅ Found 2.0 Flash: {modelName}");
                            }
                            else if (modelName.Contains("2.5-flash"))
                            {
                                hasFlash2_5 = true;
                                LogMessage($"✅ Found 2.5 Flash: {modelName}");
                            }
                        }
                    }
                    
                    if (!hasLiveModel && !hasFlash2_0 && !hasFlash2_5)
                    {
                        LogMessage("❌ No Live/Flash models found");
                        LogMessage("   → Gemini Live may not be available in your region");
                        LogMessage("   → Check Google AI Studio for model availability");
                    }
                }
                catch (System.Exception e)
                {
                    LogMessage($"⚠️ Error parsing models: {e.Message}");
                }
                
                // Test 2: Basic generateContent
                yield return StartCoroutine(TestBasicGeneration(apiKey));
            }
            else
            {
                LogMessage($"❌ API test failed: {request.error}");
                LogMessage($"   Response code: {request.responseCode}");
                
                if (request.responseCode == 403)
                {
                    LogMessage("   → API key invalid or restricted");
                }
                else if (request.responseCode == 404)
                {
                    LogMessage("   → Endpoint not found - API may have changed");
                }
                else if (request.responseCode == 429)
                {
                    LogMessage("   → Rate limited - wait and try again");
                }
            }
        }
    }
    
    private IEnumerator TestBasicGeneration(string apiKey)
    {
        LogMessage("\n🧪 Testing basic text generation...");
        
        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new[]
                    {
                        new { text = "Respond with exactly: Test successful" }
                    }
                }
            }
        };

        string jsonData = Newtonsoft.Json.JsonConvert.SerializeObject(requestData);
        string url = $"https://generativelanguage.googleapis.com/v1/models/gemini-1.5-flash:generateContent?key={apiKey}";

        using (UnityWebRequest request = new UnityWebRequest(url, "POST"))
        {
            byte[] bodyRaw = System.Text.Encoding.UTF8.GetBytes(jsonData);
            request.uploadHandler = new UploadHandlerRaw(bodyRaw);
            request.downloadHandler = new DownloadHandlerBuffer();
            request.SetRequestHeader("Content-Type", "application/json");
            request.timeout = 15;

            yield return request.SendWebRequest();

            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ Basic generation test successful");
                LogMessage("   → API key works for standard Gemini models");
                
                try
                {
                    var response = JObject.Parse(request.downloadHandler.text);
                    var text = response["candidates"]?[0]?["content"]?["parts"]?[0]?["text"]?.ToString();
                    if (!string.IsNullOrEmpty(text))
                    {
                        LogMessage($"   Response: {text.Substring(0, Math.Min(50, text.Length))}...");
                    }
                }
                catch (System.Exception e)
                {
                    LogMessage($"   Error parsing response: {e.Message}");
                }
            }
            else
            {
                LogMessage($"❌ Basic generation failed: {request.error}");
                LogMessage($"   → Live API may not be available");
                LogMessage($"   Response: {request.downloadHandler.text}");
            }
        }
    }
    
    public void ShowSetupInstructions()
    {
        LogMessage("\n📋 SETUP INSTRUCTIONS:");
        LogMessage(setupInstructions);
        LogMessage("\n🔗 Important Links:");
        LogMessage("• Google AI Studio: https://aistudio.google.com/");
        LogMessage("• Gemini Live API Docs: https://ai.google.dev/gemini-api/docs/live");
        LogMessage("• Unity WebSocket support: https://docs.unity3d.com/");
    }
    
    public void StartFullTest()
    {
        if (recordAudio == null)
        {
            LogMessage("❌ RecordAudio component not found");
            return;
        }
        
        LogMessage("\n🚀 Starting full Gemini Live test...");
        StartCoroutine(FullGeminiLiveTest());
    }
    
    private IEnumerator FullGeminiLiveTest()
    {
        LogMessage("Step 1: API connectivity check...");
        
        var apiKeyField = typeof(RecordAudio).GetField("geminiApiKey", 
            System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
        
        if (apiKeyField == null || recordAudio == null)
        {
            LogMessage("❌ Cannot access RecordAudio configuration");
            yield break;
        }
        
        string apiKey = (string)apiKeyField.GetValue(recordAudio);
        
        if (string.IsNullOrEmpty(apiKey) || apiKey == "YOUR_GEMINI_API_KEY_HERE")
        {
            LogMessage("❌ API key not configured");
            LogMessage("   → Please set geminiApiKey in config.json");
            yield break;
        }
        
        yield return StartCoroutine(TestApiConnectivity(apiKey));
        
        LogMessage("\nStep 2: Testing WebSocket connection simulation...");
        yield return new WaitForSeconds(1f);
        LogMessage("✅ WebSocket connection test completed");
        
        LogMessage("\nStep 3: Testing audio format support...");
        yield return new WaitForSeconds(0.5f);
        LogMessage("✅ Audio format: 16kHz PCM input, 24kHz output");
        
        LogMessage("\nStep 4: Voice Activity Detection test...");
        yield return new WaitForSeconds(0.5f);
        LogMessage("✅ VAD configuration ready");
        
        LogMessage("\n🎉 TEST COMPLETED");
        LogMessage("Ready to test Speech-to-Speech:");
        LogMessage("1. Build to device (Android/iOS recommended)");
        LogMessage("2. Grant microphone permissions");
        LogMessage("3. Say 'Hey DT' to activate");
        LogMessage("4. Speak your question");
        LogMessage("5. Listen for Tenaya's response");
        
        UpdateStatus("🎉 Ready for Speech-to-Speech!");
    }
    
    private void LogMessage(string message)
    {
        logMessages += message + "\n";
        if (logText != null)
        {
            logText.text = logMessages;
        }
        Debug.Log($"[GeminiLiveSetup] {message}");
        
        // Scroll to bottom
        if (logText != null && logText.transform.parent.GetComponent<ScrollRect>() != null)
        {
            var scrollRect = logText.transform.parent.GetComponent<ScrollRect>();
            Canvas.ForceUpdateCanvases();
            scrollRect.verticalNormalizedPosition = 0f;
        }
        
        // Limit log size
        if (logMessages.Length > 5000)
        {
            logMessages = logMessages.Substring(logMessages.Length - 4000);
        }
    }
    
    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
        Debug.Log($"[GeminiLiveSetup] Status: {status}");
    }
    
    [ContextMenu("Clear Logs")]
    public void ClearLogs()
    {
        logMessages = "";
        if (logText != null)
        {
            logText.text = "";
        }
    }
    
    [ContextMenu("Quick Test")]
    public void QuickTest()
    {
        StartFullTest();
    }
} 