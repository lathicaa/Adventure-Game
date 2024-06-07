//ACTIONS.CPP

#include "Actions.h"
#include "Inventory.h"
#include "Items.h"
#include <iostream>
#include <fstream>
using namespace std;

//create pointers to action objects
Actions* takeItem = new Actions();
Actions* dropItem = new Actions();
Actions* useItem = new Actions();

//array to store descriptions from text file
string actiondescriptions[3];

//constructor
Actions::Actions() {}

//destructor
Actions::~Actions() {
    delete takeItem;
    delete dropItem;
    delete useItem;
}

//load data from text file into array
void Actions::loadActionData(string actionfile) {

    ifstream openActionFile(actionfile);
    if (openActionFile.good() == false) { //check if the file opened
        cout << "Unable to open file:  " << actionfile << endl;
    }

    int actionindex{0};
    string actionline;

    while (getline(openActionFile, actionline)) {

        if(actionindex >= 3) {
            cout << "error action" << endl;
            break;
        }

        actiondescriptions[actionindex] = actionline;
        actionindex++;
    }

    openActionFile.close();

}

//set action descriptions
void Actions::setActionDescription() {

    takeItem->nameDescriptionAction = actiondescriptions[0];
    dropItem->nameDescriptionAction = actiondescriptions[1];
    useItem->nameDescriptionAction = actiondescriptions[2];

}

//get input from user
string Actions::getAction() {
    cout << "Enter an action to handle these items (take/drop/use):" << endl;
    string getaction;
    cin >> getaction;
    return getaction;
}
   
//test for each action and perform each action
void Actions::handleAction(Inventory& inventory, const std::string& action, Items* item) {
    if (action == "take") {
        inventory.takeItem(item);
    } else if (action == "drop") {
        inventory.dropItem(item);
    } else if (action == "use") {
        inventory.useItem(item);
    } else {
        cout << "Invalid action. " << endl;
    }
}

//dealing with pocket watch
void Actions::takePocketWatch(Inventory& inventory, Items* pocketWatch) {
    handleAction(inventory, "take", pocketWatch);
}

void Actions::dropPocketWatch(Inventory& inventory, Items* pocketWatch) {
    handleAction(inventory, "drop", pocketWatch);
}

void Actions::usePocketWatch(Inventory& inventory, Items* pocketWatch) {
    handleAction(inventory, "use", pocketWatch);
}


//dealing with mad hatters hat
void Actions::takemadHattersHat(Inventory& inventory, Items* madHattersHat) {
    handleAction(inventory, "take", madHattersHat);
}

void Actions::dropmadHattersHat(Inventory& inventory, Items* madHattersHat) {
    handleAction(inventory, "drop", madHattersHat);
}

void Actions::usemadHattersHat(Inventory& inventory, Items* madHattersHat) {
    handleAction(inventory, "use", madHattersHat);
}


//dealing with drink me bottle
void Actions::takedrinkMeBottle(Inventory& inventory, Items* drinkMeBottle) {
    handleAction(inventory, "take", drinkMeBottle);
}
    
void Actions::dropdrinkMeBottle(Inventory& inventory, Items* drinkMeBottle) {
    handleAction(inventory, "drop", drinkMeBottle);
}
    
void Actions::usedrinkMeBottle(Inventory& inventory, Items* drinkMeBottle) {
    handleAction(inventory, "use", drinkMeBottle);
}


//deaaling with eat me cake
void Actions::takeeatMeCake(Inventory& inventory, Items* eatMeCake) {
    handleAction(inventory, "take", eatMeCake);
}

void Actions::dropeatMeCake(Inventory& inventory, Items* eatMeCake) {
    handleAction(inventory, "drop", eatMeCake);   
}
    
void Actions::useeatMeCake(Inventory& inventory, Items* eatMeCake) {
    handleAction(inventory, "use", eatMeCake);
}


//dealing with card soldiers
void Actions::takecardSoldiers(Inventory& inventory, Items* cardSoldiers) {
    handleAction(inventory, "take", cardSoldiers);
}

void Actions::dropcardSoldiers(Inventory& inventory, Items* cardSoldiers) {
    handleAction(inventory, "drop", cardSoldiers);
}

void Actions::usecardSoldiers(Inventory& inventory, Items* cardSoldiers) {
    handleAction(inventory, "use", cardSoldiers);
}


//dealing with chronosphere
void Actions::takechronosphere(Inventory& inventory, Items* chronosphere) {
    handleAction(inventory, "take", chronosphere);
}
    
void Actions::dropchronosphere(Inventory& inventory, Items* chronosphere) {
    handleAction(inventory, "drop", chronosphere);
}
    
void Actions::usechronosphere(Inventory& inventory, Items* chronosphere) {
    handleAction(inventory, "use", chronosphere);
}


//dealing with key
void Actions::takekey(Inventory& inventory, Items* key) {
    handleAction(inventory, "take", key);
}

void Actions::dropkey(Inventory& inventory, Items* key) {
    handleAction(inventory, "drop", key);
}
    
void Actions::usekey(Inventory& inventory, Items* key) {
    handleAction(inventory, "use", key);
}


//dealing with comfits
void Actions::takecomfits(Inventory& inventory, Items* comfits) {
    handleAction(inventory, "take", comfits);
}
    
void Actions::dropcomfits(Inventory& inventory, Items* comfits) {
    handleAction(inventory, "drop", comfits);
}

void Actions::usecomfits(Inventory& inventory, Items* comfits) {
    handleAction(inventory, "use", comfits);
}


//dealing with vorpal sword
void Actions::takevorpalSword(Inventory& inventory, Items* vorpalSword) {
    handleAction(inventory, "take", vorpalSword);
}

