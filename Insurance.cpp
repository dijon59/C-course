//
// Created by dijon on 26 Aug 2021.
//
#include "Insurance.h"
#include <iostream>

using namespace std;

InsurancePolicy::InsurancePolicy(): policyNr(0), policyHolder(""), annualRate(0) {}
InsurancePolicy::InsurancePolicy(int pNr, string pHolder, double aRate) {
    this->policyNr = pNr;
    this->policyHolder = pHolder;
    this->annualRate = aRate;
}
InsurancePolicy::~InsurancePolicy() {}
// mutator
void InsurancePolicy::setPolicy(int pNr, string pHolder, double aRate) {
    this->policyNr = pNr;
    this->policyHolder = pHolder;
    this->annualRate = aRate;
}

// accessors
int InsurancePolicy::get_pNr() const {
    return this->policyNr;
}

string InsurancePolicy::get_pHolder() const {
    return this->policyHolder;
}

double InsurancePolicy::get_aRate() const {
    return this->annualRate;
}

void InsurancePolicy::showPolicy(ostream &out) {
    out << "Policy Number: " << this->policyNr << "\n";
    out << "Policy Holder: " << this->policyHolder << "\n";
    out << "Annual Rate: " << this->annualRate << endl;
}
