//
// Created by dijon on 20 Jul 2021.
//

// Question 1
//#include <iostream>
//using namespace std;
//
//class Module {
//public:
//    Module(); // default constructor
//    Module(string modName, string modCode, string lect, int nrStuds); // overloaded constructor
//
//    // mutators
//    void setModuleName(string modName);
//    void setModuleCode(string modCode);
//    void setLecturer(string lect);
//    void setNrStudents(int nrStuds);
//
//    // accessors
//    string getModuleName();
//    string getModuleCode();
//    string getLecturer();
//    int getNrStudents();
//private:
//    string moduleName;
//    string moduleCode;
//    string lecturer;
//    int nrStudents;
//};
//
//int main () {
//    Module module;
//    string modName, modCode, lect;
//    int nrStuds;
//
//    cout << "Enter the module name:";
//    cin >> modName;
//    cout << "Enter the module code:";
//    cin >> modCode;
//    cout << "Enter the lecturer name:";
//    cin >> lect;
//    cout << "Enter the number of student:";
//    cin >> nrStuds;
//    cout << "\n";
//
//    module.setModuleName(modName);
//    module.setModuleCode(modCode);
//    module.setLecturer(lect);
//    module.setNrStudents(nrStuds);
//
//    cout << "Module Name: " << module.getModuleName() << "\n";
//    cout << "Module Code: " << module.getModuleCode() << "\n";
//    cout << "Lecturer Name: " << module.getLecturer() << "\n";
//    cout << "Number of Students: " << module.getNrStudents() << endl;
//
//    return 0;
//}
//
//Module::Module() :moduleName(""), moduleCode(""), lecturer(""), nrStudents(0) {}
//Module::Module(string modName, string modCode, string lect, int nrStuds){
//    moduleName = modName;
//    moduleCode = modCode;
//    lecturer = lect;
//    nrStudents = nrStuds;
//}
//void Module::setModuleName(string modName) {
//    moduleName = modName;
//}
//
//void Module::setModuleCode(string modCode) {
//    moduleCode = modCode;
//}
//
//void Module::setLecturer(string lect) {
//    lecturer = lect;
//}
//
//void Module::setNrStudents(int nrStuds) {
//    nrStudents = nrStuds;
//}
//
//string Module::getModuleName() {return moduleName;}
//
//string Module::getModuleCode() {return moduleCode;}
//
//string Module::getLecturer() {return lecturer;}
//
//int Module::getNrStudents() {return nrStudents;}

// Question 2
// Question 3
//#include <iostream>
//using namespace std;
//
//class Odometer {
//private:
//    double distance;
//    double fuelEff;
//public:
//    Odometer();
//    void resetDistance();
//    void setFuelEfficiency(double f);
//    void setDistance(double d);
//    double getFuelLiters() const;
//    double getDistance() const;
//    double getFuelEfficiency() const;
//};
//
//int main () {
//    Odometer odometer1, odometer2;
//
//    cout << "=============== CAR 1 ===============" << "\n";
//    cout << "Initial Odometer:" << endl;
//    cout << "Distance Driven:" << odometer1.getDistance() << "\n";
//    cout << "Fuel efficiency:" << odometer1.getFuelEfficiency() << "\n";
//
//    cout << "Add 25.4 km to odometer" << "\n";
//    cout << "Fuel efficiency of 0.04" << "\n";
//    odometer1.setDistance(25.4);
//    odometer1.setFuelEfficiency(0.04);
//    cout << "\n";
//    cout << "Distance Driven:" << odometer1.getDistance() << "\n";
//    cout << "Liters:" << odometer1.getFuelLiters() << "\n";
//
//    cout << "Rest odometer" << "\n";
//    odometer1.resetDistance();
//    cout << "Distance Driven: " << odometer1.getDistance()<< "\n";
//    cout << "\n";
//
//    cout << "=============== CAR 2 ===============" << "\n";
//    cout << "Initial Odometer:" << endl;
//    cout << "Distance Driven:" << odometer2.getDistance() << "\n";
//    cout << "Fuel efficiency:" << odometer2.getFuelEfficiency() << "\n";
//
//    cout << "Add 35.4 km to odometer" << "\n";
//    cout << "Fuel efficiency of 0.12" << "\n";
//    odometer2.setDistance(35.4);
//    odometer2.setFuelEfficiency(0.12);
//    cout << "\n";
//    cout << "Distance Driven:" << odometer2.getDistance() << "\n";
//    cout << "Liters:" << odometer2.getFuelLiters() << "\n";
//
//    cout << "Rest odometer" << "\n";
//    odometer2.resetDistance();
//    cout << "Distance Driven: " << odometer2.getDistance()<< endl;
//    return 0;
//}
//
//Odometer::Odometer() : distance(0), fuelEff(0){}
//void Odometer::resetDistance() {
//    distance = 0;
//}
//void Odometer::setFuelEfficiency(double f) {
//    fuelEff = f;
//}
//void Odometer::setDistance(double d) {
//    distance += d;
//}
//double Odometer::getFuelLiters() const {
//    return distance * fuelEff;
//}
//double Odometer::getDistance() const{
//    return distance;
//}
//double Odometer::getFuelEfficiency() const {
//    return fuelEff;
//}

