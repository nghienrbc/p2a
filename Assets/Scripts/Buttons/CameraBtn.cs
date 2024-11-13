using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraBtn : BaseToogleButton
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
    }

    private void ToggleAllPanels()
    {
        foreach (PanelMover panelMover in panelsToMove)
        {
            if(panelMover.isOffScreen)
            panelMover.TogglePanelPosition();
        }
    }
}
