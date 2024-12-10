using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToogleMenuButton : BaseToogleButton
{
    public GameObject menu; // Menu cần mở/đóng

    protected override void OnButtonClick()
    {
        // Gọi hàm ToggleImage từ lớp cơ bản
        ToggleImage();

        // Mở hoặc đóng menu
        if (menu != null)
        {
            menu.SetActive(!menu.activeSelf);
        }
    }
}
