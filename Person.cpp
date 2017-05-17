#include "Person.h"
#include "Medicine.h"
#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"
using namespace std;

Person::Person()
{
    name = " ";
    age = 0 ;
    gender = ' ';

}

Person::Person(string n,int a,char g)
{
    name = n ;
    age = a ;
    gender = g ;
}

void Person :: View()
{
    cout << "NO" << endl ;
}





Person::~Person()
{
    //dtor
}
