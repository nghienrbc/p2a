using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class HoldButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    private bool isHolding = false; // Trạng thái giữ nút
    private bool hasHeldEnoughTime = false; // Kiểm tra đã nhấn đủ lâu chưa
    private float holdTime = 0f; // Thời gian nhấn giữ
    private float requiredHoldTime = 0.3f; // Thời gian cần để bắt đầu thu âm (ví dụ 0.5 giây)


    public void OnPointerDown(PointerEventData eventData)
    {
        isHolding = true;
        holdTime = 0f; // Reset thời gian khi bắt đầu nhấn

        UIManager.Instance.BtnStartRecordClick();
        // Bắt đầu theo dõi thời gian giữ
        // Debug.Log("Button is being pressed");
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (isHolding)
        {
           // if (hasHeldEnoughTime)
            //{
                // Nếu đã nhấn đủ lâu, dừng thu âm
                UIManager.Instance.BtnStopRecordClick();
           // }

            // Reset trạng thái khi nhả nút
            isHolding = false;
           // hasHeldEnoughTime = false; // Reset trạng thái "nhấn đủ lâu"
           // holdTime = 0f; // Reset thời gian
           // Debug.Log("Button is released");
        }
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

    //private void Update()
    //{
    //    if (isHolding)
    //    {
    //        holdTime += Time.deltaTime; // Cộng dồn thời gian nhấn giữ

    //        // Kiểm tra xem thời gian nhấn giữ đã đủ chưa
    //        if (holdTime >= requiredHoldTime && !hasHeldEnoughTime)
    //        {
    //            hasHeldEnoughTime = true;
    //            // Nếu nhấn đủ lâu, gọi hàm bắt đầu thu âm
    //            UIManager.Instance.BtnStartRecordClick();
    //           // Debug.Log("Recording started after holding for " + requiredHoldTime + " seconds");
    //        }
    //    }
    //}

}
