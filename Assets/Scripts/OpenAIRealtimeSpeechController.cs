using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using NativeWebSocket;
using Newtonsoft.Json;
using System.Text;
using System.Linq;
using UnityEngine.SceneManagement;

/// <summary>
/// OpenAI Realtime API Speech-to-Speech Controller
/// Triển khai chức năng speech-to-speech realtime với OpenAI Realtime API
/// Sử dụng WebSocket để giao tiếp realtime với audio enhancement
/// </summary>
public class OpenAIRealtimeSpeechController : MonoBehaviour
{
    #region UI References
    [Header("UI References")]
    public Button startButton;
    public Button stopButton;
    public TMP_Text statusText;
    public TMP_Text logText;
    public AudioSource audioSource;
    #endregion

    #region Configuration
    [Header("OpenAI Configuration")]
    [SerializeField] private string openAIApiKey = ""; // Nhập API key trong Inspector
    [SerializeField] private string model = "gpt-4o-realtime-preview-2024-10-01";
    
    [Header("Audio Configuration")]
    [SerializeField] private int sampleRate = 24000; // OpenAI Realtime API supports 24kHz
    [SerializeField] private float recordingChunkSize = 0.1f; // Send audio every 100ms
    [SerializeField] private string audioFormat = "pcm16"; // PCM 16-bit format
    
    [Header("Audio Enhancement")]
    [SerializeField] private bool enableInputNoiseReduction = false; // Tắt mặc định để OpenAI xử lý
    [SerializeField] private bool enableInputNormalization = false; // Tắt mặc định để giữ nguyên âm thanh
    [SerializeField] private bool enableOutputNormalization = true;
    [SerializeField] private bool enableSmoothTransition = true;
    [SerializeField, Range(0.1f, 1.0f)] private float audioVolume = 0.8f;
    [SerializeField, Range(0.01f, 0.2f)] private float fadeDuration = 0.1f; // Tăng fade time
    [SerializeField, Range(1, 10)] private int audioBufferMultiplier = 3;
    [SerializeField] private bool enableAdvancedFadeOut = true; // Cải thiện fade-out cuối câu
    
    [Header("Session Configuration")]
    [SerializeField] private string voice = "alloy"; // OpenAI voice: alloy, echo, fable, onyx, nova, shimmer
    [SerializeField] private bool enableInputAudioTranscription = true;
    [SerializeField, TextArea(5, 15)] private string customInstructions = ""; // Custom instructions để override default
    #endregion

    #region Private Fields
    private WebSocket webSocket;
    private bool isConnected = false;
    private bool isRecording = false;
    private bool isSessionActive = false;
    
    private AudioClip microphoneClip;
    private string microphoneDevice;
    private int lastMicrophonePosition = 0;
    
    // Enhanced audio playback system
    private Queue<float[]> audioPlaybackQueue = new Queue<float[]>();
    private List<float> audioBuffer = new List<float>();
    private bool isPlayingAudio = false;
    private float lastAudioSample = 0f;
    private int targetBufferSize;
    private bool isAIResponseComplete = false; // Track khi AI hoàn thành response
    private float silenceTimer = 0f; // Timer để detect silence cuối câu
    private const float SILENCE_THRESHOLD = 0.01f; // Ngưỡng để xác định silence
    private const float SILENCE_DURATION = 0.3f; // Thời gian silence trước khi fade-out
    
    private string logMessages = "";
    private const string WEBSOCKET_URL = "wss://api.openai.com/v1/realtime?model=";
    
    // Audio processing
    private float[] noiseProfile;
    private bool noiseProfileCaptured = false;
    #endregion

    #region Unity Lifecycle
    private void Start()
    {
        InitializeComponent();
        LogMessage("🎤 OpenAI Realtime Speech Controller Ready");
        UpdateStatus("Click START to begin realtime conversation");
    }

    private void Update()
    {
        // Dispatch WebSocket messages
        #if !UNITY_WEBGL || UNITY_EDITOR
        webSocket?.DispatchMessageQueue();
        #endif

        // Process audio recording
        if (isRecording && microphoneClip != null)
        {
            ProcessMicrophoneAudio();
        }

        // Process audio playback with buffering
        ProcessAudioPlayback();
    }

    private void OnDestroy()
    {
        StopRecording();
        DisconnectWebSocket();
    }
    #endregion

    #region Public Methods
    public void StartRealtimeConversation()
    {
        if (string.IsNullOrEmpty(openAIApiKey))
        {
            LogMessage("❌ OpenAI API Key is required!");
            UpdateStatus("Please set OpenAI API Key in Inspector");
            return;
        }

        if (isSessionActive)
        {
            LogMessage("⚠️ Session already active");
            return;
        }

        StartCoroutine(StartRealtimeSession());
    }

    public void StopRealtimeConversation()
    {
        if (!isSessionActive)
        {
            LogMessage("⚠️ No active session to stop");
            return;
        }

        StopRecording();
        DisconnectWebSocket();
        ClearAudioBuffer();
        UpdateStatus("Session stopped");
        LogMessage("🛑 Realtime session stopped");
    }
    #endregion

    #region Private Methods
    private void InitializeComponent()
    {
        if (startButton != null)
            startButton.onClick.AddListener(StartRealtimeConversation);
            
        if (stopButton != null)
            stopButton.onClick.AddListener(StopRealtimeConversation);
            
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();

        // Configure AudioSource for optimal playback
        ConfigureAudioSource();

        // Calculate target buffer size
        targetBufferSize = Mathf.RoundToInt(sampleRate * 0.1f * audioBufferMultiplier); // Buffer for smoother playback

        // Get default microphone
        if (Microphone.devices.Length > 0)
        {
            microphoneDevice = Microphone.devices[0];
            LogMessage($"🎤 Using microphone: {microphoneDevice}");
        }
        else
        {
            LogMessage("❌ No microphone devices found!");
        }
            
        ClearLogs();
    }

