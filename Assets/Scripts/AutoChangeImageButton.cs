using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; 

public class AutoChangeImageButton : MonoBehaviour
{
    private Button myButton;
    public Sprite defaultImage;           // Hình ảnh khi nút chưa được nhấn
    public Sprite toggledImage;           // Hình ảnh khi nút được nhấn
    private LocationSceneManager lsm;
    // Start is called before the first frame update 
    void Start()
    {
        lsm = FindAnyObjectByType<LocationSceneManager>();
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(OnButtonClick); 
    }
    // Hàm sẽ được gọi khi Button được nhấn
    void OnButtonClick()
    {
        lsm.AutoChangePhotoBtnClick();
        if (lsm.isAutoChangeImage())
        {
            myButton.GetComponent<Image>().sprite = toggledImage;
        }
        else
        {
            myButton.GetComponent<Image>().sprite = defaultImage;
        }

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
