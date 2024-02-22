#include <iostream>
#include <cstdlib>
#include "classes/input/input.h"
using namespace std;

int main() {
    Input i;
    string buf = i.input("Enter something to be printed");
    cout << buf << endl;
}
