#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>
#include <cstdlib>
using namespace std;

class Enemy {
public:
  int health, power, speed;
  string name;
  Enemy(string n, int h, int p, int s);
};

#endif