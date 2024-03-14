//Emil Gruenwald
#include <iostream>
#include <vector>
#include <algorithm>
#include "player.h"
#include "../weapon/weapon.h"
#include "../shield/shield.h"
#include "../spell/spell.h"
using namespace std;

Player::Player() {
    health = 20;
    maxHealth = 20;
    maxMagicPower = 10;
    magicPower = 10;
    speed = 10;
    legCount = 2;
}

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

void Player::replaceweapon(string name, Weapon w) {
    for (int i = 0; i < weapons.size(); i ++) {
        if (weapons[i].name == name) {
            weapons[i] = w;
        }
    }
}

void Player::replacespell(string name, Spell s) {
    for (int i = 0; i < spells.size(); i ++) {
        if (spells[i].name == name) {
            spells[i] = s;
        }
    }
}

void Player::replaceshield(string name, Shield s) {
    for (int i = 0; i < shields.size(); i ++) {
        if (shields[i].name == name) {
            shields[i] = s;
        }
    }
}