#include <iostream>
#include <vector>
#include "sortic.h"

using namespace std;


int cifrovizacia (string str){
    int ch;
    char sym;
    for (int i = 0; i < str.size(); i++){
        sym = str[i];
        ch = ch * 10 + (sym - '0');
    }
    return ch;
}
int minimum (vector <int> mass){
    int mini;
    mini = 2147483647;
    for (int i = 0; i < mass.size(); i++){
        if (mass[i] <= mini)
            mini = mass[i];
    }
    return mini;
}

void zamen (const vector <int> &cop, vector <int> &osn){
    for (int i = 0; i < cop.size(); i++)
        osn[i] = cop[i];
}
