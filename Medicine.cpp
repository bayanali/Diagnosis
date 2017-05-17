#include "Medicine.h"
#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"
using namespace std;

Medicine::Medicine()
{
    //ctor
}

void Medicine::med(Disease d) {
    for (int i=0 ;i < d.getdis().size(); i++ )
       {
           if (d.getdis()[i]== "Pink Eye" )
            medi.push_back("Antibiotic eye drops");
           else if (d.getdis()[i]== "Cold/flu" )
            medi.push_back("Advil (ibuprofen)");
           else if (d.getdis()[i]== "Asthma" )
            medi.push_back("bronchodilator");
           else if (d.getdis()[i]== "Stomach Flu" )
            medi.push_back("Tylenol (Acetaminophen)");
            else if (d.getdis()[i]== "Chicken Pox" )
            medi.push_back("Zovirax (acyclovir)");
            else if (d.getdis()[i]=="Psoriasis")
            medi.push_back("Vitamin D analogues");
       }
}

void Medicine::ViewM()
{
    for (int i=0 ; i<medi.size();i++)
        cout << medi[i] << endl ;
}

Medicine::~Medicine()
{
    //dtor
}
