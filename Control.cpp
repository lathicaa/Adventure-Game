//CONTROL.CPP

#include "Control.h"
#include <iostream>

using namespace std;

//prompt user for direction
string Control::getDirection() {
        //prompt player for inpuit and move player
        string direction;
        cout << endl;
        cout << "What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) " << endl;
        cin >> direction;
        cout << endl;

        return direction;
}


//move between locations
void Control::moveLocations(Locations*& currentLocation, string direction) {

    if (direction == "north" || direction == "go north" || direction == "n" ) {
        if (currentLocation->north != nullptr) {
            currentLocation = currentLocation->north;
            cout << "Moving north: " << endl;
            cout << "Current Location: " << endl;
            cout << currentLocation->nameDescriptionLoc << endl;
        } else {
            cout << "X: You can't go north from here." << endl;
        }

    } else if (direction == "east" || direction == "go east" || direction == "e") {
        if (currentLocation->east != nullptr) {
            currentLocation = currentLocation->east;
            cout << "Moving east: " << endl;
            cout << "Current Location: " << endl;
            cout << currentLocation->nameDescriptionLoc << endl;
        } else {
            cout << "X: You can't go east from here." << endl;
        }

    } else if(direction == "south" || direction == "go south" || direction == "s" ) {
        if (currentLocation->south != nullptr) {
            currentLocation = currentLocation->south;
            cout << "Moving south: " << endl;
            cout << "Current Location: " << endl;
            cout << currentLocation->nameDescriptionLoc << endl;
        } else {
            cout << "X: You can't go south from here." << endl;
        }

    } else if(direction == "west" || direction == "go west" || direction == "w") {

        if (currentLocation->west != nullptr) {
            currentLocation = currentLocation->west;
            cout << "Moving west: " << endl;
            cout << "Current Location: " << endl;
            cout << currentLocation->nameDescriptionLoc << endl;
        } else {
            cout << "X: You can't go west from here." << endl;
        }

    } else {
        cout << "You can't go there!" << endl;
    }
}