#include <iostream>
#include <string>
#include <vector>
#include "../weapon/weapon.h"
#include "../shield/shield.h"
#include "../spell/spell.h"
using namespace std;

class Player {
    public:
        int health, maxHealth, speed, legCount;
        vector<Weapon> weapons;
        vector<Spell> spells;
        vector<Shield> shields;

        Player();
        bool hasweapon(string name);
        bool hasspell(string name);
        bool hasshield(string name);
};