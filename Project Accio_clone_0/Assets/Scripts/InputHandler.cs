
using TMPro;
using UnityEngine;

public class InputHandler : MonoBehaviour
{
    [SerializeField] private TMP_Text userEmail;
    [SerializeField] private TMP_Text userPassword;
    
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

    public void RegNewUser()
    {
        var email = userEmail.text;
        var password = userPassword.text;
        DatabaseAPI.Instance.RegisterNewUser(email, password);
    }

    public void SignInUser()
    {
        var email = userEmail.text;
        var password = userPassword.text;
        DatabaseAPI.Instance.SignIn(email, password);
    }

    public void SendAction()
    {
        var playerReaction = GameManager.Instance.GetHitPoints();
        
        DatabaseAPI.Instance.SendAction(new PlayerInfo("emil", playerReaction), () =>
        {
            // Action was sent!
        }, exception => { Debug.Log(exception); });
    }

}
