using System.Collections;
using System.Collections.Generic;
using UnityEngine; 
using UnityEngine.SceneManagement;

public class PlayGameSceneManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void BtnGameSceneClick()
    {
        SceneManager.LoadScene("GameScene");        
    }
    public void BteLocationSceneClick()
    {
        SceneManager.LoadScene("LocationScene");
    }
    public void BtnPhotoSceneClick()
    {
        SceneManager.LoadScene("PhotoScene");
    }
}
