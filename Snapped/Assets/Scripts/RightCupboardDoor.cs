using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RightCupboardDoor : MonoBehaviour, IActionable {

    private bool closed = true;

    public void Triggered () {
        Animation anim = GetComponent<Animation>();
        if (!anim.isPlaying) {

            if (closed) {
                anim.Play("RightCupboardDoorOpen");
            } else {
                anim.Play("RightCupboardDoorClose");
            }
            this.closed = !this.closed;
        }

    }
}
