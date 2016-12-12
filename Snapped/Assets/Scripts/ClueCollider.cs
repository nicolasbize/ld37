using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ClueCollider : MonoBehaviour {

    public bool givePoints = false;
    public AudioClip clip = null;
    public bool loop = false;

    public void Interact() {
        GameObject.Find("SoundManager").GetComponent<SoundManager>().PlaySound(clip, loop);
        if (givePoints) {
            GameObject.Find("UI").GetComponent<UI>().FoundClue(name);
        }
    }

}
