//
// Created by noah on 22/09/23.
//
#include <iostream>
using namespace std;

#include "Suite.h"

Suite::Suite(float su0, float sun, unsigned int sn) {
    u0 = su0;
    un = sun;
    n = sn;
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

unsigned int Suite::get_n() const {
    return n;
}

void Suite::set_u0(float su0) {
    u0 = su0;
}

void Suite::set_un(float sun) {
    un = sun;
}

void Suite::set_n(unsigned int sn) {
    n = sn;
}
