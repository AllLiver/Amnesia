#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

using namespace std;

class Weapon {
  public:
    int damage;
    string name;
    Weapon (string n, int d);
};

#endif