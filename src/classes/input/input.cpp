#include "input.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;



string Input::input(string msg) {
    for (;;) {
        string buf;
        cout << msg << endl;
        getline(cin, buf);

        bool doBreak = false;

        for (auto i = opts.begin(); i != opts.end(); i++) {
            if (buf == *i) {
                doBreak = true;
            }
        }

        if (doBreak == true) {
            return buf;
            break;
        } else {
            cout << "Invalid answer\n" << endl;
        }
    }
}