using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeftCupboardDoor : MonoBehaviour, IActionable {

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
