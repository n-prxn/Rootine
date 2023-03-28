using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundChecker : MonoBehaviour
{
    public LayerMask groundLayer;
    public bool isGround;
    private void Start()
    {

    }
    void Update()
    {
        isGround = CheckGround();
    }

    public bool CheckGround()
    {
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, 0.3f, groundLayer);
        if (colliders.Length > 0)
            return true;
        return false;
    }

    private void OnCollisionEnter2D(Collision2D other) {
        if(other.collider.CompareTag("Player")){
            this.gameObject.transform.parent.GetComponent<PlayerController>().Jump();
        }
    }
}
