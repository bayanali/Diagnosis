#ifndef MEDICINE_H
#define MEDICINE_H
#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"
using namespace std;

class Medicine
{
    public:
        Medicine();
        virtual ~Medicine();
        void med(Disease d);
        void ViewM();
        vector<string> getM()
        {
            return medi ;
        }

    private:

    vector<string> medi;

};

#endif // MEDICINE_H
