using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using UnityEngine.Networking;

public class MyakuController : MonoBehaviour
{
    public Animator animator;
    public GameObject RecordPanel;
    public GameObject SpeakPanel;

    public Transform farTransform;
    public Transform nearTransform;

    [SerializeField] private AudioSource audioPlayer;

    private Transform targetTransform;
    private Animator recordPanelAnimator;
    private Animator speakPanelAnimator;

    public float moveSpeed = 5f;
    public float stoppingDistance = 0.1f;
    private bool isMoving = false;
    public bool isPlaceInFarPossiton = false;

    private AudioClip[] listeningSounds;
    private AudioClip[] thinkingSounds;
    private readonly string listeningSoundsFolder = "ListeningSounds";
    private readonly string thinkingSoundsFolder = "ThinkingSounds";

    // Thêm các biến để quản lý chế độ lắng nghe câu hỏi tiếp theo
    private bool isWaitingForNextQuestion = false;
    private const float QUESTION_TIMEOUT = 10f; // 10 giây timeout
    private Coroutine questionTimeoutCoroutine;

    // Enhanced Speech Controller Integration
    private bool isListening = false;
    private bool isRecording = false;
    private bool isThinking = false;
    private bool isSpeaking = false;

    private void Start()
    {
        animator = GetComponent<Animator>();
        recordPanelAnimator = RecordPanel.GetComponent<Animator>();
        speakPanelAnimator = SpeakPanel.GetComponent<Animator>();

        if (audioPlayer == null)
        {
            audioPlayer = GetComponent<AudioSource>();
            if (audioPlayer == null)
            {
                audioPlayer = gameObject.AddComponent<AudioSource>();
            }
        }

        // Load audio clips
        StartCoroutine(InitializeAudioClips());
    }

    void Update()
    {
        if (isMoving)
        {
            MoveToTarget();
        }
    }

    private IEnumerator InitializeAudioClips()
    {
        // Tải file âm thanh cho ListeningSounds
        yield return StartCoroutine(LoadSoundClips(listeningSoundsFolder, clips => listeningSounds = clips));
        // Tải file âm thanh cho ThinkingSounds
        yield return StartCoroutine(LoadSoundClips(thinkingSoundsFolder, clips => thinkingSounds = clips));
    }

    private IEnumerator LoadSoundClips(string folderName, System.Action<AudioClip[]> onComplete)
    {
        List<AudioClip> loadedClips = new List<AudioClip>();
        string streamingAssetsPath = Path.Combine(Application.streamingAssetsPath, folderName);
        string persistentPath = Path.Combine(Application.persistentDataPath, folderName);

        if (Application.platform == RuntimePlatform.Android)
        {
            // Tạo thư mục trong persistentDataPath
            if (!Directory.Exists(persistentPath))
            {
                Directory.CreateDirectory(persistentPath);
            }

            // Danh sách file âm thanh (hard-code, thay bằng tên file thực tế)
            string[] expectedFiles = { "Response1.mp3", "thinking1.mp3", "thinking3.mp3", "thinking4.mp3" }; // Cập nhật tên file thực tế

            foreach (string fileName in expectedFiles)
            {
                string sourcePath = Path.Combine(streamingAssetsPath, fileName);
                string destPath = Path.Combine(persistentPath, fileName);

                // Sao chép file từ StreamingAssets sang persistentDataPath
                using (UnityWebRequest www = UnityWebRequest.Get(sourcePath))
                {
                    yield return www.SendWebRequest();
                    if (www.result == UnityWebRequest.Result.Success)
                    {
                        File.WriteAllBytes(destPath, www.downloadHandler.data);
                        Debug.Log($"Sao chép {fileName} từ StreamingAssets sang {destPath}");
                    }
                    else
                    {
                        Debug.LogWarning($"Không thể sao chép {fileName}: {www.error}");
                        continue;
                    }
                }

                // Tải file từ persistentDataPath
                if (File.Exists(destPath))
                {
                    yield return StartCoroutine(LoadAudioClip(destPath, loadedClips));
                }
                else
                {
                    Debug.LogWarning($"File {fileName} không tồn tại tại {destPath}");
                }
            }
        }
        else
        {
            // Trên Windows, tải trực tiếp từ StreamingAssets
            if (!Directory.Exists(streamingAssetsPath))
            {
                Debug.LogWarning($"Thư mục không tồn tại: {streamingAssetsPath}");
                onComplete?.Invoke(new AudioClip[0]);
                yield break;
            }

            string[] audioFiles = Directory.GetFiles(streamingAssetsPath, "*.wav");
            if (audioFiles.Length == 0)
            {
                audioFiles = Directory.GetFiles(streamingAssetsPath, "*.mp3");
            }

            if (audioFiles.Length == 0)
            {
                Debug.LogWarning($"Không tìm thấy file âm thanh trong {streamingAssetsPath}");
                onComplete?.Invoke(new AudioClip[0]);
                yield break;
            }

            foreach (string filePath in audioFiles)
            {
                yield return StartCoroutine(LoadAudioClip(filePath, loadedClips));
            }
        }

        if (loadedClips.Count == 0)
        {
            Debug.LogWarning($"Không tải được file âm thanh nào từ {folderName}");
        }

        onComplete?.Invoke(loadedClips.ToArray());
    }

