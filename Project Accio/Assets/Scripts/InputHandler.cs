
using System;
using System.Collections.Generic;
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Random = UnityEngine.Random;

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

    readonly List<string> wizardList = new List<string>()
    {
        "Merlin",
        "Gandalf",
        "Dumbledore",
        "Harry Potter",
        "Morgan le Fay",
        "Doctor Strange",
        "Ravenna",
        "Radagast",
        "The Sorcerer's Apprentice",
        "The White Witch",
        "The Evil Queen",
        "Maleficent",
        "Ursula",
        "The Dark Wizard",
        "The Wizard of Oz",
        "The Wizard of Wonderland",
        "The Wizard of Neverland",
        "The Sorcerer Supreme",
        "Elminster",
        "Albus Percival Wulfric Brian Dumbledore"
    };

    //TODO Make sure that two sessions with the same name can't be generated
    public void CreateNewGame()
    {
        var randomWizard = Random.Range(0, 20);
        var gamekey = wizardList[randomWizard];
        DatabaseAPI.Instance.CreateGameSession(new GameInfo(gamekey, true));
    }
    
    public void ListGames()
    {

        foreach (Transform child in publicGamesListHolder)
            GameObject.Destroy(child.gameObject);

        DatabaseAPI.Instance.LoadDataMultiple("game session/", ShowGames);
    }

    private void ShowGames(string json)
    {
        Debug.Log("The JSON is: " + json);
        var gameInfo = JsonUtility.FromJson<GameInfo>(json);
        
        Debug.Log("The gameinfo is: " + gameInfo.gameSessionID);
        

        if (gameInfo.waitingForPlayers == false)
        {
            // Don't list full games.
            return;
        }

        var newButton = Instantiate(buttonPrefab, publicGamesListHolder).GetComponent<Button>();
        newButton.GetComponentInChildren<TextMeshProUGUI>().text = gameInfo.gameSessionID;
        newButton.onClick.AddListener(() => DatabaseAPI.Instance.JoinGame(gameInfo.gameSessionID));
        newButton.onClick.AddListener(() => SceneManager.LoadScene("GamePlay"));
    }

    public void GetButtonInput(string id)
    {
        //GameManager.Instance.sequence.CompareInputWithSequence(id);
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
        GameManager.Instance.gameHasStarted = false;
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
