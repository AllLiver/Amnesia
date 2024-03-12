#include "battle.h"

Battle::Battle(Player p, vector<Enemy> e) {
    player = p;
    enemies = e;
}

bool Battle::compareSpeed(Enemy e1, Enemy e2) {
    return (e1.speed > e2.speed); 
}

void Battle::fight() {
    bool dead = false;
    sort(enemies.begin(), enemies.end(), compareSpeed);
    while(true) {
        if (enemies.size() <= 0) {
            break;
        } else {
            for (int i = 0; i < enemies.size(); i ++) {
                cout << "The " + enemies[i].name + " attacks you! You take " + to_string(enemies[i].power) + " damage!";
                player.health -= enemies[i].power;
                if (player.health <= 0) {
                    cout << "You die";
                    dead = true;
                }
            }
        }
    }
}