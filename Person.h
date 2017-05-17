#ifndef PERSON_H
#define PERSON_H
#include "Medicine.h"
#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"
using namespace std;

class Person
{
    public:
        Person();
        Person(string,int,char);
        virtual ~Person();
        string Getname() { return name; }
        void Setname(string val) { name = val; }
        int Getage() { return age; }
        void Setage(int val) { age = val; }
        char Getgender() { return gender; }
        void Setgender(char val) { gender = val; }
        virtual void View() ;
    protected:
        string name;
        int age;
        char gender;
};

#endif // PERSON_H
