#include <iostream>
#include <string>
#include <vector>
#include "classes/weapon/weapon.h"
#include "classes/shield/shield.h"
#include "classes/spell/spell.h"

class Player {
public:
    int health, maxHealth, speed;
    vector<Weapon> weapons;
    vector<Spell> spells;
    vector<Shield> shields;
};