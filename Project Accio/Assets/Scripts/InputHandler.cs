
using TMPro;
using Unity.VisualScripting;
using UnityEngine;

public class InputHandler : MonoBehaviour
{
    [SerializeField] private TMP_Text userEmail;
    [SerializeField] private TMP_Text userPassword;
    [SerializeField] private GameObject loginPanel;
    
    [SerializeField] private TMP_Text signupEmail;
    [SerializeField] private TMP_Text signupPassword;
    [SerializeField] private GameObject signupPanel;
    
    public void GetButtonInput(string id)
    {
        GameManager.Instance.sequence.CompareInputWithSequence(id);
    }

    public void CompareTimeStamps()
    {
        //GameManager.Instance.CompareTimeStamps();
    }

    public void PlayWithoutLoggingIn()
    {
        DatabaseAPI.Instance.SimpleSignIn();
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
        var email = signupEmail.text;
        var password = signupPassword.text;
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

    public void ShowPanel(string panelName)
    {
        Debug.Log(nameof(loginPanel));
        switch (panelName)
        {
            case nameof(loginPanel):
                loginPanel.SetActive(true);
                break;
            
            case nameof(signupPanel):
                signupPanel.SetActive(true);
                break;
        }
        
    }

    public void HidePanel(string panelName)
    {
        switch (panelName)
        {
            case nameof(loginPanel):
                loginPanel.SetActive(false);
                break;
            
            case nameof(signupPanel):
                signupPanel.SetActive(false);
                break;
        }
    }

    public void SignOutFromGame()
    {
        DatabaseAPI.Instance.SignOut();
    }

}
