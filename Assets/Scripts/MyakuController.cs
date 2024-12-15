using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MyakuController : MonoBehaviour
{ 
    public Animator animator;
    public GameObject RecordPanel;
    public GameObject SpeakPanel;

    public Transform farTransform; 
    public Transform nearTransform;

    private Transform targetTransform;
    private Animator recordPanelAnimator;
    private Animator speakPanelAnimator;

    public float moveSpeed = 5f;      // Tốc độ di chuyển
    public float stoppingDistance = 0.1f; // Khoảng cách dừng lại
    private bool isMoving = false;    // Kiểm tra đối tượng có đang di chuyển không

    public bool isPlaceInFarPossiton = false;
    private void Start()
    { 
        animator = GetComponent<Animator>();
        recordPanelAnimator = RecordPanel.GetComponent<Animator>();
        speakPanelAnimator = SpeakPanel.GetComponent<Animator>(); 
    }

    void Update()
    {
        if (isMoving)
        {
            MoveToTarget();
        }
    }
    public void MyakuHello()
    {
        animator.SetTrigger("hello");
    }
    public void MyakuListen()
    {
        animator.SetTrigger("listen");
    }
    public void MyakuThinking()
    {
        animator.SetBool("thinking", true);
        animator.SetBool("answer", false);
    }
    public void MyakuAnswer()
    {
        animator.SetBool("thinking", false);
        animator.SetBool("answer", true);
        
        UIManager.Instance.connectionTxt.text = "OK! Here is my answer";
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
        // move record Panel
    }

    public void MoveMyakuToNearPossition()
    {
        targetTransform = nearTransform;
        isMoving = true;
        recordPanelAnimator.SetTrigger("MoveNear");
        speakPanelAnimator.SetTrigger("show");
    }

    // Hàm di chuyển đối tượng
    private void MoveToTarget()
    {
        if (targetTransform == null)
        {
            Debug.LogWarning("Target Transform is null. Cannot move.");
            isMoving = false;
            return;
        }

        // Tính khoảng cách hiện tại đến vị trí đích
        float distanceToTarget = Vector3.Distance(transform.position, targetTransform.position);

        // Nếu đối tượng đã ở gần vị trí đích, dừng lại
        if (distanceToTarget <= stoppingDistance)
        {
            isMoving = false;
            Debug.Log("Reached target position.");
            return;
        }

        // Di chuyển đối tượng về phía vị trí đích
        transform.position = Vector3.MoveTowards(transform.position, targetTransform.position, moveSpeed * Time.deltaTime);
        isPlaceInFarPossiton = targetTransform == farTransform;
    }

    // Hàm kiểm tra đối tượng có đang di chuyển
    public bool IsMoving()
    {
        return isMoving;
    }
}
