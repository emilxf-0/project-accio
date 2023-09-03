using UnityEngine;

public class SetPosition : MonoBehaviour
{
    public Camera mainCamera;

    private Transform endPointEnemyTransform;
    private Transform endPointPlayerTransform;
    private Transform midPointTransform;

    private float screenWidth = Screen.width;
    private float screenHeight = Screen.height;
    private const int positionOffSet = 1;
    private float zAxis; 
    private void Start()
    {
        zAxis = mainCamera.nearClipPlane + positionOffSet; // Ugly hack to make sure the lightningfx renders properly
        SetStartPosition();
    }

    private void SetStartPosition()
    {
        var enemyPosition = new Vector3(screenWidth + positionOffSet, screenHeight + positionOffSet, zAxis);
        var playerPosition = new Vector3(0 + positionOffSet, 0 + positionOffSet, zAxis);
        var midPointPosition = new Vector3(screenWidth, screenHeight, zAxis);
    
        endPointEnemyTransform.position = mainCamera.ScreenToWorldPoint(enemyPosition);
        endPointPlayerTransform.position = mainCamera.ScreenToWorldPoint(playerPosition);
        midPointTransform.position = mainCamera.ScreenToWorldPoint(midPointPosition);
    }
    
}