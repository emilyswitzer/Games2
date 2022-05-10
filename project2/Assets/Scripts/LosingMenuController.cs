using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.SocialPlatforms;

public class LosingMenuController : MonoBehaviour
{
    float currenthighscore;
    public Text highscore;
    public Leaderboard l;
    

    private void Start()
    {
       // AdManager.instance.RequestInterstitial();
        AdManager.instance.ShowInterstitial();
        currenthighscore = PlayerPrefs.GetFloat("HighScore", 0f);
        highscore.text = "Highscore: " + Mathf.Round(currenthighscore);
        //PlayGames.getLeaderboardsClient(this).submitScore(getString(R.string.leaderboard_id), currenthighscore);
     //   l.PostToLeaderBoard((long)currenthighscore);

        Social.ReportScore((long)currenthighscore, "CgkIiqeWk7cJEAIQBQ", (bool success) => {
            if (success)
            {
                Debug.Log("Success");
            }
            else
            {
                Debug.Log("Not successful");
            }
        });

    }

    private void Update()
    {
   /*     if (Random.Range(0, 3) == 0)
        {
            AdManager.instance.ShowInterstitial();
        }*/
    }


    public void RestartGame()
    {
      
        SceneManager.LoadScene("GameScene");
    }

    public void QuitToMain()
    {
        SceneManager.LoadScene("Menu");
    }
}
