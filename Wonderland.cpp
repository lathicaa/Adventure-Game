//WONDERLAND.CPP 

//:Assignment4.cpp

/*
    Title: Assignment4.cpp
    Description: Wonderland cpp file (main file)
    Date: May 6th, 2024
    Author: Lathica Arunkumar
    Athabasca University ID: 3686817
    Version: 1.0
    Copyright: 2024 Lathica Arunkumar
*/

/*
DOCUMENTATION

Program Purpose: To create a text based player game, implementing oop principles.

Compile: g++ -std=c++11 control.cpp locations.cpp items.cpp characters.cpp actions.cpp inventory.cpp wonderland.cpp -o Assignment4
Execution: ./Assignment4

Classes: Book

Variables: 
gameOver: This boolean variable tracks whether the game is over. It is used in a loop to continue running the game until it's set to true.
locations: An object of the Locations class that represents the different locations in the game world. It keeps track of the current location of the player.
inventory: An object of the Inventory class that represents the items the player has collected during the game.
items: An object of the Items class that manages the items available in the game world. It loads item data from a file and provides functions to interact with items.
characters: An object of the Characters class that manages the characters present in the game world. It loads character data from a file and provides functions to interact with characters.
actions: An object of the Actions class that manages the actions the player can take in the game world. It loads action data from a file and provides functions to perform actions.
control: An object of the Control class that handles player input for moving between locations.
currentLocation: A pointer to a Locations object that represents the current location of the player in the game world.
locationDescriptionPrinted: A static boolean variable used in the printCharacter() function of the Locations class to track whether the location description has been printed.
locationdescriptions: An array of strings that stores descriptions for different locations in the game world.
itemdescriptions: An array of strings that stores descriptions for different items in the game world

*/

