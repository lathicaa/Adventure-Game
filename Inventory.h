//INVENTORY.H

#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include "Items.h"

using namespace std;

class Items; //forward declaration

class Inventory {

private:
    static const int maxItems{12};
    Items* inventory[maxItems];
    int itemCount; 

public:

    Inventory();

    void takeItem(Items* item);

    void dropItem(Items* item);

    void useItem(Items* item);

    bool hasItem(Items* item) const;

    void displayInventory() const;



};


#endif