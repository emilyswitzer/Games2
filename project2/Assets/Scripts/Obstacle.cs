using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Obstacle : MonoBehaviour
{
    Color[] colours = new Color[5];
    GameManager g;
    private void Start()
    {

        colours[0] = new Color(248f/255f, 233f/255f, 161f / 255f);
        colours[1] = new Color(247 / 255f, 108 / 255f, 108 / 255f);
        colours[2] = new Color(168 / 255f, 208 / 255f, 230 / 255f);
        colours[3] = new Color(249 / 255f,166 / 255f, 110 / 255f); 
        colours[4] = new Color(255 / 255f, 201 / 255f, 75 / 255f);



        GetComponent<Renderer>().material.color = colours[Random.Range(0, colours.Length)];
    }
    void Update()
    {
        transform.Translate(Vector2.left * 8 * Time.deltaTime);
        
    }

    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Player"))
        {
            g.gameOver();
          //  SceneManager.LoadScene("Game");

        }
        if (collision.gameObject.CompareTag("Finish"))
        {
            Destroy(gameObject);
        }


    }

 
}
