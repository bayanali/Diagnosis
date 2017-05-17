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

Doctor::Doctor()
{
    //ctor
}

Doctor::~Doctor()
{
    //dtor
}


void Doctor::visitDr (BodyParts b)
{
    string input;
    fstream file;
    vector<string> inputs ;
    file.open("Doctors.txt", ios::in);

    if(file) {

        getline(file,input);
        while(file)
        {

             getline(file, input);
             inputs.push_back(input);

        }
        file.close();
    }
    else
      throw "symptoms file not found";



      for (int i=0;i<inputs.size();i++)
      {
          if (b.Getthepart()==1)
          {
            if (inputs[i]=="Eye")
          {
              for (int c=i+1;c<i+4;c++)
                doctordetails.push_back(inputs[c]);
          }

          }

        else if (b.Getthepart()==2)
          {
            if (inputs[i]=="Nose")
          {
              for (int c=i+1;c<i+4;c++)
                doctordetails.push_back(inputs[c]);
          }
          }

           else if (b.Getthepart()==3)
          {
            if (inputs[i]=="Chest")
          {
              for (int c=i+1;c<i+4;c++)
                doctordetails.push_back(inputs[c]);
          }

          }

         else if (b.Getthepart()==4)
          {
            if (inputs[i]=="Stomach")
          {
              for (int c=i+1;c<i+4;c++)
                doctordetails.push_back(inputs[c]);
          }

          }

           else if (b.Getthepart()==5)
          {
            if (inputs[i]=="Skin")
          {
              for (int c=i+1;c<i+4;c++)
                doctordetails.push_back(inputs[c]);
          }

          }
}
}

void Doctor::View()
{

    for (int i=0;i<doctordetails.size();i++)
        cout << doctordetails[i] << endl ;

}
