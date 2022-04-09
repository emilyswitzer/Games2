using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UserInputController : MonoBehaviour
{
    public string username;
    public string saveName;

    public Text input;
    

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void saveAName()
    {
        saveName = input.text;
        PlayerPrefs.SetString("username", saveName);
    }
}
