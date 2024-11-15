using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBtn : BaseToogleButton
{
    protected override void OnButtonClick()
    {
        if (!isToggled)
        { 
            UIManager.Instance.BtnTakePhotoClick();
            UIManager.Instance.functionName = "camera";

        }
        base.OnButtonClick();
        
        UIManager.Instance.connectionTxt.text = "Tap the capture button on the screen or press the button on Myaku to take a photo.";
    }
     
}
