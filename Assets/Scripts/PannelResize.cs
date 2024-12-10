using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class PannelResize : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    public RectTransform topPanel;       // Panel trên
    public RectTransform bottomPanel;    // Panel dưới
    public RectTransform resizeButton;   // Button để kéo

    public float minHeight = 300f;       // Chiều cao nhỏ nhất cho các panel
    public float maxHeight = 1500f;       // Chiều cao lớn nhất cho các panel
    private bool isResizing = false;     // Kiểm tra trạng thái kéo
    private float initialHeightTopPanel; // Chiều cao ban đầu của panel trên
    private float initialMouseY;         // Vị trí Y của chuột khi bắt đầu kéo
    private float initialHeightBottomPanel; // Chiều cao ban đầu của panel dưới

    private float initialButtonY;        // Vị trí Y ban đầu của button
    private void Start()
    {
        // Đảm bảo các panel có anchor được thiết lập đúng: 
        //topPanel.anchorMin = new Vector2(0, 1);  // Neo tại trên cùng
        //topPanel.anchorMax = new Vector2(1, 1);  // Neo tại trên cùng
        //bottomPanel.anchorMin = new Vector2(0, 0);  // Neo tại dưới cùng
        //bottomPanel.anchorMax = new Vector2(1, 0);  // Neo tại dưới cùng

        // Lưu lại vị trí ban đầu của button
        initialButtonY = resizeButton.position.y;
    }

    public void OnPointerDown(PointerEventData eventData)
    {// Bắt đầu kéo, lưu lại các giá trị ban đầu
        isResizing = true;
        initialHeightTopPanel = topPanel.rect.height;
        initialHeightBottomPanel = bottomPanel.rect.height;
        initialMouseY = eventData.position.y;
    }

    public void OnDrag(PointerEventData eventData)
    {
        if (isResizing)
        { 
            // Tính toán sự thay đổi của chuột
            float deltaY = eventData.position.y - initialMouseY;

            // Cập nhật chiều cao của các panel
            float newHeightTopPanel = Mathf.Clamp(initialHeightTopPanel - deltaY, minHeight, maxHeight);
            float newHeightBottomPanel = Mathf.Clamp(initialHeightBottomPanel + deltaY, minHeight, maxHeight);

            // Nếu top panel đã đạt tới chiều cao tối thiểu, không cho kéo tiếp
            if (newHeightTopPanel <= minHeight || newHeightBottomPanel <= minHeight)
            {
                return;
            }

            // Cập nhật kích thước của panel
            topPanel.sizeDelta = new Vector2(topPanel.sizeDelta.x, newHeightTopPanel);
            bottomPanel.sizeDelta = new Vector2(bottomPanel.sizeDelta.x, newHeightBottomPanel);

            // Cập nhật vị trí của button để luôn ở giữa
            float totalHeight = newHeightTopPanel + newHeightBottomPanel;
            float newButtonY = initialButtonY + deltaY;

            // Cập nhật vị trí Y của button sao cho nó luôn ở giữa giữa 2 panel
            newButtonY = eventData.position.y;//  Mathf.Clamp(newButtonY, initialButtonY - (initialHeightTopPanel - minHeight), initialButtonY + (initialHeightBottomPanel - minHeight));

            resizeButton.position = new Vector3(resizeButton.position.x, newButtonY, resizeButton.position.z);
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        // Kết thúc quá trình kéo
        isResizing = false; 
        // Tính toán lại vị trí của button sau khi đã resize các panel
        float yPos = bottomPanel.rect.height + 40;
        //float middlePosition = topPanel.position.y - topPanel.rect.height + (totalHeight / 2);
        resizeButton.anchoredPosition = new Vector2(resizeButton.anchoredPosition.x, yPos);
        // Đặt lại vị trí Y của button sao cho nó luôn ở giữa 2 panel
        //resizeButton.position = new Vector3(resizeButton.position.x, totalHeight, resizeButton.position.z);

    }
}
