#ifndef DISEASE_H
#define DISEASE_H
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"

using namespace std;


class Disease
{
    public:
        Disease();
        virtual ~Disease();
        void ViewDiseases();
        void YourDisease(vector<int> d , BodyParts o);
        vector<string> getdis()
        {
            return disease;
        }
    private:
        vector<string> disease;
        Symptoms sod ;
};

#endif // DISEASE_H
