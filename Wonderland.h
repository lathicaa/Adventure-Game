//WONDERLAND.H

#ifndef WONDERLAND_H
#define WONDERLAND_H

#include "Control.h"
#include "Locations.h"
#include "Items.h"
#include "Characters.h"
#include "Actions.h"

class Wonderland {

    Control control;
    Locations locations;
    Items items;
    Characters characters;
    Inventory inventory;
    Actions actions;

    public:

    Wonderland();
    void startGame();

    bool isGameWon();

};



#endif