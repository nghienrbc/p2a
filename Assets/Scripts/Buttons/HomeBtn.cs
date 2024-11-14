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
            UIManager.Instance.BtnTakePhotoClick(); 
        } 
        // Gọi hàm ToggleImage từ lớp cơ bản 
        if (isToggled)
        {
            Debug.Log("Home button toogle is:" + isToggled);
        } 
    }
     
}
