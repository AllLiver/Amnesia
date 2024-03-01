#include <iostream>
#include <cstdlib>
#include <vector>
#include "classes/input/input.h"
#include "classes/player/player.h"
using namespace std;
 

int main() {
    Player player;
    cout << "Welcome to Amnesia. Let the adventure begin. \n\n Cold. That’s the first thing you feel. Oppressive cold. You look around at unfamiliar surroundings. You don’t know where you are. Actually…\n\n You don’t know \e[3mwho\e[23m you are either. If you did know, you’d probably have some clue to why you’re locked up in this dungeon. Weathered gray brick walls surround you on all sides. The only items in the room are a dimly burning torch on the wall and a rusty sword on the floor. Directly across from you is a sturdy looking wooden door. The only question you have left is…\n\n What do you do now?" << endl;
    Input opt1;
    opt1.opts.push_back("sword");
    opt1.opts.push_back("torch");
    string chosenItem = opt1.input("Pick up the sword or torch?");
    if(chosenItem == "sword") {
        cout << "\nWhen you reach the rusty sword from the ground, you successfully pick it up. However, a more pressing issue has just presented itself: You are chained to the wall by your ankle. A rusty manacle connected to an equally rusty chain. You can’t move any further unless this chain is dealt with." << endl;
    } else {
        cout << "\nWhen you reach the lit torch from the wall, you successfully pick it up. However, a more pressing issue has just presented itself: You are chained to the wall by your ankle. A rusty manacle connected to an equally rusty chain. You can’t move any further unless this chain is dealt with." << endl;
    }

    Input action1;
    action1.opts.push_back("door");
    string chosenAction = action1.input("Door");

    if(chosenAction == "door") {
        cout << "You try to walk to the door but you are stopped by a manacle around your ankle. You are chained to the wall. That must be dealt with before you can leave." << endl;
    }
}
