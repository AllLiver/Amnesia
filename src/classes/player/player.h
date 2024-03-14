#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "../weapon/weapon.h"
#include "../shield/shield.h"
#include "../spell/spell.h"
using namespace std;

class Player {
    public:
        int health, maxHealth, maxMagicPower, magicPower, speed, legCount;
        string equippedWeapon, equippedShield;
        vector<Weapon> weapons;
        vector<Spell> spells;
        vector<Shield> shields;

        Player();
        bool hasweapon(string name);
        bool hasspell(string name);
        bool hasshield(string name);
        void replaceweapon(string name, Weapon w);
        void replacespell(string name, Spell s);
        void replaceshield(string name, Shield s);
};

#endif