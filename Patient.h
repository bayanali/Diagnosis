#ifndef PATIENT_H
#define PATIENT_H
#include "Doctor.h"
#include "Medicine.h"
#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"
#include "Person.h"


using namespace std;


class Patient : public Person
{
    public:
        Patient();
        virtual ~Patient();
       void View(Doctor,Medicine,Disease);
       Doctor getPD ()
       {
           return Pdoctors;
       }
       Disease getPDI ()
       {
           return Pdisease;
       }

       Medicine getPM ()
       {
           return Pmedicine ;
       }

    private:
        Symptoms Psymptoms;
        Doctor Pdoctors;
        Medicine Pmedicine;
        Disease Pdisease;
};

#endif // PATIENT_H
