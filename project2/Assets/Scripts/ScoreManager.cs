using System.Collections;
using System.Collections.Generic;

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
    public GameObject c;
    public GameManager g;
    // Start is called before the first frame update
    void Start()
    {
        c.SetActive(false);
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
            addHighScore();
            PlayerPrefs.SetFloat("HighScore", currenthighscore);


        }
        score.text = "Score: " + Mathf.Round(currentscore);
        highscore.text = "Highscore: " + Mathf.Round(currenthighscore);
        
    }

    private void addHighScore()
    {
        g.GetHighScore(currenthighscore);
       
    }

   

}