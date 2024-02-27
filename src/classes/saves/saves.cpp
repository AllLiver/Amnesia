#include <iostream>
#include <fstream>
#include <vector>
#include "saves.h"
using namespace std;

void Saves::save(string filename, vector<string> weapons, vector<string> shields, vector<string> spells) {
    ofstream file(filename);
    for (int i = 0; i < weapons.size(); i ++) {
        file << weapons[i] << ", ";
    }
    file << endl;
    for (int i = 0; i < shields.size(); i ++) {
        file << shields[i] << ", ";
    }
    file << endl;
    for (int i = 0; i < spells.size(); i ++) {
        file << spells[i] << ", ";
    }
    file << endl;
}

void Saves::load(string filename) {
    
}