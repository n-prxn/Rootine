using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ant : MonoBehaviour
{
    public float speed = 3f, dirChangeTime = 5f, duration = 20f;
    private float timer;
    private Vector2 movement;
    private Transform target;
    private Rigidbody2D rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        timer = dirChangeTime;
        movement = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            if (duration > 0)
            {
                duration -= Time.deltaTime;
                if (timer > 0)
                {
                    timer -= Time.deltaTime;
                }
                else
                {
                    movement = new Vector2(Random.Range(-1f, 1f), Random.Range(-1f, 1f));
                    timer = dirChangeTime;
                }
            }
            else
            {
                Destroy(this.gameObject);
            }
        }
    }

    private void FixedUpdate()
    {
        rb.velocity = movement * speed;
        float angle = Mathf.Atan2(movement.y, movement.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.AngleAxis(angle - 90, Vector3.forward);
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.gameObject.layer == 6)
        {
            other.gameObject.SetActive(false);
        }

        if (other.gameObject.CompareTag("Surface"))
        {
            rb.velocity = new Vector2(rb.velocity.x, rb.velocity.y * -1f);
        }
    }
}
