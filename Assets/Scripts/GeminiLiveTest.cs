using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Script test đơn giản để kiểm tra Gemini Live API integration
/// Attach vào một GameObject trong scene để test
/// </summary>
public class GeminiLiveTest : MonoBehaviour
{
    [Header("UI References")]
    public Button testButton;
    public TMP_Text statusText;
    public TMP_Text logText;
    
    [Header("Test Settings")]
    public bool autoTest = false;
    public float autoTestDelay = 5f;
    
    private RecordAudio recordAudio;
    private string logMessages = "";
    
    void Start()
    {
        // Tìm RecordAudio instance
        recordAudio = RecordAudio.Instance;
        if (recordAudio == null)
        {
            recordAudio = FindObjectOfType<RecordAudio>();
        }
        
        if (recordAudio == null)
        {
            UpdateStatus("ERROR: RecordAudio not found!");
            return;
        }
        
        // Setup UI
        if (testButton != null)
        {
            testButton.onClick.AddListener(StartTest);
        }
        
        UpdateStatus("Ready to test Gemini Live API");
        
        // Auto test nếu được enable
        if (autoTest)
        {
            StartCoroutine(AutoTestRoutine());
        }
    }
    
    private IEnumerator AutoTestRoutine()
    {
        yield return new WaitForSeconds(autoTestDelay);
        StartTest();
    }
    
    public void StartTest()
    {
        if (recordAudio == null)
        {
            UpdateStatus("ERROR: RecordAudio not available");
            return;
        }
        
        UpdateStatus("Starting Gemini Live test...");
        LogMessage("=== GEMINI LIVE TEST STARTED ===");
        
        StartCoroutine(TestGeminiLiveIntegration());
    }
    
    private IEnumerator TestGeminiLiveIntegration()
    {
        // Test 1: Kiểm tra API Key
        LogMessage("Test 1: Checking API Key...");
        yield return StartCoroutine(TestApiKey());
        
        // Test 2: Kiểm tra Microphone
        LogMessage("Test 2: Checking Microphone...");
        yield return StartCoroutine(TestMicrophone());
        
        // Test 3: Kiểm tra AudioSource
        LogMessage("Test 3: Checking AudioSource...");
        yield return StartCoroutine(TestAudioSource());
        
        // Test 4: Test Gemini Live Connection (simulation)
        LogMessage("Test 4: Testing Gemini Live Connection...");
        yield return StartCoroutine(TestGeminiConnection());
        
        LogMessage("=== TEST COMPLETED ===");
        UpdateStatus("Test completed. Check logs for details.");
    }
    
    private IEnumerator TestApiKey()
    {
        // Sử dụng reflection để kiểm tra private field
        var apiKeyField = typeof(RecordAudio).GetField("geminiApiKey", 
            System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
        
        if (apiKeyField != null)
        {
            string apiKey = (string)apiKeyField.GetValue(recordAudio);
            if (string.IsNullOrEmpty(apiKey) || apiKey == "YOUR_GEMINI_API_KEY_HERE")
            {
                LogMessage("❌ API Key not configured properly");
                LogMessage("   Please set geminiApiKey in config.json");
            }
            else
            {
                LogMessage("✅ API Key configured");
                LogMessage($"   Key length: {apiKey.Length} characters");
            }
        }
        else
        {
            LogMessage("❌ Cannot access API Key field");
        }
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private IEnumerator TestMicrophone()
    {
        if (Microphone.devices.Length == 0)
        {
            LogMessage("❌ No microphone devices found");
        }
        else
        {
            LogMessage($"✅ Found {Microphone.devices.Length} microphone device(s):");
            for (int i = 0; i < Microphone.devices.Length; i++)
            {
                LogMessage($"   Device {i}: {Microphone.devices[i]}");
            }
        }
        
        // Test microphone permissions on Android
        #if UNITY_ANDROID
        if (UnityEngine.Android.Permission.HasUserAuthorizedPermission(UnityEngine.Android.Permission.Microphone))
        {
            LogMessage("✅ Microphone permission granted");
        }
        else
        {
            LogMessage("❌ Microphone permission not granted");
        }
        #endif
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private IEnumerator TestAudioSource()
    {
        var audioSourceField = typeof(RecordAudio).GetField("audioSource", 
            System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
        
        if (audioSourceField != null)
        {
            AudioSource audioSource = (AudioSource)audioSourceField.GetValue(recordAudio);
            if (audioSource != null)
            {
                LogMessage("✅ AudioSource found");
                LogMessage($"   Volume: {audioSource.volume}");
                LogMessage($"   Enabled: {audioSource.enabled}");
            }
            else
            {
                LogMessage("❌ AudioSource not assigned");
            }
        }
        else
        {
            LogMessage("❌ Cannot access AudioSource field");
        }
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private IEnumerator TestGeminiConnection()
    {
        LogMessage("🔄 Simulating Gemini Live connection test...");
        
        // Simulate connection test
        yield return new WaitForSeconds(1f);
        LogMessage("   Creating WebSocket client...");
        
        yield return new WaitForSeconds(1f);
        LogMessage("   Setting up headers...");
        
        yield return new WaitForSeconds(1f);
        LogMessage("   Testing connection (simulated)...");
        
        // Simulate random result
        bool connectionSuccess = Random.Range(0f, 1f) > 0.2f; // 80% success rate
        
        if (connectionSuccess)
        {
            LogMessage("✅ Connection test passed (simulated)");
            LogMessage("   Ready for real Gemini Live integration");
        }
        else
        {
            LogMessage("❌ Connection test failed (simulated)");
            LogMessage("   Check network and API key");
        }
        
        yield return new WaitForSeconds(0.5f);
    }
    
    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
        Debug.Log($"[GeminiLiveTest] {status}");
    }
    
    private void LogMessage(string message)
    {
        logMessages += message + "\n";
        if (logText != null)
        {
            logText.text = logMessages;
        }
        Debug.Log($"[GeminiLiveTest] {message}");
        
        // Giới hạn log length để tránh memory issues
        if (logMessages.Length > 2000)
        {
            logMessages = logMessages.Substring(logMessages.Length - 1500);
        }
    }
    
    // Public method để test từ Inspector hoặc script khác
    [ContextMenu("Run Test")]
    public void RunTestFromMenu()
    {
        StartTest();
    }
    
    // Clear logs
    [ContextMenu("Clear Logs")]
    public void ClearLogs()
    {
        logMessages = "";
        if (logText != null)
        {
            logText.text = "";
        }
        UpdateStatus("Logs cleared");
    }
}
