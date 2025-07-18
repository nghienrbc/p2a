using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using UnityEngine.UI;
using Newtonsoft.Json.Linq;
using System;

/// <summary>
/// Manual test script để debug specific Gemini Live API issues
/// Sử dụng khi automatic WebSocket connection fails
/// </summary>
public class GeminiLiveManualTest : MonoBehaviour
{
    #region Private Fields
    [Header("UI References")]
    [SerializeField] private TMP_Text m_StatusText;
    [SerializeField] private TMP_Text m_LogText;
    [SerializeField] private Button m_TestButton;
    [SerializeField] private Button m_ClearButton;
    
    private string m_LogMessages = "";
    private string m_GeminiApiKey = "";
    #endregion
    
    #region Unity Lifecycle
    private void Start()
    {
        InitializeComponents();
        LoadConfiguration();
    }
    #endregion
    
    #region Private Methods
    private void InitializeComponents()
    {
        if (m_TestButton != null)
            m_TestButton.onClick.AddListener(StartManualTest);
            
        if (m_ClearButton != null)
            m_ClearButton.onClick.AddListener(ClearLogs);
        
        UpdateStatus("Ready for manual Gemini Live test");
        LogMessage("=== GEMINI LIVE MANUAL DIAGNOSTICS ===");
    }
    
    private void LoadConfiguration()
    {
        var recordAudio = RecordAudio.Instance ?? FindObjectOfType<RecordAudio>();
        if (recordAudio != null)
        {
            var apiKeyField = typeof(RecordAudio).GetField("geminiApiKey", 
                System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
            if (apiKeyField != null)
            {
                m_GeminiApiKey = (string)apiKeyField.GetValue(recordAudio);
            }
        }
    }
    
    private void StartManualTest()
    {
        if (string.IsNullOrEmpty(m_GeminiApiKey))
        {
            LogMessage("❌ No API key found. Check config.json");
            return;
        }
        
        ClearLogs();
        LogMessage("🚀 Starting manual Gemini Live diagnostics...");
        StartCoroutine(RunManualDiagnostics());
    }
    
    private IEnumerator RunManualDiagnostics()
    {
        // Test 1: Check API key validity
        LogMessage("\n📋 Test 1: API Key Validation");
        yield return StartCoroutine(TestApiKeyValidity());
        
        // Test 2: Check available models 
        LogMessage("\n📋 Test 2: Available Models Check");
        yield return StartCoroutine(TestAvailableModels());
        
        // Test 3: Test basic generation
        LogMessage("\n📋 Test 3: Basic Text Generation");
        yield return StartCoroutine(TestBasicGeneration());
        
        // Test 4: Test audio capabilities
        LogMessage("\n📋 Test 4: Audio Capabilities");
        yield return StartCoroutine(TestAudioCapabilities());
        
        // Test 5: Platform compatibility
        LogMessage("\n📋 Test 5: Platform Compatibility");
        TestPlatformCompatibility();
        
        // Test 6: Network diagnostics
        LogMessage("\n📋 Test 6: Network Diagnostics");
        yield return StartCoroutine(TestNetworkDiagnostics());
        
        LogMessage("\n🎉 Manual diagnostics completed!");
        ProvideRecommendations();
    }
    
    private IEnumerator TestApiKeyValidity()
    {
        if (string.IsNullOrEmpty(m_GeminiApiKey) || m_GeminiApiKey == "YOUR_GEMINI_API_KEY_HERE")
        {
            LogMessage("❌ API key not configured or is placeholder");
            yield break;
        }
        
        if (m_GeminiApiKey.Length < 30)
        {
            LogMessage($"⚠️ API key seems too short ({m_GeminiApiKey.Length} chars)");
        }
        else
        {
            LogMessage($"✅ API key format looks valid ({m_GeminiApiKey.Length} chars)");
        }
        
        // Test API key with simple request
        string testUrl = $"https://generativelanguage.googleapis.com/v1/models?key={m_GeminiApiKey}";
        
        using (UnityWebRequest request = UnityWebRequest.Get(testUrl))
        {
            request.timeout = 10;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ API key is valid and working");
            }
            else
            {
                LogMessage($"❌ API key test failed: {request.error}");
                LogMessage($"   Response code: {request.responseCode}");
                
                if (request.responseCode == 403)
                {
                    LogMessage("   → API key is invalid or doesn't have required permissions");
                }
                else if (request.responseCode == 429)
                {
                    LogMessage("   → Rate limited - too many requests");
                }
            }
        }
    }
    
