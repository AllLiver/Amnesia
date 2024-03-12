// Oliver Fedderson
#include "input.h"
#include "../player/player.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string lower = "abcdefghijklmnopqrstuvwxyz";

Input::Input(Player dplr) {
    plr = dplr;
}

string Input::input(string msg) {
    for (;;) {
        string buf;
        cout << msg << endl;
        getline(cin, buf);
        string bufLower;

        for(int i = 0; i < buf.size(); i++) {
            bool isUpper = false;
            char a = buf[i];
            for(int x = 0; x < 26; x++) {
                if(buf[i] == upper[x]) {
                    isUpper = true;
                    a = lower[x];
                    break;
                } 
            }
            bufLower += a;
        }

        bool doBreak = false;

        for (auto i = opts.begin(); i != opts.end(); i++) {
            if (bufLower == *i) {
                doBreak = true;
                break;
            }
        }

        if (doBreak == true) {
            return bufLower;
            break;
        } else {
            if (bufLower == "help") {
                cout << "\nSome commands you can always do (except in battle) are:\nin: displays your inventory\ndrop: permanently drops a spell or weapon from your inventory" << endl;
            } else if (bufLower == "in") {

            } else {
                cout << "Invalid answer\n" << endl;
            }
        }
    }
}