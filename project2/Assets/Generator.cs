using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Generator : MonoBehaviour
{
    public GameObject obstacle;
    float timer = 0;
    public float accelerate;


    private void Start()
    {

    }

    private void Update()
    {
        accelerate = Random.Range(.6f, 12f);
        manageTimer();
    }
    void manageTimer()

    {
        
        timer += Time.deltaTime;
        if (timer >= accelerate)
        {
            addObstacle();
            timer = 0;
        }
 
    }
    void addObstacle()

    {

        Vector3 positionOfPlayer = GameObject.Find("Player").GetComponent<PlayerController>().initialPosition;
        GameObject t1 = (GameObject)(GameObject.Instantiate(obstacle, positionOfPlayer + Vector3.right * 20, Quaternion.identity));

    }
}
