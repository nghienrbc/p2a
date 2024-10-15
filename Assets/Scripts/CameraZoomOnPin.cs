using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CameraZoomOnPin : MonoBehaviour
{
    public Camera mainCamera; // Camera chính
    public Transform earth; // Đối tượng quả đất
    public float rotationSpeed = 2f; // Tốc độ xoay của quả đất
    public float distanceFromCamera = 5f; // Khoảng cách của pin đến camera
    private Transform currentPin; // Pin hiện tại
    private Transform targetPin; // Pin được click vào
    private bool isRotating = false; // Kiểm tra xem quả đất có đang di chuyển không
    private Quaternion targetRotation; // Đích xoay

    void Update()
    {
        // Kiểm tra khi người dùng click chuột trái
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = mainCamera.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            // Phát hiện pin khi người dùng click vào
            if (Physics.Raycast(ray, out hit))
            {
                if (hit.transform.CompareTag("Pin")) // Chỉ xử lý khi đối tượng có tag là "Pin"
                {
                    targetPin = hit.transform; // Lưu pin mục tiêu
                    isRotating = true; // Bắt đầu quá trình xoay quả đất

                    // Tính toán hướng của camera so với pin (tính toán dựa trên vị trí của camera)
                    Vector3 directionToPin = (targetPin.position - mainCamera.transform.position).normalized;

                    // Tính toán quaternion để xoay quả đất sao cho pin hướng về camera
                    // Sử dụng trục Y của quả đất để xác định hướng quay
                    targetRotation = Quaternion.LookRotation(-targetPin.forward, Vector3.up); // Đảo hướng trục Z local của pin
                }
            }
        }

        // Nếu quả đất đang xoay
        if (isRotating)
        {
            // Xoay dần đối tượng quả đất đến hướng của camera
            earth.rotation = Quaternion.Slerp(earth.rotation, targetRotation, Time.deltaTime * rotationSpeed);

            // Khi quá trình xoay gần hoàn thành
            if (Quaternion.Angle(earth.rotation, targetRotation) < 0.1f)
            {
                isRotating = false; // Dừng xoay
                currentPin = targetPin; // Cập nhật pin hiện tại thành pin mới
            }
        }
    }
}

