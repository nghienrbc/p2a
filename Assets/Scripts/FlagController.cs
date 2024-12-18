using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class FlagController : MonoBehaviour
{
    public GameObject associatedPanel; // Panel được liên kết với cube này
    public int nationID;
    public string nationName = "";
    private GameObject nationTxt;
    // Start is called before the first frame update
    void Start()
    {
        // tìm đối tượng text nation name
        nationTxt = GameObject.Find("NationNameTxt");
    }

    private void OnMouseDown()
    {
        if (UIManager.Instance.mapPanel.isOffScreen && UIManager.Instance.gamePanel.isOffScreen 
            && UIManager.Instance.cameraPanel.isOffScreen )
        { 
            // Khi click vào cube, hiển thị panel của nó
            MapPanelManager.Instance.ShowPanel(associatedPanel);

            UIManager.Instance.MovePanel(UIManager.Instance.mapPanel, PanelMover.Direction.Up, false, 3000);
            UIManager.Instance.MovePanel(UIManager.Instance.settingPanel, PanelMover.Direction.Up, true, 3000);
            //UIManager.Instance.MovePanel(UIManager.Instance.mapDetailPanel, PanelMover.Direction.Up, false, 3000);
            UIManager.Instance.MoveMyaku(true);

            if (nationTxt != null)
            {
                nationTxt.GetComponent<TMP_Text>().text = nationName;
            }
        }
    }
}
