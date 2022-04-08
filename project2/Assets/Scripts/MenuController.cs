using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    private ScoreManager tsm;
    private void Start()
    {
        tsm = GetComponent<ScoreManager>();
        tsm.increaseScore = false;
    }
    public void playGame()
    {
        SceneManager.LoadScene("Game");
    }

    public void leaderboard()
    {

    }

    public void exitGame()
    {
        Application.Quit();
    }
}