using UnityEngine;
using UnityEngine.UI;

public class AutoScrollText : MonoBehaviour
{
    public ScrollRect scrollRect;       // ScrollRect chứa TextMeshPro
    public float scrollSpeed = 20f;    // Tốc độ cuộn (pixel/giây)
    private bool isScrolling = true;   // Trạng thái cuộn

    private RectTransform contentRect; // RectTransform của Content
    private float contentHeight;       // Chiều cao của Content
    private float scrollViewHeight;    // Chiều cao của Viewport

    void Start()
    {
        // Lấy RectTransform của Content và Viewport
        contentRect = scrollRect.content;
        scrollViewHeight = scrollRect.viewport.rect.height;

        // Tính chiều cao của nội dung
        contentHeight = contentRect.rect.height;

        // Kiểm tra nếu nội dung nhỏ hơn Viewport thì không cần cuộn
        if (contentHeight <= scrollViewHeight)
        {
            isScrolling = false;
        }
    }

    void Update()
    {
        if (isScrolling)
        {
            // Di chuyển Content lên trên theo thời gian
            float newY = contentRect.anchoredPosition.y + scrollSpeed * Time.deltaTime;

            // Nếu Content đã cuộn hết, đặt lại vị trí ban đầu
            if (newY >= contentHeight - scrollViewHeight)
            {
                newY = 0f; // Đặt lại vị trí cuộn về đầu
            }

            // Cập nhật vị trí Content
            contentRect.anchoredPosition = new Vector2(contentRect.anchoredPosition.x, newY);
        }
    }
}