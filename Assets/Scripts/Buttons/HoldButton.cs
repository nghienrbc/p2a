using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class HoldButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private bool isHolding = false; // Trạng thái giữ nút

    public void OnPointerDown(PointerEventData eventData)
    {
        isHolding = true;
       // Debug.Log("Button is being held down");

        // Bắt đầu xử lý nhấn giữ
        StartHold();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        isHolding = false;
       // Debug.Log("Button is released");

        // Xử lý khi nhả nút
        StopHold();
    }

    private void StartHold()
    {
        // gọi hàm bắt đầu thu âm từ UIManager
        UIManager.Instance.BtnStartRecordClick();
    }

    private void StopHold()
    {
        UIManager.Instance.BtnStopRecordClick();
    }

    private void Update()
    {
        if (isHolding)
        {
            // Nếu nút đang được giữ, có thể thực hiện các hành động liên tục ở đây
          //  Debug.Log("Holding the button...");
        }
    }

}
