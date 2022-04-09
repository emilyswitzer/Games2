using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Leaderboard : MonoBehaviour
{
    [SerializeField] private int maxScoreboardEntries = 5;
    [SerializeField] private Transform highscoresHolderTransform = null;
    [SerializeField] private GameObject scoreboardEntryObject = null;
  



    private string SavePath => $"{Application.persistentDataPath}/highscores.json";

    private void Start()
    {
        LeaderboardList savedScores = GetSavedScores();

        UpdateUI(savedScores);

        SaveScores(savedScores);
       
    }

  



    public void AddEntry(NameInput scoreboardEntryData)
    {
        LeaderboardList savedScores = GetSavedScores();

        bool scoreAdded = false;

        //Check if the score is high enough to be added.
        for (int i = 0; i < savedScores.highscores.Count; i++)
        {
            if (scoreboardEntryData.entryScore > savedScores.highscores[i].entryScore)
            {
                savedScores.highscores.Insert(i, scoreboardEntryData);
                scoreAdded = true;
                break;
            }
        }

        //Check if the score can be added to the end of the list.
        if (!scoreAdded && savedScores.highscores.Count < maxScoreboardEntries)
        {
            savedScores.highscores.Add(scoreboardEntryData);
        }

        //Remove any scores past the limit.
        if (savedScores.highscores.Count > maxScoreboardEntries)
        {
            savedScores.highscores.RemoveRange(maxScoreboardEntries, savedScores.highscores.Count - maxScoreboardEntries);
        }

        UpdateUI(savedScores);

        SaveScores(savedScores);
    }

    private void UpdateUI(LeaderboardList savedScores)
    {
        foreach (Transform child in highscoresHolderTransform)
        {
            Destroy(child.gameObject);
        }

        foreach (NameInput highscore in savedScores.highscores)
        {
            Instantiate(scoreboardEntryObject, highscoresHolderTransform).GetComponent<LeaderboardEntry>().Initialise(highscore);
        }

        
    }

    private LeaderboardList GetSavedScores()
    {
        if (!File.Exists(SavePath))
        {
            File.Create(SavePath).Dispose();
            return new LeaderboardList();
        }

        using (StreamReader stream = new StreamReader(SavePath))
        {
            string json = stream.ReadToEnd();

            return JsonUtility.FromJson<LeaderboardList>(json);
        }
    }

    private void SaveScores(LeaderboardList scoreboardSaveData)
    {
        using (StreamWriter stream = new StreamWriter(SavePath))
        {
            string json = JsonUtility.ToJson(scoreboardSaveData, true);
            stream.Write(json);
        }
    }

    public void returnToMenu()
    {
        SceneManager.LoadScene("Menu");
    }
}
