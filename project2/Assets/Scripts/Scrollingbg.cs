using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Scrollingbg : MonoBehaviour
{
    Material bg;
    Vector2 offset;

    public float x;
    public float y;

    private void Awake()
    {
        x = 0.2f;
        bg = GetComponent<Renderer>().material;
    }
    // Start is called before the first frame update
    void Start()
    {
        offset = new Vector2(x, y);
    }

    // Update is called once per frame
    void Update()
    {
        bg.mainTextureOffset += offset * Time.deltaTime;
    }
}
