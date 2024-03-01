#include "shield.h"
#include <iostream>

using namespace std;

class Shield {
public:
    int block;
    string name;
    Shield (string n, int b) {
        name = n;
        block = b;
    }
};