// Question 4
//#include <iostream>
//
//using namespace std;
//
//class Pairs {
//private:
//    int f;
//    int s;
//public:
//    Pairs(); // default constructor
//    Pairs(int param);
//    Pairs(int param1, int param2);
//    ~Pairs(); // destructor
//
//    // mutators
//    void setF(int param);
//    void setS(int param);
//
//    // accessors
//    int getF();
//    int getS();
//
//    void reset();
//
//    // overload operators
//    friend istream& operator >>(istream& ins, Pairs& thePair);
//    friend ostream& operator <<(ostream& outs, const Pairs& thePair);
//    friend Pairs operator +(Pairs pair1, Pairs pair2);
//    friend Pairs operator -(Pairs pair1, Pairs pair2);
//    friend Pairs operator *(Pairs pair1, int c);
//
//};
//
//int main () {
//    Pairs pair, pair1, pair2;
//    int c;
//
//    cout << "Overloaded binary operator +" << "\n";
//    cout << "Enter the pair 1:";
//    cin >> pair1;
//    cout << "Enter the pair 2:";
//    cin >> pair2;
//    pair = pair1 + pair2;
//    cout << pair;
//    pair.reset();
//
//    cout << "\n";
//
//    cout << "Overloaded binary operator -" << "\n";
//    cout << "Enter the pair 1:";
//    cin >> pair1;
//    cout << "Enter the pair 2:";
//    cin >> pair2;
//    pair = pair1 - pair2;
//    cout << pair;
//    pair.reset();
//
//    cout << "\n";
//    cout << "Overloaded binary operator *" << "\n";
//    cout << "Enter the pair 1:";
//    cin >> pair1;
//    cout << "Enter the Integer:";
//    cin >> c;
//    pair = pair1 * c;
//    cout << pair;
//    pair.reset();
//    return 0;
//}
//
//Pairs::Pairs() :f(0), s(0){}
//Pairs::Pairs(int param) :f(param),s(0){}
//Pairs::Pairs(int param1, int param2) : f(param1), s(param2) {}
//Pairs::~Pairs() {cout << "Goodbye!!" << "\n";}
//void Pairs::setF(int param) {f = param;}
//void Pairs::setS(int param) {s = param;}
//int Pairs::getF() {return f;}
//int Pairs::getS() {return s;}
//void Pairs::reset() {s = 0;f = 0;}
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
//Pairs operator +(Pairs pair1, Pairs pair2) {
//    Pairs pair;
//    pair.f = pair1.f + pair2.f;
//    pair.s = pair1.s + pair2.s;
//    return pair;
//}
//Pairs operator -(Pairs pair1, Pairs pair2) {
//    Pairs pair;
//    pair.f = pair1.f - pair2.f;
//    pair.s = pair1.s - pair2.s;
//    return pair;
//}
//Pairs operator *(Pairs pair1, int c){
//    Pairs pair;
//    pair.f = pair1.f * c;
//    pair.s = pair1.s * c;
//    return pair;
//}
// Question 5

//#include <iostream>
//
//using namespace std;
//
//class Game
//{
//public:
//    Game();
//    string getName();
//    int getLevel();
//    double getScore();
//private:
//    string Name;
//    string Champion;
//    int Level;
//    double Score;
//};
//int main()
//{
//    Game sodoku, tetris[12];
//
////    .........(additional code)
////    double nScore = sodoku.Champion;
////    .........(additional code)
//
//
//    return 0;
//    cout << "The first tetris player is "
//         << tetris[0].getName() << endl;
//
//}