/*
TEST PLAN:

Normal Data Case: Moving between locations, adding items to inventory, removing items from inventory, using items in inventory

--------------------------------------------
WELCOME TO ALICE'S ADVENTURES IN WONDERLAND!
--------------------------------------------

Traveller, you must escape Wonderland through the Ocean of Time and find the Chronosphere!

Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
1
Added white Rabbits pocket watch to inventory. 

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
south

Moving south: 
Current Location: 
Underland: You are underneath Wonderland in the formidable and creepy Underland, the quite opposite of Wonderland. A realm of surreal wonder, is a dreamscape where reality and fantasy intertwine. Its landscapes shift and morph with ethereal energy, while ancient ruins and mystical forests hide secrets of the ages. Here, time dances to its own whims, and every corner holds the promise of enchantment and discovery. Its cloudy and grey, with an eery aura.
You've come across the Mad Hatter! Not only him, but also the Cheshire Cat! 
The Mad Hatter, a whimsical character who lives in the Underland, known for his love of tea parties and nonsensical riddles. With his colorful attire and perpetually confused demeanor, he adds a touch of delightful chaos to Wonderland!
The Cheshire Cat, mysterious and enigmatic, known for her mischievievous grin, which she will occassionally offer to a worthy traveller. She has the ability to appear and disappear at will. She can serve as a guide for you!

Mad Hatter: Why, hello there, my curious wanderer! Have you come to twirl with the teacups or dance a delightful ditty with the dodos in our whimsical wonderland? 

Cheshire Cat: Ignore him, he's crazy. I understand that you're looking for two possessions of ours: 

8. Mad Hatter's Hat: A magical hat that allows you to understand animals.

9. Chesire Cat's Smile: The magical smile of the Cheshire Cat will allow you to become invisible at will.

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
8
Added mad hatters hat to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
north

Moving north: 
Current Location: 
Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
drop

Enter the number of the item you want to handle: 
1
Removed white Rabbits pocket watch from inventory. 

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
w

Moving west: 
Current Location: 
Queen of Hearts Castle: You are in the heart of Wonderland, where the majestic castle of the Queen of Hearts stands. It's surrounded by intricate hearts rising from lush, emerald grounds. Guarded by red-and-white checkered towers, its corridors are filled with courtiers attending to the Queen's every whim, while the throne room, resplendent in gold and crimson, houses the infamous ruler herself, The Queen of Hearts.
Be on your toes - You've come across the Queen of Hearts! Don't get her mad.
The Queen of Hearts, the cruel leader of Wonderland, infamous for her short temper and love of executing anyone who displeases her. She is obsessed with maintaing order through fear, beware!

Queen of Hearts: Off with their shoes! Who is this!? If you speak I will send my card soldiers after you! All you travellers want the vorpal sword! 

10. Card Soldiers: The Queen of Heart's loyal and gruesome servants, will attack you if you try and enter the Queen of Hearts Castle.

11. Comfits: This scrumptious candy is the Queen of Hearts card soldier's favourite food! They may prove to be useful.

12. Vorpal sword: The most powerful weapon in all of wonderland, will give you increased combat and help you defeat enemies.

Queen of Hearts: Card Soldiers! Attack! 

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
11
Added comfits to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
east

Moving east: 
Current Location: 
Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 

6
Added oraculum to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
e

Moving east: 
Current Location: 
Safe Room: You are in the safe room, hidden within sturdy walls underground. It is a refuge for travellers like you, built by your predescessors. Soft lighting casts a gentle glow over the room, casting shadows across the food, water, and medical supplies on the table. Take some time to collect yourself and inspect your inventory, but be fast traveller, you can't stay for long.
Hm. There doesn't seem to be any people or items here.

Enter an action to handle these items (take/drop/use):
drop

Enter the number of the item you want to handle: 
6
Removed oraculum from inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
west

Moving west: 
Current Location: 
Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
2
Added drink me bottle to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
west

Moving west: 
Current Location: 
Queen of Hearts Castle: You are in the heart of Wonderland, where the majestic castle of the Queen of Hearts stands. It's surrounded by intricate hearts rising from lush, emerald grounds. Guarded by red-and-white checkered towers, its corridors are filled with courtiers attending to the Queen's every whim, while the throne room, resplendent in gold and crimson, houses the infamous ruler herself, The Queen of Hearts.
Be on your toes - You've come across the Queen of Hearts! Don't get her mad.
The Queen of Hearts, the cruel leader of Wonderland, infamous for her short temper and love of executing anyone who displeases her. She is obsessed with maintaing order through fear, beware!

Queen of Hearts: Off with their shoes! Who is this!? If you speak I will send my card soldiers after you! All you travellers want the vorpal sword! 

10. Card Soldiers: The Queen of Heart's loyal and gruesome servants, will attack you if you try and enter the Queen of Hearts Castle.

11. Comfits: This scrumptious candy is the Queen of Hearts card soldier's favourite food! They may prove to be useful.

12. Vorpal sword: The most powerful weapon in all of wonderland, will give you increased combat and help you defeat enemies.

Queen of Hearts: Card Soldiers! Attack! 

Enter an action to handle these items (take/drop/use):
use

Enter the number of the item you want to handle: 
11
Using Comfits: You've gained the card soldiers trust! They're not attacking anymore!


What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
west

X: You can't go west from here.
Be on your toes - You've come across the Queen of Hearts! Don't get her mad.
The Queen of Hearts, the cruel leader of Wonderland, infamous for her short temper and love of executing anyone who displeases her. She is obsessed with maintaing order through fear, beware!

Queen of Hearts: Off with their shoes! Who is this!? If you speak I will send my card soldiers after you! All you travellers want the vorpal sword! 

10. Card Soldiers: The Queen of Heart's loyal and gruesome servants, will attack you if you try and enter the Queen of Hearts Castle.

11. Comfits: This scrumptious candy is the Queen of Hearts card soldier's favourite food! They may prove to be useful.

12. Vorpal sword: The most powerful weapon in all of wonderland, will give you increased combat and help you defeat enemies.

Queen of Hearts: Card Soldiers! Attack! 

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
12
Added vorpal sword to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
west

X: You can't go west from here.
Be on your toes - You've come across the Queen of Hearts! Don't get her mad.
The Queen of Hearts, the cruel leader of Wonderland, infamous for her short temper and love of executing anyone who displeases her. She is obsessed with maintaing order through fear, beware!

Queen of Hearts: Off with their shoes! Who is this!? If you speak I will send my card soldiers after you! All you travellers want the vorpal sword! 

10. Card Soldiers: The Queen of Heart's loyal and gruesome servants, will attack you if you try and enter the Queen of Hearts Castle.

11. Comfits: This scrumptious candy is the Queen of Hearts card soldier's favourite food! They may prove to be useful.

12. Vorpal sword: The most powerful weapon in all of wonderland, will give you increased combat and help you defeat enemies.

Queen of Hearts: Card Soldiers! Attack! 

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
10
Added card soldiers to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
east

Moving east: 
Current Location: 
Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
dro 

Enter the number of the item you want to handle: 
10
Invalid action. 

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
north

Moving north: 
Current Location: 
Time's Castle: You are in Time's Castle, a fortress beyond the bounds of existence of Wonderland. It stands as a monument to the eternal flow of moments and memories. Woven from shimmering silver and gold, its spires reach towards the heavens, housing the Chamber of Chronos where the Timekeeper guides the passage of eternity amidst relics of epochs past.
Beware! You've come across Time! 
Time, part human, part clock. He has the ability to control the passage of time and rules time. He lives at Time's Castle, and posseses the chronosphere, and access to the Ocean of Time. Beware, as not much is known about him!

Time: Well hello traveller, I am the one and only Time. I see it that you would like the chronosphere! I will not give it up without a fight!

7. Chronosphere: A glowing, spinning, magic sphere that powers all time, allows the person who posses it to travel to the ocean of time and escape Wonderland.

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
7
Added chronosphere to inventory.

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 
north

Moving north: 
Current Location: 
Ocean of Time: You are in the Ocean of Time, which is on the very outskirts of Wonderland. This place stretches to infinity, its depths shimmering with the reflections of a thousand memories. Waves of time flow and crash, carrying whispers of forgotten dreams and untold stories. Here, the boundaries of time and reality blur, and the passage of time is fluid, offering glimpses into the mysteries of existence. 
Safe sailing, traveller. Wonderland will miss you.



Bad Data Case 1: Invalid action (Number)

--------------------------------------------
WELCOME TO ALICE'S ADVENTURES IN WONDERLAND!
--------------------------------------------

Traveller, you must escape Wonderland through the Ocean of Time and find the Chronosphere!

Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
2

Enter the number of the item you want to handle: 
3
Invalid action. 

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 



Bad Data Case 2: Invalid Action (word thats not take, drop, or use)

--------------------------------------------
WELCOME TO ALICE'S ADVENTURES IN WONDERLAND!
--------------------------------------------

Traveller, you must escape Wonderland through the Ocean of Time and find the Chronosphere!

Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
eat

Enter the number of the item you want to handle: 
2
Invalid action. 

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 




Bad Data Case 3: Invalid Item Number (Number thats not in range of 1-12)

--------------------------------------------
WELCOME TO ALICE'S ADVENTURES IN WONDERLAND!
--------------------------------------------

Traveller, you must escape Wonderland through the Ocean of Time and find the Chronosphere!

Rabbit Hole: You are inside a dark, dimly lit rabbit hole. There is a small door in front of you, with a small table with a key on it, and a white fuzzy rabbit staring back at you.
You've come across the White Rabbit!
The White Rabbit, always in a hurry and very fretful. He is always in his waistcoat and has his ticking pocket watch, he is an anxiety-ridden rabbit. He is always willing to help you!

White Rabbit: Hello traveller, welcome to Wonderland. I am the white rabbit. You are in the rabbit hole. There are several items here, theres some that may be of use to you: 

1. White Rabbit's Pocket Watch: A magical watch that ticks faintly, allows you to summon the white rabbit to assist you once.

2. Drink me Bottle: A magical potion that makes you shrink to the size of a spider when you drink it.

3. Eat me Cake: A magical cake that makes you grow to the size of a giant when you eat it.

4. Key: This key allows you to awaken the magic doorknob which will aid you in entering Wonderland.

5. Doorknob: The magic doorknob has a mind of its own, guarding the entrance of Wonderland. 

6. Oraculum: An ancient scroll that tells the future of the holder. It will guide you through Wonderland, telling you the right places to go.

Enter an action to handle these items (take/drop/use):
take

Enter the number of the item you want to handle: 
25
Invalid item number

What direction would you like to go? (NORTH , EAST, SOUTH, OR WEST?) 



Bad Data Case 4: Invalid item number (word)
->goes into infinite loop


DISCUSSION: This program prints out multiple attributes of a book object. If the incorrect data type is passed as a parameter in either the set methods or the parameters, 
the code will not compile. Given the right parameters, this code executes as required, the set and get methods can access the data as required. 

*/

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

    while(true) {
     
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