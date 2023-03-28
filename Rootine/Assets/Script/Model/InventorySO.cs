using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(menuName = "Inventory",fileName = "Inventory")]
public class InventorySO : ScriptableObject
{
    [SerializeField] public PlayerNumber playerNumber;
    [SerializeField] public List<Sprite> heldMinerals;

    public void AddItem(GameObject item){
        heldMinerals.Add(item.GetComponent<SpriteRenderer>().sprite);
    }

    public void Clear(){
        heldMinerals.Clear();
    }
}
