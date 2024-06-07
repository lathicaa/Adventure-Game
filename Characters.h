//CHARACTERS.H

#ifndef CHARACTERS_H
#define CHARACTERS_H

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Characters {

private:

    string charfile = "characters.txt";

public:

    Characters();

    ~Characters();

    string nameDescriptionChar;

    void loadCharData(string charfile);
    void setCharDescription();

    //functions to print the character descriptions
    void printMadHatter();
    void printQueenHearts();
    void printWhiteRabbit();
    void printCheshireCat();
    void printTimeMan();

};


#endif
