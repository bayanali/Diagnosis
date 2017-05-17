#include <iostream>
#include "BodyParts.h"
#include "Symptoms.h"
#include "Disease.h"
#include "Medicine.h"
#include "Person.h"
#include "Doctor.h"
#include "Patient.h"
#include "Hospital .h"
using namespace std;

int main()
{
    Patient bayan;
    cout << "Enter Your Information" << endl ;
    string name ;
    cout << "Your name: " ;
    getline (cin,name) ;
    cout << "Your age: " ;
    int age ;
    cin >> age ;
    cout << "Your gender: " ;
    char gender ;
    cin >> gender ;
    bayan.Setname(name);
    bayan.Setage(age);
    bayan.Setgender(gender);

   BodyParts r;
    cout << "Enter the corresponding number of the body part you are complaining from: \n" << endl;
    r.View();
    int bodypartnum;
    cin >> bodypartnum;
    if (bodypartnum >5 ){
        cout<<"invalid" ;
        return EXIT_FAILURE ;}
    else
    r.Setthepart(bodypartnum);

    Symptoms s;
    cout << "Enter the corresponding number of the symptom: \n To stop, enter 0.\n" << endl;
    s.Show(r);
    int sympnum;
    cin >> sympnum;
    vector<int> symps;
    if (sympnum>7)
       {
        cout<<" Enter valid number" ;
       return EXIT_FAILURE ;
       }

    else{
    while(sympnum != 0 )
    {
        symps.push_back(sympnum);
        cin >> sympnum;
    }
    Disease d;
    d.YourDisease(symps,r);
    Medicine m;
    m.med(d);
    Doctor doc;
    doc.visitDr(r);
    bayan.View(doc,m,d);
    Hospital h1;
    h1.addPatient(bayan);
    }

}