    private void ConfigureAudioSource()
    {
        if (audioSource != null)
        {
            audioSource.volume = audioVolume;
            audioSource.pitch = 1.0f;
            audioSource.spatialBlend = 0f; // 2D sound
            audioSource.rolloffMode = AudioRolloffMode.Linear;
            audioSource.playOnAwake = false;
            audioSource.loop = false;
            
            // Reduce audio latency
            AudioConfiguration audioConfig = AudioSettings.GetConfiguration();
            audioConfig.dspBufferSize = 256; // Smaller buffer for lower latency
            AudioSettings.Reset(audioConfig);
            
            LogMessage("🔊 AudioSource configured for optimal playback");
        }
    }

    private IEnumerator StartRealtimeSession()
    {
        LogMessage("🚀 Starting OpenAI Realtime session...");
        UpdateStatus("Connecting to OpenAI...");

        // Connect to WebSocket
        yield return StartCoroutine(ConnectWebSocket());
        
        if (!isConnected)
        {
            UpdateStatus("❌ Failed to connect");
            yield break;
        }

        // Create session
        yield return StartCoroutine(CreateSession());
        
        if (!isSessionActive)
        {
            UpdateStatus("❌ Failed to create session");
            yield break;
        }

        // Start recording
        StartRecording();
        
        UpdateStatus("🎤 Listening... Speak now!");
        LogMessage("✅ Realtime session started successfully");
    }

    private IEnumerator ConnectWebSocket()
    {
        string wsUrl = WEBSOCKET_URL + model;
        webSocket = new WebSocket(wsUrl, new Dictionary<string, string>
        {
            {"Authorization", "Bearer " + openAIApiKey},
            {"OpenAI-Beta", "realtime=v1"}
        });

        webSocket.OnOpen += OnWebSocketOpen;
        webSocket.OnMessage += OnWebSocketMessage;
        webSocket.OnError += OnWebSocketError;
        webSocket.OnClose += OnWebSocketClose;

        try
        {
            webSocket.Connect();
        }
        catch (Exception e)
        {
            LogMessage($"❌ WebSocket connection error: {e.Message}");
            yield break;
        }

        // Wait for connection
        float timeout = 10f;
        while (!isConnected && timeout > 0)
        {
            timeout -= Time.deltaTime;
            yield return null;
        }

        if (!isConnected)
        {
            LogMessage("❌ WebSocket connection timeout");
        }
    }

