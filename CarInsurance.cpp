//
// Created by dijon on 26 Aug 2021.
//

#include "CarInsurance.h"
#include <iostream>
using namespace std;

CarInsurance::CarInsurance():InsurancePolicy(), excess(0) {}
//CarInsurance::CarInsurance(int pNr, string pHolder, double aRate, double eValue):InsurancePolicy(pNr, pHolder, aRate){
//    this->excess = eValue;
//}

void CarInsurance::setPolicy(int pNr, string pHolder, double aRate, double eValue) {
    InsurancePolicy::setPolicy(pNr, pHolder, aRate);
    this->excess = eValue;
}

void CarInsurance::showPolicy(ostream &out) {
    out << "Policy Number: " << this->get_pNr() << "\n";
    out << "Policy Holder: " << this->get_pHolder() << "\n";
    out << "Annual Rate: " << this->get_aRate() << "\n";
    out << "Excess: " << this->excess << "\n";
}
