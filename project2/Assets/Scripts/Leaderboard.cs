using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Leaderboard : MonoBehaviour
{


    private void Start()
    {
       
    }

    
    public void returnToMenu()
    {
        SceneManager.LoadScene("Menu");
    }

}
