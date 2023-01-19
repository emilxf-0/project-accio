
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class InputHandler : MonoBehaviour
{
    [SerializeField] private TMP_Text userEmail;
    [SerializeField] private TMP_Text userPassword;
    [SerializeField] private GameObject loginPanel;
    
    public void GetButtonInput(string id)
    {
        GameManager.Instance.CompareInputWithSequence(id);
    }

    public void CompareTimeStamps()
    {
        //GameManager.Instance.CompareTimeStamps();
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
        var playerID = GameManager.Instance.playerID;
        DatabaseAPI.Instance.SendAction(new PlayerInfo(playerID, playerReaction), () =>
        {
            // Action was sent!
        }, exception => { Debug.Log(exception); });
    }

    public void ShowLoginScreen()
    {
        loginPanel.SetActive(true);
    }

    public void HideLoginScreen()
    {
        loginPanel.SetActive(false);
    }

}
