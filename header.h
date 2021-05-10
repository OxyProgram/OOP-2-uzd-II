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

class Person {
    public:
        virtual void setVardas(string vardas) = 0;
        virtual void setPavarde(string pavarde) = 0;
        virtual string getVardas() const = 0;
        virtual string getPavarde() const = 0;
    protected:
        string vardas;
        string pavarde;

};

class student: public Person {
    private:
        double vid = 0.0;
    public:
        student();
        student(const student &s);
        student& operator =(const student &s) {
            setVardas(s.getVardas());
            setPavarde(s.getPavarde());
            setVid(s.getVid());
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
