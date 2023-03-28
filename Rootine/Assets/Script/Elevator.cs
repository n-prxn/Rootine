using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Elevator : MonoBehaviour
{
    [SerializeField] private Transform startPoint,stopPoint;
    private bool isLift;
    private float step;
    // Start is called before the first frame update
    void Start()
    {
        transform.position = startPoint.position;
        isLift = false;
    }
    // Update is called once per frame
    void Update()
    {
        if(isLift){
            step = 2f * Time.deltaTime;
            transform.position = Vector2.MoveTowards(transform.position,stopPoint.transform.position,step);
        }else{
            step = 2f * Time.deltaTime;
            transform.position = Vector2.MoveTowards(transform.position,startPoint.transform.position,step);
        }
    }
    private void OnCollisionEnter2D(Collision2D other) {
        if(other.collider.CompareTag("Foot")){
            isLift = true;
        }
    }

    private void OnCollisionExit2D(Collision2D other) {
        if(other.collider.CompareTag("Foot")){
            isLift = false;
        }    
    }
}
