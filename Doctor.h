#ifndef DOCTOR_H
#define DOCTOR_H
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




class Doctor //: public Person
{
    public:
        Doctor();
        virtual ~Doctor();
        void visitDr(BodyParts b);
        void View();
        vector <string> getDdet()
        {
            return doctordetails ;
        }
    private:

        vector<string> doctordetails;
};

#endif // DOCTOR_H
