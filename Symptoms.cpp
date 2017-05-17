#include "Symptoms.h"
#include <iostream>
#include <fstream>
#include <istream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
using namespace std;

Symptoms::Symptoms()
{
    //ctor
}

void Symptoms::Show(BodyParts b) {
    string input;
    fstream file;
    if (b.Getthepart() == 1)
        file.open("eye.txt", ios::in);
    else if (b.Getthepart() == 2)
        file.open("nose.txt", ios::in);
    else if (b.Getthepart() == 3)
        file.open("chest.txt", ios::in);
    else if (b.Getthepart() == 4)
        file.open("stomach.txt", ios::in);
    else if (b.Getthepart() == 5)
        file.open("skin.txt", ios::in);

    if(file) {

        getline(file,input);
        while(file)
        {


            symptoms.push_back(input);
            cout << input << endl;
            getline(file, input);

        }
        file.close();


    }
    else
      throw "symptoms file not found";
}

Symptoms::~Symptoms()
{
    //dtor
}

