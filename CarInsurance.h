//
// Created by dijon on 26 Aug 2021.
//
#include "Insurance.h"
#include <iostream>
using namespace std;
#ifndef FIRSTAPP_CARINSURANCE_H
#define FIRSTAPP_CARINSURANCE_H

class CarInsurance: public InsurancePolicy {
public:
    CarInsurance();
    CarInsurance(int pNr, string pHolder, double aRate, double eValue);
    void setPolicy(int pNr, string pHolder, double aRate, double eValue);
    void showPolicy(ostream & out);

private:
    double excess;
};


#endif //FIRSTAPP_CARINSURANCE_H
