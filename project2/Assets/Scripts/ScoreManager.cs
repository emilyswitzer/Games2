using GooglePlayGames;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class ScoreManager : MonoBehaviour
{
    public Text score;
    public Text highscore;
    public float currentscore;
    public float currenthighscore;
    public bool increaseScore;
    public float points;
    // Start is called before the first frame update

    
    void Start()
    {
      

        currenthighscore = PlayerPrefs.GetFloat("HighScore", 0f);
        increaseScore = true;
        points = 1f;
   
    }

    // Update is called once per frame
    void Update()
    {
        if (increaseScore)
        {
            currentscore += points * Time.deltaTime;
        }
        if (currentscore > currenthighscore)
        {
            currenthighscore = currentscore;
       
            PlayerPrefs.SetFloat("HighScore", currenthighscore);
            Achievements.instance.GrantAchievement("CgkIiqeWk7cJEAIQAw");

            

        }
        score.text = "Score: " + Mathf.Round(currentscore);
        highscore.text = "Highscore: " + Mathf.Round(currenthighscore);
        
    }




}
