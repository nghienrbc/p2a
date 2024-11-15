using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeBtn : BaseToogleButton
{
        protected override void OnButtonClick()
    {
        base.OnButtonClick();
        if (!isToggled)
        {
            Debug.Log("Home button click");
            UIManager.Instance.BtnStopCameraClick();
            UIManager.Instance.functionName = "home"; 
        } 
        // Gọi hàm ToggleImage từ lớp cơ bản 
        if (isToggled)
        {
            Debug.Log("Home button toogle is:" + isToggled);
        } 
    }
     
}
