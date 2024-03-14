//Emil Gruenwald
#include "enemy.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Enemy::Enemy(string n, int h, int p, int s) {
    health = h;
    power = p;
    speed = s;
    name = n;
}