using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking; 
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using BestHTTP;

[System.Serializable]
public class TokenResponse
{
    public string timestamp;
    public Data data;
}

[System.Serializable]
public class Data
{ 
    public string role;
    public string expiresIn;
    public string tokenType;
    public string access_token;
}

public class GameSceneManager : MonoBehaviour
{ 
    public GameObject MessagePanel;
    private string publicToken;
    private bool allowScene;
    public Image qrCodeImage; // UI Image để hiển thị mã QR

    // Start is called before the first frame update
    void Start()
    {
        // kiểm tra xem đã có token chưa, nếu chưa thì login
        if(PlayerPrefs.GetString("token").Equals(null)) // nếu chưa lưu token, tức là chưa từng đăng nhập
        {
            // goi api login đến server
            PostRequest(OnRequestFinished); 
        }
        else {
            if (!true) // nếu token đã hết hạn
            {
                // goi api login đến server
                PostRequest(OnRequestFinished);
            }
            else
            {

               // ShowMessageBox("login success!");
               StartCoroutine(LoadNextAsyncScene("DashboardScene"));

            }
        }
        string url = "https://imgur.com/68NMGeL";
        GenerateQRCode(url);
    }

    private void OnEnable()
    {
        allowScene = false;
    }
    // Update is called once per frame
    void Update()
    {
        
    }


    public void GenerateQRCode(string url)
    {
        // URL API tạo mã QR
        string qrCodeUrl = "https://api.qrserver.com/v1/create-qr-code/?size=300x300&data=" + url;
        Debug.Log(qrCodeUrl);
        // Gửi yêu cầu tải mã QR từ API bằng BestHTTP
        HTTPRequest request = new HTTPRequest(new Uri(qrCodeUrl), HTTPMethods.Get, OnRequestFinished1);
        request.Send();
    }

    private void OnRequestFinished1(HTTPRequest req, HTTPResponse resp)
    {
        if (resp == null || !resp.IsSuccess)
        {
            Debug.LogError("Error downloading QR code: " + (resp != null ? resp.Message : "Unknown error"));
            return;
        }

        // Chuyển đổi từ byte array thành Texture2D
        Texture2D qrCodeTexture = new Texture2D(1, 1);
        qrCodeTexture.LoadImage(resp.Data); // Load image từ dữ liệu phản hồi của HTTPResponse

        // Chuyển đổi Texture2D thành Sprite để hiển thị trên UI Image
        Sprite qrCodeSprite = Sprite.Create(qrCodeTexture, new Rect(0, 0, qrCodeTexture.width, qrCodeTexture.height), new Vector2(0.5f, 0.5f));

        // Gán Sprite cho UI Image
        qrCodeImage.sprite = qrCodeSprite;
    }

    IEnumerator DownloadQRCode(string qrCodeUrl)
    {
        // Gửi yêu cầu tải mã QR từ Google API
        UnityWebRequest request = UnityWebRequestTexture.GetTexture(qrCodeUrl);
        yield return request.SendWebRequest();

        if (request.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("Error downloading QR code: " + request.error);
        }
        else
        {
            Debug.LogWarning("Success downloading QR code: " + request.error);
            // Tải thành công, chuyển Texture vào UI Image
            Texture2D qrCodeTexture = DownloadHandlerTexture.GetContent(request);
            Sprite qrCodeSprite = Sprite.Create(qrCodeTexture, new Rect(0, 0, qrCodeTexture.width, qrCodeTexture.height), new Vector2(0.5f, 0.5f));
            qrCodeImage.sprite = qrCodeSprite;
        }
    }

    public void PostRequest(OnRequestFinishedDelegate _delegate)
    {
        string urlString = Header.URLString + Header.APILogin;
        var request = new HTTPRequest(new Uri(urlString), HTTPMethods.Post, _delegate);
        request.SetHeader("Content-Type", "application/json; charset=UTF-8");
        request.AddField("username", "hk@gmail.com");
        request.AddField("password", "123123");

        //request.RawData = System.Text.Encoding.UTF8.GetBytes(jsonParam); 
        request.MaxRetries = 0;
        request.IsKeepAlive = false;
        request.Send();
    }

    void OnRequestFinished(HTTPRequest req, HTTPResponse resp)
    {
        Debug.Log("Request Finished! Text received: ");
        Debug.Log(resp);
        if (resp != null)
        {
            Debug.Log(resp.DataAsText);

            if (req.State == HTTPRequestStates.Finished)//login success
            {
                if (resp.StatusCode == 201)
                {
                    //LogingSuccess(resp.DataAsText); 

                    // get json object return
                    string jsonString = resp.DataAsText;
                    // Sử dụng JsonUtility để parse
                    TokenResponse tokenResponse = JsonUtility.FromJson<TokenResponse>(jsonString);

                    // Lấy access_token
                    string accessToken = tokenResponse.data.access_token; 
                      
                    publicToken = accessToken;
                    Debug.Log(publicToken);
                    PlayerPrefs.SetString("token", accessToken) ;

                    StartCoroutine(TimeDelay(0.4f));
                    StartCoroutine(LoadNextAsyncScene("PhotoScene"));  
                }
                else
                {
                    LogingFail(resp); 
                }
            }
            else
            {
                LogingFail(resp); 
            }
        }
        else
        {
            LogingFail(resp); 
        }
    }
    private void LogingSuccess(string data)
    {


    }
    private void LogingFail(HTTPResponse response)
    {
        if (response != null)
        {
            switch (response.StatusCode)
            {
                case 201:
                    break;
                case 400:
                    ShowMessageBox( "The username could not be found in the system");
                    break;
                case 403:
                    break;
                case 404:
                    break;
                default:
                    ShowMessageBox("Cannot connect to server");
                    break;
            }
        }
        else//can't connect to server/ no internet
        {
        }
    }

    IEnumerator LoadNextAsyncScene(string _lvname)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(_lvname, LoadSceneMode.Single);
        asyncLoad.allowSceneActivation = false;
        while (asyncLoad.progress < 0.9f || !allowScene)
        {
            yield return null;
        }
        asyncLoad.allowSceneActivation = true;
    }

    IEnumerator TimeDelay(float _timedelay)
    {
        yield return new WaitForSeconds(_timedelay);
        allowScene = true;
    }
    private void ShowMessageBox(string mes)
    {
        foreach (Transform eachChild in MessagePanel.transform)
        {
            if (eachChild.name == "MesContent")
            {
                Debug.Log("Child found. ..."); 
                TMP_Text b = eachChild.GetComponent<TMP_Text>();
                b.text = mes;
                break;
            }
        }
        // thông báo nhập username và password 
        MessagePanel.transform.parent.gameObject.SetActive(true);
    }

    public void BtnBackClick()
    {
        SceneManager.LoadScene("PlayGameScene");
    }
}
