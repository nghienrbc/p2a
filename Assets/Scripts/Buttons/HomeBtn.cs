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
            UIManager.Instance.connectionTxt.text = "Hello! Say 'Hey, DT' or press and hold the button on the screen then ask me some questions.";
            //
            UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Hide, 0.5f);
            UIManager.Instance.MovePanel(UIManager.Instance.cameraPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.gamePanel, PanelMover.Direction.Left, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.settingPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.appNamePanel, PanelMover.Direction.Up, false, 3000);
            UIManager.Instance.MoveMyaku(false);
            UIManager.Instance.ShowHideTestPanel(false);

        } 
        // Gọi hàm ToggleImage từ lớp cơ bản 
        if (isToggled)
        {
            Debug.Log("Home button toogle is:" + isToggled);
        }
        base.OnButtonClick();
    }
     
}
