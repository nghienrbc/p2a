using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinObject : MonoBehaviour
{ 
    public float lineLength = 5f; // Chiều dài của đường thẳng

    void Update()
    {
        // Tính toán điểm bắt đầu và kết thúc của đường thẳng
        Vector3 startPoint = transform.position;
        Vector3 endPoint = transform.position + transform.up * lineLength;

        // Vẽ đường thẳng từ pin theo trục Z local của nó
        // Debug.DrawLine(startPoint, endPoint, Color.red);
    }
}
