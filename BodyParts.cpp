#include "BodyParts.h"
#include <iostream>
#include <string.h>
using namespace std;

BodyParts::BodyParts()
{
//    parts[5] = {"Eye", "Nose", "Chest", "Stomach", "Skin"};
}

BodyParts::~BodyParts()
{
    //dtor
}

void BodyParts::View() {

    for (int i = 0; i < 5; i++) {
        cout << i+1 << ". " << parts[i] << endl;
    }

}
