#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include "stdlib.h"
#include <fstream>
#include <sstream>
#include <list>
#include <deque>

#include "header.h"

using std::string;

student::student() { };

string student::getVardas() const {
    return vardas;
}

string student::getPavarde() const {
    return pavarde;
}

double student::getVid() const {
    return vid;
}

void student::setVardas(string vardas) {
    this->vardas = vardas;
}

void student::setPavarde(string pavarde) {
    this->pavarde = pavarde;
}

void student::setVid(double vid) {
    this->vid = vid;
}