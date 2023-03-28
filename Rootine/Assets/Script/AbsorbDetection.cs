using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AbsorbDetection : MonoBehaviour
{
    public LayerMask mineralLayer , waterLayer;
    private List<GameObject> absorbedMinerals = new List<GameObject>();
    private List<GameObject> absorbedWater = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public bool canAbsorb(){
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position,4f,mineralLayer);
        if(colliders.Length > 0)
        {
            foreach(Collider2D collider in colliders){
                absorbedMinerals.Add(collider.gameObject);
            }
            return true;
        }
        return false;
    }
    
    public bool canAbsorbWater(){
        Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position,4f,waterLayer);
        if(colliders.Length > 0){
            foreach(Collider2D collider in colliders){
                absorbedWater.Add(collider.gameObject);
            }
            return true;
        }
        return false;
    }

    public List<GameObject> GetAbsorbedMinerals()
    {
        return absorbedMinerals;
    }

    public List<GameObject> GetAbsorbedWater(){
        return absorbedWater;
    }

    public void ClearAllMinerals(){
        absorbedMinerals.Clear();
    }

    public void ClearAllWaters(){
        absorbedWater.Clear();
    }
}