    private IEnumerator TestAvailableModels()
    {
        string modelsUrl = $"https://generativelanguage.googleapis.com/v1/models?key={m_GeminiApiKey}";
        
        using (UnityWebRequest request = UnityWebRequest.Get(modelsUrl))
        {
            request.timeout = 15;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    var response = JObject.Parse(request.downloadHandler.text);
                    var models = response["models"];
                    
                    int totalModels = 0;
                    bool hasLive = false;
                    bool hasFlash2_0 = false;
                    bool hasFlash2_5 = false;
                    bool hasAudio = false;
                    
                    if (models != null)
                    {
                        foreach (var model in models)
                        {
                            string modelName = model["name"]?.ToString() ?? "";
                            totalModels++;
                            
                            if (modelName.Contains("live"))
                            {
                                hasLive = true;
                                LogMessage($"   🎯 Live model: {modelName}");
                            }
                            else if (modelName.Contains("2.0-flash"))
                            {
                                hasFlash2_0 = true;
                                LogMessage($"   ⚡ 2.0 Flash: {modelName}");
                            }
                            else if (modelName.Contains("2.5-flash"))
                            {
                                hasFlash2_5 = true;
                                LogMessage($"   ⚡ 2.5 Flash: {modelName}");
                            }
                            
                            if (modelName.Contains("audio") || modelName.Contains("speech"))
                            {
                                hasAudio = true;
                                LogMessage($"   🔊 Audio model: {modelName}");
                            }
                        }
                    }
                    
                    LogMessage($"✅ Found {totalModels} total models");
                    
                    if (hasLive)
                        LogMessage("✅ Live API models available");
                    else
                        LogMessage("❌ No Live API models found");
                        
                    if (hasFlash2_0 || hasFlash2_5)
                        LogMessage("✅ Flash models available");
                    else
                        LogMessage("❌ No Flash models found");
                        
                    if (hasAudio)
                        LogMessage("✅ Audio models available");
                    else
                        LogMessage("⚠️ No dedicated audio models found");
                }
                catch (Exception e)
                {
                    LogMessage($"❌ Error parsing models response: {e.Message}");
                }
            }
            else
            {
                LogMessage($"❌ Failed to get models list: {request.error}");
            }
        }
    }
    
    private IEnumerator TestBasicGeneration()
    {
        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new[]
                    {
                        new { text = "Respond with exactly: Hello from Gemini API" }
                    }
                }
            }
        };

        string jsonData = Newtonsoft.Json.JsonConvert.SerializeObject(requestData);
        string url = $"https://generativelanguage.googleapis.com/v1/models/gemini-1.5-flash:generateContent?key={m_GeminiApiKey}";

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
                LogMessage("✅ Basic text generation successful");
                
                try
                {
                    var response = JObject.Parse(request.downloadHandler.text);
                    var text = response["candidates"]?[0]?["content"]?["parts"]?[0]?["text"]?.ToString();
                    if (!string.IsNullOrEmpty(text))
                    {
                        LogMessage($"   Response: {text}");
                    }
                }
                catch (Exception e)
                {
                    LogMessage($"   Error parsing response: {e.Message}");
                }
            }
            else
            {
                LogMessage($"❌ Basic generation failed: {request.error}");
                LogMessage($"   Response: {request.downloadHandler.text}");
            }
        }
    }
    
    private IEnumerator TestAudioCapabilities()
    {
        // Test if we can use audio input/output
        string[] audioModels = {
            "gemini-1.5-flash",
            "gemini-2.0-flash", 
            "gemini-2.5-flash",
            "gemini-2.0-flash-live-001"
        };
        
        foreach (string model in audioModels)
        {
            LogMessage($"   Testing audio with {model}...");
            
            var requestData = new
            {
                contents = new[]
                {
                    new
                    {
                        parts = new[]
                        {
                            new { text = "Can you process audio input?" }
                        }
                    }
                },
                generation_config = new
                {
                    response_modalities = new[] { "TEXT" }
                }
            };

            string jsonData = Newtonsoft.Json.JsonConvert.SerializeObject(requestData);
            string url = $"https://generativelanguage.googleapis.com/v1/models/{model}:generateContent?key={m_GeminiApiKey}";

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
                    LogMessage($"   ✅ {model} accessible");
                }
                else
                {
                    LogMessage($"   ❌ {model} failed: {request.responseCode}");
                }
            }
            
            yield return new WaitForSeconds(0.5f); // Rate limiting prevention
        }
    }
    
    private void TestPlatformCompatibility()
    {
        LogMessage($"   Platform: {Application.platform}");
        LogMessage($"   Unity version: {Application.unityVersion}");
        LogMessage($"   Internet reachability: {Application.internetReachability}");
        
        #if UNITY_EDITOR
        LogMessage("   ⚠️ Running in Editor - WebSocket limitations expected");
        #elif UNITY_ANDROID
        LogMessage("   ✅ Android - WebSocket should work well");
        #elif UNITY_IOS
        LogMessage("   ✅ iOS - WebSocket should work well");
        #elif UNITY_STANDALONE
        LogMessage("   ✅ Standalone - WebSocket should work");
        #elif UNITY_WEBGL
        LogMessage("   ❌ WebGL - WebSocket very limited");
        #else
        LogMessage("   ⚠️ Unknown platform - compatibility uncertain");
        #endif
        
        // Check microphone
        if (Microphone.devices.Length > 0)
        {
            LogMessage($"   ✅ Microphone available: {Microphone.devices[0]}");
        }
        else
        {
            LogMessage("   ❌ No microphone devices found");
        }
    }
    
    private IEnumerator TestNetworkDiagnostics()
    {
        // Test basic connectivity
        string[] testUrls = {
            "https://www.google.com",
            "https://generativelanguage.googleapis.com",
            "https://ai.google.dev"
        };
        
        foreach (string url in testUrls)
        {
            LogMessage($"   Testing {url}...");
            
            using (UnityWebRequest request = UnityWebRequest.Get(url))
            {
                request.timeout = 10;
                yield return request.SendWebRequest();
                
                if (request.result == UnityWebRequest.Result.Success)
                {
                    LogMessage($"   ✅ {url} reachable");
                }
                else
                {
                    LogMessage($"   ❌ {url} failed: {request.error}");
                }
            }
            
            yield return new WaitForSeconds(0.5f);
        }
    }
    
    private void ProvideRecommendations()
    {
        LogMessage("\n💡 RECOMMENDATIONS:");
        LogMessage("1. If Live API models not found:");
        LogMessage("   → Try using gemini-1.5-flash with HTTP fallback");
        LogMessage("   → Check Google AI Studio for region availability");
        LogMessage("2. If WebSocket fails:");
        LogMessage("   → Use HTTP API alternative (already implemented)");
        LogMessage("   → Test on real device instead of Editor");
        LogMessage("3. If API key issues:");
        LogMessage("   → Regenerate key in Google AI Studio");
        LogMessage("   → Check billing and quotas");
        LogMessage("4. Alternative solutions:");
        LogMessage("   → Enable HTTP fallback (automatic)");
        LogMessage("   → Use old method (Whisper + OpenAI + TTS)");
    }
    
    private void LogMessage(string message)
    {
        m_LogMessages += message + "\n";
        if (m_LogText != null)
        {
            m_LogText.text = m_LogMessages;
        }
        Debug.Log($"[GeminiManualTest] {message}");
        
        // Auto-scroll to bottom
        if (m_LogText != null)
        {
            Canvas.ForceUpdateCanvases();
        }
        
        // Limit log size
        if (m_LogMessages.Length > 8000)
        {
            m_LogMessages = m_LogMessages.Substring(m_LogMessages.Length - 6000);
        }
    }
    
    private void UpdateStatus(string status)
    {
        if (m_StatusText != null)
        {
            m_StatusText.text = status;
        }
        Debug.Log($"[GeminiManualTest] Status: {status}");
    }
    
    private void ClearLogs()
    {
        m_LogMessages = "";
        if (m_LogText != null)
        {
            m_LogText.text = "";
        }
    }
    #endregion
    
    #region Public Methods
    [ContextMenu("Run Manual Test")]
    public void RunManualTestFromMenu()
    {
        StartManualTest();
    }
    
    [ContextMenu("Clear Logs")]
    public void ClearLogsFromMenu()
    {
        ClearLogs();
    }
    #endregion
} 