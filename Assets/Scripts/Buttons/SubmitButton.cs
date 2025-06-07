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
    public TMP_InputField limitTimeInputField;
    public TMP_InputField soundInputField;
    public TMP_InputField showTimeInputField;
    public TextMeshProUGUI validateTxt;

    // Start is called before the first frame update
    void Start()
    {
        myButton = GetComponent<Button>();
        myButton.onClick.AddListener(OnButtonClick);

        if (PlayerPrefs.HasKey("LimitTimeRecord"))
        {
            // Nếu có, lấy giá trị từ PlayerPrefs và hiển thị lên InputField
            float savedValue = PlayerPrefs.GetFloat("LimitTimeRecord");
            limitTimeInputField.text = savedValue.ToString();
        }
        else
        {
            // Nếu không có, set giá trị mặc định từ InputField vào PlayerPrefs
            float defaultValue;
            if (float.TryParse(limitTimeInputField.text, out defaultValue))
            {
                // Lưu giá trị hiện tại trong InputField vào PlayerPrefs nếu đó là số hợp lệ
                PlayerPrefs.SetFloat("LimitTimeRecord", defaultValue);
                PlayerPrefs.Save();
                Debug.Log("Giá trị mặc định đã được lưu: " + defaultValue);
            }
            else
            {
                // Nếu giá trị trong InputField không phải số, để trống hoặc xử lý lỗi
                Debug.Log("Giá trị trong InputField không hợp lệ.");
            }
        }

        if (PlayerPrefs.HasKey("AudibleThreshold"))
        {
            // Nếu có, lấy giá trị từ PlayerPrefs và hiển thị lên InputField
            float savedValue = PlayerPrefs.GetFloat("AudibleThreshold");
            soundInputField.text = savedValue.ToString();
        }
        else
        {
            // Nếu không có, set giá trị mặc định từ InputField vào PlayerPrefs
            float defaultValue;
            if (float.TryParse(soundInputField.text, out defaultValue))
            {
                // Lưu giá trị hiện tại trong InputField vào PlayerPrefs nếu đó là số hợp lệ
                PlayerPrefs.SetFloat("AudibleThreshold", defaultValue);
                PlayerPrefs.Save();
                Debug.Log("Giá trị mặc định đã được lưu: " + defaultValue);
            }
            else
            {
                // Nếu giá trị trong InputField không phải số, để trống hoặc xử lý lỗi
                Debug.Log("Giá trị trong InputField không hợp lệ.");
            }
        }

        if (PlayerPrefs.HasKey("InactivityThreshold"))
        {
            // Nếu có, lấy giá trị từ PlayerPrefs và hiển thị lên InputField
            float savedValue = PlayerPrefs.GetFloat("InactivityThreshold");
            showTimeInputField.text = savedValue.ToString();
        }
        else
        {
            // Nếu không có, set giá trị mặc định từ InputField vào PlayerPrefs
            float defaultValue;
            if (float.TryParse(showTimeInputField.text, out defaultValue))
            {
                // Lưu giá trị hiện tại trong InputField vào PlayerPrefs nếu đó là số hợp lệ
                PlayerPrefs.SetFloat("InactivityThreshold", defaultValue);
                PlayerPrefs.Save();
                Debug.Log("Giá trị mặc định đã được lưu: " + defaultValue);
            }
            else
            {
                // Nếu giá trị trong InputField không phải số, để trống hoặc xử lý lỗi
                Debug.Log("Giá trị trong InputField không hợp lệ.");
            }
        }
    }

    // Hàm sẽ được gọi khi Button được nhấn
    void OnButtonClick()
    {
        Debug.Log("Button clicked!");
        validateTxt.text = "";
        //bool isValid = IsValidMACAddress(deviceNameInputField.text);
        //if (!isValid)
        //{
        //    UIManager.Instance.connectionTxt.text = "Invalid address"; 
        //}
        //else
        //{
        //    UIManager.Instance.StartScanning(deviceNameInputField.text);
        //}
        string inputValue = limitTimeInputField.text; // Lấy giá trị nhập vào từ InputField

        // Kiểm tra xem giá trị nhập vào có phải là số không
        if (float.TryParse(inputValue, out float result))
        {
            // Nếu là số, lưu vào PlayerPrefs
            PlayerPrefs.SetFloat("LimitTimeRecord", result);
            PlayerPrefs.Save();
            Debug.Log("Giá trị đã được lưu: " + result);
        }
        else
        { 
            validateTxt.text = "Please enter a valid numeric value for Limit Time Record.";
        }
        inputValue = soundInputField.text;
        if (float.TryParse(inputValue, out float result2))
        {
            // Nếu là số, lưu vào PlayerPrefs
            PlayerPrefs.SetFloat("AudibleThreshold", result2);
            PlayerPrefs.Save();
            Debug.Log("Giá trị đã được lưu: " + result2);
        }
        else
        { 
            validateTxt.text = "Please enter a valid numeric value for Audible Threshold.";
        }

        inputValue = showTimeInputField.text;
        if (float.TryParse(inputValue, out float result3))
        {
            // Nếu là số, lưu vào PlayerPrefs
            PlayerPrefs.SetFloat("InactivityThreshold", result3);
            PlayerPrefs.Save();
            Debug.Log("Giá trị đã được lưu: " + result3);
        }
        else
        {
            validateTxt.text = "Please enter a valid numeric value for Auto Hide Time.";
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
