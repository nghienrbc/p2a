using UnityEngine;
using TMPro;
using UnityEngine.EventSystems;

public class ScrollableText : MonoBehaviour, IPointerEnterHandler, IPointerExitHandler
{
    public float scrollSpeed = 30f; // Tốc độ cuộn
    private TMP_Text textComponent; // TMP_Text component
    private RectTransform textRectTransform; // RectTransform của văn bản
    private RectTransform parentRectTransform; // RectTransform của đối tượng cha
    private bool isHovered; // Trạng thái con trỏ đang hover
    private float originalYPosition; // Vị trí Y ban đầu
    private float maxYPosition; // Vị trí Y tối đa mà văn bản có thể cuộn tới

    void Start()
    {
        // Lấy các component cần thiết
        textComponent = GetComponentInChildren<TMP_Text>();
        textRectTransform = textComponent.GetComponent<RectTransform>();
        parentRectTransform = GetComponent<RectTransform>();

        // Lưu lại vị trí Y ban đầu
        originalYPosition = textRectTransform.anchoredPosition.y;

        // Tính vị trí Y tối đa mà văn bản có thể cuộn
        maxYPosition = textComponent.preferredHeight - parentRectTransform.rect.height;
    }

    void Update()
    {
        // Kiểm tra nếu hover và văn bản dài hơn vùng hiển thị
        if (isHovered && TextExceedsBounds())
        {
            textComponent.overflowMode = TextOverflowModes.Overflow; // Đặt chế độ overflow
            float newYPosition = textRectTransform.anchoredPosition.y + scrollSpeed * Time.deltaTime;

            // Nếu vị trí Y vượt quá giới hạn, reset về vị trí ban đầu
            if (newYPosition >= maxYPosition)
            {
                newYPosition = originalYPosition;
            }

            // Cập nhật vị trí văn bản
            textRectTransform.anchoredPosition = new Vector2(textRectTransform.anchoredPosition.x, newYPosition);
        }
    }

    public void OnPointerEnter(PointerEventData eventData)
    {
        isHovered = true; // Kích hoạt trạng thái hover
    }

    public void OnPointerExit(PointerEventData eventData)
    {
        isHovered = false; // Hủy trạng thái hover
        textComponent.overflowMode = TextOverflowModes.Ellipsis; // Trở về chế độ overflow mặc định
        textRectTransform.anchoredPosition = new Vector2(textRectTransform.anchoredPosition.x, originalYPosition); // Reset vị trí văn bản
    }

    private bool TextExceedsBounds()
    {
        // Kiểm tra nếu văn bản dài hơn vùng hiển thị
        return textComponent.preferredHeight > parentRectTransform.rect.height;
    }
}