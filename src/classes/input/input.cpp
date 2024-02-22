#include "input.h"
#include <iostream>
#include <cstdlib>
using namespace std;

string Input::input(string msg) {
    string buf;
    cout << msg << endl;
    getline(cin, buf);

    return buf;
}