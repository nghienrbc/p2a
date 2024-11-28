using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayGameBtn : BaseToogleButton
{ 
    protected override void OnButtonClick()
    {
        base.OnButtonClick();
        // Gọi hàm ToggleImage từ lớp cơ bản 
        UIManager.Instance.functionName = "playgame";
        UIManager.Instance.ShowHidePanel(UIManager.Instance.locationPanel, MyGame.Enums.ShowHide.Hide, 0.5f);
        UIManager.Instance.MovePanel(UIManager.Instance.cameraPanel, PanelMover.Direction.Up, true, 3000);
        UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Down, true, 3000);
        UIManager.Instance.MovePanel(UIManager.Instance.mapPanel, PanelMover.Direction.Up, true, 3000);
        UIManager.Instance.MovePanel(UIManager.Instance.gamePanel, PanelMover.Direction.Left, false, 3000);
    }
}
