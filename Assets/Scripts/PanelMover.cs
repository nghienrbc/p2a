using System.Collections;
using UnityEngine;

public class PanelMover : MonoBehaviour
{
    public enum Direction { Up, Down, Left, Right }
    public Direction moveDirection;   // Hướng di chuyển của panel

    private RectTransform panelRect;
    private Vector3 originalPosition;
    private Vector3 targetPosition;
    public bool isOffScreen = false; // Trạng thái của panel (trên màn hình hoặc đã di chuyển ra khỏi màn hình)

    public float moveSpeed = 500f;    // Tốc độ di chuyển của panel

    void Start()
    {
        // Lưu vị trí ban đầu và lấy RectTransform của panel
        panelRect = GetComponent<RectTransform>();
        originalPosition = panelRect.position;

        // Tính toán vị trí mục tiêu dựa trên kích thước màn hình và hướng di chuyển
        CalculateOffScreenPosition();
    }

    // Tính toán vị trí ngoài màn hình theo hướng chỉ định
    private void CalculateOffScreenPosition()
    {
        float screenWidth = Screen.width;
        float screenHeight = Screen.height;

        // Lấy kích thước của Panel (RectTransform)
        RectTransform rectTransform = GetComponent<RectTransform>();
        float panelWidth = rectTransform.rect.width;
        float panelHeight = rectTransform.rect.height;

        // Tính toán vị trí mục tiêu dựa trên kích thước của Panel và hướng di chuyển
        switch (moveDirection)
        {
            case Direction.Up:
                targetPosition = originalPosition + Vector3.up * (screenHeight / 2 + panelHeight / 2);
                break;
            case Direction.Down:
                targetPosition = originalPosition + Vector3.down * (screenHeight / 2 + panelHeight / 2);
                break;
            case Direction.Left:
                targetPosition = originalPosition + Vector3.left * (screenWidth / 2 + panelWidth / 2);
                break;
            case Direction.Right:
                targetPosition = originalPosition + Vector3.right * (screenWidth / 2 + panelWidth / 2);
                break;
        }
    }

    // Hàm để di chuyển panel ra khỏi hoặc trở lại màn hình
    public void TogglePanelPosition()
    {
        StopAllCoroutines(); // Dừng mọi hoạt động di chuyển trước đó
        if (isOffScreen)
        {
            // Panel đang ngoài màn hình, di chuyển trở lại vị trí ban đầu
            StartCoroutine(MovePanel(originalPosition));
        }
        else
        {
            // Panel đang trên màn hình, di chuyển ra khỏi màn hình
            StartCoroutine(MovePanel(targetPosition));
        }
        isOffScreen = !isOffScreen;
    }

    // Coroutine để di chuyển panel tới vị trí mục tiêu
    private IEnumerator MovePanel(Vector3 target)
    {
        while (Vector3.Distance(panelRect.position, target) > 0.01f)
        {
            panelRect.position = Vector3.MoveTowards(panelRect.position, target, moveSpeed * Time.deltaTime);
            yield return null;
        }
        panelRect.position = target; // Đảm bảo panel ở đúng vị trí mục tiêu khi kết thúc
    }
}