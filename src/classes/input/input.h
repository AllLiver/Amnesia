#ifndef INPUT_H
#define INPUT_H

#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class Input {
    public:
        vector<string> opts;
        string input(string msg);
};

#endif