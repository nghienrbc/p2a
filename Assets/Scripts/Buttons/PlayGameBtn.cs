using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayGameBtn : BaseToogleButton
{ 
    protected override void OnButtonClick()
    {
        // Gọi hàm ToggleImage từ lớp cơ bản
        ToggleImage(); 
    }
}
