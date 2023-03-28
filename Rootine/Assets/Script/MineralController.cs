using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MineralController : MonoBehaviour
{
    public float speed;
    public float duration = 30;
    private float cooldown;
    private Rigidbody2D rb;
    Vector2 currentDir, newDir;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>();
        rb.velocity = new Vector2(Mathf.Sign(Random.Range(-1f, 1f)) * speed, Mathf.Sign(Random.Range(-1f, 1f)) * speed);
        currentDir = rb.velocity;
        cooldown = duration;
    }

    // Update is called once per frame
    void Update()
    {
        if (!GameplayController.instance.isPause)
        {
            if (cooldown > 0)
            {
                cooldown -= Time.deltaTime;
            }
            else
            {
                this.gameObject.SetActive(false);
            }
        }
    }

    private void OnCollisionEnter2D(Collision2D other)
    {
        if (other.collider.CompareTag("Player") || other.collider.CompareTag("Foot"))
        {
            Physics2D.IgnoreCollision(other.collider.GetComponent<Collider2D>(), GetComponent<Collider2D>());
        }
        else
        {
            newDir = Vector2.Reflect(currentDir, other.contacts[0].normal);
            rb.velocity = newDir;
            currentDir = rb.velocity;
            Physics2D.IgnoreCollision(other.collider.GetComponent<Collider2D>(), GetComponent<Collider2D>(), false);
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.CompareTag("Player"))
        {
            if (other.GetComponent<PlayerController>().inventory.heldMinerals.Count < 6)
            {
                if (other.gameObject.name == "Phloem" && this.gameObject.layer == 6)
                {
                    other.GetComponent<PlayerController>().inventory.AddItem(this.gameObject);
                    other.GetComponent<PlayerController>().AddItem(this.gameObject);
                    this.gameObject.SetActive(false);
                }

                if (other.gameObject.name == "Xylem" && this.gameObject.tag == "Water")
                {
                    other.GetComponent<PlayerController>().inventory.AddItem(this.gameObject);
                    other.GetComponent<PlayerController>().AddItem(this.gameObject);
                    this.gameObject.SetActive(false);
                }
            }
        }
    }
}
