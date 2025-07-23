# ⚡ QUICK SETUP - Gemini Live API (5 phút)

## 🚀 **TẠO THẬT SỰ Live API với WebSocket ngay!**

### **Bước 1: Cài WebSocket Package (1 phút)**
```
1. Mở Unity
2. Window → Package Manager
3. Click dấu + → Add package from git URL
4. Paste: https://github.com/endel/NativeWebSocket.git#upm
5. Click Add
```

### **Bước 2: Setup Scene (2 phút)**
```
1. File → New Scene → Basic (Built-in)
2. Right-click Hierarchy → Create Empty → Đặt tên "LiveAPI"
3. Select LiveAPI → Add Component → GeminiLiveController
4. Add Component → Audio Source
```

### **Bước 3: Create UI (1 phút)**
```
Right-click Hierarchy → UI:

1. Canvas (tự động tạo)
2. Right-click Canvas → UI → Button → Đổi tên "StartButton"
3. Right-click Canvas → UI → Text - TextMeshPro → Đổi tên "StatusText"
4. Right-click Canvas → UI → Text - TextMeshPro → Đổi tên "UserText" 
5. Right-click Canvas → UI → Text - TextMeshPro → Đổi tên "AIText"
```

### **Bước 4: Assign References (1 phút)**
```
Select LiveAPI GameObject:

🎤 Basic UI:
- Start Button: [Drag StartButton từ Hierarchy]
- Status Text: [Drag StatusText từ Hierarchy]
- User Text: [Drag UserText từ Hierarchy]
- AI Text: [Drag AIText từ Hierarchy]
- Audio Source: [Tự động assigned]

🔑 Gemini Live API:
- Gemini Api Key: [Paste your API key here]
- Use Native Audio: ✅ (checked)
```

### **Bước 5: Quick Test!**
```
1. Nhấn Play
2. Click "START LIVE API" button
3. Nói: "Hello, what is ASEAN?"
4. AI trả lời trong 300-500ms! 🚀
```

---

## 🎯 **Xong rồi! Ready to use THẬT SỰ Live API!**

**📱 Features you get:**
- ⚡ Ultra-low latency (300-500ms)
- 🎵 Native audio quality  
- 🔄 Real-time streaming
- 🎙️ Wake word "Hey DT"
- 🤖 Natural conversation

**💡 Quick Tips:**
- Nói rõ ràng và không quá nhanh
- Đợi AI nói xong rồi mới nói tiếp
- Kiểm tra internet connection tốt
- Dùng headphones để tránh echo

**🔧 Need help?** 
Check `REAL_LIVE_API_SETUP.md` cho detailed troubleshooting! 