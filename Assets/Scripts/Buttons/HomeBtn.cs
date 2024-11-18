using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeBtn : BaseToogleButton
{
    protected override void OnButtonClick()
    {
        if (!isToggled)
        {
            Debug.Log("Home button click");
            UIManager.Instance.BtnStopCameraClick();
            UIManager.Instance.functionName = "home";
            UIManager.Instance.connectionTxt.text = "Tap the record button on the screen or press the button on Myaku to ask me some question.";
            myakuController.MoveMyakuToFarPossition();
        } 
        // Gọi hàm ToggleImage từ lớp cơ bản 
        if (isToggled)
        {
            Debug.Log("Home button toogle is:" + isToggled);
        }
        base.OnButtonClick();
    }
     
}
