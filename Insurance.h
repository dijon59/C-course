//
// Created by dijon on 26 Aug 2021.
//
#include <iostream>
using namespace std;
#ifndef FIRSTAPP_INSURANCE_H
#define FIRSTAPP_INSURANCE_H

class InsurancePolicy
{
public:
    InsurancePolicy();
    InsurancePolicy(int pNr, string pHolder, double aRate);
    ~InsurancePolicy();
    void setPolicy(int pNr, string pHolder, double aRate);
    int get_pNr() const;
    string get_pHolder() const;
    double get_aRate() const;
    void showPolicy(ostream & out);
private:
    int policyNr;
    string policyHolder;
    double annualRate;
};


#endif //FIRSTAPP_INSURANCE_H
