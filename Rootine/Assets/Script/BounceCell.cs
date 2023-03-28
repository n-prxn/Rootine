using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BounceCell : MonoBehaviour
{
    [SerializeField] private AudioClip bounceSFX;
    private Animator animator;
    private AudioSource sfxAudioSource;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
        sfxAudioSource = GameObject.Find("Gameplay/SFX Player").GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnCollisionEnter2D(Collision2D other) {
        if(other.collider.CompareTag("Foot")){
            sfxAudioSource.PlayOneShot(bounceSFX);
            animator.SetBool("isSpring",true);
            other.collider.transform.parent.GetComponent<Rigidbody2D>().velocity = new Vector2(0f,10f);
        }
    }

    private void OnCollisionExit2D(Collision2D other) {
        if(other.collider.CompareTag("Foot")){
            animator.SetBool("isSpring",false);
        }
    }
}
