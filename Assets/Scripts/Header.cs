using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Header : MonoBehaviour
{
    // Service POST
    public const string URLString = "http://10.220.19.225:6001/api/v1/";
    //public const string URLString = "https://vrdental.duytan.edu.vn/";
    public const string APIChangePassword = "changepassword";
    public const string APIChangePròile = "changeprofile";
    public const string APILoginGoogle = "logingoogle"; // /:id
    public const string APILogin = "auth/login";
    public const string APISignUp = "register";
    public const string APIVerifyPass = "verifypass"; // /:id
    public const string APIVerifyLink = "verify"; // /:id

    // Scene name
    public const string LoginScene = "LoginScene";
    public const string SignUpScene = "SignUpScene";
    public const string DashboardScene = "DashboardScene";
    public const string EruptionScene = "EruptionScene";
    public const string MorphologyScene = "MorphologyScene";
    public const string SettingScene = "SettingScene";
    public const string ToothScene = "ToothScene";
    public const string TeethScene = "TeethScene";
     

    // reference Resolution
    public const float WidthReference = 1440;
    public const float HeightReference = 2560;

    // Camera
    public const string Camera = "Cam/Camera";

    // some constant value
    public const string UISprite = "Sprites/";
 
}
