using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using Random = UnityEngine.Random;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public static GameManager Instance
    {
        get
        {
            if (instance == null)
            {
                Debug.Log("Game manager doesn't exist");
            }
            
            return instance;
        }
    }

    public string playerID = "187";
    public bool gameHasStarted = false;

    private float lastEnemyTimestamp;
    private int lastEnemyPosition;
    public float latestPlayerTimestamp;
    
    public GameObject gameOver;
    public TMP_Text gameOverText;
    public HealthManager healthManager;
    public TouchInput touchInputHandler;
    public Sequence sequence;
    public Timer timer;
    
    private float enemyReactionTime;
    private int enemySequencePosition;
    private bool enemyCreatedCorrectSymbol;
    

    public static string gameSessionID;


    private void Awake()
    {
        if (instance != null && instance != this)
        {
            Destroy(this.gameObject);
        }
        else
        {
            instance = this;
        }
    }

    private void OnEnable()
    {
        HealthManager.PlayerDeath += PlayerDeath;
    }

    private void OnDisable()
    {
        HealthManager.PlayerDeath -= PlayerDeath;
    }
    
    public enum Symbols
    {
        TRIANGLE,
        SQUARE,
        PENTAGRAM,
        LIGHTNING
    };

    private void Start()
    {
        DatabaseAPI.Instance.SetPlayerID();
        
        if (SceneManager.GetSceneByName("GamePlay").isLoaded)
        {
            DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        }
        
        DatabaseAPI.Instance.isListening = true;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.B))
        {
            DatabaseAPI.Instance.ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
        }
    }
    
    public void SinglePlayerGame()
    {
        CompareTimestampWithComputer(ComputerEnemyTimeStamp(), GetPlayerTimeStamp());
        Invoke(nameof(SinglePlayerGame), 0.5f);
    }
    
    private void InstantiateEnemyAction(PlayerInfo playerInfo)
    {
        string enemyPlayerID = playerInfo.playerID;
        
        // Check if it's an enemy action or friendly action
        if (enemyPlayerID == playerID || enemyPlayerID == "0")
        {
            CheckIfPlayerShouldHaveMomentum();
            return;
        }
        
        // Set the last known enemy data here
        enemyReactionTime = playerInfo.playerReactionTime;
        enemySequencePosition = playerInfo.sequencePosition;
        enemyCreatedCorrectSymbol = playerInfo.createdCorrectSymbol;
        
        Debug.Log(enemyPlayerID);
        Debug.Log(enemyReactionTime);
        Debug.Log(enemySequencePosition);
        Debug.Log(enemyCreatedCorrectSymbol);
        
        DecideWhoHasMomentum(enemyReactionTime, enemyCreatedCorrectSymbol, enemySequencePosition);
        lastEnemyTimestamp = enemyReactionTime;
        lastEnemyPosition = enemySequencePosition;
    }

    public void CompareTimestampWithComputer(float enemyTimeStamp, float playerTimeStamp)
    {
        healthManager.enemyMomentum = enemyTimeStamp < playerTimeStamp;
    }

    public void DecideWhoHasMomentum(float enemyTimeStamp, bool enemySymbolIsCorrect, int enemyPosition)
    {
        var playerSequencePosition = sequence.sequencePosition;

        if (gameHasStarted == false && enemySymbolIsCorrect == false)
            return;

        // If both players misses nothing happens
        if (enemySymbolIsCorrect == false && sequence.inputMatchSequence == false)
        {
            return;
        }

        if (enemySymbolIsCorrect == false)
        {
            return;
        }
        
        gameHasStarted = true;
        
        if (enemySymbolIsCorrect && sequence.inputMatchSequence == false)
        {
            // If enemy already have momentum increase damage taken
            if (healthManager.enemyMomentum)
            {
                //healthManager.damage += 0.1f;
                return;
            }
            
            // If enemy doesn't have momentum decrease damage dealt or lose momentum
            if (enemyPosition < playerSequencePosition)
            {
                //healthManager.damage -= 0.1f;
            }
            else
            {
                healthManager.enemyMomentum = true;
            }
        }

        if (enemySymbolIsCorrect && sequence.inputMatchSequence)
        {
            // If enemy is behind set momentum to false
            if (enemyPosition < playerSequencePosition)
            {
                healthManager.enemyMomentum = false;
            }
            else if (enemyPosition == playerSequencePosition)
            {
                if (enemyTimeStamp > latestPlayerTimestamp)
                {
                    healthManager.enemyMomentum = false;
                }
                else if (enemyTimeStamp < latestPlayerTimestamp && healthManager.enemyMomentum)
                {
                    //healthManager.damage += 0.1f;
                }
                else
                {
                    healthManager.enemyMomentum = true;
                }
            }
            else
            {
                healthManager.enemyMomentum = true;
            }
        }
        
    }


    public void CheckIfPlayerShouldHaveMomentum()
    {
        var playerSequencePosition = sequence.sequencePosition;

        if (gameHasStarted == false && sequence.inputMatchSequence == false)
            return;

        // If both players misses nothing happens
        if (enemyCreatedCorrectSymbol == false && sequence.inputMatchSequence == false)
        {
            return;
        }

        if (sequence.inputMatchSequence == false)
        {
            return;
        }
        
        gameHasStarted = true;
        
        if (sequence.inputMatchSequence && enemyCreatedCorrectSymbol == false)
        {
            // If player already have momentum increase damage dealt
            if (healthManager.enemyMomentum == false)
            {
                //healthManager.damage += 0.1f;
                return;
            }
            
            // If enemy have momentum decrease damage taken or gain momentum
            if (playerSequencePosition < enemySequencePosition)
            {
                //healthManager.damage -= 0.1f;
            }
            else
            {
                healthManager.enemyMomentum = true;
            }
        }

        if (sequence.inputMatchSequence && enemyCreatedCorrectSymbol)
        {
            // If player is behind set enemy momentum to true
            if (playerSequencePosition < enemySequencePosition)
            {
                healthManager.enemyMomentum = true;
            }
            else if (playerSequencePosition == enemySequencePosition)
            {
                if (latestPlayerTimestamp > enemyReactionTime)
                {
                    healthManager.enemyMomentum = true;
                }
                else if (enemyReactionTime > latestPlayerTimestamp && healthManager.enemyMomentum == false)
                {
                    //healthManager.damage += 0.1f;
                }
                else
                {
                    healthManager.enemyMomentum = false;
                }
            }
            else
            {
                healthManager.enemyMomentum = false;
            }
        }
        
        
        if (healthManager.enemyMomentum == false)
        {
            
        }
        if (lastEnemyPosition < sequence.sequencePosition)
        {
            healthManager.enemyMomentum = false;
        }
    }

    public void PlayerDeath()
    {
        if (healthManager.midPoint.transform.position != healthManager.enemyPosition.transform.position)
        {
            gameOverText.text = "Avada Kedavra, bitch!";
            gameOverText.color = new Color(255, 87, 20);
        }
        else
        {
            gameOverText.text = "Congratulations, you killed someone!";
            gameOverText.color = new Color(228, 255, 26);
        }
        gameOver.SetActive(true);
    }

    public void ResetGame()
    {
        healthManager.StartPosition();
        gameOver.SetActive(false);
        sequence.NewSequence();
        gameHasStarted = false;
    }

    public void ResetTimer()
    {
        timer.Reset();
    }

    public float GetPlayerTimeStamp()
    {
        return timer.GetCurrentTime();
    }

    //This is for SinglePlayer mode
    public float ComputerEnemyTimeStamp()
    {
        var computerTimeStamp = latestPlayerTimestamp + (Random.Range(0.02f, 0.4f));
        return computerTimeStamp;
    }

}
