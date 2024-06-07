//LOCATIONS.H

#ifndef LOCATIONS_H
#define LOCATIONS_H

#include "Items.h"
#include "Characters.h"
#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;

class Locations {
private:

    string locationfile = "locations.txt";
    Characters* character2print = new Characters();
    Items* item2print = new Items();


public: 

    Locations* north;
    Locations* east;
    Locations* south;
    Locations* west;
    static Locations* currentLocation;

    Locations();
    ~Locations();

    //name and description of location
    string nameDescriptionLoc;

    void setRabbitHole();
    void setTimesCastle();

    //function to load data from the text file
    void loadLocationData(string locationfile);

    //functions to bind directions
    void fixDirectionNorth(Locations* north2);
    void fixDirectionEast(Locations* east2);
    void fixDirectionSouth(Locations* south2);
    void fixDirectionWest(Locations* west2);

    //Function to set descriptions of locations
    void setLocationDescription();

    void printCharacter();

    static Locations* getoceanofTime();
    static Locations* getRabbitHole();
    static Locations* getsafeRoom();
    static Locations* getqueenOfHearts();
    static Locations* getunderland();
    static Locations* gettimescastle();

};


#endif