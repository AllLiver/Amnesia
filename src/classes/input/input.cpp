#include "input.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string lower = "abcdefghijklmnopqrstuvwxyz";

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
            cout << "Invalid answer\n" << endl;
        }
    }
}