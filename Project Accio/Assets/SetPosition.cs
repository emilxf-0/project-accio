using UnityEngine;

public class SetPosition : MonoBehaviour
{
    public Camera mainCamera;

    public Transform endPointEnemyTransform;
    public Transform endPointPlayerTransform;
    public Transform midPointTransform;

    private void Start()
    {
        Debug.Log("Hai I'm the position script");
        
        if (mainCamera == null)
        {
            Debug.LogError("Main camera is not assigned.");
            return;
        }
    
        float screenWidth = Screen.width;
        float screenHeight = Screen.height;
        float zAxis = mainCamera.nearClipPlane + 1;

        Vector3 enemyPosition = new Vector3
        {
            x = screenWidth,
            y = screenHeight,
            z = zAxis
        };

        Vector3 playerPosition = new Vector3
        {
            x = 0,
            y = 0,
            z = zAxis
        };

        Vector3 midPointPosition = new Vector3()
        {
            x = screenWidth / 2,
            y = screenHeight / 2,
            z = zAxis
        };


        endPointEnemyTransform.position = mainCamera.ScreenToWorldPoint(enemyPosition);
        endPointPlayerTransform.position = mainCamera.ScreenToWorldPoint(playerPosition);
        midPointTransform.position = mainCamera.ScreenToWorldPoint(midPointPosition);


    }
}