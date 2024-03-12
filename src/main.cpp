#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "classes/input/input.h"
#include "classes/player/player.h"
using namespace std;
 

int main() {
    Player player;
    cout << "Welcome to Amnesia. Let the adventure begin. \n\n Cold. That’s the first thing you feel. Oppressive cold. You look around at unfamiliar surroundings. You don’t know where you are. Actually…\n\n You don’t know \e[3mwho\e[23m you are either. If you did know, you’d probably have some clue to why you’re locked up in this dungeon. Weathered gray brick walls surround you on all sides. The only items in the room are a dimly burning torch on the wall and a rusty sword on the floor. Directly across from you is a sturdy looking wooden door. The only question you have left is…\n\nWhat do you do now?" << endl;
    cout << "At any time, simply enter HELP to recieve help with global commands\n" << endl;
    Input opt1;
    opt1.opts.push_back("sword");
    opt1.opts.push_back("torch");
    string chosenItem = opt1.input("Pick up the SWORD or TORCH? ... what will you choose?");
    if(chosenItem == "sword") {
        player.weapons.push_back(Weapon("Rusty Sword", 3));
        cout << "\nWhen you reach the rusty sword from the ground, you successfully pick it up. However, a more pressing issue has just presented itself: You are chained to the wall by your ankle. A rusty manacle connected to an equally rusty chain. You can’t move any further unless this chain is dealt with." << endl;
    } else {
        player.weapons.push_back(Weapon("Lit Torch", 2));
        cout << "\nWhen you reach the lit torch from the wall, you successfully pick it up. However, a more pressing issue has just presented itself: You are chained to the wall by your ankle. A rusty manacle connected to an equally rusty chain. You can’t move any further unless this chain is dealt with." << endl;
    }

    bool chainBroken = false;

    while(true){
        Input action2;

        action2.opts.push_back("destroy");
        action2.opts.push_back("door");
        string chosenAction;
        if (player.hasweapon("Rusty Sword") && player.legCount==2) {
            action2.opts.push_back("leg");
            chosenAction = action2.input("You can either cut off your LEG, go to the DOOR, or DESTROY the chain and ruin your sword... what will you choose?");
            
            

        } else {
            chosenAction = action2.input("You can either go to the DOOR, or DESTROY the chain and ruin your torch... what will you choose?");
        }
        if(chosenAction == "door") {
            cout << "\nYou try to walk to the door but you are stopped by a manacle around your ankle. You are chained to the wall. That must be dealt with before you can leave." << endl;
            continue;
        }
        if(chosenAction == "destroy") {
            if (player.hasweapon("Rusty Sword")) {
                cout << "\nYou hit the chain with the rusty sword, and the chain -- being weakened by rust -- breaks easily. The manacle remains attached but you are free from the wall. Unfortunately, due to your use of the sword, the blade has been weakened." << endl;
                player.replaceweapon("Rusty Sword", Weapon("Dented Sword", 2));
            } else if (player.hasweapon("Lit Torch")) {
                cout << "\nYou hit the chain with the torch, and the chain -- being weakened by rust -- breaks easily. The manacle remains attached but you are free from the wall. Unfortunately, due to your use of the torch, the flame has burnt out." << endl;
                player.replaceweapon("Lit Torch", Weapon("Burnt Torch", 1));
            }
            break;
        }
        if(chosenAction == "leg") {
            cout << "\nOut of desperation, you \e[3m cut off your leg\e[23m. It wasn’t as hard as you expected. You are now free to roam the room, minus one leg of course." << endl;
            player.legCount = 1;
            player.speed /= 2;
            break;
        }
    }

    while(true){
        Input inRoom;
        inRoom.opts.push_back("weapon");
        inRoom.opts.push_back("door");
        string chosenAction = inRoom.input("You are now free to move around the room, letting you pick up the other WEAPON, and you can reach the DOOR... what will you choose?");
        if(chosenAction == "weapon") {
            if (player.hasweapon("Dented Sword")) {
                player.weapons.push_back(Weapon("Lit Torch", 2));
                cout << "\nYou now easily take the torch from the wall.\n" << endl;
            } else if (player.hasweapon("Burnt Torch")) {
                player.weapons.push_back(Weapon("Rusty Sword", 3));
                cout << "\nYou now easily pick up the sword.\n" << endl;
            }
        }
        if(chosenAction == "door") {
            cout << "\nYou walk up to the door and open it.\n";
            break;
        }
    }

    //Paths
    Input spellChoice;
    spellChoice.opts.push_back("Red");
    spellChoice.opts.push_back("Green");
    spellChoice.opts.push_back("Blue");
    cout << "You walk down the hallway and reach a door, engraved with faintly glowing runes. It opens with no resistance into a small library packed with books. Three tomes catch your eye. You have a sinking feeling you will only be able to read one of them.";
    string chosenSpell = spellChoice.input("Which do you choose? The well worn RED book? The delicate looking GREEN book? Or the sturdy looking BLUE book?");
    if (chosenSpell == "red"){
        player.spells.push_back(Spell("Firebolt", 5, 0, 0, 0, 3, 1));
        cout << "\nYou open the red book. It contains the instructions for a basic offensive spell that shoots fire in the direction of an enemy. The spell is called firebolt\n";
    }
    if (chosenSpell == "green"){
        player.spells.push_back(Spell("Heal", 0, 0, 5, 0, 5, 0));
        cout << "\nYou open the green book. It contains the instruction for a basic protection spell that will heal the wounds of the user. The spell is called heal\n";
    }
    if (chosenSpell == "blue"){
        player.spells.push_back(Spell("Slow", 0, 0, 0, 3, 2, 1));
        cout << "\nYou open the blue book. It contains the instructions for a curse that will weaken an enemy. The spell is called slow\n";
    }
}