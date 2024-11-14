using System.Collections;
using UnityEngine;

public class PanelMover : MonoBehaviour
{
    public enum Direction { Up, Down, Left, Right }

    private RectTransform panelRect;
    private Vector3 originalPosition; // Vị trí ban đầu của panel
    private Vector3 targetPosition;   // Vị trí di chuyển ngoài màn hình
    private bool isOffScreen = false; // Trạng thái của panel (trong hoặc ngoài màn hình)
  

    void Start()
    {
        // Lưu vị trí ban đầu và lấy RectTransform của panel
        panelRect = GetComponent<RectTransform>();
        originalPosition = panelRect.position;
    }

    // Hàm gọi để di chuyển Panel theo hướng và trạng thái moveOut/moveIn
    public void MovePanel(Direction direction, bool moveOut, float spped)
    {
        if (moveOut && isOffScreen)
        {
            Debug.Log("Panel is already off-screen, cannot move out further.");
            return;
        }

        if (!moveOut && !isOffScreen)
        {
            Debug.Log("Panel is already on-screen, cannot move in further.");
            return;
        }

        // Tính toán vị trí ngoài màn hình dựa trên hướng di chuyển
        CalculateOffScreenPosition(direction);

        // Bắt đầu di chuyển tới vị trí mục tiêu
        StopAllCoroutines();
        StartCoroutine(MovePanelToPosition(moveOut ? targetPosition : originalPosition, spped));
        isOffScreen = moveOut;
    }

    // Tính toán vị trí ngoài màn hình cho panel theo hướng chỉ định
    private void CalculateOffScreenPosition(Direction direction)
    {
        float screenWidth = Screen.width;
        float screenHeight = Screen.height;

        float panelWidth = panelRect.rect.width;
        float panelHeight = panelRect.rect.height;

        // Tính toán vị trí ngoài màn hình dựa trên hướng
        switch (direction)
        {
            case Direction.Up:
                targetPosition = originalPosition + Vector3.up * (screenHeight / 2 + panelHeight);
                break;
            case Direction.Down:
                targetPosition = originalPosition + Vector3.down * (screenHeight / 2 + panelHeight);
                break;
            case Direction.Left:
                targetPosition = originalPosition + Vector3.left * (screenWidth / 2 + panelWidth);
                break;
            case Direction.Right:
                targetPosition = originalPosition + Vector3.right * (screenWidth / 2 + panelWidth);
                break;
        }
    }

    // Coroutine để di chuyển panel tới vị trí mục tiêu
    private IEnumerator MovePanelToPosition(Vector3 target, float speed)
    {
        if (speed == 0)
        {
            panelRect.position = target;
            yield return null;
        }
        while (Vector3.Distance(panelRect.position, target) > 0.01f)
        {
            panelRect.position = Vector3.MoveTowards(panelRect.position, target, speed * Time.deltaTime);
            yield return null;
        }
        panelRect.position = target; // Đảm bảo panel ở đúng vị trí mục tiêu khi kết thúc
    }
}