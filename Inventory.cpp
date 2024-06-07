//INVENTORY.CPP

#include "Inventory.h"
#include "Items.h"


//constructor
Inventory::Inventory() {
    itemCount = 0;
}


//add item to inventory
void Inventory::takeItem(Items* item) {
    if (itemCount < maxItems) {
        inventory[itemCount] = item;
        itemCount++;
    
    if (item == Items::getPocketWatch()) {
        cout << "Added white Rabbits pocket watch to inventory. " << endl;

    } else if (item == Items::getdrinkMeBottle()) {
        cout << "Added drink me bottle to inventory." << endl;

    } else if (item == Items::geteatMeCake()) {
        cout << "Added eat me cake to inventory." << endl;

    } else if (item == Items::getkey()) {
        cout << "Added key to inventory." << endl;

    } else if (item == Items::getdoorKnob()) {
        cout << "Added doorknob to inventory." << endl;

    } else if (item == Items::getoraculum()) {
        cout << "Added oraculum to inventory." << endl;

    } else if (item == Items::getchronosphere()) {
        cout << "Added chronosphere to inventory." << endl;

    } else if (item == Items::getmadHattersHat()) {
        cout << "Added mad hatters hat to inventory." << endl;

    } else if (item == Items::getcheshireCatsSmile()) {
        cout << "Added cheshire cats smile to inventory." << endl;

    } else if (item == Items::getcardSoldiers()) {
        cout << "Added card soldiers to inventory." << endl;

    } else if (item == Items::getcomfits()) {
        cout << "Added comfits to inventory." << endl;

    } else if (item == Items::getvorpalSword()) {
        cout << "Added vorpal sword to inventory." << endl;

    } else {
        cout << "Inventory full, cannot add Item" << endl;

    }
    }
}

//remove an item from inventory
void Inventory::dropItem(Items* item) {
    for (int i{0}; i < itemCount; i++) {
        if (inventory[i] == item) {
            //shift the remaining items to fill the gap in the inventory
            for (int j{i}; j < itemCount; j++) {
                inventory[j] = inventory[j + 1];
            }

            itemCount--;

            if (item == Items::getPocketWatch()) {
                cout << "Removed white Rabbits pocket watch from inventory. " << endl;

            } else if (item == Items::getdrinkMeBottle()) {
                cout << "Removed drink me bottle from inventory." << endl;

            } else if (item == Items::geteatMeCake()) {
                cout << "Removed eat me cake from inventory." << endl;

            } else if (item == Items::getkey()) {
                cout << "Removed key from inventory." << endl;

            } else if (item == Items::getdoorKnob()) {
                cout << "Removed doorknob from inventory." << endl;

            } else if (item == Items::getoraculum()) {
                cout << "Removed oraculum from inventory." << endl;

            } else if (item == Items::getchronosphere()) {
                cout << "Removed chronosphere from inventory." << endl;

            } else if (item == Items::getmadHattersHat()) {
                cout << "Removed mad hatters hat from inventory." << endl;

            } else if (item == Items::getcheshireCatsSmile()) {
                cout << "Removed cheshire cats smile from inventory." << endl;

            } else if (item == Items::getcardSoldiers()) {
                cout << "Removed card soldiers from inventory." << endl;

            } else if (item == Items::getcomfits()) {
                cout << "Removed comfits from inventory." << endl;

            } else if (item == Items::getvorpalSword()) {
                cout << "Removed vorpal sword from inventory." << endl;

            } else if (hasItem(item) == false) {
                cout << "Item was not found in inventory, cannot remove." << endl;
            } else {
                cout << "Inventory full, cannot add Item" << endl;

            }
        }
    }  
}

//check if inventory has an item
bool Inventory::hasItem(Items* item) const {
    for (int i{0}; i < itemCount; i++) {
        if (inventory[i] == item) {
            return true;
        }
    }

    return false;
}

//display items in inventory
void Inventory::displayInventory() const {
    if (itemCount == 0) {
        cout << "Inventory is empty." << endl;

    } else {
        for (int i{0}; i < itemCount; i++) {
            cout << inventory[i]->nameDescriptionItem << endl;
        }
    }
}

//use an item in inventory
void Inventory::useItem(Items* item) {
    if(hasItem(item)) {
        if (item == Items::getPocketWatch()) {
            cout << "Using Pocketwatch: Summoning White Rabbit ... Traveller, you must travel to the ocean of Time! You can escape Wonderland, but you must have the chronosphere in your inventory, and you must use it upon arrival!" << endl;
            cout << endl;

        } else if (item == Items::getmadHattersHat()) {
            cout << "Using Mad Hatters Hat: You can talk to animals now." << endl;
            cout << endl;

        } else if (item == Items::getdrinkMeBottle()) {
            cout << "Using Drink Me Potion: You have shrunk to the size of a spider." << endl;
            cout << endl;

        } else if (item == Items::geteatMeCake()) {
            cout << "Using Eat Me Cake: You have grown to the size of a giant. " << endl;
            cout << endl;

        } else if (item == Items::getcardSoldiers()) {
            cout << "Using Card Soldiers: The card soldiers are attacking for you!" << endl;
            cout << endl;

        } else if (item == Items::getchronosphere()) {
            cout << "Using Chronosphere: You are leaving Wonderland now..." << endl;

        } else if (item == Items::getkey()) {
            cout << "Using Magic Key: You've awoken the magic doorknob, opening the door to Wonderland." << endl;
            cout << endl;

        } else if (item == Items::getcomfits()) {
            cout << "Using Comfits: You've gained the card soldiers trust! They're not attacking anymore!" << endl;
            cout << endl;

        } else if(item == Items::getvorpalSword()) {
            cout << "Using Vorpal Sword: You are slashing through your enemy - Your enemy is dead!" << endl;
            cout << endl;

        } else if (item == Items::getdoorKnob()) {
            cout << "Using Doorknob: You have opened the door to Wonderland." << endl;
            cout << endl;

        } else if(item == Items::getcheshireCatsSmile()) {
            cout << "Using Cheshire Cats Smile: You are now invisible, move as you please. It will wear off after you leave this location." << endl;
            cout << endl;

        } else if (item == Items::getoraculum()) {
            cout << "Using Oraculum: Traveller, you must travel through Wonderland to gain the items to escape. Go to the Underland to find the Mad Hatters Hat and the Cheshire Cats Smile. Travel to the Queen of Hearts Castle and obtain the Vorpal Sword. Then finally, treck to Time's Castle and obtain the Chronosphere from Time, your exit out of Wonderland." << endl;
            cout << endl;
        }

    } else {
        cout << "You can't use that item, it's not in your inventory. " << endl;
    }

}