
using UnityEngine;

public class InputHandler : MonoBehaviour
{
    public void GetButtonInput(string id)
    {
        GameManager.Instance.CompareInputWithSequence(id);
    }

    public void CompareTimeStamps()
    {
        GameManager.Instance.CompareTimeStamps();
    }

    public void ResetTimer()
    {
        GameManager.Instance.ResetTimer();
    }

    public void ResetGame()
    {
        GameManager.Instance.ResetGame();
    }
    
    
}
