using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using TMPro;
using UnityEngine.UI;
using Newtonsoft.Json.Linq;
using System.Linq;

/// <summary>
/// Script để test Gemini HTTP API trước khi sử dụng trong production
/// </summary>
public class GeminiHttpTester : MonoBehaviour
{
    [Header("UI References")]
    public TMP_Text statusText;
    public TMP_Text responseText;
    public Button testButton;
    
    [Header("Test Settings")]
    public bool testOnStart = true;
    
    private string geminiApiKey;
    
    void Start()
    {
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
        
        if (testButton != null)
        {
            testButton.onClick.AddListener(TestGeminiHttpApi);
        }
        
        if (testOnStart)
        {
            StartCoroutine(DelayedTest());
        }
    }
    
    private IEnumerator DelayedTest()
    {
        yield return new WaitForSeconds(1f);
        TestGeminiHttpApi();
    }
    
    public void TestGeminiHttpApi()
    {
        UpdateStatus("Testing Gemini HTTP API...");
        StartCoroutine(RunGeminiHttpTest());
    }
    
    private IEnumerator RunGeminiHttpTest()
    {
        if (string.IsNullOrEmpty(geminiApiKey) || geminiApiKey == "YOUR_GEMINI_API_KEY_HERE")
        {
            UpdateStatus("❌ API Key not configured");
            UpdateResponse("Please set geminiApiKey in config.json");
            yield break;
        }
        
        // Test 1: Simple text generation
        yield return StartCoroutine(TestTextGeneration());
        
        // Test 2: Models list
        yield return StartCoroutine(TestModelsList());
        
        UpdateStatus("✅ HTTP API tests completed");
    }
    
    private IEnumerator TestTextGeneration()
    {
        UpdateStatus("Testing text generation...");
        
        var requestData = new
        {
            contents = new[]
            {
                new
                {
                    parts = new[]
                    {
                        new
                        {
                            text = "Hello, please respond with 'Gemini HTTP API is working' in Vietnamese."
                        }
                    }
                }
            }
        };

        string jsonData = Newtonsoft.Json.JsonConvert.SerializeObject(requestData);
        string url = $"https://generativelanguage.googleapis.com/v1/models/gemini-1.5-flash:generateContent?key={geminiApiKey}";

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
                try
                {
                    JObject response = JObject.Parse(request.downloadHandler.text);
                    
                    var candidates = response["candidates"];
                    if (candidates != null && candidates.HasValues)
                    {
                        var firstCandidate = candidates[0];
                        var content = firstCandidate["content"];
                        if (content != null)
                        {
                            var parts = content["parts"];
                            if (parts != null && parts.HasValues)
                            {
                                var firstPart = parts[0];
                                string responseText = firstPart["text"]?.ToString();
                                
                                if (!string.IsNullOrEmpty(responseText))
                                {
                                    UpdateStatus("✅ Text generation successful");
                                    UpdateResponse($"Response: {responseText}");
                                    yield break;
                                }
                            }
                        }
                    }
                    
                    UpdateStatus("❌ Invalid response structure");
                    UpdateResponse($"Raw response: {request.downloadHandler.text}");
                }
                catch (System.Exception e)
                {
                    UpdateStatus($"❌ JSON parsing error: {e.Message}");
                    UpdateResponse($"Raw response: {request.downloadHandler.text}");
                }
            }
            else
            {
                UpdateStatus($"❌ Request failed: {request.error}");
                UpdateResponse($"Status: {request.responseCode}\nResponse: {request.downloadHandler.text}");
            }
        }
    }
    
    private IEnumerator TestModelsList()
    {
        UpdateStatus("Testing models list...");
        
        string url = $"https://generativelanguage.googleapis.com/v1/models?key={geminiApiKey}";
        
        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            request.timeout = 10;
            yield return request.SendWebRequest();
            
            if (request.result == UnityWebRequest.Result.Success)
            {
                try
                {
                    JObject response = JObject.Parse(request.downloadHandler.text);
                    var models = response["models"];
                    
                    if (models != null)
                    {
                        int modelCount = models.Count();
                        UpdateStatus($"✅ Found {modelCount} available models");
                        
                        // Check for specific models
                        bool hasFlash = false;
                        bool hasAudioDialog = false;
                        
                        foreach (var model in models)
                        {
                            string modelName = model["name"]?.ToString() ?? "";
                            if (modelName.Contains("gemini-1.5-flash"))
                            {
                                hasFlash = true;
                            }
                            if (modelName.Contains("native-audio-dialog"))
                            {
                                hasAudioDialog = true;
                            }
                        }
                        
                        string modelInfo = $"Models available:\n";
                        modelInfo += $"- Gemini 1.5 Flash: {(hasFlash ? "✅" : "❌")}\n";
                        modelInfo += $"- Native Audio Dialog: {(hasAudioDialog ? "✅" : "❌")}";
                        
                        UpdateResponse(modelInfo);
                    }
                    else
                    {
                        UpdateStatus("❌ No models found in response");
                        UpdateResponse($"Raw response: {request.downloadHandler.text}");
                    }
                }
                catch (System.Exception e)
                {
                    UpdateStatus($"❌ Error parsing models: {e.Message}");
                    UpdateResponse($"Raw response: {request.downloadHandler.text}");
                }
            }
            else
            {
                UpdateStatus($"❌ Models request failed: {request.error}");
                UpdateResponse($"Status: {request.responseCode}\nResponse: {request.downloadHandler.text}");
            }
        }
    }
    
    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }
        Debug.Log($"[GeminiHttpTester] {status}");
    }
    
    private void UpdateResponse(string response)
    {
        if (responseText != null)
        {
            responseText.text = response;
        }
        Debug.Log($"[GeminiHttpTester] {response}");
    }
    
    [ContextMenu("Test Gemini HTTP")]
    public void TestFromMenu()
    {
        TestGeminiHttpApi();
    }
    
    [ContextMenu("Clear Response")]
    public void ClearResponse()
    {
        if (statusText != null) statusText.text = "Ready to test";
        if (responseText != null) responseText.text = "";
    }
}
