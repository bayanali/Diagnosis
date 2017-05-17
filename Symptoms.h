#ifndef SYMPTOMS_H
#define SYMPTOMS_H
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
using namespace std;


class Symptoms
{
    public:
        Symptoms();
        virtual ~Symptoms();
        void Show(BodyParts b);
    private:
        vector<string> symptoms;

};

#endif // SYMPTOMS_H