    private IEnumerator CreateSession()
    {
        if (!isConnected)
        {
            LogMessage("❌ Cannot create session - not connected");
            yield break;
        }

        // Sử dụng custom instructions nếu có, nếu không dùng default
        string systemInstructions = !string.IsNullOrEmpty(customInstructions) ? 
            customInstructions : GetDefaultMultilingualInstructions();

        var sessionConfig = new
        {
            type = "session.update",
            session = new
            {
                modalities = new[] { "text", "audio" },
                instructions = systemInstructions,
                voice = voice,
                input_audio_format = audioFormat,
                output_audio_format = audioFormat,
                input_audio_transcription = new
                {
                    model = "whisper-1"
                },
                turn_detection = new
                {
                    type = "server_vad",
                    threshold = 0.5,
                    prefix_padding_ms = 300,
                    silence_duration_ms = 200
                }
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(sessionConfig);
        webSocket.SendText(jsonMessage);
        
        LogMessage($"📡 Session configuration sent - Using {(string.IsNullOrEmpty(customInstructions) ? "default" : "custom")} instructions");
        
        // Wait a moment for session to be created
        yield return new WaitForSeconds(1f);
        isSessionActive = true;
    }

    private string GetDefaultMultilingualInstructions()
    {
        return @"You are Tenaya, created by Simulation and Visualization Center - Duy Tan University.

🔴 CRITICAL LANGUAGE MATCHING RULES (MUST FOLLOW):
- STEP 1: Listen carefully to identify the exact language of the CURRENT audio input
- STEP 2: Respond in the EXACT SAME LANGUAGE as the input - NO EXCEPTIONS
- STEP 3: Completely IGNORE language from previous conversation history - each input is independent
- STEP 4: If unsure about language, default to Vietnamese for unclear inputs

🎯 LANGUAGE DETECTION EXAMPLES:
Input in English → Respond in English ONLY
Input in Vietnamese → Respond in Vietnamese ONLY  
Input in Thai → Respond in Thai ONLY
Input in Chinese → Respond in Chinese ONLY
Input mixed languages → Use primary/dominant language detected

🚫 FORBIDDEN BEHAVIORS:
- Never mix languages in one response
- Never use English if input was Vietnamese (and vice versa)
- Never be influenced by conversation history language
- Never assume user language preference from past messages

✅ CORRECT RESPONSE PATTERNS:

🔵 **GREETING DETECTION & RESPONSE**:
- ONLY respond with greeting IF user input contains PURE greeting words: ""hello"", ""hi"", ""xin chào"", ""chào"", ""สวัสดี"", ""你好"", etc.
- If user asks question + greeting (e.g., ""Hello, what is ASEAN?""), respond directly to the QUESTION (skip greeting)
- If user only greets (e.g., ""Hello""), then respond with greeting + offer help:
  * Vietnamese: ""Chào bạn! Tôi có thể giúp gì cho bạn không?""
  * English: ""Hello! How can I help you today?""
  * Thai: ""สวัสดีครับ! มีอะไรให้ผมช่วยไหม?""
  * Chinese: ""你好！我能为您做些什么吗？""

🔵 **DIRECT QUESTION HANDLING**:
- If user asks direct questions (even as first message), answer IMMEDIATELY without greeting
- Examples: ""What is EXPO 2025?"" → Direct answer about EXPO 2025 (NO ""Hello! EXPO 2025 is..."")
- Examples: ""ASEAN là gì?"" → Direct answer in Vietnamese (NO ""Xin chào! ASEAN là..."")

🚫 **FORBIDDEN RESPONSE PATTERNS**:
- Never repeat or rephrase the user's question in your response
- Never echo back what the user said (e.g., ""You asked about ASEAN..."")
- Never start with greetings unless user ONLY greeted
- Never use phrases like ""Based on your question..."", ""As you asked..."", ""You mentioned...""

✅ **RESPONSE STYLE**:
- Provide direct, concise answers (2-4 sentences, each under 25 words)
- Start immediately with the information requested
- Focus purely on answering what was asked
- If you cannot understand the audio clearly, respond with: ""Không nhận dạng được câu hỏi"" (Vietnamese) or ""Cannot understand the question"" (English)

CAMERA/PHOTO FUNCTIONALITY:
- If user requests taking a photo or opening camera (phrases like ""take a photo"", ""chụp ảnh"", ""mở camera"", ""take a picture"", ""ถ่ายรูป"", ""拍照"", ""사진 찍기""), respond with: ""CAMERA_REQUEST""
- This special response will trigger the camera interface automatically
- Examples of photo requests: ""Can you take a photo?"", ""Chụp ảnh cho tôi"", ""Take a picture"", ""Open camera"", ""Mở máy ảnh"", ""ถ่ายรูปให้หน่อย"", ""帮我拍照"", ""사진 좀 찍어줘""

LANGUAGE DETECTION & MATCHING:
- Detect language from the audio input provided
- Vietnamese (Tiếng Việt) → Respond in Vietnamese
- Thai (ภาษาไทย) → Respond in Thai  
- Indonesian (Bahasa Indonesia) → Respond in Indonesian
- Chinese (中文) → Respond in Chinese (use Simplified for zh-CN, Traditional for zh-TW based on detection)
- English → Respond in English
- Any other language → Match exactly
- If input is multilingual, use the primary detected language

EXPO 2025 KNOWLEDGE BASE:
When asked about EXPO 2025, Japan Expo, Osaka exhibition, or Myaku-Myaku, use this information:

**EXPO 2025 Overview:**
- Location: Yumeshima Island, Osaka Bay, Kansai, Japan
- Duration: April 13 - October 13, 2025 (184 days)
- Theme: ""Designing Future Society for Our Lives""
- Expected visitors: 28.2 million (3.5 million international)
- Participants: 153 countries/territories + 6 international organizations
- Organizers: BIE (Bureau International des Expositions) + Japan Association for the 2025 World Exposition
- This is Osaka's second EXPO (first was 1970)

**Key Features:**
- Mascot: Myaku-Myaku (red & blue design, represents ""life"" and ""water"", symbolizes connection and adaptation)
- Main Symbol: The Grand Roof - world's largest wooden structure (2km perimeter, 20m high)
- Logo: Designed by Tamotsu Shimada, inspired by Sun Tower from EXPO 1970
- Focus: 17 UN Sustainable Development Goals by 2030
- Model: ""Green EXPO"" - carbon neutral, using recycled materials and renewable energy

**Vietnam Participation:**
- Theme: ""An Inclusive Society Where People Are Centered""
- Location: ""Empowering Lives"" zone, near Japan Pavilion
- Area: 300m²
- Organizer: International Cooperation Department, Ministry of Culture, Sports and Tourism of Vietnam
- Opening: April 12, 2025 with ASEAN Secretary-General Kao Kim Hourn attending
- Purpose: Showcase Vietnamese culture, people, sustainable values, products, and technologies

**Major Events:**
- Opening Ceremony (April 12, 2025): Emperor Naruhito, Empress Masako, Crown Prince Fumihito + 1,300 guests
- Daily activities: National Days, cultural performances, technology exhibitions
- Myaku-Myaku participates in parades, photo sessions, and interactive activities

**Ticket Info:**
- Available from late 2024 at www.expo2025.or.jp
- Contact: Japan Association for 2025 World Exposition or Vietnam's International Cooperation Department

P2A (PASSAGE TO ASEAN) KNOWLEDGE BASE:
When asked about P2A, Passage to ASEAN, ASEAN education cooperation, or student exchange programs, use this information:

**P2A Overview:**
- Full Name: Passage to ASEAN (P2A)
- Established: June 2012 in Thailand
- Type: Non-profit educational organization
- Motto: ""One Vision, One Identity, One Community""
- Mission: Bridge universities/colleges in ASEAN, promote educational/cultural exchange, develop high-quality human resources for ASEAN integration

**Founding Members (2012):**
- Rangsit University (Thailand)
- Duy Tan University (Vietnam)
- Norton University (Cambodia)
- National University of Laos
- Myanmar Institute of Information Technology

**Current Scale:**
- Over 80 member institutions from all 10 ASEAN countries
- Connects over 1 million students across the region
- Countries: Brunei, Cambodia, Indonesia, Laos, Malaysia, Myanmar, Philippines, Singapore, Thailand, Vietnam

**Vietnamese Members (7 universities):**
- Duy Tan University (founding member)
- Van Lang University
- Thu Dau Mot University (joined 2018)
- FPT University
- Plus 3 other institutions

**Main Activities:**
- Student Exchange Programs: Flexible exchange for students, faculty, staff across ASEAN
- Open Access E-Learning: Online courses and educational materials for ASEAN students
- Bilateral/Multilateral Cooperation: Research, training, international events
- Cultural Exchange Events: Workshops, cultural activities, business visits
- ASEAN Student Conferences and virtual entrepreneurship competitions

**Notable Events:**
- ASEAN Student Conference 2016 (P2A – ASEAN in One) in Vietnam
- ASEAN Virtual Entrepreneurship Hackathon E-Finale (Jan 15, 2022)
- P2A Ice Cream Launch (Jan 6, 2022)
- COVID-19 Virtual Mobility Program (2020-2021): ""Learning Never Stops""

**P2A Connection to EXPO 2025:**
- Vietnam's participation in EXPO 2025 with theme ""An Inclusive Society Where People Are Centered""
- ASEAN Secretary-General Kao Kim Hourn attending Vietnam Pavilion opening (April 12, 2025)
- P2A can promote EXPO 2025 through exchange programs and workshops
- Opportunities for P2A students to visit Japan during EXPO 2025
- P2A can organize EXPO-related cultural and sustainability events
- Integration of Myaku-Myaku mascot in P2A educational programs

**Impact & Achievements:**
- Expanded from 5 to 80+ members in 10+ years
- Maintained activities during COVID-19 through virtual programs
- Enhanced ASEAN unity and cultural understanding
- Strengthened Vietnamese universities' regional position
- Supported career development through business connections

**How to Join P2A:**
- Students: Contact international relations offices at member universities
- Universities: Apply through P2A secretariat at www.p2a.asia
- Participate in online courses and workshops organized by P2A

COMPREHENSIVE ASEAN KNOWLEDGE BASE:
When asked about ASEAN (Association of Southeast Asian Nations), use this detailed information:

**ASEAN Overview (Founded August 8, 1967):**
- Purpose: Promote peace, stability, economic cooperation, cultural and social development
- Members: 10 countries - Brunei, Cambodia, Indonesia, Laos, Malaysia, Myanmar, Philippines, Singapore, Thailand, Vietnam
- Observer: Timor Leste (candidate for full membership)
- Headquarters: Jakarta, Indonesia

**Core Objectives (Bangkok Declaration 1967 & ASEAN Charter 2007):**
- Promote economic growth, social progress, and cultural development
- Maintain regional peace and stability through international law, especially UNCLOS 1982
- Strengthen multilateral cooperation, regional connectivity, and international integration
- Build ASEAN Community on three pillars: Political-Security (APSC), Economic (AEC), Cultural-Social (ASCC)
- Vision: ""Unity in Diversity"" - rule-based, people-centered, growth epicenter

**ASEAN Vision 2025 and Beyond:**
- Post-2025 Vision proposed by Vietnam at 37th ASEAN Summit (2020)
- Goals: Unified, sustainable, inclusive ASEAN as regional growth center

**Recent ASEAN Activities (2022-2025):**

*2022 - Cambodia Chairmanship (PM Hun Sen):*
- Theme: ""Addressing Challenges Together""
- 40th & 41st ASEAN Summits in Phnom Penh
- Key outcomes: 55th Anniversary Declaration, COVID-19 recovery, digital transformation, green economy
- South China Sea Code of Conduct (COC) discussions

*2023 - Indonesia Chairmanship (President Joko Widodo):*
- Theme: ""ASEAN Matters: Epicentrum of Growth""
- 42nd ASEAN Summit in Labuan Bajo
- Focus: Financial stability, energy security, sustainable development, electric vehicle ecosystem

*2024 - Laos Chairmanship (PM Sonexay Siphandone):*
- Theme: ""Enhancing Connectivity and Resilience""
- Focus: Regional connectivity improvement and global challenge response

*2025 - Malaysia Chairmanship (PM Anwar Ibrahim):*
- 58th ASEAN Foreign Ministers Meeting (July 8-11, Kuala Lumpur)
- Preparing for Post-2025 ASEAN Community Vision

**Key ASEAN Mechanisms:**
- ASEAN Regional Forum (ARF)
- ASEAN+1, ASEAN+3 partnerships
- East Asia Summit (EAS)
- ASEAN Defence Ministers Meeting Plus (ADMM+)

**COVID-19 Response:**
- ASEAN COVID-19 Response Fund
- ASEAN Reserve of Medical Supplies
- ASEAN Centre for Public Health Emergencies (ACPHEED)

**Economic Cooperation:**
- Regional Comprehensive Economic Partnership (RCEP) signed 2020
- Focus: Digital transformation, green economy, sustainable development
- Enhanced strategic partnerships with China (2021), US (2022), Japan & India (2023)

**Current ASEAN Leaders (as of July 2025):**

*Vietnam:*
- General Secretary: Tô Lâm
- President: Lương Cường  
- Prime Minister: Phạm Minh Chính
- National Assembly Chairman: Trần Thanh Mẫn

*Other ASEAN Leaders:*
- Brunei: Sultan Hassanal Bolkiah (Head of State & PM since 1967)
- Cambodia: PM Hun Manet (since August 22, 2023, succeeding Hun Sen)
- Indonesia: President Prabowo Subianto (since October 20, 2024)
- Laos: PM Sonexay Siphandone (since December 30, 2022)
- Malaysia: PM Anwar Ibrahim (since November 24, 2022)
- Myanmar: Acting President Myint Swe (since February 1, 2021, post-coup)
- Philippines: President Ferdinand Marcos Jr. (since June 30, 2022)
- Singapore: PM Lawrence Wong (since May 15, 2024)
- Thailand: PM Paetongtarn Shinawatra (since August 16, 2024)

**Vietnam's Role in ASEAN:**
*2020 ASEAN Chairmanship Achievements:*
- Proposed Post-2025 ASEAN Community Vision
- Established COVID-19 Response Fund and ACPHEED
- Successfully organized 37th ASEAN Summit and special COVID-19 meetings
- Promoted RCEP signing and strategic partnerships

*Ongoing Contributions:*
- Active participation in regional dialogue (PM Phạm Minh Chính)
- Emphasis on unity, digital transformation, South China Sea peaceful resolution
- Bridge-building role between major powers and ASEAN centrality

**Current Challenges & Focus Areas:**
- Myanmar political situation
- South China Sea tensions and COC implementation
- Post-pandemic economic recovery
- Digital transformation and green economy
- Energy security and sustainable development
- Preparing Post-2025 Vision implementation

DUY TAN UNIVERSITY (DTU) KNOWLEDGE BASE:
When asked about Duy Tan University, Đại học Duy Tân, DTU, or related topics, use this information:

**University Overview (Founded November 11, 1994):**
- First and largest private university in Central Vietnam
- Upgraded to full university status (October 7, 2024) - Decision 1115/QĐ-TTg
- First private university in Vietnam, 8th university nationwide
- Location: 254 Nguyen Van Linh, Thanh Khe District, Da Nang City (Pacific Coast)
- 5 campuses, 85,000+ m², 254+ labs/practice rooms

**Leadership:**
- Chairman of University Council: Distinguished Educator & Labor Hero Le Cong Co (founder)
- University Director (Rector): Dr. Le Nguyen Bao

**Academic Structure (7 Schools + 2 Institutes):**
*Schools:* Computer Science, Technology, Economics & Business, Languages & Humanities, Tourism, Medicine & Pharmacy, International Education
*Institutes:* Nam Khue Management Institute, Vietnam-Japan Institute

**Vision & Mission:**
*Mission:* Education integrated with scientific research, developing patriotic graduates with humanitarian values, community consciousness, and comprehensive skills for global entrepreneurship
*Vision:* Reach Top 300 Asian universities (QS Asia Ranking) by 2030

**Connection to ASEAN & P2A:**
- Founding member of P2A (Passage to ASEAN) network since 2012
- Key role in ASEAN educational cooperation and student exchange
- Bridge for Vietnam-ASEAN academic collaboration
- Participation in regional conferences and initiatives

EXAMPLES:
User audio: [clear ""hello""] → ""Hello! How can I help you today?"" (greeting response)
User audio: [clear ""xin chào""] → ""Chào bạn! Tôi có thể giúp gì cho bạn không?"" (greeting response)
User audio: [clear ""What is EXPO 2025?""] → [direct answer about EXPO 2025] (NO greeting, direct answer)
User audio: [clear ""P2A là gì?""] → [direct answer about P2A] (NO greeting, direct answer)
User audio: [clear ""Tell me about Duy Tan University""] → [direct answer about DTU] (NO greeting, direct answer)
User audio: [clear ""Đại học Duy Tân có những ngành nào?""] → [direct answer about DTU programs in Vietnamese] (NO greeting, direct answer)
User audio: [clear ""Can you take a photo?""] → ""CAMERA_REQUEST"" (triggers camera interface)
User audio: [clear ""Chụp ảnh cho tôi""] → ""CAMERA_REQUEST"" (triggers camera interface)
User audio: [unclear/incomprehensible] → ""Cannot understand the question""

Be helpful, accurate, and respond naturally in whatever language the user uses.";
    }

    private void StartRecording()
    {
        if (string.IsNullOrEmpty(microphoneDevice))
        {
            LogMessage("❌ No microphone available");
            return;
        }

        try
        {
            microphoneClip = Microphone.Start(microphoneDevice, true, 10, sampleRate);
            isRecording = true;
            lastMicrophonePosition = 0;
            
            LogMessage($"🎤 Recording started - Sample rate: {sampleRate}Hz");
            
            // Capture noise profile for noise reduction
            if (enableInputNoiseReduction && !noiseProfileCaptured)
            {
                StartCoroutine(CaptureNoiseProfile());
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Failed to start recording: {e.Message}");
        }
    }

    private IEnumerator CaptureNoiseProfile()
    {
        LogMessage("🔇 Capturing noise profile... Please stay quiet for 2 seconds");
        yield return new WaitForSeconds(2f);
        
        if (microphoneClip != null && isRecording)
        {
            int position = Microphone.GetPosition(microphoneDevice);
            if (position > sampleRate) // At least 1 second of data
            {
                float[] noiseData = new float[sampleRate];
                microphoneClip.GetData(noiseData, 0);
                noiseProfile = noiseData;
                noiseProfileCaptured = true;
                LogMessage("✅ Noise profile captured");
            }
        }
    }

    private void StopRecording()
    {
        if (isRecording)
        {
            Microphone.End(microphoneDevice);
            isRecording = false;
            LogMessage("🛑 Recording stopped");
        }
    }

    private void ProcessMicrophoneAudio()
    {
        if (!isConnected || !isSessionActive || microphoneClip == null)
            return;

        int currentPosition = Microphone.GetPosition(microphoneDevice);
        if (currentPosition < 0 || currentPosition == lastMicrophonePosition)
            return;

        int sampleCount = currentPosition - lastMicrophonePosition;
        if (sampleCount < 0)
            sampleCount += microphoneClip.samples;

        if (sampleCount > 0)
        {
            float[] audioData = new float[sampleCount];
            microphoneClip.GetData(audioData, lastMicrophonePosition);
            
            // Chỉ áp dụng xử lý tối thiểu để OpenAI có thể hiểu rõ hơn
            if (enableInputNoiseReduction && noiseProfileCaptured)
            {
                audioData = ApplyLightNoiseReduction(audioData); // Giảm nhiễu nhẹ hơn
            }
            
            // Convert to PCM16 và gửi trực tiếp, không normalization
            byte[] pcmData = ConvertToPCM16Raw(audioData);
            SendAudioToOpenAI(pcmData);
            
            lastMicrophonePosition = currentPosition;
        }
    }

    private float[] ApplyLightNoiseReduction(float[] audioData)
    {
        if (noiseProfile == null || noiseProfile.Length == 0)
            return audioData;

        float[] processedData = new float[audioData.Length];
        float noiseThreshold = CalculateRMS(noiseProfile) * 1.5f; // Threshold thấp hơn để ít can thiệp

        for (int i = 0; i < audioData.Length; i++)
        {
            float sample = audioData[i];
            
            // Noise gate nhẹ nhàng hơn
            if (Mathf.Abs(sample) < noiseThreshold)
            {
                processedData[i] = sample * 0.3f; // Giảm ít hơn để giữ nguyên âm thanh
            }
            else
            {
                processedData[i] = sample;
            }
        }

        return processedData;
    }

    private byte[] ConvertToPCM16Raw(float[] audioData)
    {
        // Không áp dụng normalization cho input để giữ nguyên âm thanh tự nhiên
        byte[] pcmData = new byte[audioData.Length * 2];
        for (int i = 0; i < audioData.Length; i++)
        {
            // Chỉ clamp để tránh overflow, không modify âm thanh
            short sample = (short)(Mathf.Clamp(audioData[i], -1f, 1f) * 32767f);
            pcmData[i * 2] = (byte)(sample & 0xFF);
            pcmData[i * 2 + 1] = (byte)((sample >> 8) & 0xFF);
        }
        return pcmData;
    }

    private float CalculateRMS(float[] audioData)
    {
        float sum = 0f;
        for (int i = 0; i < audioData.Length; i++)
        {
            sum += audioData[i] * audioData[i];
        }
        return Mathf.Sqrt(sum / audioData.Length);
    }

    private byte[] ConvertToPCM16(float[] audioData)
    {
        // Apply normalization if enabled
        if (enableInputNormalization)
        {
            audioData = NormalizeAudio(audioData);
        }

        byte[] pcmData = new byte[audioData.Length * 2];
        for (int i = 0; i < audioData.Length; i++)
        {
            short sample = (short)(Mathf.Clamp(audioData[i], -1f, 1f) * 32767f);
            pcmData[i * 2] = (byte)(sample & 0xFF);
            pcmData[i * 2 + 1] = (byte)((sample >> 8) & 0xFF);
        }
        return pcmData;
    }

    private float[] NormalizeAudio(float[] audioData)
    {
        float maxAmplitude = audioData.Max(Mathf.Abs);
        if (maxAmplitude > 0.01f) // Avoid normalizing silence
        {
            float normalizeRatio = 0.8f / maxAmplitude; // Normalize to 80% to avoid clipping
            for (int i = 0; i < audioData.Length; i++)
            {
                audioData[i] *= normalizeRatio;
            }
        }
        return audioData;
    }

    private void SendAudioToOpenAI(byte[] audioData)
    {
        if (!isConnected || audioData.Length == 0)
            return;

        var audioMessage = new
        {
            type = "input_audio_buffer.append",
            audio = Convert.ToBase64String(audioData)
        };

        string jsonMessage = JsonConvert.SerializeObject(audioMessage);
        webSocket.SendText(jsonMessage);
    }

    private void ProcessAudioPlayback()
    {
        // Add queued audio to buffer
        while (audioPlaybackQueue.Count > 0)
        {
            float[] audioChunk = audioPlaybackQueue.Dequeue();
            audioBuffer.AddRange(audioChunk);
            isAIResponseComplete = false; // Reset khi có audio mới
            silenceTimer = 0f;
        }

        // Detect silence at end of response
        if (isAIResponseComplete && audioBuffer.Count > 0)
        {
            // Check if recent audio samples are silent
            int checkSamples = Mathf.Min(audioBuffer.Count, sampleRate / 10); // Check last 0.1 second
            bool isSilent = true;
            
            for (int i = audioBuffer.Count - checkSamples; i < audioBuffer.Count; i++)
            {
                if (Mathf.Abs(audioBuffer[i]) > SILENCE_THRESHOLD)
                {
                    isSilent = false;
                    break;
                }
            }
            
            if (isSilent)
            {
                silenceTimer += Time.deltaTime;
                if (silenceTimer >= SILENCE_DURATION && enableAdvancedFadeOut)
                {
                    // Apply advanced fade-out to remaining buffer
                    ApplyAdvancedFadeOut();
                }
            }
            else
            {
                silenceTimer = 0f;
            }
        }

        // Play audio when buffer has enough data or when response is complete
        bool shouldPlay = !isPlayingAudio && 
                         (audioBuffer.Count >= targetBufferSize || 
                          (isAIResponseComplete && audioBuffer.Count > 0));
                          
        if (shouldPlay)
        {
            StartCoroutine(PlayBufferedAudio());
        }
    }

    private void ApplyAdvancedFadeOut()
    {
        if (audioBuffer.Count == 0) return;
        
        int fadeOutSamples = Mathf.RoundToInt(fadeDuration * sampleRate * 2f); // Fade dài hơn cho cuối câu
        fadeOutSamples = Mathf.Min(fadeOutSamples, audioBuffer.Count);
        
        for (int i = audioBuffer.Count - fadeOutSamples; i < audioBuffer.Count; i++)
        {
            if (i >= 0)
            {
                float fadeRatio = (float)(audioBuffer.Count - i) / fadeOutSamples;
                // Sử dụng curve mượt hơn cho fade-out
                fadeRatio = Mathf.SmoothStep(0f, 1f, fadeRatio);
                audioBuffer[i] *= fadeRatio;
            }
        }
        
        LogMessage("🔇 Applied advanced fade-out to prevent end-of-sentence artifacts");
    }

    private IEnumerator PlayBufferedAudio()
    {
        if (audioBuffer.Count == 0)
            yield break;

        isPlayingAudio = true;
        
        // Create AudioClip from buffer
        float[] audioData = audioBuffer.ToArray();
        audioBuffer.Clear();

        // Apply smooth transition if enabled
        if (enableSmoothTransition)
        {
            audioData = ApplySmoothTransition(audioData);
        }

        AudioClip clip = CreateAudioClipFromFloatArray(audioData);
        if (clip != null && audioSource != null)
        {
            audioSource.clip = clip;
            audioSource.volume = audioVolume;
            audioSource.Play();
            
            // Wait for playback to complete
            float playbackTime = clip.length;
            
            // Nếu đây là chunk cuối cùng và có advanced fade-out, không overlap
            if (isAIResponseComplete && audioPlaybackQueue.Count == 0)
            {
                yield return new WaitForSeconds(playbackTime); // Không overlap để fade-out hoàn chỉnh
                LogMessage("🔊 Final audio chunk played with complete fade-out");
            }
            else
            {
                // Overlap nhẹ cho smooth transition
                yield return new WaitForSeconds(playbackTime - 0.02f);
            }
        }
        
        isPlayingAudio = false;
    }

    private float[] ApplySmoothTransition(float[] audioData)
    {
        if (audioData.Length == 0)
            return audioData;

        int fadeSamples = Mathf.RoundToInt(fadeDuration * sampleRate);
        fadeSamples = Mathf.Min(fadeSamples, audioData.Length / 4); // Don't fade more than 25% of audio

        // Fade in
        for (int i = 0; i < fadeSamples && i < audioData.Length; i++)
        {
            float fadeIn = (float)i / fadeSamples;
            // Smooth connection with last sample
            audioData[i] = Mathf.Lerp(lastAudioSample, audioData[i], fadeIn);
        }

        // Fade out
        for (int i = audioData.Length - fadeSamples; i < audioData.Length; i++)
        {
            if (i >= 0)
            {
                float fadeOut = (float)(audioData.Length - i) / fadeSamples;
                audioData[i] *= fadeOut;
            }
        }

        // Store last sample for next transition
        if (audioData.Length > 0)
        {
            lastAudioSample = audioData[audioData.Length - 1];
        }

        return audioData;
    }

    private AudioClip CreateAudioClipFromFloatArray(float[] audioData)
    {
        if (audioData.Length == 0)
            return null;

        AudioClip clip = AudioClip.Create("RealtimeAudio", audioData.Length, 1, sampleRate, false);
        clip.SetData(audioData, 0);
        return clip;
    }

    private AudioClip CreateAudioClipFromPCM16(byte[] pcmData)
    {
        if (pcmData.Length < 2)
            return null;

        int sampleCount = pcmData.Length / 2;
        float[] audioData = new float[sampleCount];
        
        for (int i = 0; i < sampleCount; i++)
        {
            short sample = (short)(pcmData[i * 2] | (pcmData[i * 2 + 1] << 8));
            audioData[i] = sample / 32767f;
        }

        return CreateAudioClipFromFloatArray(audioData);
    }

    private void ClearAudioBuffer()
    {
        audioBuffer.Clear();
        audioPlaybackQueue.Clear();
        lastAudioSample = 0f;
        isPlayingAudio = false;
        isAIResponseComplete = false;
        silenceTimer = 0f;
    }

    private void DisconnectWebSocket()
    {
        if (webSocket != null)
        {
            webSocket.Close();
            webSocket = null;
        }

        isConnected = false;
        isSessionActive = false;
    }
    #endregion

    #region WebSocket Event Handlers
    private void OnWebSocketOpen()
    {
        isConnected = true;
        LogMessage("✅ WebSocket connected to OpenAI Realtime API");
    }

    private void OnWebSocketMessage(byte[] data)
    {
        try
        {
            string message = Encoding.UTF8.GetString(data);
            var jsonMessage = JsonConvert.DeserializeObject<Dictionary<string, object>>(message);

            if (jsonMessage.ContainsKey("type"))
            {
                string messageType = jsonMessage["type"].ToString();
                HandleRealtimeMessage(messageType, jsonMessage);
            }
        }
        catch (Exception e)
        {
            LogMessage($"❌ Error processing WebSocket message: {e.Message}");
        }
    }

    private void OnWebSocketError(string error)
    {
        LogMessage($"❌ WebSocket error: {error}");
        isConnected = false;
        isSessionActive = false;
        UpdateStatus("Connection error occurred");
    }

    private void OnWebSocketClose(WebSocketCloseCode closeCode)
    {
        LogMessage($"🔌 WebSocket closed: {closeCode}");
        isConnected = false;
        isSessionActive = false;
        UpdateStatus("Connection closed");
    }

    private void HandleRealtimeMessage(string messageType, Dictionary<string, object> message)
    {
        switch (messageType)
        {
            case "session.created":
                LogMessage("✅ Session created successfully");
                break;

            case "session.updated":
                LogMessage("✅ Session updated");
                break;

            case "input_audio_buffer.committed":
                LogMessage("📡 Audio buffer committed");
                break;

            case "input_audio_buffer.speech_started":
                LogMessage("🎤 Speech detected");
                UpdateStatus("🎤 Listening...");
                break;

            case "input_audio_buffer.speech_stopped":
                LogMessage("🤐 Speech ended, processing...");
                UpdateStatus("🤖 AI is thinking...");
                break;

            case "conversation.item.input_audio_transcription.completed":
                if (message.ContainsKey("transcript"))
                {
                    string transcript = message["transcript"].ToString();
                    LogMessage($"📝 You said: {transcript}");
                }
                break;

            case "response.created":
                LogMessage("🤖 AI response started");
                break;

            case "response.audio_transcript.delta":
                if (message.ContainsKey("delta"))
                {
                    string delta = message["delta"].ToString();
                    LogMessage($"💬 AI: {delta}");
                }
                break;

            case "response.audio.delta":
                if (message.ContainsKey("delta"))
                {
                    string audioBase64 = message["delta"].ToString();
                    byte[] audioData = Convert.FromBase64String(audioBase64);
                    
                    // Convert PCM16 to float array for better processing
                    float[] audioFloats = ConvertPCM16ToFloat(audioData);
                    
                    // Apply audio enhancement
                    if (enableOutputNormalization)
                    {
                        audioFloats = NormalizeAudio(audioFloats);
                    }
                    
                    audioPlaybackQueue.Enqueue(audioFloats);

                    if (!isPlayingAudio)
                    {
                        UpdateStatus("🔊 AI is speaking...");
                    }
                }
                break;

            case "response.done":
                LogMessage("✅ AI response completed");
                UpdateStatus("🎤 Ready for next question...");
                isAIResponseComplete = true; // Đánh dấu response đã hoàn thành
                break;

            case "error":
                if (message.ContainsKey("error"))
                {
                    var error = message["error"];
                    LogMessage($"❌ API Error: {error}");
                    UpdateStatus("Error occurred");
                }
                break;

            default:
                LogMessage($"📥 Received: {messageType}");
                break;
        }
    }

    private float[] ConvertPCM16ToFloat(byte[] pcmData)
    {
        if (pcmData.Length < 2)
            return new float[0];

        int sampleCount = pcmData.Length / 2;
        float[] audioData = new float[sampleCount];
        
        for (int i = 0; i < sampleCount; i++)
        {
            short sample = (short)(pcmData[i * 2] | (pcmData[i * 2 + 1] << 8));
            audioData[i] = sample / 32767f;
        }

        return audioData;
    }
    #endregion

    #region Utility Methods
    private void LogMessage(string message)
    {
        logMessages += message + "\n";

        if (logText != null)
        {
            logText.text = logMessages;
        }

        Debug.Log($"[OpenAIRealtime] {message}");

        // Keep logs manageable
        if (logMessages.Length > 3000)
        {
            string[] lines = logMessages.Split('\n');
            logMessages = string.Join("\n", lines, lines.Length - 20, 20);
        }
    }

    private void UpdateStatus(string status)
    {
        if (statusText != null)
        {
            statusText.text = status;
        }

        LogMessage($"Status: {status}");
    }

    private void ClearLogs()
    {
        logMessages = "";
        if (logText != null)
        {
            logText.text = "";
        }
    }
    #endregion

    #region Context Menu Methods
    [ContextMenu("Test Realtime Connection")]
    public void TestConnection()
    {
        StartRealtimeConversation();
    }

    [ContextMenu("Stop Realtime Session")]
    public void StopSession()
    {
        StopRealtimeConversation();
    }

    [ContextMenu("Clear Audio Buffer")]
    public void ClearBuffer()
    {
        ClearAudioBuffer();
        LogMessage("🧹 Audio buffer cleared");
    }

    [ContextMenu("Update Session Instructions")]
    public void UpdateInstructions()
    {
        if (isSessionActive)
        {
            StartCoroutine(UpdateSessionInstructions());
        }
        else
        {
            LogMessage("⚠️ No active session to update");
        }
    }

    private IEnumerator UpdateSessionInstructions()
    {
        if (!isConnected || !isSessionActive)
        {
            LogMessage("❌ Cannot update instructions - session not active");
            yield break;
        }

        string systemInstructions = !string.IsNullOrEmpty(customInstructions) ? 
            customInstructions : GetDefaultMultilingualInstructions();

        var updateConfig = new
        {
            type = "session.update",
            session = new
            {
                instructions = systemInstructions
            }
        };

        string jsonMessage = JsonConvert.SerializeObject(updateConfig);
        webSocket.SendText(jsonMessage);
        
        LogMessage("📡 Session instructions updated during active session");
    }

    public void BackButtonClick() 
    {
        SceneManager.LoadScene("PhotoScene");
    }
    #endregion
}