    private IEnumerator LoadAudioClip(string filePath, List<AudioClip> loadedClips)
    {
        string extension = Path.GetExtension(filePath).ToLower();
        AudioType audioType = extension == ".wav" ? AudioType.WAV : AudioType.MPEG;
        string fileName = Path.GetFileName(filePath);

        string url = filePath;
        if (!url.StartsWith("file://"))
        {
            url = "file:///" + filePath;
        }

        using (UnityWebRequest www = UnityWebRequestMultimedia.GetAudioClip(url, audioType))
        {
            yield return www.SendWebRequest();
            if (www.result == UnityWebRequest.Result.Success)
            {
                AudioClip clip = DownloadHandlerAudioClip.GetContent(www);
                clip.name = Path.GetFileNameWithoutExtension(fileName);
                loadedClips.Add(clip);
                Debug.Log($"Đã tải {fileName} từ {filePath}");
            }
            else
            {
                Debug.LogError($"Lỗi khi tải {fileName}: {www.error}");
            }
        }
    }

    private void PlayRandomSound(AudioClip[] clipArray, string soundType)
    {
        if (clipArray == null || clipArray.Length == 0)
        {
            Debug.LogWarning($"Không có âm thanh {soundType} để phát.");
            return;
        }

        int randomIndex = Random.Range(0, clipArray.Length);
        AudioClip clipToPlay = clipArray[randomIndex];

        if (clipToPlay != null)
        {
            if (audioPlayer.isPlaying)
                audioPlayer.Stop();

            audioPlayer.clip = clipToPlay;
            audioPlayer.Play();
            //Debug.Log($"Đang phát âm thanh {soundType}: {clipToPlay.name}");
        }
        else
        {
            Debug.LogWarning($"Audio clip tại index {randomIndex} là null.");
        }
    }

    public void MyakuHello()
    {
        animator.SetTrigger("hello");
        
        // Nếu đang trong chế độ chờ câu hỏi tiếp theo, kết thúc chế độ này
        if (isWaitingForNextQuestion)
        {
            EndWaitingForNextQuestion();
        }
        
        // Khởi động lại lắng nghe wake word
        if (RecordAudio.Instance != null)
        {
            RecordAudio.Instance.ResumeWakeWordListening();
        }
    }

    public void MyakuListen(bool fromHeyDT, bool playSound = true)
    {
        animator.SetTrigger("listen"); 
        if (playSound)
        {
            PlayRandomSound(listeningSounds, "listening");
        }
        // We need to wait for the audio to finish playing before proceeding
        StartCoroutine(WaitForAudioAndNotify(fromHeyDT, playSound));
    }

    private IEnumerator WaitForAudioAndNotify(bool fromHeyDT, bool playSound = true)
    {
        // Wait for audio to finish playing only if sound was played
        if (playSound)
        {
            while (audioPlayer.isPlaying)
            {
                yield return null;
            }
        }
        //UIManager.Instance.connectionTxt.text = "I'm hearing! Ask me something!";

        // Add additional 1 second delay after audio finishes
        // yield return new WaitForSeconds(1.0f);
        
        // Nếu đang trong chế độ chờ câu hỏi tiếp theo, bắt đầu lắng nghe ngay lập tức
        if (isWaitingForNextQuestion && RecordAudio.Instance != null)
        {
            RecordAudio.Instance.StartListeningForNextQuestion();
        }
        // Nếu không phải chế độ chờ, xử lý bình thường
        else if (RecordAudio.Instance != null)
        {
            RecordAudio.Instance.StartRecordingAfterSound(fromHeyDT);
        }
    }



    public void MyakuThinking()
    {
        animator.SetBool("thinking", true);
        animator.SetBool("answer", false);
        PlayRandomSound(thinkingSounds, "thinking");
    }

    public void MyakuAnswer()
    {
        Debug.Log("begin answer");
        animator.SetBool("thinking", false);
        animator.SetBool("answer", true);
       // UIManager.Instance.connectionTxt.text = UIManager.Instance.connectionTxt.text + "\n OK! Here is my answer";
    }

    public void MyakuStopAnswer()
    {
        animator.SetBool("answer", false);
        UIManager.Instance.connectionTxt.text = "Ask more questions please!";
        
        // Bắt đầu chế độ lắng nghe câu hỏi tiếp theo
        StartWaitingForNextQuestion();
    }

