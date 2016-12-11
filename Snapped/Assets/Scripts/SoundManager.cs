using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : MonoBehaviour {

    public AudioClip[] audioClips;
    private int timer = 0;

    public void PlaySound(string name, bool loop) {
        foreach(AudioClip clip in audioClips){
            if (clip.name == name) {
                PlaySound(clip, loop);
                return; 
            }
        }
    }

    public void PlaySound(AudioClip clip, bool loop) {
        if (timer > 10) {
            AudioSource src = GetComponent<AudioSource>();
            src.clip = clip;
            src.loop = loop;
            src.Play();
        }

    }

    public void StopSounds() {
        AudioSource src = GetComponent<AudioSource>();
        src.Stop();
        timer = 0;
    }


    void Update() {
        timer ++;
    }

    public bool IsPlaying() {
        return GetComponent<AudioSource>().isPlaying;
    }
}
