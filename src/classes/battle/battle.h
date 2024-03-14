#ifndef BATTLE_H
#define BATTLE_H

#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include "../enemy/enemy.h"
#include "../player/player.h"
#include "../input/input.h"
using namespace std;

class Battle {
    public:
        vector<Enemy> enemies;
        Player player;
        Battle(Player p, vector<Enemy> e);
        void fight();
        bool compareSpeed(Enemy e1, Enemy e2);
};

#endif