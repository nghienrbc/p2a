using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeBtn : BaseToogleButton
{

    public List<PanelMover> panelsToMove;
    protected override void OnButtonClick()
    {
        if (!isToggled)
        {
            UIManager.Instance.BtnTakePhotoClick();
            ToggleAllPanels();
        }

        base.OnButtonClick();
        // Gọi hàm ToggleImage từ lớp cơ bản 
        if (isToggled)
        {
            Debug.Log("Home button toogle is:" + isToggled);
        }

    }

    private void ToggleAllPanels()
    {
        foreach (PanelMover panelMover in panelsToMove)
        { 
                panelMover.TogglePanelPosition();
        }
    }
}
