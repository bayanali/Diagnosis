#ifndef HOSPITAL _H
#define HOSPITAL _H
#include "Hospital .h"
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


class Hospital
{
    public:
        Hospital ();
         Hospital (int);
        virtual ~Hospital ();
        Hospital (const Hospital & other);
        Hospital & operator=(const Hospital & other);
        void addPatient(const Patient &pa);


    private:
       Patient *p;
       int totalNumOP=100 ;

};

#endif // HOSPITAL _H
