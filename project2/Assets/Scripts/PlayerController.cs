using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    // Start is called before the first frame update
    bool isOnGround;
    public Vector3 initialPosition;
    AudioSource jumpsound;

    void Start()
    {
        initialPosition = transform.position;
        jumpsound = GetComponent<AudioSource>();
    }

    void Update()
    {
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
  

}
