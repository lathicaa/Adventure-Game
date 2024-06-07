//ACTIONS.H

#ifndef ACTIONS_H
#define ACTIONS_H

#include <iostream>
#include <fstream>
#include <string>

#include "Items.h"
#include "Inventory.h"

class Actions {

private:

    string actionfile = "actions.txt";

public:

    Actions();

    ~Actions();

    string nameDescriptionAction;

    void loadActionData(string actionfile);
    void setActionDescription();

string getAction();

    void performAction(Inventory& inventory, const std::string& action);

    void handleAction(Inventory& inventory, const std::string& action, Items* item);

    //functions to take and drop each item
    void takePocketWatch(Inventory& inventory, Items* pocketWatch);
    void dropPocketWatch(Inventory& inventory, Items* pocketWatch);
    void usePocketWatch(Inventory& inventory, Items* pocketWatch);

    void takemadHattersHat(Inventory& inventory, Items* madHattersHat);
    void dropmadHattersHat(Inventory& inventory, Items* madHattersHat);
    void usemadHattersHat(Inventory& inventory, Items* madHattersHat);

    void takedrinkMeBottle(Inventory& inventory, Items* drinkMeBottle);
    void dropdrinkMeBottle(Inventory& inventory, Items* drinkMeBottle);
    void usedrinkMeBottle(Inventory& inventory, Items* drinkMeBottle);

    void takeeatMeCake(Inventory& inventory, Items* eatMeCake);
    void dropeatMeCake(Inventory& inventory, Items* eatMeCake);
    void useeatMeCake(Inventory& inventory, Items* eatMeCake);

    void takecardSoldiers(Inventory& inventory, Items* cardSoldiers);
    void dropcardSoldiers(Inventory& inventory, Items* cardSoldiers);
    void usecardSoldiers(Inventory& inventory, Items* cardSoldiers);

    void takechronosphere(Inventory& inventory, Items* chronosphere);
    void dropchronosphere(Inventory& inventory, Items* chronosphere);
    void usechronosphere(Inventory& inventory, Items* chronosphere);

    void takekey(Inventory& inventory, Items* key);
    void dropkey(Inventory& inventory, Items* key);
    void usekey(Inventory& inventory, Items* key);

    void takecomfits(Inventory& inventory, Items* comfits);
    void dropcomfits(Inventory& inventory, Items* comfits);
    void usecomfits(Inventory& inventory, Items* comfits);

    void takevorpalSword(Inventory& inventory, Items* vorpalSword);
    void dropvorpalSword(Inventory& inventory, Items* vorpalSword);
    void usevorpalSword(Inventory& inventory, Items* vorpalSword);

    void takecheshireSmile(Inventory& inventory, Items* cheshireSmile);
    void dropcheshireSmile(Inventory& inventory, Items* cheshireSmile);
    void usecheshireSmile(Inventory& inventory, Items* cheshireSmile);

    void takedoorknob(Inventory& inventory, Items* doorknob);
    void dropdoorknob(Inventory& inventory, Items* doorknob);
    void usedoorknob(Inventory& inventory, Items* doorknob);

    void takeoraculum(Inventory& inventory, Items* oraculum);
    void droporaculum(Inventory& inventory, Items* oraculum);
    void useoraculum(Inventory& inventory, Items* oraculum);
};
#endif