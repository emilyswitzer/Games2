using System;
using UnityEngine.UI;
using UnityEngine;
using GooglePlayGames.BasicApi;
using GooglePlayGames;



public class GPGSManager : MonoBehaviour
{
    public Text statusText;
    public Text desc;

    // Start is called before the first frame update
    void Start()
    {
       
        PlayGamesPlatform.DebugLogEnabled = true;
       
        PlayGamesPlatform.Activate();
        PlayGamesPlatform.Instance.Authenticate(ProcessAuthentication);
       
    }

    internal void ProcessAuthentication(SignInStatus status)
    {
        if (status == SignInStatus.Success)
        {
            statusText.text = "Successfully authenticated";
            desc.text = "Hello " + Social.localUser.userName + ". Your I.D. is " + Social.localUser.id;
        }
        else
        {
            statusText.text = "Failed to authenticate";
            desc.text = "Failed to authenticate because " + status;
        }
    }
    public void ShowLeaderboard()
    {
        if (PlayGamesPlatform.Instance.localUser.authenticated)
        {
            PlayGamesPlatform.Instance.ShowLeaderboardUI();
        }
        else
        {

            Social.ShowLeaderboardUI();
        }
    }

    
    public void ShowLeaderBoardCall(Boolean success)
    {
        if (success)
        {
            Social.ShowLeaderboardUI();
        }
    }

    public void PostToLeaderBoard(long score)
    {
        if (PlayGamesPlatform.Instance.localUser.authenticated)
        {
            Social.ReportScore(score, "CgkIiqeWk7cJEAIQBQ", (bool success) => {
                Debug.Log("Success");
            });
        }
        else
        {
            Debug.Log("Not posted");
        }
    }


    public void ShowAcheivments()
    {
        if (PlayGamesPlatform.Instance.localUser.authenticated)
        {
            Social.ShowAchievementsUI();
        }
        
    }
}
