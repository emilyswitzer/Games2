using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartScript : MonoBehaviour
{
    public InputField usernameInput;
    public static string username = "vv";
    public Text text;
    void Start()
    {
        if (username != "")
            usernameInput.text = username;
    }

    public void SaveName(string newName)
    {
        username = newName;
        PlayerPrefs.SetString("username", username);
        


    }


    public void PlayGame()
    {
        
        SceneManager.LoadScene("Menu");
    }

    public string getUser()
    {
        return username;
    }

    
}