    // Phương thức mới để bắt đầu chế độ lắng nghe câu hỏi tiếp theo
    public void StartWaitingForNextQuestion()
    {
        isWaitingForNextQuestion = true;
        
        // Hiển thị animation listen nhưng không phát âm thanh cho câu hỏi tiếp theo
        MyakuListen(true, false); // fromHeyDT = true, playSound = false
        
        // Bắt đầu timer 10 giây
        if (questionTimeoutCoroutine != null)
        {
            StopCoroutine(questionTimeoutCoroutine);
        }
        questionTimeoutCoroutine = StartCoroutine(QuestionTimeoutCoroutine());
    }

    private IEnumerator QuestionTimeoutCoroutine()
    {
        yield return new WaitForSeconds(QUESTION_TIMEOUT);
        
        // Nếu sau 10 giây không có câu hỏi mới, quay về chế độ lắng nghe wake word
        if (isWaitingForNextQuestion)
        {
            Debug.Log("Timeout waiting for next question. Returning to wake word mode.");
            EndWaitingForNextQuestion();
            MyakuHello(); // Kết thúc phiên và quay về wake word mode
            
            // Khởi động lại BackgroundAudioPlugin để lắng nghe wake word
            if (RecordAudio.Instance != null)
            {
                RecordAudio.Instance.ResumeWakeWordListening();
            }
        }
    }

    public void EndWaitingForNextQuestion()
    {
        isWaitingForNextQuestion = false;
        
        // Không cần reset animation ở đây vì sẽ chuyển sang thinking hoặc answer
        // animator.SetTrigger("hello"); // Bỏ dòng này để tránh xung đột animation
        
        if (questionTimeoutCoroutine != null)
        {
            StopCoroutine(questionTimeoutCoroutine);
            questionTimeoutCoroutine = null;
        }
    }

    // Phương thức để check xem có đang trong chế độ chờ câu hỏi tiếp theo không
    public bool IsWaitingForNextQuestion()
    {
        return isWaitingForNextQuestion;
    }

    public void MyakuCountForShootPhoto()
    {
        animator.SetTrigger("takephoto");
    }

    public void MoveMyakuToFarPossition()
    {
        targetTransform = farTransform;
        isMoving = true;
        recordPanelAnimator.SetTrigger("MoveFar");
        speakPanelAnimator.SetTrigger("hide");
    }

    public void MoveMyakuToNearPossition()
    {
        targetTransform = nearTransform;
        isMoving = true;
        recordPanelAnimator.SetTrigger("MoveNear");
        speakPanelAnimator.SetTrigger("show");
    }

    private void MoveToTarget()
    {
        if (targetTransform == null)
        {
            Debug.LogWarning("Target Transform is null. Cannot move.");
            isMoving = false;
            return;
        }

        float distanceToTarget = Vector3.Distance(transform.position, targetTransform.position);

        if (distanceToTarget <= stoppingDistance)
        {
            isMoving = false;
            Debug.Log("Reached target position.");
            return;
        }

        transform.position = Vector3.MoveTowards(transform.position, targetTransform.position, moveSpeed * Time.deltaTime);
        isPlaceInFarPossiton = targetTransform == farTransform;
    }

    public bool IsMoving()
    {
        return isMoving;
    }

    /// <summary>
    /// Di chuyển Myaku đến vị trí gần để tương tác
    /// </summary>
    public void MoveToNear()
    {
        if (nearTransform != null)
        {
            targetTransform = nearTransform;
            isMoving = true;
            Debug.Log("🚶 Myaku: Moving to near position");
        }
    }

    /// <summary>
    /// Di chuyển Myaku đến vị trí xa để nghỉ ngơi
    /// </summary>
    public void MoveToFar()
    {
        if (farTransform != null)
        {
            targetTransform = farTransform;
            isMoving = true;
            Debug.Log("🚶 Myaku: Moving to far position");
        }
    }

    private void OnDestroy()
    {
        if (listeningSounds != null)
        {
            foreach (var clip in listeningSounds) Destroy(clip);
        }
        if (thinkingSounds != null)
        {
            foreach (var clip in thinkingSounds) Destroy(clip);
        }
    }

    #region Enhanced Speech Controller Integration
    /// <summary>
    /// Bắt đầu chế độ lắng nghe - Myaku sẵn sàng nhận câu hỏi
    /// </summary>
    public void StartListening()
    {
        isListening = true;
        isRecording = false;
        isThinking = false;
        isSpeaking = false;

        // Animation: Idle/listening state
        animator.SetBool("listen", true);
        animator.SetBool("record", false);
        animator.SetBool("think", false);
        animator.SetBool("answer", false);

        // Move to near position for interaction
        MoveToNear();

        // Play listening sound
        PlayRandomListeningSound();

        Debug.Log("🎧 Myaku: Started listening mode");
    }

