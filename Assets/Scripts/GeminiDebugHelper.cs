using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using UnityEngine.UI;
using System;

/// <summary>
/// Helper script để debug Gemini Live API connection issues
/// </summary>
public class GeminiDebugHelper : MonoBehaviour
{
    [Header("UI References")]
    public TMP_Text debugText;
    public Button testButton;
    
    [Header("Debug Settings")]
    public bool autoRunOnStart = true;
    
    private string geminiApiKey;
    private string debugLog = "";
    
    void Start()
    {
        if (testButton != null)
        {
            testButton.onClick.AddListener(RunDiagnostics);
        }
        
        // Lấy API key từ RecordAudio
        var recordAudio = RecordAudio.Instance ?? FindObjectOfType<RecordAudio>();
        if (recordAudio != null)
        {
            var apiKeyField = typeof(RecordAudio).GetField("geminiApiKey", 
                System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
            if (apiKeyField != null)
            {
                geminiApiKey = (string)apiKeyField.GetValue(recordAudio);
            }
        }
        
        if (autoRunOnStart)
        {
            StartCoroutine(DelayedStart());
        }
    }
    
    private IEnumerator DelayedStart()
    {
        yield return new WaitForSeconds(2f);
        RunDiagnostics();
    }
    
    public void RunDiagnostics()
    {
        debugLog = "";
        LogMessage("=== GEMINI API DIAGNOSTICS ===");
        StartCoroutine(RunAllTests());
    }
    
    private IEnumerator RunAllTests()
    {
        // Test 1: API Key validation
        yield return StartCoroutine(TestApiKey());
        
        // Test 2: Network connectivity
        yield return StartCoroutine(TestNetworkConnectivity());
        
        // Test 3: Gemini API reachability
        yield return StartCoroutine(TestGeminiApiReachability());
        
        // Test 4: Gemini models list
        yield return StartCoroutine(TestGeminiModels());
        
        // Test 5: WebSocket support
        yield return StartCoroutine(TestWebSocketSupport());
        
        LogMessage("=== DIAGNOSTICS COMPLETED ===");
        LogMessage("");
        LogMessage("RECOMMENDATIONS:");
        ProvideRecommendations();
    }
    
    private IEnumerator TestApiKey()
    {
        LogMessage("1. Testing API Key...");
        
        if (string.IsNullOrEmpty(geminiApiKey))
        {
            LogMessage("❌ API Key is empty");
            LogMessage("   → Check config.json file");
        }
        else if (geminiApiKey == "YOUR_GEMINI_API_KEY_HERE")
        {
            LogMessage("❌ API Key not configured");
            LogMessage("   → Replace placeholder in config.json");
        }
        else if (geminiApiKey.Length < 30)
        {
            LogMessage("❌ API Key seems too short");
            LogMessage($"   → Current length: {geminiApiKey.Length}");
        }
        else
        {
            LogMessage($"✅ API Key format looks valid ({geminiApiKey.Length} chars)");
            LogMessage($"   → Key starts with: {geminiApiKey.Substring(0, Math.Min(10, geminiApiKey.Length))}...");
        }
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private IEnumerator TestNetworkConnectivity()
    {
        LogMessage("");
        LogMessage("2. Testing Network Connectivity...");
        
        // Test Google connectivity
        using (UnityWebRequest request = UnityWebRequest.Get("https://www.google.com"))
        {
            request.timeout = 5;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ Internet connectivity OK");
            }
            else
            {
                LogMessage($"❌ Internet connectivity failed: {request.error}");
            }
        }
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private IEnumerator TestGeminiApiReachability()
    {
        LogMessage("");
        LogMessage("3. Testing Gemini API Reachability...");
        
        string[] testUrls = {
            "https://generativelanguage.googleapis.com",
            "https://generativelanguage.googleapis.com/v1/models",
            $"https://generativelanguage.googleapis.com/v1/models?key={geminiApiKey}"
        };
        
        for (int i = 0; i < testUrls.Length; i++)
        {
            using (UnityWebRequest request = UnityWebRequest.Get(testUrls[i]))
            {
                request.timeout = 10;
                yield return request.SendWebRequest();
                
                LogMessage($"   Test {i + 1}: {request.responseCode} - {request.result}");
                
                if (request.result == UnityWebRequest.Result.Success)
                {
                    LogMessage($"   ✅ {testUrls[i]} - OK");
                }
                else
                {
                    LogMessage($"   ❌ {testUrls[i]} - {request.error}");
                    if (!string.IsNullOrEmpty(request.downloadHandler.text))
                    {
                        LogMessage($"      Response: {request.downloadHandler.text.Substring(0, Math.Min(200, request.downloadHandler.text.Length))}");
                    }
                }
            }
            yield return new WaitForSeconds(0.5f);
        }
    }
    
    private IEnumerator TestGeminiModels()
    {
        LogMessage("");
        LogMessage("4. Testing Gemini Models Access...");
        
        if (string.IsNullOrEmpty(geminiApiKey) || geminiApiKey == "YOUR_GEMINI_API_KEY_HERE")
        {
            LogMessage("❌ Skipping - API key not configured");
            yield break;
        }
        
        string url = $"https://generativelanguage.googleapis.com/v1/models?key={geminiApiKey}";
        
        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            request.timeout = 15;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                LogMessage("✅ Successfully accessed Gemini models");
                
                // Check for specific model
                string response = request.downloadHandler.text;
                if (response.Contains("gemini-2.5-flash-preview-native-audio-dialog"))
                {
                    LogMessage("✅ Native audio dialog model available");
                }
                else
                {
                    LogMessage("❌ Native audio dialog model not found");
                    LogMessage("   → This might be why WebSocket connection fails");
                }
            }
            else
            {
                LogMessage($"❌ Failed to access models: {request.error}");
                LogMessage($"   Response code: {request.responseCode}");
                
                if (request.responseCode == 403)
                {
                    LogMessage("   → API key might be invalid or restricted");
                }
                else if (request.responseCode == 404)
                {
                    LogMessage("   → API endpoint might have changed");
                }
            }
        }
    }
    
