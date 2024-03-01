#include <iostream>
#include <vector>
#include "player.h"
#include "classes/weapon/weapon.h"
#include "classes/shield/shield.h"
#include "classes/spell/spell.h"
using namespace std;

class Player {
public:
    int health, maxHealth, speed;
    vector<Weapon> weapons;
    vector<Spell> spells;
    vector<Shield> shields;
};