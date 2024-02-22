#include "input.h"
#include <iostream>
#include <cstdlib>
using namespace std;

string Input::input(string msg) {
    string buf;
    cout << msg << endl;
    cin >> buf;

    return buf;
}