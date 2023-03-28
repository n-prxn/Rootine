using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplodeMineral : MonoBehaviour
{
    public float speed;
    private Rigidbody2D rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        speed = Random.Range(0.5f,2f);
        rb.velocity = new Vector2(Mathf.Sign(Random.Range(-1f, 1f)) * speed, Mathf.Sign(Random.Range(-1f, 1f)) * speed);
        transform.localScale = new Vector2(Random.Range(0.5f,1f),Random.Range(0.5f,1f));
    }
}
