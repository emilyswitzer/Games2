using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartScript : MonoBehaviour
{
    public Text nameText;
    public InputField input; 
    
    void Start()
    {
        nameText.text = PlayerPrefs.GetString("username");
    }

    public void SaveData()
    {
        nameText.text = input.text;
        PlayerPrefs.SetString("username", nameText.text);
        PlayerPrefs.Save();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlayGame()
    {
       
        SceneManager.LoadScene("Menu");
    }
}
