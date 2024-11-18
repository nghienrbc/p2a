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
            myakuController.MoveMyakuToNearPossition();
        }
        base.OnButtonClick(); 
    }
     
}
