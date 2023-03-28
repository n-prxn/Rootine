using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Switch : MonoBehaviour
{
    private Depot depot;
    private Animator depotAnimator;
    // Start is called before the first frame update
    void Start()
    {
        depot = GameObject.FindGameObjectWithTag("Depot").GetComponent<Depot>();
        depotAnimator = depot.gameObject.GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
