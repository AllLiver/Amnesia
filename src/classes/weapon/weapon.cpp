#include <iostream>
#include "weapon.h"

using namespace std;

class Weapon {
public:
  int damage;
  string name;
  Weapon (string n, int d) {
    name = n;
    damage = d;
  }
};