#include <iostream>
#include <vector>
#include "player.h"
#include "classes/weapon/weapon.h"
#include "classes/shield/shield.h"
#include "classes/spell/spell.h"
using namespace std;

bool Player::hasweapon(string name) {
    bool has = false;
    for (int i = 0; i < weapons.size(); i ++) {
        if (weapons[i].name == name) {
            has = true;
        }
    }
    return has;
}

bool Player::hasshield(string name) {
    bool has = false;
    for (int i = 0; i < shields.size(); i ++) {
        if (shields[i].name == name) {
            has = true;
        }
    }
    return has;
}

bool Player::hasspell(string name) {
    bool has = false;
    for (int i = 0; i < spells.size(); i ++) {
        if (spells[i].name == name) {
            has = true;
        }
    }
    return has;
}