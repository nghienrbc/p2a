using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingBtn : BaseToogleButton
{

    protected override void OnButtonClick()
    {
        // Gọi hàm ToggleImage từ lớp cơ bản
        ToggleImage();

    }
}