    private IEnumerator TestWebSocketSupport()
    {
        LogMessage("");
        LogMessage("5. Testing WebSocket Support...");
        
        // Unity WebSocket support check
        LogMessage($"   Platform: {Application.platform}");
        LogMessage($"   Unity version: {Application.unityVersion}");
        
        #if UNITY_WEBGL
        LogMessage("❌ WebGL platform - WebSocket support limited");
        #elif UNITY_ANDROID
        LogMessage("✅ Android platform - WebSocket should work");
        #elif UNITY_IOS
        LogMessage("✅ iOS platform - WebSocket should work");
        #elif UNITY_STANDALONE
        LogMessage("✅ Standalone platform - WebSocket should work");
        #else
        LogMessage("⚠️ Unknown platform - WebSocket support uncertain");
        #endif
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private void ProvideRecommendations()
    {
        LogMessage("");
        LogMessage("POSSIBLE SOLUTIONS:");
        LogMessage("1. Verify API key is correct and has Gemini Live access");
        LogMessage("2. Check if Gemini Live is available in your region");
        LogMessage("3. Try using HTTP API instead of WebSocket");
        LogMessage("4. Check firewall/proxy settings");
        LogMessage("5. Update Unity to latest version");
        LogMessage("6. Test on different network/device");
        LogMessage("");
        LogMessage("ALTERNATIVE APPROACH:");
        LogMessage("Use standard Gemini API with separate TTS instead of Live API");
    }
    
    private void LogMessage(string message)
    {
        debugLog += message + "\n";
        if (debugText != null)
        {
            debugText.text = debugLog;
        }
        Debug.Log($"[GeminiDebug] {message}");
        
        // Limit log size
        if (debugLog.Length > 3000)
        {
            debugLog = debugLog.Substring(debugLog.Length - 2500);
        }
    }
    
    [ContextMenu("Run Diagnostics")]
    public void RunDiagnosticsFromMenu()
    {
        RunDiagnostics();
    }
    
    [ContextMenu("Clear Log")]
    public void ClearLog()
    {
        debugLog = "";
        if (debugText != null)
        {
            debugText.text = "";
        }
    }
}
