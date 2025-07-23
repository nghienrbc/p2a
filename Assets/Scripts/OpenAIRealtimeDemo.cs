using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Demo script đơn giản để test OpenAI Realtime Speech Controller
/// Tự động setup UI và test connection
/// </summary>
public class OpenAIRealtimeDemo : MonoBehaviour
{
    [Header("Auto Setup")]
    public bool autoCreateUI = true;
    public bool autoRunDiagnostics = true;
    
    [Header("References")]
    public OpenAIRealtimeSpeechController speechController;
    public OpenAIRealtimeTestHelper testHelper;
    
    private Canvas demoCanvas;
    private GameObject uiPanel;

    private void Start()
    {
        if (autoCreateUI)
        {
            CreateDemoUI();
        }
        
        if (autoRunDiagnostics && testHelper != null)
        {
            testHelper.RunDiagnostics();
        }
        
        LogDemo("🎤 OpenAI Realtime Demo Ready!");
        LogDemo("📋 Setup Instructions:");
        LogDemo("1. Enter your OpenAI API Key in the Speech Controller");
        LogDemo("2. Click START to begin realtime conversation");
        LogDemo("3. Speak your question and listen to AI response");
    }

    private void CreateDemoUI()
    {
        // Create Canvas if not exists
        demoCanvas = FindObjectOfType<Canvas>();
        if (demoCanvas == null)
        {
            GameObject canvasGO = new GameObject("DemoCanvas");
            demoCanvas = canvasGO.AddComponent<Canvas>();
            demoCanvas.renderMode = RenderMode.ScreenSpaceOverlay;
            canvasGO.AddComponent<CanvasScaler>();
            canvasGO.AddComponent<GraphicRaycaster>();
        }

        // Create UI Panel
        uiPanel = new GameObject("OpenAI Realtime Demo Panel");
        uiPanel.transform.SetParent(demoCanvas.transform, false);
        
        RectTransform panelRect = uiPanel.AddComponent<RectTransform>();
        panelRect.anchorMin = new Vector2(0.1f, 0.1f);
        panelRect.anchorMax = new Vector2(0.9f, 0.9f);
        panelRect.offsetMin = Vector2.zero;
        panelRect.offsetMax = Vector2.zero;
        
        Image panelImage = uiPanel.AddComponent<Image>();
        panelImage.color = new Color(0.1f, 0.1f, 0.1f, 0.8f);

        // Create UI elements
        CreateButton("Start Button", new Vector2(0, 200), "START CONVERSATION", Color.green);
        CreateButton("Stop Button", new Vector2(0, 150), "STOP CONVERSATION", Color.red);
        CreateText("Status Text", new Vector2(0, 100), "Ready to start...", 24);
        CreateText("Log Text", new Vector2(0, -50), "Logs will appear here...", 16);
        
        LogDemo("✅ Demo UI created automatically");
    }

    private void CreateButton(string name, Vector2 position, string text, Color color)
    {
        GameObject buttonGO = new GameObject(name);
        buttonGO.transform.SetParent(uiPanel.transform, false);
        
        RectTransform buttonRect = buttonGO.AddComponent<RectTransform>();
        buttonRect.anchoredPosition = position;
        buttonRect.sizeDelta = new Vector2(200, 40);
        
        Image buttonImage = buttonGO.AddComponent<Image>();
        buttonImage.color = color;
        
        Button button = buttonGO.AddComponent<Button>();
        
        // Create button text
        GameObject textGO = new GameObject("Text");
        textGO.transform.SetParent(buttonGO.transform, false);
        
        RectTransform textRect = textGO.AddComponent<RectTransform>();
        textRect.anchorMin = Vector2.zero;
        textRect.anchorMax = Vector2.one;
        textRect.offsetMin = Vector2.zero;
        textRect.offsetMax = Vector2.zero;
        
        TMP_Text buttonText = textGO.AddComponent<TMP_Text>();
        buttonText.text = text;
        buttonText.fontSize = 14;
        buttonText.color = Color.white;
        buttonText.alignment = TextAlignmentOptions.Center;
        
        // Connect to speech controller
        if (speechController != null)
        {
            if (name.Contains("Start"))
            {
                button.onClick.AddListener(speechController.StartRealtimeConversation);
                speechController.startButton = button;
            }
            else if (name.Contains("Stop"))
            {
                button.onClick.AddListener(speechController.StopRealtimeConversation);
                speechController.stopButton = button;
            }
        }
    }

