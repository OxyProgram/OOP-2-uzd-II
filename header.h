#ifndef HEADER_H
#define HEADER_H

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

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::list;
using std::deque;


class student {
    private:
        string vardas;
        string pavarde;
        double vid = 0.0;
    public:
        student();
        student(const student &s);
        student& operator =(const student &s) {
            vardas = s.vardas;
            pavarde = s.pavarde;
            vid = s.vid;
            return *this;
        }
        ~student();
        void setVardas(string vardas);
        void setPavarde(string pavarde);
        void setVid(double vid);
        string getVardas() const;
        string getPavarde() const;
        double getVid() const; 
};

void nuskaitytiDuomenis(vector<student> &studentai, int n);
void rusiuotiSarasa(vector<student> &studentai);
void rusiuotiStudentus(vector<student> &studentai, vector<student> &kieti, vector<student> &blogi);
void isvestiSarasa(vector<student> &studentai, string name);
void generuotiSarasa(int n);
void matuotiLaikaVector(vector<student> &studentai, int n);
// List functions
void nuskaitytiDuomenis(list<student> &studentai, int n);
void rusiuotiSarasa(list<student> &studentai);
void rusiuotiStudentus(list<student> &studentai, list<student> &blogi);
void isvestiSarasa(list<student> &studentai, string name);
void matuotiLaikaList(list<student> &studentai, int n);
// Deque functions
void nuskaitytiDuomenis(deque<student> &studentai, int n);
void rusiuotiSarasa(deque<student> &studentai);
void rusiuotiStudentus(deque<student> &studentai, deque<student> &blogi);
void isvestiSarasa(deque<student> &studentai, string name);
void matuotiLaikaDeque(deque<student> &studentai, int n);
// Testing functions
void rusiuotiStudentusVector(vector<student> &studentai, vector<student> &blogi);
bool isBlogas(student &s);



#endif /* HEADER_H */
