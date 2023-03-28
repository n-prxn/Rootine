using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InventoryUIController : MonoBehaviour
{
    [SerializeField] private Transform inventoryPanel;
    [SerializeField] private PlayerController player;
    [SerializeField] private Text playerNumberText;
    // Start is called before the first frame update
    void Start()
    {
        InitializeInventoryUI();
    }

    // Update is called once per frame
    void Update()
    {
        if(!GameplayController.instance.isPause){
            UpdateInventoryUI();
        }
    }

    void InitializeInventoryUI()
    {
        playerNumberText.text = "Player " + player.playerNumber;
        for (int i = 0; i < inventoryPanel.childCount; i++)
        {
            inventoryPanel.GetChild(i).GetChild(0).gameObject.SetActive(false);
        }
    }

    void UpdateInventoryUI()
    {
        List<Sprite> heldMinerals = player.inventory.heldMinerals;
        int i = 0;
        if (heldMinerals.Count > 0)
        {
            foreach(Sprite mineral in heldMinerals)
            {
                Image item = inventoryPanel.GetChild(i).GetChild(0).gameObject.GetComponent<Image>();
                if (!item.gameObject.activeSelf)
                {
                    item.sprite = mineral;
                    item.gameObject.SetActive(true);
                }
                else
                {
                    i++;
                }
            }
        }else{
            InitializeInventoryUI();
        }
    }
}
