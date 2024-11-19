using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class AutoScrollText : MonoBehaviour
{
    public ScrollRect scrollRect;         // ScrollRect của ScrollView
    public TextMeshProUGUI textMeshPro;  // TextMeshPro trong Content
    public float scrollSpeed = 20f;      // Tốc độ cuộn (đơn vị: pixels/giây)

    private Coroutine scrollCoroutine;

    void Start()
    {
        // Kiểm tra nếu nội dung vượt quá vùng hiển thị
        if (IsTextOverflowing())
        {
            // Bắt đầu cuộn
            scrollCoroutine = StartCoroutine(ScrollTextUp());
        }
    }

    // Hàm kiểm tra nếu TextMeshPro có nội dung vượt quá vùng hiển thị
    private bool IsTextOverflowing()
    {
        return textMeshPro.preferredHeight > ((RectTransform)scrollRect.viewport).rect.height;
    }

    // Coroutine để cuộn nội dung dần dần
    private IEnumerator ScrollTextUp()
    {
        // Đặt vị trí cuộn về đầu
        scrollRect.verticalNormalizedPosition = 1;

        // Tính khoảng cách cần cuộn
        float contentHeight = textMeshPro.preferredHeight;
        float viewportHeight = ((RectTransform)scrollRect.viewport).rect.height;
        float totalScrollDistance = contentHeight - viewportHeight;

        // Cuộn từ trên xuống
        while (scrollRect.verticalNormalizedPosition > 0)
        {
            float scrollDelta = (scrollSpeed / totalScrollDistance) * Time.deltaTime;
            scrollRect.verticalNormalizedPosition -= scrollDelta;
            yield return null;
        }

        // Đảm bảo cuộn hết sau khi xong
        scrollRect.verticalNormalizedPosition = 0;
    }

    // Hàm dừng cuộn (nếu cần)
    public void StopScrolling()
    {
        if (scrollCoroutine != null)
        {
            StopCoroutine(scrollCoroutine);
            scrollCoroutine = null;
        }
    }
}