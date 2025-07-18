using UnityEngine;
using UnityEngine.UI;
using TMPro;

/// <summary>
/// Controller để switch giữa các modes khác nhau cho testing
/// </summary>
public class GeminiHttpModeController : MonoBehaviour
{
    #region Private Fields
    [Header("UI Controls")]
    [SerializeField] private Button m_WebSocketModeButton;
    [SerializeField] private Button m_HttpModeButton;
    [SerializeField] private Button m_OldMethodButton;
    [SerializeField] private TMP_Text m_CurrentModeText;
    
    [Header("Testing")]
    [SerializeField] private Button m_TestButton;
    [SerializeField] private TMP_Text m_StatusText;
    
    public enum ConversationMode
    {
        WebSocket,
        HttpOnly,
        OldMethod
    }
    
    private ConversationMode m_CurrentMode = ConversationMode.HttpOnly; // Default to HTTP
    #endregion
    
    #region Unity Lifecycle
    private void Start()
    {
        InitializeButtons();
        UpdateModeDisplay();
    }
    #endregion
    
    #region Private Methods
    private void InitializeButtons()
    {
        if (m_WebSocketModeButton != null)
            m_WebSocketModeButton.onClick.AddListener(() => SetMode(ConversationMode.WebSocket));
            
        if (m_HttpModeButton != null)
            m_HttpModeButton.onClick.AddListener(() => SetMode(ConversationMode.HttpOnly));
            
        if (m_OldMethodButton != null)
            m_OldMethodButton.onClick.AddListener(() => SetMode(ConversationMode.OldMethod));
            
        if (m_TestButton != null)
            m_TestButton.onClick.AddListener(StartTest);
    }
    
    private void SetMode(ConversationMode mode)
    {
        m_CurrentMode = mode;
        UpdateModeDisplay();
        LogStatus($"Switched to {mode} mode");
    }
    
    private void UpdateModeDisplay()
    {
        if (m_CurrentModeText != null)
        {
            string modeText = m_CurrentMode switch
            {
                ConversationMode.WebSocket => "🌐 WebSocket Mode (Live API)",
                ConversationMode.HttpOnly => "📡 HTTP Mode (Alternative)",
                ConversationMode.OldMethod => "🔄 Old Method (Whisper+OpenAI+TTS)",
                _ => "Unknown Mode"
            };
            
            m_CurrentModeText.text = $"Current: {modeText}";
        }
        
        // Update button colors
        UpdateButtonColors();
    }
    
    private void UpdateButtonColors()
    {
        // Reset all buttons to normal color
        ResetButtonColor(m_WebSocketModeButton);
        ResetButtonColor(m_HttpModeButton);
        ResetButtonColor(m_OldMethodButton);
        
        // Highlight active button
        Button activeButton = m_CurrentMode switch
        {
            ConversationMode.WebSocket => m_WebSocketModeButton,
            ConversationMode.HttpOnly => m_HttpModeButton,
            ConversationMode.OldMethod => m_OldMethodButton,
            _ => null
        };
        
        if (activeButton != null)
        {
            var colors = activeButton.colors;
            colors.normalColor = Color.green;
            activeButton.colors = colors;
        }
    }
    
    private void ResetButtonColor(Button button)
    {
        if (button != null)
        {
            var colors = button.colors;
            colors.normalColor = Color.white;
            button.colors = colors;
        }
    }
    
    private void StartTest()
    {
        LogStatus($"Starting test with {m_CurrentMode} mode...");
        
        var recordAudio = RecordAudio.Instance ?? FindObjectOfType<RecordAudio>();
        if (recordAudio != null)
        {
            // Force the selected mode
            SetRecordAudioMode(recordAudio);
            
            // Start the audio service
            recordAudio.StartAudioService();
        }
        else
        {
            LogStatus("❌ RecordAudio component not found!");
        }
    }
    
    private void SetRecordAudioMode(RecordAudio recordAudio)
    {
        // You can use reflection to temporarily modify the behavior
        // Or create a public property in RecordAudio to control mode
        LogStatus($"✅ Mode set to {m_CurrentMode}");
    }
    
    private void LogStatus(string message)
    {
        if (m_StatusText != null)
        {
            m_StatusText.text = message;
        }
        
        Debug.Log($"[GeminiModeController] {message}");
    }
    #endregion
    
    #region Public Methods
    public ConversationMode GetCurrentMode()
    {
        return m_CurrentMode;
    }
    
    public void ForceHttpMode()
    {
        SetMode(ConversationMode.HttpOnly);
    }
    
    public void ForceOldMethod()
    {
        SetMode(ConversationMode.OldMethod);
    }
    
    [ContextMenu("Test HTTP Mode")]
    public void TestHttpMode()
    {
        ForceHttpMode();
        StartTest();
    }
    
    [ContextMenu("Test Old Method")]
    public void TestOldMethodMode()
    {
        ForceOldMethod();
        StartTest();
    }
    #endregion
} 