# Gemini Live API Troubleshooting Guide

## Lỗi: "Unable to connect to the remote server"

### Nguyên nhân có thể:

#### 1. **API Key Issues**
- ❌ API key không hợp lệ
- ❌ API key chưa được enable cho Gemini Live
- ❌ API key bị giới hạn region/quota

#### 2. **Network Issues**
- ❌ Firewall chặn WebSocket connections
- ❌ Proxy server không hỗ trợ WebSocket
- ❌ ISP chặn Google APIs

#### 3. **API Endpoint Issues**
- ❌ Gemini Live API chưa available ở region của bạn
- ❌ URL endpoint đã thay đổi
- ❌ Model `gemini-2.5-flash-preview-native-audio-dialog` chưa available

#### 4. **Unity/Platform Issues**
- ❌ Unity WebSocket implementation bugs
- ❌ Platform không hỗ trợ WebSocket
- ❌ SSL/TLS certificate issues

## Giải pháp từng bước:

### Bước 1: Kiểm tra API Key

```bash
# Test API key với curl
curl -H "Authorization: Bearer YOUR_API_KEY" \
  "https://generativelanguage.googleapis.com/v1/models"
```

**Kết quả mong đợi:**
- Status 200: API key hợp lệ
- Status 403: API key không hợp lệ hoặc bị giới hạn
- Status 404: Endpoint không tồn tại

### Bước 2: Test Network Connectivity

1. **Test basic internet:**
   ```bash
   ping google.com
   ```

2. **Test HTTPS to Google:**
   ```bash
   curl https://www.google.com
   ```

3. **Test Gemini API endpoint:**
   ```bash
   curl https://generativelanguage.googleapis.com/v1/models
   ```

### Bước 3: Sử dụng Debug Helper

1. Attach `GeminiDebugHelper.cs` vào một GameObject
2. Chạy diagnostics để kiểm tra:
   - API key format
   - Network connectivity
   - Gemini API reachability
   - Available models
   - Platform WebSocket support

### Bước 4: Thử Alternative Methods

Code đã được cập nhật với 3 fallback levels:

1. **Level 1: Gemini Live WebSocket** (preferred)
2. **Level 2: Gemini HTTP API** (alternative)
3. **Level 3: Old method** (Whisper + OpenAI + Google TTS)

## Cấu hình Alternative

### Option 1: Sử dụng Gemini HTTP thay vì WebSocket

Nếu WebSocket không hoạt động, hệ thống sẽ tự động fallback sang HTTP API:

```csharp
// Trong GeminiHttpAlternative()
// Sử dụng: https://generativelanguage.googleapis.com/v1/models/gemini-1.5-flash:generateContent
// Thay vì: WebSocket connection
```

### Option 2: Disable Gemini hoàn toàn

Để force sử dụng old method, set API key rỗng:

```json
{
  "geminiApiKey": "",
  // Hoặc
  "geminiApiKey": "DISABLED"
}
```

## Specific Error Solutions:

### "One or more errors occurred"
```
Error connecting to Gemini Live: One or more errors occurred. (Unable to connect to the remote server)
```

**Solutions:**
1. Check internet connection
2. Verify API key is correct
3. Try different network (mobile hotspot)
4. Check if Gemini Live is available in your country
5. Use HTTP alternative instead

### "Missing compiler required member 'Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo.Create'"
```
Assets\Scripts\RecordAudio.cs(628,43): error CS0656
```

**Solution:**
✅ **FIXED** - Replaced `dynamic` type with `JObject` parsing
- Unity doesn't support `dynamic` type
- Now using Newtonsoft.Json JObject for JSON parsing
- No more runtime binder dependencies

### "Authorization failed"
```
Error: 403 Forbidden
```

**Solutions:**
1. Regenerate API key in Google AI Studio
2. Check API key permissions
3. Verify billing is enabled (if required)
4. Check quota limits

### "Model not found"
```
Error: Model 'gemini-2.5-flash-preview-native-audio-dialog' not found
```

**Solutions:**
1. Use different model: `gemini-1.5-flash`
2. Check model availability in your region
3. Wait for model rollout

### "WebSocket not supported"
```
Platform: WebGL - WebSocket support limited
```

**Solutions:**
1. Use HTTP API instead of WebSocket
2. Build for different platform (Android/iOS/Standalone)
3. Use Unity 2022.3+ for better WebSocket support

## Regional Availability

Gemini Live API có thể chưa available ở tất cả regions:

### Available Regions (as of 2024):
- ✅ United States
- ✅ European Union
- ⚠️ Asia-Pacific (limited)
- ❌ China (blocked)
- ❌ Some other regions

### Check your region:
```bash
curl -H "Authorization: Bearer YOUR_API_KEY" \
  "https://generativelanguage.googleapis.com/v1/models/gemini-2.5-flash-preview-native-audio-dialog"
```

## Performance Optimization

### Nếu connection chậm:
1. Sử dụng smaller audio chunks
2. Reduce audio quality (16kHz → 8kHz)
3. Use compression
4. Implement connection pooling

### Nếu thường xuyên disconnect:
1. Implement reconnection logic
2. Use heartbeat/ping messages
3. Handle network changes gracefully

## Monitoring và Logging

### Enable detailed logging:
```csharp
Debug.Log($"WebSocket State: {geminiWebSocket.State}");
Debug.Log($"Connection URI: {uri}");
Debug.Log($"API Key length: {geminiApiKey.Length}");
Debug.Log($"Platform: {Application.platform}");
```

### Monitor metrics:
- Connection success rate
- Average connection time
- Error frequency by type
- Fallback usage rate

## Alternative Implementations

### Option A: Use OpenAI Whisper + Gemini Text + Google TTS
```
Audio → Whisper (STT) → Gemini Text API → Google TTS → Audio
```

### Option B: Use Google Speech-to-Text + Gemini + Google TTS
```
Audio → Google STT → Gemini Text API → Google TTS → Audio
```

### Option C: Use Azure Speech Services
```
Audio → Azure STT → Gemini Text API → Azure TTS → Audio
```

## Contact Support

Nếu vẫn gặp vấn đề:

1. **Google AI Studio Support**: https://aistudio.google.com/
2. **Unity Forums**: Unity WebSocket issues
3. **GitHub Issues**: Report bugs in implementation

## Quick Fix Checklist

- [ ] API key đúng format và hợp lệ
- [ ] Internet connection stable
- [ ] Firewall/proxy không chặn
- [ ] Platform hỗ trợ WebSocket
- [ ] Gemini Live available ở region
- [ ] Unity version 2022.3+
- [ ] Alternative methods enabled
- [ ] Debug logging enabled
- [ ] Test với different network
- [ ] Check Google AI Studio dashboard
