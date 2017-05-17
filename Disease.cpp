#include "Disease.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "BodyParts.h"
#include "Symptoms.h"
using namespace std;

Disease::Disease()
{

}

void Disease::YourDisease(vector<int> d, BodyParts o) {
double d1= 0 , d2 = 0 ;
if (o.Getthepart()==5)
{
  for (int i=0 ; i<d.size(); i++)
  {
      if (d[i]>=1 && d[i]<=5)
        d1++ ;
      else if (d[i]>=6 && d[i]<=11)
        d2++ ;
  }
  d1 = (d1/5) ;
  d2 = (d2/6) ;
  if(d1>d2)
  disease.push_back("Chicken Pox");
  else if (d2>d1)
  disease.push_back("Psoriasis");
  else
  {
      disease.push_back("Chicken Pox");
      disease.push_back("Psoriasis");
  }
}

   if (o.Getthepart() == 1 )
         disease.push_back("Pink Eye");
    if (o.Getthepart() == 2 )
         disease.push_back("Cold/flu");
    if (o.Getthepart() == 3 )
         disease.push_back("Asthma");
    if (o.Getthepart() == 4 )
         disease.push_back("Stomach Flu");

    //sort( disease.begin(), disease.end() );
    //disease.erase( unique( disease.begin(), disease.end() ), disease.end() );


}

void Disease::ViewDiseases() {

    for (int i = 0; i < disease.size(); i++) {
        cout << disease[i] << endl;
    }
}


Disease::~Disease()
{
}
