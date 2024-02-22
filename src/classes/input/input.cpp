#include "input.h"
#include <iostream>
#include <cstdlib>
using namespace std;

string Input::input() {
    string buf;
    cout << "Enter something" << endl;
    cin >> buf;

    return buf;
}