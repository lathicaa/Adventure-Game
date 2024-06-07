//ITEMS.H

#ifndef ITEMS_H
#define ITEMS_H

#include <iostream>
#include <fstream>
#include <string>

#include "Inventory.h"
using namespace std;



class Items;

class Items {

private:

    string itemfile = "items.txt";

public:

    Items(); //default constructor

    ~Items(); //destructor

    string nameDescriptionItem;

    void loadItemData(string itemfile);
    void setItemDescription();

    //functions to print each item description
    void printpocketWatch();
    void printdrinkMeBottle();
    void printeatMeCake();
    void printkey();
    void printdoorKnob();
    void printoraculum();
    void printcardSoldiers();
    void printcomfits();
    void printvorpalSword();
    void printmadHattersHat();
    void printcheshireCatsSmile();
    void printchronosphere();

    //get methods for each item
    static Items* getPocketWatch();
    static Items* getdrinkMeBottle();
    static Items* geteatMeCake();
    static Items* getkey();
    static Items* getdoorKnob();
    static Items* getoraculum();
    static Items* getcardSoldiers();
    static Items* getcomfits();
    static Items* getvorpalSword();
    static Items* getmadHattersHat();
    static Items* getcheshireCatsSmile();
    static Items* getchronosphere();
};


#endif