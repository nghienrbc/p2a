using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class CameraZoomOnPin : MonoBehaviour
{
    public Camera mainCamera; // Camera chính
    public float zoomSpeed = 5f; // Tốc độ zoom vào pin
    public float zoomDistance = 5f; // Khoảng cách từ camera đến pin khi zoom vào
    public Transform initialCameraPosition; // Vị trí và hướng ban đầu của camera (Transform)

    private Transform targetPin; // Pin được click vào
    private bool isZooming = false; // Kiểm tra xem camera có đang zoom vào pin không
    private bool isReturning = false; // Kiểm tra xem camera có đang quay về vị trí ban đầu không

    void Start()
    {
        // Lưu vị trí và hướng ban đầu của camera
        if (initialCameraPosition == null)
        {
            initialCameraPosition = new GameObject("InitialCameraPosition").transform;
            initialCameraPosition.position = mainCamera.transform.position;
            initialCameraPosition.rotation = mainCamera.transform.rotation;
        }
    }

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
                    if (targetPin == null || targetPin != hit.transform)
                    {
                        // Nếu click vào pin mới, quay lại vị trí ban đầu trước khi zoom
                        targetPin = hit.transform;
                        isReturning = true; // Bắt đầu quá trình quay về vị trí ban đầu
                        isZooming = false; // Dừng quá trình zoom vào pin cũ
                    }
                }
            }
        }

        // Quá trình quay về vị trí ban đầu của camera
        if (isReturning)
        {
            // Di chuyển camera dần dần về vị trí ban đầu
            mainCamera.transform.position = Vector3.Lerp(mainCamera.transform.position, initialCameraPosition.position, Time.deltaTime * zoomSpeed);
            mainCamera.transform.rotation = Quaternion.Lerp(mainCamera.transform.rotation, initialCameraPosition.rotation, Time.deltaTime * zoomSpeed);

            // Khi camera đã về vị trí ban đầu, dừng quá trình quay về
            if (Vector3.Distance(mainCamera.transform.position, initialCameraPosition.position) < 0.1f)
            {
                isReturning = false;
                isZooming = true; // Sau khi về vị trí ban đầu, bắt đầu zoom vào pin mới
            }
        }

        // Nếu đang zoom vào pin mới
        if (isZooming && targetPin != null)
        {
            // Lấy vị trí mà camera sẽ hướng tới (phía trước pin theo trục Z local của pin)
            Vector3 targetPosition = targetPin.position + targetPin.up * zoomDistance;

            // Di chuyển camera dần dần đến vị trí này
            mainCamera.transform.position = Vector3.Lerp(mainCamera.transform.position, targetPosition, Time.deltaTime * zoomSpeed);

            // Hướng camera thẳng vào pin
            mainCamera.transform.LookAt(targetPin);

            // Nếu camera đã gần đến vị trí mục tiêu, dừng quá trình zoom
            if (Vector3.Distance(mainCamera.transform.position, targetPosition) < 0.1f)
            {
                isZooming = false;
            }
        }
    }
}

