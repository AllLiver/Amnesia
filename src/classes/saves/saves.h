//Emil Gruenwald
#ifndef SAVES_H
#define SAVES_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Saves{
public:
    void save(string filename, vector<string> weapons, vector<string> shields, vector<string> spells);
    void load(string filename);
};

#endif