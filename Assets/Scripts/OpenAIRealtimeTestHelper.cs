using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Collections.Generic;
using System.Linq;

/// <summary>
/// Helper script để test và debug OpenAI Realtime Speech Controller
/// Kiểm tra dependencies, permissions, và cung cấp diagnostic info
/// </summary>
public class OpenAIRealtimeTestHelper : MonoBehaviour
{
    [Header("Test Configuration")]
    public Button testButton;
    public TMP_Text resultText;
    
    [Header("Dependencies Check")]
    public bool checkWebSocket = true;
    public bool checkMicrophone = true;
    public bool checkAudio = true;
    public bool checkJSON = true;
    
    private string testResults = "";

    private void Start()
    {
        if (testButton != null)
            testButton.onClick.AddListener(RunDiagnostics);
            
        // Auto-run diagnostics on start
        RunDiagnostics();
    }

    [ContextMenu("Run Diagnostics")]
    public void RunDiagnostics()
    {
        testResults = "";
        LogResult("🔍 OpenAI Realtime API Diagnostics\n" + new string('=', 40));
        
        CheckUnityVersion();
        CheckDependencies();
        CheckMicrophoneDevices();
        CheckAudioSystem();
        CheckNetworkConnectivity();
        CheckPlatformSupport();
        
        LogResult("\n" + new string('=', 40));
        LogResult("✅ Diagnostics completed!");
        
        DisplayResults();
    }

    private void CheckUnityVersion()
    {
        LogResult($"\n📱 Unity Version: {Application.unityVersion}");
        LogResult($"🎮 Platform: {Application.platform}");

        #if UNITY_EDITOR
        LogResult($"📦 Build Target: {UnityEditor.EditorUserBuildSettings.activeBuildTarget}");
        #else
        LogResult($"📦 Runtime Platform: {Application.platform}");
        #endif
    }

    private void CheckDependencies()
    {
        LogResult("\n🔧 Dependencies Check:");
        
        // Check NativeWebSocket
        if (checkWebSocket)
        {
            try
            {
                var wsType = System.Type.GetType("NativeWebSocket.WebSocket");
                if (wsType != null)
                {
                    LogResult("✅ NativeWebSocket package found");
                }
                else
                {
                    LogResult("❌ NativeWebSocket package missing!");
                    LogResult("   Install via: Window > Package Manager > Add package from git URL");
                    LogResult("   URL: https://github.com/endel/NativeWebSocket.git#upm");
                }
            }
            catch
            {
                LogResult("❌ NativeWebSocket package not accessible");
            }
        }
        
        // Check Newtonsoft.Json
        if (checkJSON)
        {
            try
            {
                var jsonType = System.Type.GetType("Newtonsoft.Json.JsonConvert");
                if (jsonType != null)
                {
                    LogResult("✅ Newtonsoft.Json package found");
                }
                else
                {
                    LogResult("❌ Newtonsoft.Json package missing!");
                    LogResult("   Install via: Window > Package Manager > Unity Registry");
                    LogResult("   Search: com.unity.nuget.newtonsoft-json");
                }
            }
            catch
            {
                LogResult("❌ Newtonsoft.Json package not accessible");
            }
        }
    }

    private void CheckMicrophoneDevices()
    {
        LogResult("\n🎤 Microphone Check:");
        
        string[] devices = Microphone.devices;
        LogResult($"📊 Found {devices.Length} microphone device(s):");
        
        if (devices.Length == 0)
        {
            LogResult("❌ No microphone devices found!");
            LogResult("   - Check microphone is connected");
            LogResult("   - Grant microphone permissions");
            LogResult("   - Restart Unity if needed");
        }
        else
        {
            for (int i = 0; i < devices.Length; i++)
            {
                LogResult($"   {i + 1}. {devices[i]}");
                
                // Test microphone capabilities
                int minFreq, maxFreq;
                Microphone.GetDeviceCaps(devices[i], out minFreq, out maxFreq);
                LogResult($"      Frequency range: {minFreq}Hz - {maxFreq}Hz");
                
                // Check if 24kHz is supported (required for OpenAI)
                if (maxFreq >= 24000 || maxFreq == 0)
                {
                    LogResult("      ✅ Supports 24kHz (OpenAI compatible)");
                }
                else
                {
                    LogResult("      ⚠️ May not support 24kHz");
                }
            }
        }
    }

