#include "input.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

string Input::input(string msg, vector<string> validArgs) {
    for (;;) {
        string buf;
        cout << msg << endl;
        getline(cin, buf);

        bool doBreak = false;

        for (auto i = validArgs.begin(); i != validArgs.end(); i++) {
            if (buf == *i) {
                doBreak = true;
            }
        }

        if (doBreak == true) {
            return buf;
            break;
        } else {
            cout << "Invalid answer" << endl;
        }
    }
}