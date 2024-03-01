#include "spell.h"
#include <iostream>

using namespace std;

class Spell {
public:
  int damage, damageBuff, healthBuff, damageDebuff, cost, targets;
  string name;
  Spell(string n, int d, int db, int hb, int dd, int c, int t) {
    name = n;
    damage = d;
    damageBuff = db;
    healthBuff = hb;
    damageDebuff = dd;
    cost = c;
    targets = t;
  }
};