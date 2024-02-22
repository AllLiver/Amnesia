#include <iostream>
#include <cstdlib>
#include <vector>
#include "classes/input/input.h"
 

int main() {
    cout << "Welcome to Amnesia. Let the adventure begin. \n\n Cold. That’s the first thing you feel. Oppressive cold. You look around at unfamiliar surroundings. You don’t know where you are. Actually…\n\n You don’t know \e[3mwho\e[23m you are either. If you did know, you’d probably have some clue to why you’re locked up in this dungeon. Weathered gray brick walls surround you on all sides. The only items in the room are a dimly burning torch on the wall and a rusty sword on the floor. Directly across from you is a sturdy looking wooden door. The only question you have left is…\n\n What do you do now?" << endl;
    Input opt1;
    vector<string> opts{"sword", "torch"};
    opt1.input("Pick up the sword or torch?", opts);
}
