#include <iostream>
#include "player.h"

class Player {
public:
    int health, maxHealth, speed;
    std::string weapons[5];
    std::string spells[10];
    std::string shields[3];
};