void Actions::dropvorpalSword(Inventory& inventory, Items* vorpalSword) {
    handleAction(inventory, "drop", vorpalSword);
}

void Actions::usevorpalSword(Inventory& inventory, Items* vorpalSword) {
    handleAction(inventory, "use", vorpalSword);
}


//dealing with cheshire cat smile
void Actions::takecheshireSmile(Inventory& inventory, Items* cheshireSmile) {
    handleAction(inventory, "take", cheshireSmile);
}

void Actions::dropcheshireSmile(Inventory& inventory, Items* cheshireSmile) {
    handleAction(inventory, "drop", cheshireSmile);
}

void Actions::usecheshireSmile(Inventory& inventory, Items* cheshireSmile) {
    handleAction(inventory, "use", cheshireSmile);
}


//dealing with doorknob
void Actions::takedoorknob(Inventory& inventory, Items* doorknob) {
    handleAction(inventory, "take", doorknob);
}

void Actions::dropdoorknob(Inventory& inventory, Items* doorknob) {
    handleAction(inventory, "drop", doorknob);
}

void Actions::usedoorknob(Inventory& inventory, Items* doorknob) {
    handleAction(inventory, "use", doorknob);
}


//dealing with oraculum
void Actions::takeoraculum(Inventory& inventory, Items* oraculum) {
    handleAction(inventory, "take", oraculum);
}

void Actions::droporaculum(Inventory& inventory, Items* oraculum) {
    handleAction(inventory, "drop", oraculum);
}

void Actions::useoraculum(Inventory& inventory, Items* oraculum) {
    handleAction(inventory, "use", oraculum);
}

//perform action
void Actions::performAction(Inventory& inventory, const std::string& action) {
    
    cout << endl;
    cout << "Enter the number of the item you want to handle: " << endl;
    int selectedItem;
    cin >> selectedItem;

    if (selectedItem <= 1 && selectedItem >= 12) {
        cout << "Invalid item number." << endl;
        cout << endl;
    } 
    
    switch(selectedItem) {
        case 1:
        if (action == "take") {
            takePocketWatch(inventory, Items::getPocketWatch());

        } else if (action == "drop") {
            dropPocketWatch(inventory, Items::getPocketWatch());

        } else if (action == "use") {
            usePocketWatch(inventory, Items::getPocketWatch());

        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 2:
        if (action == "take") {
            takedrinkMeBottle(inventory, Items::getdrinkMeBottle());

        } else if (action == "drop") {
            dropdrinkMeBottle(inventory, Items::getdrinkMeBottle());

        } else if (action == "use") {
            usedrinkMeBottle(inventory, Items::getPocketWatch());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 3:
        if (action == "take") {
            takeeatMeCake(inventory, Items::geteatMeCake());

        } else if (action == "drop") {
            dropeatMeCake(inventory, Items::geteatMeCake());

        } else if (action == "use") {
            useeatMeCake(inventory, Items::getPocketWatch());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 4:
        if (action == "take") {
            takekey(inventory, Items::getkey());

        } else if (action == "drop") {
            dropkey(inventory, Items::getkey());

        } else if (action == "use") {
            usekey(inventory, Items::getkey());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 5:
        if (action == "take") {
            takedoorknob(inventory, Items::getdoorKnob());

        } else if (action == "drop") {
            dropdoorknob(inventory, Items::getdoorKnob());

        } else if (action == "use") {
            usedoorknob(inventory, Items::getdoorKnob());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 6:
        if (action == "take") {
            takeoraculum(inventory, Items::getoraculum());

        } else if(action == "drop") {
            droporaculum(inventory, Items::getoraculum());

        } else if (action == "use") {
            useoraculum(inventory, Items::getoraculum());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 7: 
        if (action == "take") {
            takechronosphere(inventory, Items::getchronosphere());

        } else if (action == "drop") {
            dropchronosphere(inventory, Items::getchronosphere());

        } else if (action == "use") {
            usechronosphere(inventory, Items::getchronosphere());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 8:
        if (action == "take") {
            takemadHattersHat(inventory, Items::getmadHattersHat());

        } else if (action == "drop") {
            dropmadHattersHat(inventory, Items::getmadHattersHat());

        } else if (action == "use") {
            usemadHattersHat(inventory, Items::getmadHattersHat());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 9:
        if (action == "take") {
            takecheshireSmile(inventory, Items::getcheshireCatsSmile());

        } else if (action == "drop") {
            dropcheshireSmile(inventory, Items::getcheshireCatsSmile());

        } else if (action == "use") {
            usecheshireSmile(inventory, Items::getcheshireCatsSmile());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 10:
        if (action == "take") {
            takecardSoldiers(inventory, Items::getcardSoldiers());

        } else if (action == "drop") {
            dropcardSoldiers(inventory, Items::getcardSoldiers());

        } else if (action == "use") {
            usecardSoldiers(inventory, Items::getcardSoldiers());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 11:
        if (action == "take") {
            takecomfits(inventory, Items::getcomfits());

        } else if (action == "drop") {
            dropcomfits(inventory, Items::getcomfits());

        } else if (action == "use") {
            usecomfits(inventory, Items::getcomfits());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        case 12:
        if (action == "take") {
            takevorpalSword(inventory, Items::getvorpalSword());

        } else if (action == "drop") {
            dropvorpalSword(inventory, Items::getvorpalSword());

        } else if (action == "use") {
            usevorpalSword(inventory, Items::getvorpalSword());
            
        } else {
            cout << "Invalid action. " << endl;
        }

        break;

        default:
            cout << "Invalid item number" << endl;
    }  
    
}