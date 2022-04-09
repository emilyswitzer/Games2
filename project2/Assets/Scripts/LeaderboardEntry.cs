using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LeaderboardEntry : MonoBehaviour
{
    ScoreManager scoreManager;


    private void Start()
    {
    }
    public void Initialise(NameInput scoreboardEntryData)
        {
          string s = scoreManager.getScore();
          scoreboardEntryData.entryName = PlayerPrefs.GetString("username");
           s =  scoreboardEntryData.entryScore.ToString();
        }
    
}
