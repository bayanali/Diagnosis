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

Hospital ::Hospital ()
{
    p = NULL ;
    //totalNumOP = 0 ;
}

Hospital::Hospital(int t)
{
    totalNumOP = t ;
}

Hospital ::~Hospital ()
{
    delete[] p ;
}

Hospital ::Hospital (const Hospital & other)
{
totalNumOP=other.totalNumOP;
p = new Patient[totalNumOP];
for (int i=0;i<totalNumOP;i++)
{
    p[i] = other.p[i];
}
}



Hospital & Hospital ::operator=(const Hospital & rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

void Hospital::addPatient(const Patient &pa) {
    int static i = 0 ;
    p = new Patient[totalNumOP];
    if (totalNumOP>0)
    {
        totalNumOP-- ;
        p[i]=pa;
        i++ ;
    }
    else
    {
     i++ ;
     Patient *temp = new Patient[i];
     temp[i]=pa ;
     for (int c=0 ; c<i-1 ; c++)
     {
         temp[c]=p[c];
     }
     delete [] p ;
     p = temp ;
    }
}
