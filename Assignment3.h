////
//// Created by dijon on 20 Jul 2021.
////
//
#ifndef ASSIGNMENT3_H
#define ASSIGNMENT3_H
#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;
    int student_number;
    string diploma_name;
    double average_mark;
    string modules[5];
    double results[5];

public:
    Student(); // default constructor
    ~Student(); // destructor
    // member functions
    void calcAverage();
    bool pass() const;
    void displayResults();

    // mutators
    void setName(string std_name);
    void setId(int id_num);
    void setDiploma(string diploma);
    void setStudentNumber(int std_number);
    void setResults(double result, int index);

    // accessors
    string getName();
    int getId() const;
    string getDiploma();
    double getMark() const;
    int getStudentNumber() const;
    string getModule(int index);

    friend ostream& operator <<(ostream& outs, Student& student); // overload operator <<
};

//class Pairs {
//private:
//    int f;
//    int s;
//public:
//    Pairs(); // default constructor
//    Pairs(int param);
//    Pairs(int param1, int param2);
//    ~Pairs(); // destructor
//    // mutators
//    void setF(int param);
//    void setS(int param);
//    // accessors
//    int getF();
//    int getS();
//
//    void reset();
//    // overload operators
//    friend istream& operator >>(istream& ins, Pairs& thePair);
//    friend ostream& operator <<(ostream& outs, const Pairs& thePair);
//    Pairs operator +(Pairs pair) const;
//    Pairs operator -(Pairs pair) const;
//    Pairs operator *(int c);
//};

#endif //ASSIGNMENT3_H
