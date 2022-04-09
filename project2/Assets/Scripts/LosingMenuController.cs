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
        currenthighscore = PlayerPrefs.GetFloat("HighScore", 0f);
        highscore.text = "Highscore: " + Mathf.Round(currenthighscore);
    }


    public void RestartGame()
    {
        print("HELLO");
        SceneManager.LoadScene("Game");
    }

    public void QuitToMain()
    {
        SceneManager.LoadScene("Menu");
    }
}
