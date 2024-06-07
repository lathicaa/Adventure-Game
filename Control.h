//CONTROL.H

#ifndef CONTROL_H
#define CONTROL_H

#include "Locations.h"
#include "Inventory.h"
#include "Actions.h"
#include <string>

class Control {

public:

    string getDirection();
    void moveLocations(Locations*& curentLocation, string direction);

};

#endif