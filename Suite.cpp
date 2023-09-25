//
// Created by noah on 22/09/23.
//
#include <iostream>
using namespace std;

#include "Suite.h"

Suite::Suite(float su0, float sun) {
    u0 = su0;
    un = sun;
}

Suite::~Suite() {
    cout << "La suite est detruite" << endl;
}

float Suite::get_u0() const {
    return u0;
}

float Suite::get_un() const {
    return un;
}


void Suite::set_u0(float su0) {
    u0 = su0;
}

void Suite::set_un(float sun) {
    un = sun;
}

void Suite::afficher_terme(unsigned int n) {
    un = u0;
    for(int i = 0; i < n; i++) {
        un = un/2 - 2;
    }
    cout << "Le terme de rang " << n << " est " << un << endl;
}