    private void CreateText(string name, Vector2 position, string text, int fontSize)
    {
        GameObject textGO = new GameObject(name);
        textGO.transform.SetParent(uiPanel.transform, false);
        
        RectTransform textRect = textGO.AddComponent<RectTransform>();
        textRect.anchoredPosition = position;
        
        if (name.Contains("Log"))
        {
            textRect.sizeDelta = new Vector2(600, 200);
        }
        else
        {
            textRect.sizeDelta = new Vector2(400, 30);
        }
        
        TMP_Text tmpText = textGO.AddComponent<TMP_Text>();
        tmpText.text = text;
        tmpText.fontSize = fontSize;
        tmpText.color = Color.white;
        tmpText.alignment = TextAlignmentOptions.TopLeft;
        
        if (name.Contains("Log"))
        {
            tmpText.enableWordWrapping = true;
            tmpText.overflowMode = TextOverflowModes.ScrollRect;
        }
        
        // Connect to speech controller
        if (speechController != null)
        {
            if (name.Contains("Status"))
            {
                speechController.statusText = tmpText;
            }
            else if (name.Contains("Log"))
            {
                speechController.logText = tmpText;
            }
        }
    }

    [ContextMenu("Setup Speech Controller")]
    public void SetupSpeechController()
    {
        if (speechController == null)
        {
            speechController = FindObjectOfType<OpenAIRealtimeSpeechController>();
            
            if (speechController == null)
            {
                GameObject speechGO = new GameObject("OpenAI Realtime Speech Controller");
                speechController = speechGO.AddComponent<OpenAIRealtimeSpeechController>();
                speechGO.AddComponent<AudioSource>();
                
                LogDemo("✅ Speech Controller created automatically");
            }
        }
        
        LogDemo("✅ Speech Controller setup completed");
    }

    [ContextMenu("Setup Test Helper")]
    public void SetupTestHelper()
    {
        if (testHelper == null)
        {
            testHelper = FindObjectOfType<OpenAIRealtimeTestHelper>();
            
            if (testHelper == null)
            {
                GameObject testGO = new GameObject("OpenAI Realtime Test Helper");
                testHelper = testGO.AddComponent<OpenAIRealtimeTestHelper>();
                
                LogDemo("✅ Test Helper created automatically");
            }
        }
        
        if (testHelper != null)
        {
            testHelper.RunDiagnostics();
        }
    }

    [ContextMenu("Run Quick Test")]
    public void RunQuickTest()
    {
        LogDemo("🧪 Running Quick Test...");
        
        // Check if API key is set
        if (speechController != null)
        {
            // Use reflection to check private field
            var field = typeof(OpenAIRealtimeSpeechController).GetField("openAIApiKey", 
                System.Reflection.BindingFlags.NonPublic | System.Reflection.BindingFlags.Instance);
            
            if (field != null)
            {
                string apiKey = (string)field.GetValue(speechController);
                if (string.IsNullOrEmpty(apiKey))
                {
                    LogDemo("❌ OpenAI API Key not set!");
                    LogDemo("   Please set API Key in Speech Controller Inspector");
                }
                else
                {
                    LogDemo("✅ API Key is configured");
                }
            }
        }
        
        // Check microphone
        if (Microphone.devices.Length > 0)
        {
            LogDemo($"✅ Microphone available: {Microphone.devices[0]}");
        }
        else
        {
            LogDemo("❌ No microphone devices found!");
        }
        
        // Check audio source
        AudioSource audioSource = FindObjectOfType<AudioSource>();
        if (audioSource != null)
        {
            LogDemo("✅ AudioSource found for playback");
        }
        else
        {
            LogDemo("❌ No AudioSource found for playback!");
        }
        
        LogDemo("🏁 Quick test completed!");
    }

    private void LogDemo(string message)
    {
        Debug.Log($"[OpenAIRealtimeDemo] {message}");
    }

    private void OnValidate()
    {
        // Auto-find components
        if (speechController == null)
        {
            speechController = FindObjectOfType<OpenAIRealtimeSpeechController>();
        }
        
        if (testHelper == null)
        {
            testHelper = FindObjectOfType<OpenAIRealtimeTestHelper>();
        }
    }
}
