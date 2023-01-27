
using System;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class InputHandler : MonoBehaviour
{
    [SerializeField] private TMP_Text userEmail;
    [SerializeField] private TMP_Text userPassword;
    [SerializeField] private GameObject loginPanel;
    
    [SerializeField] private TMP_Text signupEmail;
    [SerializeField] private TMP_Text signupPassword;
    [SerializeField] private GameObject signupPanel;

    [SerializeField] private Transform publicGamesListHolder;
    public GameObject buttonPrefab;
    


    public void CreateNewGame(string gamekey)
    {
        DatabaseAPI.Instance.CreateGameSession(new GameInfo(gamekey, true));
    }
    
    public void ListGames()
    {
        Debug.Log("Listing Games");

        foreach (Transform child in publicGamesListHolder)
            GameObject.Destroy(child.gameObject);

        DatabaseAPI.Instance.LoadDataMultiple("game session/", ShowGames);
    }
    
    public void ShowGames(string json)
    {
        Debug.Log("The JSON is: " + json);
        var gameInfo = JsonUtility.FromJson<GameInfo>(json);
        
        Debug.Log("The gameinfo is: " + gameInfo.gameSessionID);
        

        if (gameInfo.waitingForPlayers == false)
        {
            // Don't list our own games or full games.
            return;
        }

        var newButton = Instantiate(buttonPrefab, publicGamesListHolder).GetComponent<Button>();
        newButton.GetComponentInChildren<TextMeshProUGUI>().text = gameInfo.gameSessionID;
        newButton.onClick.AddListener(() => DatabaseAPI.Instance.JoinGame(gameInfo.gameSessionID));
        newButton.onClick.AddListener(() => SceneManager.LoadScene("GamePlay"));
    }
    
    
    
    public void GetButtonInput(string id)
    {
        GameManager.Instance.sequence.CompareInputWithSequence(id);
    }

    public void CompareTimeStamps()
    {
        //GameManager.Instance.CompareTimeStamps();
    }
    
    public void StartSinglePlayerGame()
    {
        DatabaseAPI.Instance.singlePlayerGame = true;
        //PlayWithoutLoggingIn();
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
        var playerReaction = GameManager.Instance.GetPlayerTimeStamp();
        var playerID = GameManager.Instance.playerID;
        var sequencePosition = GameManager.Instance.sequence.sequencePosition;
        var gameSessionID = GameManager.gameSessionID;

        if (DatabaseAPI.Instance.singlePlayerGame)
        {
            GameManager.Instance.latestPlayerTimestamp = playerReaction;
            GameManager.Instance.SinglePlayerGame();
        }
        else
        {
            DatabaseAPI.Instance.SendAction(new PlayerInfo(playerID, playerReaction, sequencePosition, gameSessionID), () =>
            {
                // Action was sent!
            }, exception => { Debug.Log(exception); });
        }
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

    public void StartGame()
    {
        GameManager.Instance.gameHasStarted = true;
    }



    public void SignOutFromGame()
    {
        DatabaseAPI.Instance.SignOut();
    }

}