// Question 6
//#include <iostream>
//#include "Assignment3.h"
//
//using namespace std;

//class Pairs {
//private:
//    int f;
//    int s;
//public:
//    Pairs(); // default constructor
//    Pairs(int param);
//    Pairs(int param1, int param2);
//    ~Pairs(); // destructor
//
//    // mutators
//    void setF(int param);
//    void setS(int param);
//
//    // accessors
//    int getF();
//    int getS();
//
//    void reset();
//
//    // overload operators
//    friend istream& operator >>(istream& ins, Pairs& thePair);
//    friend ostream& operator <<(ostream& outs, const Pairs& thePair);
//    friend Pairs operator +(Pairs pair1, Pairs pair2);
//    friend Pairs operator -(Pairs pair1, Pairs pair2);
//    friend Pairs operator *(Pairs pair1, int c);
//
//};

//int main () {
//    Pairs pair, pair1, pair2;
//    int c;
//
//    cout << "Overloaded binary operator +" << "\n";
//    cout << "Enter the pair 1:";
//    cin >> pair1;
//    cout << "Enter the pair 2:";
//    cin >> pair2;
//    pair = pair1 + pair2;
//    cout << pair;
//    pair.reset();
//
//    cout << "\n";
//
//    cout << "Overloaded binary operator -" << "\n";
//    cout << "Enter the pair 1:";
//    cin >> pair1;
//    cout << "Enter the pair 2:";
//    cin >> pair2;
//    pair = pair1 - pair2;
//    cout << pair;
//    pair.reset();
//
//    cout << "\n";
//    cout << "Overloaded binary operator *" << "\n";
//    cout << "Enter the pair 1:";
//    cin >> pair1;
//    cout << "Enter the Integer:";
//    cin >> c;
//    pair = pair1 * c;
//    cout << pair;
//    pair.reset();
//    return 0;
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
//Pairs operator +(Pairs pair1, Pairs pair2) {
//    Pairs pair = Pairs(pair1.f + pair2.f, pair1.s + pair2.s);
//    return pair;
//}
//Pairs operator -(Pairs pair1, Pairs pair2) {
//    Pairs pair = Pairs( pair1.f - pair2.f, pair1.s - pair2.s);
//    return pair;
//}
//Pairs operator *(Pairs pair1, int c){
//    Pairs pair = Pairs(pair1.f * c, pair1.s * c);
//    return pair;
//}

// Question 7
#include <iostream>
#include <fstream>
#include "Assignment3.h"

using namespace std;
//
//int main () {
//    Student students[3];
//    double result;
//    ofstream outputFile;
//
//    outputFile.open("RegisteredStudentsResults.txt");
//
//    // set names
//    students[0].setName("John Martin");
//    students[1].setName("Busi Molefe");
//    students[2].setName("Sean Naidoo");
//
////    student[0]
//
//    // set ids
//    students[0].setId(78120189);
//    students[1].setId(81011201);
//    students[2].setId(69812018);
//
//    // set student numbers
//
//    students[0].setStudentNumber(12345);
//    students[1].setStudentNumber(23456);
//    students[2].setStudentNumber(34567);
//
//    // set diplomas
//    students[0].setDiploma("Garden Design");
//    students[1].setDiploma("Gourmet Cooking");
//    students[2].setDiploma("Garden Design");
//
//    for (int student = 0; student < 3; student++) {
//        cout << "Student Name: "<< students[student].getName() << "\n";
//        cout << "Student Id: " << students[student].getId() << "\n";
//        cout << "Student Number: " << students[student].getStudentNumber() << "\n";
//        cout << "Student diploma: " << students[student].getDiploma() << "\n";
//        for (int res = 0; res < 5; res++){
//            cout << "Enter results for " << students[student].getModule(res) << ":";
//            cin >> result;
//            students[student].setResults(result, res);
//            students[student].calcAverage();
//
//        }
//        outputFile << students[student];
//    }
//    students[0].displayResults();
//    students[1].displayResults();
//    students[2].displayResults();
//    outputFile.close();
//    return 0;
//}
