#include "Patient.h"
#include "Doctor.h"
#include "Medicine.h"
#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"

using namespace std;

Patient::Patient()
{
    //ctor
}

Patient::~Patient()
{
    //dtor
}


void Patient :: View(Doctor Pdoctors,Medicine Pmedicine,Disease Pdisease)
{
    cout << "Your Name: " <<  Getname() << endl ;
    cout << "Your Age: " << Getage() << endl ;
    cout << "Your Gender: " << Getgender() << endl ;
    cout << endl ;
    cout << "Your Disease " << endl ;
    Pdisease.ViewDiseases();
    cout << endl ;
    cout << "You can take the Medicine" << endl ;
    Pmedicine.ViewM();
    cout << endl ;
    cout << "You Can visit Doctor " << endl ;
    Pdoctors.View();
    cout << endl ;
    cout << "Get well Soon :)" << endl ;
}
