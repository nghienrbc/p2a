using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingBtn : BaseToogleButton
{ 
    protected override void OnButtonClick()
    {
        if (!isToggled)
        {
            Debug.Log("Setting button click"); 
            UIManager.Instance.functionName = "setting";
            UIManager.Instance.connectionTxt.text = "Type the device address to connect.";
            UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Hide, 0.5f);
            UIManager.Instance.MovePanel(UIManager.Instance.cameraPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.mapPanel, PanelMover.Direction.Up, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.gamePanel, PanelMover.Direction.Left, true, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.settingPanel, PanelMover.Direction.Up, false, 3000);

        }
        base.OnButtonClick();
    }
}
