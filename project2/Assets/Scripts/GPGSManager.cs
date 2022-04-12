using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using GooglePlayGames;
using GooglePlayGames.BasicApi;
using UnityEngine.UI;
using UnityEngine.SocialPlatforms;
public class GPGSManager : MonoBehaviour
{
    public Text statusText;
    public Text desc;

    // Start is called before the first frame update
    void Start()
    {
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
}
