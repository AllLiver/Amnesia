// Oliver Fedderson
#ifndef INPUT_H
#define INPUT_H

#include <cstdlib>
#include <string>
#include <vector>
#include "../player/player.h"
using namespace std;

class Input {
    public:
        vector<string> opts;
        Player plr;
        Input(Player dplr);
        string input(string msg);
};

#endif