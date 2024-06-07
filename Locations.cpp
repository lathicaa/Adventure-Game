//LOCATIONS.CPP

#include "Locations.h"
#include "Characters.h"

#include <fstream>
using namespace std;

//create new pointers to location objects 
Locations* rabbitHole = new Locations();
Locations* oceanofTime  = new Locations();
Locations* safeRoom  = new Locations();
Locations* timesCastle  = new Locations();
Locations* underland  = new Locations();
Locations* queenofHearts  = new Locations();

//array to load location descriptions 
string locationdescriptions[6];

//initalize current location to rabbithole
Locations* Locations::currentLocation = rabbitHole;


//destructor
Locations::~Locations() {
    delete rabbitHole;
    delete oceanofTime;
    delete safeRoom;
    delete timesCastle;
    delete underland;
    delete queenofHearts;
}

//set rabbit hole locations from rabbithole
void Locations::setRabbitHole() {
    rabbitHole->fixDirectionNorth(timesCastle);
    rabbitHole->fixDirectionEast(safeRoom);
    rabbitHole->fixDirectionSouth(underland);
    rabbitHole->fixDirectionWest(queenofHearts);
}

//set locations from timescastle 
void Locations::setTimesCastle() {
    timesCastle->fixDirectionSouth(rabbitHole);
    timesCastle->fixDirectionNorth(oceanofTime);
}

//destructor
Locations::Locations() {
    north = nullptr;
    east = nullptr;
    south = nullptr;
    west = nullptr;

    currentLocation = rabbitHole;
}

//fix directions 
void Locations::fixDirectionNorth(Locations* north2) {
    north = north2;
    if (north2 != nullptr) {
        north2->south = this;
    }
}

void Locations::fixDirectionEast(Locations* east2) {
    east = east2;
    if (east2 != nullptr) {
        east2->west = this;
    }
}

void Locations::fixDirectionWest(Locations* west2) {
    west = west2;
    if (west2 != nullptr) {
        west2->east = this;
    }
}

void Locations::fixDirectionSouth(Locations* south2) {
    south = south2;
    if (south2 != nullptr) {
        south2->north = this;
    }
}

//load location data from text file
void Locations::loadLocationData(string locationfile) {
    
    ifstream openLocationFile(locationfile);
    if (openLocationFile.good() == false) { //check if the file opened
        cout << "Unable to open file:  " << locationfile << endl;
    }

    int locationindex{0};
    string locationline;

    while (getline(openLocationFile, locationline)) {

        if(locationindex >= 6) {
            cout << "error loc" << endl;
            break;
        }

        locationdescriptions[locationindex] = locationline;
        locationindex++;
    }

    openLocationFile.close();
}

//set location descriptions from array
void Locations::setLocationDescription() {

    queenofHearts->nameDescriptionLoc = locationdescriptions[0];
    underland->nameDescriptionLoc = locationdescriptions[1];
    timesCastle->nameDescriptionLoc = locationdescriptions[2];
    oceanofTime->nameDescriptionLoc = locationdescriptions[3];
    safeRoom->nameDescriptionLoc = locationdescriptions[4];
    rabbitHole->nameDescriptionLoc = locationdescriptions[5];
}


//print the characters and items present in a location based on what the location is
void Locations::printCharacter() {

    // Flag to track whether the location description has been printed
    static bool locationDescriptionPrinted = false;

    if (!locationDescriptionPrinted) {
        cout << currentLocation->nameDescriptionLoc << endl;
        locationDescriptionPrinted = true;
    }

    if (currentLocation == rabbitHole) {
        cout << "You've come across the White Rabbit!" << endl;
        character2print->printWhiteRabbit();
        cout << endl;
        cout << "White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: " << endl;
        cout << endl << "1. ";
        item2print->printpocketWatch();
        cout << endl << "2. ";
        item2print->printdrinkMeBottle();
        cout << endl << "3. ";
        item2print->printeatMeCake();
        cout << endl << "4. ";
        item2print->printkey();
        cout << endl << "5. ";
        item2print->printdoorKnob();
        cout << endl << "6. ";
        item2print->printoraculum();
        cout << endl;

    } else if (currentLocation == timesCastle) {
        cout << "Beware! You've come across Time! " << endl;
        character2print->printTimeMan();
        cout << endl;
        cout << "Time: Well hello traveller, I am the one and only Time. I see it that you would like the chronosphere! I will not give it up without a fight!" << endl;
        cout << endl << "7. ";
        item2print->printchronosphere();
        cout << endl;
    
    } else if (currentLocation == underland) {
        cout << "You've come across the Mad Hatter! Not only him, but also the Cheshire Cat! " << endl;
        character2print->printMadHatter();
        character2print->printCheshireCat();
        cout << endl;
        cout << "Mad Hatter: Why, hello there, my curious wanderer! Have you come to twirl with the teacups or dance a delightful ditty with the dodos in our whimsical wonderland? " << endl;
        cout << endl;
        cout << "Cheshire Cat: Ignore him, he's crazy. I understand that you're looking for two possessions of ours: " << endl;
        cout << endl << "8. ";
        item2print->printmadHattersHat();
        cout << endl << "9. ";
        item2print->printcheshireCatsSmile();
        cout << endl;

    } else if (currentLocation == queenofHearts) {
        cout << "Be on your toes - You've come across the Queen of Hearts! Don't get her mad." << endl;
        character2print->printQueenHearts();
        cout << endl;
        cout << "Queen of Hearts: Off with their shoes! Who is this!? If you speak I will send my card soldiers after you! All you travellers want the vorpal sword! " << endl;
        cout << endl << "10. ";
        item2print->printcardSoldiers();
        cout << endl << "11. ";
        item2print->printcomfits();
        cout << endl << "12. ";
        item2print->printvorpalSword();
        cout << endl << "Queen of Hearts: Card Soldiers! Attack! " << endl;
        cout << endl;

    } else if (currentLocation == oceanofTime) {
        cout << "Safe sailing, traveller. Wonderland will miss you." << endl;
    } else {
        cout << "Hm. There doesn't seem to be any people or items here." << endl;
        cout << endl;
    }
}

Locations* Locations::getoceanofTime() {
    static Locations oceanofTime;
    return &oceanofTime;
}

Locations* Locations::getRabbitHole() {
    static Locations rabbitHole;
    return &rabbitHole;
}

Locations* Locations::getsafeRoom() {
    static Locations safeRoom;
    return &safeRoom;
}

Locations* Locations::getqueenOfHearts() {
    static Locations queenofHearts;
    return &queenofHearts;
}

Locations* Locations::getunderland() {
    static Locations underland;
    return &underland;
}

Locations* Locations::gettimescastle() {
    static Locations timesCastle;
    return &timesCastle;
}
