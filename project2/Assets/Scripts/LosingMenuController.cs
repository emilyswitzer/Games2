using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LosingMenuController : MonoBehaviour
{
    float currenthighscore;
    public Text highscore;

    private void Start()
    {
        AdManager.instance.RequestInterstitial();
        currenthighscore = PlayerPrefs.GetFloat("HighScore", 0f);
        highscore.text = "Highscore: " + Mathf.Round(currenthighscore);
      
        

    }

    private void Update()
    {
        if (Random.Range(0, 3) == 0)
        {
            AdManager.instance.ShowInterstitial();
        }
    }


    public void RestartGame()
    {
      
        SceneManager.LoadScene("Game");
    }

    public void QuitToMain()
    {
        SceneManager.LoadScene("Menu");
    }
}
