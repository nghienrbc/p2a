using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageCover : MonoBehaviour
{
    public Image image; // Đối tượng Image UI hình vuông
    public Texture2D texture; // Texture cần hiển thị theo chế độ cover

    void Start()
    {
        // Tạo Sprite từ texture
        Sprite newSprite = Sprite.Create(texture, new Rect(0, 0, texture.width, texture.height), new Vector2(0.5f, 0.5f));

        // Gán sprite cho Image
        image.sprite = newSprite;

        // Đảm bảo hiển thị theo chế độ cover (tính tỷ lệ giữa chiều rộng và chiều cao của ảnh)
        SetImageCover();
    }

    void SetImageCover()
    {
        // Lấy tỷ lệ của ảnh (width/height)
        float imageRatio = (float)texture.width / texture.height; 
       
        // Cắt texture để thành hình vuông
        int squareSize = Mathf.Min(texture.width, texture.height);
        Rect squareRect = new Rect(
            (texture.width - squareSize) / 2, // Cắt ở giữa nếu chiều rộng lớn hơn
            (texture.height - squareSize) / 2, // Cắt ở giữa nếu chiều cao lớn hơn
            squareSize, squareSize);

        // Chuyển Texture2D thành Sprite hình vuông
        Sprite cameraSprite = Sprite.Create(texture, squareRect, new Vector2(0.5f, 0.5f));

        // Gán sprite cho Image
        image.sprite = cameraSprite;
    }
}
