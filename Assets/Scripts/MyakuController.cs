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
            string[] expectedFiles = { "Response1.mp3", "Response2.mp3", "Response3.mp3", "thinking1.mp3", "thinking2.mp3", "thinking3.mp3", "thinking4.mp3" }; // Cập nhật tên file thực tế

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
            Debug.Log($"Đang phát âm thanh {soundType}: {clipToPlay.name}");
        }
        else
        {
            Debug.LogWarning($"Audio clip tại index {randomIndex} là null.");
        }
    }

    public void MyakuHello()
    {
        animator.SetTrigger("hello");
    }

    public void MyakuListen()
    {
        animator.SetTrigger("listen");
        UIManager.Instance.connectionTxt.text = "I'm hearing!";
        PlayRandomSound(listeningSounds, "listening");
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
        UIManager.Instance.connectionTxt.text = UIManager.Instance.connectionTxt.text + "\n OK! Here is my answer";
    }

    public void MyakuStopAnswer()
    {
        animator.SetBool("answer", false);
        UIManager.Instance.connectionTxt.text = "Ask more questions please!";
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
}