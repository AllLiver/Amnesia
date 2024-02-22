#include "img.h"
#include <iostream>
#include <fstream>
using namespace std;

void Image::print_img(string filename) {
    string line;
    vector<string> entire;
    fstream myfile;
    entire.clear();
    myfile.open(filename);
    while (getline (myfile, line)) {
        entire.emplace_back(line);
    }
    myfile.close();
    for(int i = 0; i < entire.size(); i ++) {
        cout << entire[i] + "\n";
    }
}

// Assuming that "file.txt" exists and has less lines than 4611686018427387903
// this code will print the files contents