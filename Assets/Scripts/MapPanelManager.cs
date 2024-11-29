using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class MapPanelManager : MonoBehaviour, IPointerClickHandler
{
    public static MapPanelManager Instance; // Singleton để dễ truy cập

    private List<GameObject> allPanels = new List<GameObject>();
    public GameObject locationPanel;
    private void Start()
    {
        foreach (Transform child in transform)
        {
           if(child.tag == "map") RegisterPanel(child.gameObject);
        }
        foreach (GameObject panel in allPanels)
        {
            if (panel != null ) panel.SetActive(false);
        }
    }
    private void Awake()
    {
        // Đảm bảo chỉ có một instance duy nhất
        if (Instance == null)
        {
            Instance = this;
        }
        else
        {
            Destroy(gameObject);
        }
    }

    // Thêm tất cả các panel vào danh sách (nếu cần quản lý tự động)
    public void RegisterPanel(GameObject panel)
    {
        if (!allPanels.Contains(panel))
        {
            allPanels.Add(panel);
        }
    }

    // Hiển thị panel chỉ định và ẩn các panel khác
    public void ShowPanel(GameObject panelToShow)
    {
        foreach (GameObject panel in allPanels)
        {
            if (panel != null)
            {
                panel.SetActive(panel == panelToShow); // Hiển thị panel được click, ẩn các panel khác
            }
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        // Kiểm tra nếu click vào giữa panel lớn
        // if (IsClickInsideMiddleOfLargePanel(eventData.position))
        //{
        //   if (isSmallPanelActive)
        //   {
        locationPanel.gameObject.SetActive(false);  // Ẩn panel nhỏ nếu nó đang hiển thị
               // isSmallPanelActive = false;
          //  }
       // }
    }
}