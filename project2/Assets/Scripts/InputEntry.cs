using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[Serializable]
public class InputEntry
{
    public string name;
    public float score;

    public InputEntry(string name, float score)
    {
        this.name = name;
        this.score = score;
    }
}
