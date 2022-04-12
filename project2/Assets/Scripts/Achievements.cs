using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;

public class Achievements : MonoBehaviour
{
    public static Achievements instance;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void GrantAchievement(string achievement)
    {
        Social.ReportProgress(achievement, 100.0f, (bool success) => {
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
    public void GrantIncrementalAchievement(string achievement)
    {
        PlayGamesPlatform.Instance.IncrementAchievement(
      achievement, 5, (bool success) => {
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
    public void showAchievementThree(string achievement)
    {

    }
    public void showAchievementFour(string achievement)
    {

    }
}
