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
        AudioSource src = GetComponent<AudioSource>();
        src.volume = 1f;
        src.clip = clip;
        src.loop = loop;
        src.Play();
    }

//    public void StopSounds() {
//        AudioSource src = GetComponent<AudioSource>();
//        src.Stop();
//        timer = 0;
//    }



    public bool IsPlaying() {
        return GetComponent<AudioSource>().isPlaying;
    }
}
