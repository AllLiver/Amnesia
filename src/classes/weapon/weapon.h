#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

class Weapon {
  public:
    int damage;
    string name;
    Weapon (string n, int d);
};

#endif