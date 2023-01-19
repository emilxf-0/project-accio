using System;
using Firebase;
using UnityEngine;
using Firebase.Database;
using Firebase.Extensions;
using Firebase.Auth;
using Random = UnityEngine.Random;

public class DatabaseAPI : MonoBehaviour
{

    private static DatabaseAPI instance;

    public static DatabaseAPI Instance
    {
        get
        {
            if (instance == null)
            {
                Debug.Log("DatabaseAPI doesn't exist");
            }
            
            return instance;
        }
    }
    
    public static event Action LoginSuccessful;
    public SaveData saveData;
    
    FirebaseAuth auth;
    private FirebaseDatabase db;
    
    private void Awake()
    {
        instance = this;
        
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        {
            if (task.Exception != null)
                Debug.LogError(task.Exception);
        
            auth = FirebaseAuth.DefaultInstance;
            db = FirebaseDatabase.DefaultInstance;
        });
            
            if (db != null)
            {
                //TODO move this to Game manager
                //ListenForEnemyAction(InstantiateEnemyAction, Debug.Log);
            }
    }
    
    void Start()
    {

    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
            AnonymousSignIn();

        if (Input.GetKeyDown(KeyCode.D))
        {
            DataTest(auth.CurrentUser.UserId, Random.Range(0, 100).ToString());
        }
        
        //TODO Move this to a better place (i.e after login is done)
        //GameManager.Instance.playerID = auth.CurrentUser.UserId;
        
    }

    public void AnonymousSignIn()
    {
        auth.SignInAnonymouslyAsync().ContinueWithOnMainThread(task => {
            if (task.Exception != null)
            {
                Debug.LogWarning(task.Exception);
            }
            else
            {
                FirebaseUser newUser = task.Result;
                Debug.LogFormat("User signed in successfully: {0} ({1})",
                    newUser.DisplayName, newUser.UserId);
                
                LoginSuccessful.Invoke();
            }
        });
    }

    private void DataTest(string userID, string data)
    {
        Debug.Log("Trying to write data...");
        db.RootReference.Child("users").Child(userID).SetValueAsync(data).ContinueWithOnMainThread(task =>
        {
            if (task.Exception != null)
                Debug.LogWarning(task.Exception);
            else
                Debug.Log("DataTestWrite: Complete");
        });
    }
    
    public void RegisterNewUser(string email, string password)
    {
        Debug.Log("Starting Registration");
        auth.CreateUserWithEmailAndPasswordAsync(email, password).ContinueWithOnMainThread(task =>
        {
            if (task.Exception != null)
            {
                Debug.LogWarning(task.Exception);
            }
            else
            {
                FirebaseUser newUser = task.Result;
                Debug.LogFormat("User Registered: {0} ({1})",
                    newUser.DisplayName, newUser.UserId);
            }
        });
    }

    public void SignIn(string email, string password)
    {
        auth.SignInWithEmailAndPasswordAsync(email, password).ContinueWithOnMainThread(task =>
        {
            if (task.Exception != null)
            {
                Debug.LogWarning(task.Exception);
            }
            else
            {
                FirebaseUser newUser = task.Result;
                Debug.LogFormat("User signed in successfully: {0} ({1})",
                    newUser.DisplayName, newUser.UserId);
                
                LoginSuccessful.Invoke();
            }
        });
    }

    public void SignOut()
    {
        auth.SignOut();
        Debug.Log("User signed out");
    }
    
    public void SaveToFirebase(string data)
    {
        var userId = FirebaseAuth.DefaultInstance.CurrentUser.UserId;
        //puts the json data in the "users/userId" part of the database.
        db.RootReference.Child("users").Child(userId).SetRawJsonValueAsync(data);
    }
    
    public void LoadFromFirebase()
    {
        var userId = FirebaseAuth.DefaultInstance.CurrentUser.UserId;
        db.RootReference.Child("users").Child(userId).GetValueAsync().ContinueWithOnMainThread(task =>
        {
            if (task.Exception != null)
            {
                Debug.LogError(task.Exception);
            }

            //here we get the result from our database.
            DataSnapshot snap = task.Result;

            //And send the json data to a function that can update our game.
            Debug.Log(snap.GetRawJsonValue());
            saveData.LoadColor(snap.GetRawJsonValue());

        });
    }

    public void SendAction(PlayerInfo playerInfo, Action callback, Action<AggregateException> fallback)
    {
        var gameSession = "123456";
        var playerInfoJson = JsonUtility.ToJson(playerInfo);

        db.RootReference.Child("game session").Push().SetRawJsonValueAsync(playerInfoJson)
            .ContinueWith(task =>
            {
                if (task.IsCanceled || task.IsFaulted)
                {
                    fallback(task.Exception);
                }

                else callback();

            });
    }

    public void ListenForEnemyAction(Action<PlayerInfo> callback, Action<AggregateException> fallback)
    {
        Debug.Log("I'm listening!");
        
        void CurrentListener(object o, ChildChangedEventArgs args)
        {
            if (args.DatabaseError != null) fallback(new AggregateException(new Exception(args.DatabaseError.Message)));
            else callback(JsonUtility.FromJson<PlayerInfo>(args.Snapshot.GetRawJsonValue()));
        }

        db.RootReference.Child("game session").ChildAdded += CurrentListener;

    }
    
    //TODO move this to Gamemanager
    
    private void InstantiateEnemyAction(PlayerInfo playerInfo)
    {
        var playerID = $"{playerInfo.playerID}";
        var enemyReactionTime = float.Parse($"{playerInfo.playerReactionTime}");
        var correctInput = Convert.ToBoolean($"{playerInfo.correctInput}");

        if (playerID == GameManager.Instance.playerID)
        {
            return;
        }
        
        GameManager.Instance.CompareTimeStamps(enemyReactionTime);
        
    }
}
