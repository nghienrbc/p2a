using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateEarth : MonoBehaviour
{ 
    public Transform target; // Đối tượng để xoay (ví dụ: Earth)
    public float rotationSpeed = -5f;

    // Giới hạn góc xoay (trục Y là góc ngang, trục X là góc dọc)
    public float minYAngle = -45f;
    public float maxYAngle = 45f;
    public float minXAngle = -30f;
    public float maxXAngle = 30f;

    private float currentYAngle = 0f;
    private float currentXAngle = 0f;

    private bool isDragging = false; // Biến để kiểm tra nếu đang kéo chuột

    void Update()
    {
        // Kiểm tra nếu người dùng nhấn giữ nút chuột trái (Mouse0)
        if (Input.GetMouseButtonDown(0)) // Khi nhấn chuột
        {
            isDragging = true;
        }

        if (Input.GetMouseButtonUp(0)) // Khi thả chuột
        {
            isDragging = false;
        }

        // Chỉ xoay khi đang giữ chuột và kéo
        if (isDragging)
        {
            float mouseX = Input.GetAxis("Mouse X") * rotationSpeed;
            float mouseY = Input.GetAxis("Mouse Y") * rotationSpeed;

            // Tính góc xoay mới
            currentYAngle += mouseX;
            currentXAngle -= mouseY;

            // Giới hạn góc xoay theo trục Y (ngang) và trục X (dọc)
            currentYAngle = Mathf.Clamp(currentYAngle, minYAngle, maxYAngle);
            currentXAngle = Mathf.Clamp(currentXAngle, minXAngle, maxXAngle);

            // Xoay đối tượng theo góc đã giới hạn
            target.rotation = Quaternion.Euler(currentXAngle, currentYAngle, 0f);
        }
    } 
}
