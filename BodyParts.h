#ifndef BODYPARTS_H
#define BODYPARTS_H
#include <iostream>
using namespace std;


class BodyParts
{
    public:
        BodyParts();
        virtual ~BodyParts();
        void View();
        int Getthepart(){return thepart;}
        void Setthepart(int p){ thepart = p;}
    private:
        int thepart;
        string parts[5] = {"Eye", "Nose", "Chest", "Stomach", "Skin"};

};

#endif // BODYPARTS_H
