#include <iostream>
#include <cstdlib>
#include <vector>
#include "classes/input/input.h"
#include "classes/player/player.h"
#include "classes/weapon/weapon.h"
using namespace std;
 

int main() {
    Player player;
    cout << "Welcome to Amnesia. Let the adventure begin. \n\n Cold. That’s the first thing you feel. Oppressive cold. You look around at unfamiliar surroundings. You don’t know where you are. Actually…\n\n You don’t know \e[3mwho\e[23m you are either. If you did know, you’d probably have some clue to why you’re locked up in this dungeon. Weathered gray brick walls surround you on all sides. The only items in the room are a dimly burning torch on the wall and a rusty sword on the floor. Directly across from you is a sturdy looking wooden door. The only question you have left is…\n\n What do you do now?" << endl;
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

    while(true){
        Input action2;
        action2.opts.push_back("destroy");
        action2.opts.push_back("door");
        string chosenAction;
        if (count(player.weapons.begin(), player.weapons.end(), Weapon("Rusty Sword", 3)) > 0) {
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
            if (count(player.weapons.begin(), player.weapons.end(), Weapon("Rusty Sword", 3)) > 0) {
                cout << "\nYou hit the chain with the rusty sword, and the chain -- being weakened by rust -- breaks easily. The manacle remains attached but you are free from the wall. Unfortunately, due to your use of the sword, the blade has been weakened." << endl;
                replace(player.weapons.begin(), player.weapons.end(), Weapon("Rusty Sword", 3), Weapon("Dented Sword", 2));
            } else if (count(player.weapons.begin(), player.weapons.end(), Weapon("Lit Torch", 2)) > 0) {
                cout << "\nYou hit the chain with the torch, and the chain -- being weakened by rust -- breaks easily. The manacle remains attached but you are free from the wall. Unfortunately, due to your use of the torch, the flame has burnt out." << endl;
                replace(player.weapons.begin(), player.weapons.end(), Weapon("Lit Torch", 2), Weapon("Burnt Torch", 1));
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
        inRoom.opts.push_back("leave");
        string chosenAction = inRoom.input("You are now free to move around the room, letting you pick up the other WEAPON, and you can reach the DOOR... what will you choose?");
        if(chosenAction == "weapon") {
            if (count(player.weapons.begin(), player.weapons.end(), Weapon("Dented Sword", 2)) > 0) {
                player.weapons.push_back(Weapon("Lit Torch", 2));
                cout << "\nYou now easily take the torch from the wall.";
            } else if (count(player.weapons.begin(), player.weapons.end(), Weapon("Burnt Torch", 1)) > 0) {
                player.weapons.push_back(Weapon("Rusty Sword", 3));
            }
        }
    }

    //Paths
    while(true){
        Input pathChoice;
        pathChoice.opts.push_back("left");
        pathChoice.opts.push_back("right");
        cout << "The hall you’re standing in stretches out into the darkness to the left and right of you. With your torch, you can see the left hall has a wooden door at the end of it painted with runes, and on the right you see that the ground is slanting down slightly into a darkness you can’t distinguish from here. The question is, which way should you go to escape?";
        string chosenPath = pathChoice.input("LEFT or RIGHT");
        if (chosenPath == "left"){

        }
        if(chosenPath == "right"){

        }

        else{
            cout << "Invalid Input";
            continue;
        }
    }
}

