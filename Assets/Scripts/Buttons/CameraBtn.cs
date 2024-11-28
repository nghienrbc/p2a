using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBtn : BaseToogleButton
{
    protected override void OnButtonClick()
    {
        if (!isToggled)
        {
            Debug.Log("Cameara button click");
            UIManager.Instance.BtnTakePhotoClick();
            UIManager.Instance.functionName = "camera";
            UIManager.Instance.MoveMyaku(false);
            UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Hide, 0.5f);
            UIManager.Instance.MovePanel(UIManager.Instance.cameraPanel, PanelMover.Direction.Up, false, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.gamePanel, PanelMover.Direction.Left, true, 3000);

        }
        base.OnButtonClick(); 
    }
     
}
