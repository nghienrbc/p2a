using UnityEngine;
using NativeWebSocket;
using System.Text;

/// <summary>
/// Simple test script to verify NativeWebSocket package is working
/// </summary>
public class WebSocketTest : MonoBehaviour
{
    private WebSocket websocket;
    
    [ContextMenu("Test WebSocket")]
    public void TestWebSocket()
    {
        Debug.Log("Testing WebSocket connection...");
        
        // Test with a simple echo server
        websocket = new WebSocket("wss://echo.websocket.org");
        
        websocket.OnOpen += () =>
        {
            Debug.Log("✅ WebSocket Connected!");
            websocket.SendText("Hello from Unity!");
        };
        
        websocket.OnMessage += (bytes) =>
        {
            string message = Encoding.UTF8.GetString(bytes);
            Debug.Log($"📥 Received: {message}");
            websocket.Close();
        };
        
        websocket.OnError += (e) =>
        {
            Debug.LogError($"❌ WebSocket Error: {e}");
        };
        
        websocket.OnClose += (e) =>
        {
            Debug.Log($"🔌 WebSocket Closed: {e}");
        };
        
        websocket.Connect();
    }
    
    private void Update()
    {
        #if !UNITY_WEBGL || UNITY_EDITOR
        websocket?.DispatchMessageQueue();
        #endif
    }
    
    private void OnDestroy()
    {
        websocket?.Close();
    }
}