    /// <summary>
    /// Bắt đầu ghi âm - Người dùng đang nói
    /// </summary>
    public void StartRecording()
    {
        isListening = false;
        isRecording = true;
        isThinking = false;
        isSpeaking = false;

        // Animation: Recording state
        animator.SetBool("listen", false);
        animator.SetBool("record", true);
        animator.SetBool("think", false);
        animator.SetBool("answer", false);

        // Show record panel
        if (recordPanelAnimator != null)
        {
            recordPanelAnimator.SetBool("show", true);
        }

        Debug.Log("🎤 Myaku: Started recording mode");
    }

    /// <summary>
    /// Dừng ghi âm - Người dùng đã nói xong
    /// </summary>
    public void StopRecording()
    {
        isRecording = false;

        // Hide record panel
        if (recordPanelAnimator != null)
        {
            recordPanelAnimator.SetBool("show", false);
        }

        Debug.Log("🛑 Myaku: Stopped recording");
    }

    /// <summary>
    /// Bắt đầu suy nghĩ - AI đang xử lý câu hỏi
    /// </summary>
    public void StartThinking()
    {
        isListening = false;
        isRecording = false;
        isThinking = true;
        isSpeaking = false;

        // Animation: Thinking state
        animator.SetBool("listen", false);
        animator.SetBool("record", false);
        animator.SetBool("think", true);
        animator.SetBool("answer", false);

        // Play thinking sound
        PlayRandomThinkingSound();

        Debug.Log("🤔 Myaku: Started thinking mode");
    }

    /// <summary>
    /// Dừng suy nghĩ
    /// </summary>
    public void StopThinking()
    {
        isThinking = false;

        // Animation: Stop thinking
        animator.SetBool("think", false);

        Debug.Log("🛑 Myaku: Stopped thinking");
    }

    /// <summary>
    /// Bắt đầu nói - AI đang phát câu trả lời
    /// </summary>
    public void StartSpeaking()
    {
        isListening = false;
        isRecording = false;
        isThinking = false;
        isSpeaking = true;

        // Animation: Speaking/answering state
        animator.SetBool("listen", false);
        animator.SetBool("record", false);
        animator.SetBool("think", false);
        animator.SetBool("answer", true);

        // Show speak panel
        if (speakPanelAnimator != null)
        {
            speakPanelAnimator.SetBool("show", true);
        }

        Debug.Log("🗣️ Myaku: Started speaking mode");
    }

    /// <summary>
    /// Kết thúc nói - AI đã phát xong câu trả lời
    /// </summary>
    public void FinishSpeaking()
    {
        isSpeaking = false;

        // Animation: Stop speaking
        animator.SetBool("answer", false);

        // Hide speak panel
        if (speakPanelAnimator != null)
        {
            speakPanelAnimator.SetBool("show", false);
        }

        Debug.Log("✅ Myaku: Finished speaking");
    }

    /// <summary>
    /// Dừng tất cả hoạt động - Kết thúc session
    /// </summary>
    public void StopAllActivities()
    {
        isListening = false;
        isRecording = false;
        isThinking = false;
        isSpeaking = false;

        // Reset all animations
        animator.SetBool("listen", false);
        animator.SetBool("record", false);
        animator.SetBool("think", false);
        animator.SetBool("answer", false);

        // Hide all panels
        if (recordPanelAnimator != null)
        {
            recordPanelAnimator.SetBool("show", false);
        }

        if (speakPanelAnimator != null)
        {
            speakPanelAnimator.SetBool("show", false);
        }

        // Move to far position
        MoveToFar();

        Debug.Log("🛑 Myaku: Stopped all activities");
    }

    /// <summary>
    /// Phát âm thanh listening ngẫu nhiên
    /// </summary>
    private void PlayRandomListeningSound()
    {
        if (listeningSounds != null && listeningSounds.Length > 0)
        {
            int randomIndex = UnityEngine.Random.Range(0, listeningSounds.Length);
            if (listeningSounds[randomIndex] != null)
            {
                audioPlayer.clip = listeningSounds[randomIndex];
                audioPlayer.Play();
            }
        }
    }

    /// <summary>
    /// Phát âm thanh thinking ngẫu nhiên
    /// </summary>
    private void PlayRandomThinkingSound()
    {
        if (thinkingSounds != null && thinkingSounds.Length > 0)
        {
            int randomIndex = UnityEngine.Random.Range(0, thinkingSounds.Length);
            if (thinkingSounds[randomIndex] != null)
            {
                audioPlayer.clip = thinkingSounds[randomIndex];
                audioPlayer.Play();
            }
        }
    }
    #endregion
}