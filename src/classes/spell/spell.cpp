//Emil Gruenwald
#include "spell.h"
#include <iostream>
#include <algorithm>

using namespace std;

Spell::Spell(string n, int d, int db, int hb, int dd, int c, int t) {
  name = n;
  damage = d;
  damageBuff = db;
  healthBuff = hb;
  damageDebuff = dd;
  cost = c;
  targets = t;
}