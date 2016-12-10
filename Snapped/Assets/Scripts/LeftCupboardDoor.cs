using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeftCupboardDoor : MonoBehaviour, IActionable {

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private bool closed = true;

    public void Triggered () {
        Animation anim = GetComponent<Animation>();
        if (!anim.isPlaying) {

            if (closed) {
                anim.Play("LeftCupboardDoorOpen");
            } else {
                anim.Play("LeftCupboardDoorClose");
            }
            this.closed = !this.closed;
        }

    }
}
