using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    public ScoreManager tsm;


    private void Start()
    {
        AdManager.instance.RequestRewardAd();
   

    }
    public void PlayGame()
    {

        SceneManager.LoadScene("GameScene");
    }

    public void GameOver()
    {

    }

    public void click()
    {
       
            AdManager.instance.ShowRequestRewardAd();
        
    }

    public void RestartGame() {

        PlayGame();

    }
    public void Leaderboard()
    {
      
    }

    public void exitGame()
    {
        Application.Quit();
    }
}