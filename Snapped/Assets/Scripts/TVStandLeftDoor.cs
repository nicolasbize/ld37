using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TVStandLeftDoor : MonoBehaviour, IActionable {


    private bool closed = true;

    public void Triggered () {
        Animation anim = GetComponent<Animation>();
        if (!anim.isPlaying) {

            if (closed) {
                anim.Play("TVStandLeftDoorOpen");
            } else {
                anim.Play("TVStandLeftDoorClose");
            }
            this.closed = !this.closed;
        }

    }

}