    private void CheckAudioSystem()
    {
        LogResult("\n🔊 Audio System Check:");
        
        // Check AudioSource
        AudioSource audioSource = FindObjectOfType<AudioSource>();
        if (audioSource != null)
        {
            LogResult("✅ AudioSource found in scene");
            LogResult($"   Volume: {audioSource.volume}");
            LogResult($"   Mute: {audioSource.mute}");
        }
        else
        {
            LogResult("⚠️ No AudioSource found in scene");
            LogResult("   Add AudioSource component to play AI responses");
        }
        
        // Check Audio Settings
        AudioConfiguration audioConfig = AudioSettings.GetConfiguration();
        LogResult($"📊 Audio Configuration:");
        LogResult($"   Sample Rate: {audioConfig.sampleRate}Hz");
        LogResult($"   Buffer Size: {audioConfig.dspBufferSize}");
        LogResult($"   Speaker Mode: {audioConfig.speakerMode}");
    }

    private void CheckNetworkConnectivity()
    {
        LogResult("\n🌐 Network Check:");
        
        NetworkReachability reachability = Application.internetReachability;
        switch (reachability)
        {
            case NetworkReachability.NotReachable:
                LogResult("❌ No internet connection");
                break;
            case NetworkReachability.ReachableViaCarrierDataNetwork:
                LogResult("✅ Internet via mobile data");
                LogResult("   ⚠️ Consider WiFi for better WebSocket performance");
                break;
            case NetworkReachability.ReachableViaLocalAreaNetwork:
                LogResult("✅ Internet via WiFi/LAN");
                break;
        }
        
        // Check WebSocket support
        #if UNITY_WEBGL && !UNITY_EDITOR
        LogResult("⚠️ WebGL platform - WebSocket support may be limited");
        #else
        LogResult("✅ Platform supports native WebSocket");
        #endif
    }

    private void CheckPlatformSupport()
    {
        LogResult("\n🎯 Platform Support:");
        
        RuntimePlatform platform = Application.platform;
        switch (platform)
        {
            case RuntimePlatform.WindowsEditor:
            case RuntimePlatform.WindowsPlayer:
                LogResult("✅ Windows - Full support");
                break;
                
            case RuntimePlatform.OSXEditor:
            case RuntimePlatform.OSXPlayer:
                LogResult("✅ macOS - Full support");
                break;
                
            case RuntimePlatform.Android:
                LogResult("✅ Android - Full support");
                LogResult("   📱 Ensure microphone permission in build settings");
                break;
                
            case RuntimePlatform.IPhonePlayer:
                LogResult("✅ iOS - Full support");
                LogResult("   📱 Add microphone usage description");
                break;
                
            case RuntimePlatform.WebGLPlayer:
                LogResult("⚠️ WebGL - Limited WebSocket support");
                LogResult("   Consider using native builds for better performance");
                break;
                
            default:
                LogResult($"⚠️ {platform} - Support not tested");
                break;
        }
    }

    private void LogResult(string message)
    {
        testResults += message + "\n";
        Debug.Log($"[OpenAIRealtimeTest] {message}");
    }

    private void DisplayResults()
    {
        if (resultText != null)
        {
            resultText.text = testResults;
        }
    }

    [ContextMenu("Test Microphone Recording")]
    public void TestMicrophoneRecording()
    {
        if (Microphone.devices.Length == 0)
        {
            Debug.LogError("No microphone devices available!");
            return;
        }

        string device = Microphone.devices[0];
        AudioClip clip = Microphone.Start(device, false, 3, 24000);
        
        Debug.Log($"Recording 3 seconds from {device}...");
        
        // Stop after 3 seconds
        Invoke(nameof(StopTestRecording), 3f);
    }

    private void StopTestRecording()
    {
        Microphone.End(null);
        Debug.Log("Test recording completed!");
    }

    [ContextMenu("Generate Setup Report")]
    public void GenerateSetupReport()
    {
        string report = "# OpenAI Realtime API Setup Report\n\n";
        report += $"**Generated:** {System.DateTime.Now}\n";
        report += $"**Unity Version:** {Application.unityVersion}\n";
        report += $"**Platform:** {Application.platform}\n\n";
        
        report += "## Dependencies Status\n";
        report += "- [ ] NativeWebSocket package\n";
        report += "- [ ] Newtonsoft.Json package\n";
        report += "- [ ] OpenAI API Key configured\n\n";
        
        report += "## Hardware Status\n";
        report += $"- Microphone devices: {Microphone.devices.Length}\n";
        report += $"- Audio system: {(FindObjectOfType<AudioSource>() != null ? "Ready" : "Missing AudioSource")}\n";
        report += $"- Network: {Application.internetReachability}\n\n";
        
        report += "## Next Steps\n";
        report += "1. Install missing packages\n";
        report += "2. Configure OpenAI API Key\n";
        report += "3. Test with OpenAIRealtimeSpeechController\n";
        
        Debug.Log(report);
        
        // Save to file
        string path = System.IO.Path.Combine(Application.persistentDataPath, "openai_setup_report.md");
        System.IO.File.WriteAllText(path, report);
        Debug.Log($"Setup report saved to: {path}");
    }
}
