using System;
using Firebase;
using UnityEngine;
using Firebase.Database;
using Firebase.Extensions;
using Firebase.Auth;
using UnityEngine.SceneManagement;
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
    
    public delegate void OnLoadedDelegate(string jsonData);

    public bool isListening;
    
    public static event Action LoginSuccessful;
    public PlayerHandler playerHandler;
    public bool singlePlayerGame;
    
    FirebaseAuth auth;
    private FirebaseDatabase db;
    
    private void Awake()
    {
        instance = this;
        
        // FirebaseApp.CheckAndFixDependenciesAsync().ContinueWithOnMainThread(task =>
        // {
        //     if (task.Exception != null)
        //         Debug.LogError(task.Exception);
        //     
        // });
            
            auth = FirebaseAuth.DefaultInstance;
            db = FirebaseDatabase.DefaultInstance;

    }
    
    
   

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.A))
            SimpleSignIn();

        if (Input.GetKeyDown(KeyCode.D))
        {
            DataTest(auth.CurrentUser.UserId, Random.Range(0, 100).ToString());
        }
        
        if (Input.GetKeyDown(KeyCode.E))
        {
            LoadDataMultiple("game session/");
        }

        
    }

    public void LoadDataMultiple(string path)
    {
        db.RootReference.Child(path).GetValueAsync().ContinueWithOnMainThread(task =>
        {
            string jsonData = task.Result.GetRawJsonValue();

            if (task.Exception != null)
                Debug.LogWarning(task.Exception);

            foreach (var item in task.Result.Children)
            {
                Debug.Log(item.GetRawJsonValue());
            }
        });
    }

    public void SimpleSignIn()
    {
        // If user already have a userid just let them pass
        if (auth.CurrentUser != null)
        {
            LoginSuccessful.Invoke();
        }
        else 
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
        Debug.Log("User" + auth.CurrentUser.UserId + " signed out");
        auth.SignOut();
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
            playerHandler.LoadColor(snap.GetRawJsonValue());

        });
    }

    public void SendAction(PlayerInfo playerInfo, Action callback, Action<AggregateException> fallback)
    {
        var gameID = "123456";
        var playerInfoJson = JsonUtility.ToJson(playerInfo);

        db.RootReference.Child("game session").Child(gameID).Push().SetRawJsonValueAsync(playerInfoJson)
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
        if (isListening)
        {
            return;
        }
        
        var gameID = "123456";
        Debug.Log("I'm listening!");
        
        void CurrentListener(object o, ChildChangedEventArgs args)
        {
            if (args.DatabaseError != null) fallback(new AggregateException(new Exception(args.DatabaseError.Message)));
            else callback(JsonUtility.FromJson<PlayerInfo>(args.Snapshot.GetRawJsonValue()));
        }

        db.RootReference.Child("game session").Child(gameID).ChildAdded += CurrentListener;

    }
    
   

    public void SetPlayerID()
    {
        GameManager.Instance.playerID = auth.CurrentUser.UserId;
    }
    
    public void DeleteGameSession()
    {
        var gameID = "123456";
        db.RootReference.Child("game session").Child(gameID).RemoveValueAsync();
    }
}
