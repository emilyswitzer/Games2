using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    public ScoreManager tsm;

    private void Start()
    {
    }
    public void PlayGame()
    {

        SceneManager.LoadScene("Game");
    }

    public void GameOver()
    {

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