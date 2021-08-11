//
// Created by dijon on 21 Jul 2021.
//
#include <iostream>
using namespace std;
#include "Assignment3.h"

Student::Student() :name(""),id(0),diploma_name(""),average_mark(0){}
Student::~Student() {cout << "Bye"<<endl;}
void Student::setName(string std_name) {name = std_name;}
void Student::setId(int id_num) {id=id_num;}
void Student::setDiploma(string diploma) {
    diploma_name = diploma;

    if (diploma_name == "Garden Design") {
        for (int i = 0; i < 5; i++) {
            modules[i] = "G" + to_string(i + 1);
        }
    }
    else if (diploma_name == "Gourmet Cooking"){
        for (int i = 0; i < 5; i++) {
            modules[i] = "C" + to_string(i + 1);
        }
    }
}
void Student::setStudentNumber(int std_number) {student_number = std_number;}
void Student::setResults(double result, int index) {results[index] = result;}
string Student::getName() {return name;}
int Student::getId() const {return id;}
string Student::getDiploma() {return diploma_name;}
double Student::getMark() const {return average_mark;}
int Student::getStudentNumber() const {return student_number;}
string Student::getModule(int index) {return modules[index];}
void Student::calcAverage() {
    double mark = 0.00;
    for (int i = 0; i < 5; i++) {
        mark += results[i];
    }
    average_mark = mark / 5.0;
}
bool Student::pass() const {
    return average_mark >= 50;
}
ostream& operator <<(ostream& outs, Student& student) {
    string hasPassed = student.pass() ? "Pass": "Fail";

    outs << "Name:" << student.name << "\n"
         << "ID:" << student.id << "\n"
         << "Student number:" << student.student_number << "\n"
         << "Diploma:" << student.diploma_name << "\n"
         << "Mark:" << student.getMark() << "\n"
         << "Pass/Fail:" << hasPassed << "\n";
    return outs;
}

void Student::displayResults() {
    cout << "Name:" << name << "\n"
         << "ID:" << id << "\n"
         << "Student number:" << student_number << "\n"
         << "Diploma:" << diploma_name << "\n"
         << "Mark:" << getMark() << "\n";
    for (int i = 0; i < 5; i++) {
        cout << modules[i] << ": " << results[i] << endl;
    }
    if (pass()) {
        cout << "You PASSED." << endl;
    } else {
        cout << "You FAILED." << endl;
    }
    cout << endl;
}

//istream& operator >>(istream& ins, Pairs& thePair) {
//    int a, b;
//    ins >> a >> b;
//    thePair.f = a;
//    thePair.s = b;
//    return ins;
//}
//ostream& operator <<(ostream& outs, const Pairs& thePair) {
//    outs << "The pair is "<< "(" << thePair.f << "," << thePair.s << ")" << "\n";
//    return outs;
//}
//
//Pairs Pairs::operator+(Pairs pair) const {
//    Pairs p = Pairs(this->f+pair.f, this->s+pair.s);
//    return p;
//}
//Pairs Pairs::operator-(Pairs pair) const {
//    Pairs p = Pairs(this->f-pair.f, this->s-pair.s);
//    return p;
//}
//Pairs Pairs::operator*(int c) {
//    Pairs p = Pairs(this->f*c, this->s*c);
//    return p;
//}
//Pairs::Pairs() :f(0), s(0){}
//Pairs::Pairs(int param) :f(param),s(0){}
//Pairs::Pairs(int param1, int param2) : f(param1), s(param2) {}
//Pairs::~Pairs() {cout << "Goodbye!!" << "\n";}
//void Pairs::setF(int param) {f = param;}
//void Pairs::setS(int param) {s = param;}
//int Pairs::getF() {return f;}
//int Pairs::getS() {return s;}
//void Pairs::reset() {s = 0;f = 0;}
