using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BaseToogleButton : MonoBehaviour
{
    public Sprite defaultImage;           // Hình ảnh khi nút chưa được nhấn
    public Sprite toggledImage;           // Hình ảnh khi nút được nhấn
    protected bool isToggled = false;     // Trạng thái của nút

    protected Button button;

    protected virtual void Start()
    {
        button = GetComponent<Button>();

        // Gán hình ảnh ban đầu cho nút
        button.image.sprite = defaultImage;

        // Gắn sự kiện click cho nút
        button.onClick.AddListener(OnButtonClick);
    }

    // Hàm thay đổi hình ảnh khi nhấn nút
    protected virtual void ToggleImage()
    {
        if (!isToggled)
        {
            button.image.sprite = toggledImage; 
            isToggled = true;
        }
        
    }

    // Hàm được gọi khi nhấn nút, có thể được override trong lớp con
    protected virtual void OnButtonClick()
    {
        ToggleImage();
        // Gọi UIManager để xử lý click cho nút này
        UIManager.Instance.OnButtonClicked(this);
        
    } 
    // Hàm để đặt lại nút về hình ảnh mặc định
    public void ResetToDefault()
    {
        button.image.sprite = defaultImage;
        isToggled = false;
    }
}
