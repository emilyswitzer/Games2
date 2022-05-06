using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;
using GooglePlayGames.BasicApi;
using System;


public class Leaderboard : MonoBehaviour
{

    string LeaderboardId = "CgkIiqeWk7cJEAIQBQ";

    private void Start()
    {
     
        Social.ShowLeaderboardUI();

    }

    
    public void returnToMenu()
    {
        SceneManager.LoadScene("Menu");
    }

    public void PostToLeaderBoard(long score)
    {
        if (PlayGamesPlatform.Instance.localUser.authenticated)
        {
            Social.ReportScore(score, "CggI3Yua5wIQAhAC", (bool success) => {
                Debug.Log("Report Success");
            });
        }
        else
        {
            Debug.Log("Not posted");
        }
    }
    

}
