using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TVStandRightDoor : MonoBehaviour, IActionable {

    private bool closed = true;

    public void Triggered () {
        Animation anim = GetComponent<Animation>();
        if (!anim.isPlaying) {

            if (closed) {
                anim.Play("TVStandRightDoorOpen");
            } else {
                anim.Play("TVStandRightDoorClose");
            }
            this.closed = !this.closed;
        }

    }
}
