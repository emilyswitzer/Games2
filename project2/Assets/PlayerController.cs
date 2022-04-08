using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    // Start is called before the first frame update
    bool isOnGround;
    public Vector3 initialPosition;
    public Text score;
    int currentscore;
    float secondTimer = 0f;
    AudioSource jumpsound;

    void Start()
    {
        
        currentscore = 0;
        initialPosition = transform.position;
        jumpsound = GetComponent<AudioSource>();
    }

    void Update()
    {
        secondTimer = secondTimer + Time.deltaTime;
        if (secondTimer >= 3.6f)
        {
            addScore();
            secondTimer = secondTimer - 1f;
        }
        if (Input.GetMouseButtonDown(0) && isOnGround)
        {
            jump();
        }
    }
    void OnCollisionEnter2D(Collision2D coll)

    {

        if (coll.collider.tag == "Ground")
        {

            isOnGround = true;
        }
       
       

    }
    void jump()

    {
        jumpsound.Play();
        GetComponent<Rigidbody2D>().AddForce(new Vector2(0, 500.0f));

        isOnGround = false;

    }
    private void addScore()
    {
        currentscore++;
        score.text = "Score: " + currentscore.ToString();
    }

}
