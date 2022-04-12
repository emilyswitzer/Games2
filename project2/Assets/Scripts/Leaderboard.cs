using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;

public class Leaderboard : MonoBehaviour
{


    private void Start()
    {
        Social.ShowLeaderboardUI();

    }

    
    public void returnToMenu()
    {
        SceneManager.LoadScene("Menu");
    }

}
