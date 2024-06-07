//CHARACTERS.CPP

#include "Characters.h"
#include <fstream>
using namespace std;

//create new pointers to character objects
Characters* madHatter = new Characters();
Characters* queenHearts = new Characters();
Characters* whiteRabbit = new Characters();
Characters* cheshireCat = new Characters();
Characters* timeMan = new Characters();

//array to store character descriptions
string chardescriptions[5];

//constructor
Characters::Characters() {}

//destructor
Characters::~Characters() {
    delete madHatter;
    delete queenHearts;
    delete whiteRabbit;
    delete cheshireCat;
    delete timeMan;
}

//load text file info into array
void Characters::loadCharData(string charfile) {

    ifstream openCharacterFile(charfile);
    if (openCharacterFile.good() == false) {  //check if the file opened
        cout << "Unable to open file:  " << charfile << endl;
    }

    int charindex{0};
    string charline;

    while (getline(openCharacterFile, charline)) {

        if(charindex >= 5) {
            cout << "error characters" << endl;
            break;
        }

        chardescriptions[charindex] = charline;
        charindex++;
    }

    openCharacterFile.close();

}

//set character description
void Characters::setCharDescription() {

    madHatter->nameDescriptionChar = chardescriptions[0];
    queenHearts->nameDescriptionChar = chardescriptions[1];
    whiteRabbit->nameDescriptionChar = chardescriptions[2];
    cheshireCat->nameDescriptionChar = chardescriptions[3];
    timeMan->nameDescriptionChar = chardescriptions[4];
}


//functions to print each character description
void Characters::printMadHatter() {
    cout << madHatter->nameDescriptionChar << endl;
}

void Characters::printQueenHearts() {
    cout << queenHearts->nameDescriptionChar << endl;
}

void Characters::printWhiteRabbit() {
    cout << whiteRabbit->nameDescriptionChar << endl;
}

void Characters::printCheshireCat() {
    cout << cheshireCat->nameDescriptionChar << endl;
}

void Characters::printTimeMan() {
    cout << timeMan->nameDescriptionChar << endl;
}
