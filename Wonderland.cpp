//WONDERLAND.CPP 

#include "Wonderland.h"
#include "Control.h"
#include "Locations.h"
#include "Inventory.h"
#include "Items.h"
#include "Actions.h"
#include "Characters.h"

//constructor
Wonderland::Wonderland() {}

//flag to check if game has been won
bool gameOver;

//function to check if game conditions have been won
bool Wonderland::isGameWon() {
    return (locations.currentLocation == Locations::getoceanofTime() && inventory.hasItem(Items::getchronosphere()));
}

//function to start game
void Wonderland::startGame() {

    //load and set all the information from the textfiles
    locations.loadLocationData("locations.txt");
    locations.setRabbitHole();
    locations.setTimesCastle();
    locations.setLocationDescription();
    items.loadItemData("items.txt");
    items.setItemDescription();
    characters.loadCharData("characters.txt");
    characters.setCharDescription();
    actions.loadActionData("actions.txt");
    actions.setActionDescription();


    cout << endl;
    cout << "--------------------------------------------" << endl;
    cout << "WELCOME TO ALICE'S ADVENTURES IN WONDERLAND!" << endl;
    cout << "--------------------------------------------" << endl;
    cout << endl;
    cout << "Traveller, you must escape Wonderland through the Ocean of Time and find the Chronosphere!" << endl;
    cout << endl;

    while(true) { //game run condition had some bugs, temporarily running while true
     
        locations.currentLocation->printCharacter();

        string action = actions.getAction();
        actions.performAction(inventory, action);
        string direction = control.getDirection();
        control.moveLocations(locations.currentLocation, direction);
            
        // Check if the game is won
        /*if (isGameWon()) {
            cout << "Congratulations! You've reached the Ocean of Time and used the Chronosphere. You've won the game!" << endl;
            gameOver = true;
        }*/
    }
}

int main() {
    
    Wonderland wonderland;
    wonderland.startGame();

    return 0;
}