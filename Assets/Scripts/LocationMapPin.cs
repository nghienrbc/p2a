using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LocationMapPin : MonoBehaviour
{
    public int locationID;
    private Button myButton;
    private GameObject databaseManager;
    // Start is called before the first frame update
    void Start()
    {
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(OnButtonClick);
        databaseManager = GameObject.Find("DatabaseManager");
    }
    // Hàm sẽ được gọi khi Button được nhấn
    void OnButtonClick()
    { 
        Debug.Log("Button clicked!");
        // gọi hàm hiển thị Location Panel và Mapdetail panel
        databaseManager.GetComponent<LocationSceneManager>().GetImageByLocationId(GetComponent<RectTransform>(), locationID);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
    // Nếu cần, bạn có thể xóa Listener khi không sử dụng nữa
    void OnDestroy()
    {
        if (myButton != null)
        {
            myButton.onClick.RemoveListener(OnButtonClick);
        }
    }
}
