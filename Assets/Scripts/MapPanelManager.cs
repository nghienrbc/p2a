using System.Collections.Generic;
using UnityEngine;

public class MapPanelManager : MonoBehaviour
{
    public static MapPanelManager Instance; // Singleton để dễ truy cập

    private List<GameObject> allPanels = new List<GameObject>();
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
}