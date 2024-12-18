using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Text.RegularExpressions;

public class SubmitButton : MonoBehaviour
{
    private Button myButton;
    public TMP_InputField deviceNameInputField;

    // Start is called before the first frame update
    void Start()
    {
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(OnButtonClick);
    }

    // Hàm sẽ được gọi khi Button được nhấn
    void OnButtonClick()
    {
        Debug.Log("Button clicked!");
        bool isValid = IsValidMACAddress(deviceNameInputField.text);
        if (!isValid)
        {
            UIManager.Instance.connectionTxt.text = "Invalid address"; 
        }
        else
        {
            UIManager.Instance.StartScanning(deviceNameInputField.text);
        }
    }

    public static bool IsValidMACAddress(string macAddress)
    {
        // Biểu thức chính quy kiểm tra địa chỉ MAC có dạng XX:XX:XX:XX:XX:XX
        string pattern = @"^([0-9A-Fa-f]{2}[:]){5}[0-9A-Fa-f]{2}$";

        // Kiểm tra chuỗi có khớp với biểu thức chính quy không
        return Regex.IsMatch(macAddress, pattern);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
