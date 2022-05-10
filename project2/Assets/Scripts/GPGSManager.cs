using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine;
using GooglePlayGames.BasicApi;
using GooglePlayGames;
using System;
using UnityEngine.SocialPlatforms;


public class GPGSManager : MonoBehaviour
{

    public Text m_Message;
    public Button m_SignIn;


    private void Start()
    {
        PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder()
    .RequestIdToken()
    .RequestServerAuthCode(false)
    .Build();
        PlayGamesPlatform.InitializeInstance(config);
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
        PlayGamesPlatform.Instance.Authenticate(loginCallback, true);
        m_SignIn.onClick.RemoveAllListeners();

        m_SignIn.onClick.AddListener(SignInGooglePlayGames);

        SignInGooglePlayGames();
    }


    public void LoginToPlayGames()
    {
        PlayGamesPlatform.Instance.Authenticate(loginCallback, false);
    }
    public void loginCallback(Boolean success)
    {
        if (success)
        {
            Debug.Log("signed in");
        }
        else
        {
            Debug.Log("Sign in error");
        }
    }
    public void SignInGooglePlayGames()
    {
        string playerName = string.Empty;



        PlayGamesPlatform.Instance.Authenticate(SignInInteractivity.CanPromptAlways, (result) =>
        {
            if (result == SignInStatus.Success)
            {

                playerName = PlayGamesPlatform.Instance.GetUserDisplayName();
            }

            else m_Message.text = "Login " + result.ToString() + " " + playerName;

            m_SignIn.onClick.AddListener(SignoutGooglePlay);
        });
    }

    private void SignoutGooglePlay()
    {
        PlayGamesPlatform.Instance.SignOut();
        m_Message.text = "User Signed Out";
        SignInGooglePlayGames();
    }

    public void ShowLeaderboard()
    {
        Social.ShowLeaderboardUI();
    }


}