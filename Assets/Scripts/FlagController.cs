using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FlagController : MonoBehaviour
{
    public GameObject associatedPanel; // Panel được liên kết với cube này
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    private void OnMouseDown()
    {
        // Khi click vào cube, hiển thị panel của nó
        MapPanelManager.Instance.ShowPanel(associatedPanel);
    }
}
