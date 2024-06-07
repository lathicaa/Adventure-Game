//ITEMS.CPP

#include "Inventory.h"
#include "Items.h"
#include "Actions.h"

using namespace std;

//create new pointers to item objects
Items* pocketWatch = new Items();
Items* madHattersHat = new Items();
Items* drinkMeBottle = new Items();
Items* eatMeCake = new Items();
Items* cardSoldiers = new Items();
Items* chronosphere = new Items();
Items* key = new Items();
Items* comfits = new Items();
Items* vorpalSword = new Items();
Items* cheshireCatSmile = new Items();
Items* doorknob = new Items();
Items* oraculum = new Items();

//array to hold item descriptions
string itemdescriptions[12];

//constructor
Items::Items() {}

//destructor
Items::~Items() {
    delete pocketWatch;
    delete madHattersHat;
    delete drinkMeBottle;
    delete eatMeCake;
    delete cardSoldiers;
    delete chronosphere;
    delete key;
    delete comfits;
    delete vorpalSword;
    delete cheshireCatSmile;
    delete doorknob;
    delete oraculum;
}

//load item into array
void Items::loadItemData(string itemfile) {

    ifstream openItemFile(itemfile);
    if (openItemFile.good() == false) { //check if the file opened
        cout << "Unable to open file:  " << itemfile << endl;
    }

    int itemindex{0};
    string itemline;

    while (getline(openItemFile, itemline)) {

        if(itemindex >= 12) {
            cout << "error items" << endl;
            break;
        }

        itemdescriptions[itemindex] = itemline;
        itemindex++;
    }

    openItemFile.close();

}

//set item descriptions 
void Items::setItemDescription() {

    pocketWatch->nameDescriptionItem = itemdescriptions[0];
    madHattersHat->nameDescriptionItem = itemdescriptions[1];
    drinkMeBottle->nameDescriptionItem = itemdescriptions[2];
    eatMeCake->nameDescriptionItem = itemdescriptions[3];
    cardSoldiers->nameDescriptionItem = itemdescriptions[4];
    chronosphere->nameDescriptionItem = itemdescriptions[5];
    key->nameDescriptionItem = itemdescriptions[6];
    comfits->nameDescriptionItem = itemdescriptions[7];
    vorpalSword->nameDescriptionItem = itemdescriptions[8];
    cheshireCatSmile->nameDescriptionItem = itemdescriptions[9];
    doorknob->nameDescriptionItem = itemdescriptions[10];
    oraculum->nameDescriptionItem = itemdescriptions[11];

}

//methods to print description for each item
void Items::printpocketWatch() {
    cout << pocketWatch->nameDescriptionItem << endl;
}

void Items::printmadHattersHat() {
    cout << madHattersHat->nameDescriptionItem << endl;
}

void Items::printdrinkMeBottle() {
    cout << drinkMeBottle->nameDescriptionItem << endl;
}

void Items::printeatMeCake() {
    cout << eatMeCake->nameDescriptionItem << endl;
}

void Items::printcardSoldiers() {
    cout << cardSoldiers->nameDescriptionItem << endl;
}

void Items::printchronosphere() {
    cout << chronosphere->nameDescriptionItem << endl;
}

void Items::printkey() {
    cout << key->nameDescriptionItem << endl;
}

void Items::printcomfits() {
    cout << comfits->nameDescriptionItem << endl;
}

void Items::printvorpalSword() {
    cout << vorpalSword->nameDescriptionItem << endl;
}

void Items::printcheshireCatsSmile() {
    cout << cheshireCatSmile->nameDescriptionItem << endl;
}

void Items::printdoorKnob() {
    cout << doorknob->nameDescriptionItem << endl;
}

void Items::printoraculum() {
    cout << oraculum->nameDescriptionItem << endl;
}

Items* Items::getPocketWatch() {
    static Items pocketWatch;  // Assuming pocketWatch is a static member of Items class
    return &pocketWatch;
}

//methods to get each item
Items* Items::getdrinkMeBottle() {
    static Items drinkMeBottle;
    return &drinkMeBottle;
}

Items* Items::geteatMeCake() {
    static Items eatMeCake;
    return &eatMeCake;
}

Items* Items::getkey() {
    static Items key;
    return &key;
}

Items* Items::getdoorKnob() {
    static Items doorknob;
    return &doorknob;
}

Items* Items::getoraculum() {
    static Items oraculum;
    return &oraculum;
}

Items* Items::getcardSoldiers() {
    static Items cardSoldiers;
    return &cardSoldiers;
}

Items* Items::getcomfits() {
    static Items comfits;
    return &comfits;
}

Items* Items::getvorpalSword() {
    static Items vorpalSword;
    return &vorpalSword;
}
 
Items* Items::getmadHattersHat() {
    static Items madHattersHat;
    return &madHattersHat;
}

Items* Items::getcheshireCatsSmile() {
    static Items cheshireCatSmile;
    return &cheshireCatSmile;
}

Items* Items::getchronosphere() {
    static Items chronosphere;
    return &chronosphere;
}
