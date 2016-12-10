using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Drawer : MonoBehaviour, IActionable {

    private bool closed = true;

    public void Triggered () {
        Animation anim = GetComponent<Animation>();

        if (!anim.isPlaying) {
            
            if (closed) {
                
                anim.Play("DrawerOpen");
            } else {
                anim.Play("DrawerClose");
            }
            this.closed = !this.closed;
        }

    }
}
