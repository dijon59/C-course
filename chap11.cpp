//
// Created by dijon on 04 Jul 2021.
//

// Overloading operators

//#include <iostream>
//
//using namespace std;
//
//class Position {
//public:
//    int x = 10;
//    int y = 20;
//    Position operator + (Position pos) const {
//        Position new_pos;
//        new_pos.x = x + pos.x;
//        new_pos.y = y + pos.y;
//        return new_pos;
//    }
//};
//
//int main () {
//    Position pos1, pos2;
//    Position pos3 = pos1 + pos2;
//    cout << pos3.x << "\n";
//    cout << pos3.y;
//    return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Money {
//public:
//    friend Money add(Money amount1, Money amount2);
//    friend bool equal(Money amount1, Money amount2);
//    Money(long dollars, int cents);
//    Money(long dollars);
//    Money();
//    double getValues();
//    void input(istream& ins);
//    void output();
//
//private:
//    long allCents;
//
//};
//
//int main () {
//    Money yourAmount, myAmount(10, 9), myAmount2(11, 12), ourAmount;
//    cout << "";
//    ourAmount = add(myAmount, myAmount2);
//    ourAmount.output();
//    return 0;
//}
//
//Money add(Money amount1, Money amount2) {
//    Money temp;
//    temp.allCents = amount1.allCents + amount2.allCents;
//    return temp;
//}
//
////bool equal(Money amount1, Money amount2) {
////    return (amount1.allCents == amount2.allCents);
////}
//
//Money::Money(long dollars, int cents) {
//    if (dollars * cents < 0) {
//        cout << "Illegal values for dollars and cents.\n";
//        exit(1);
//    }
//    allCents = dollars * 100 + cents;
//}
//
//Money::Money(long dollars) : allCents(dollars * 100) {}
//
//Money::Money() : allCents(0){}
//
//void Money::output() {
//    cout << allCents;
//}



//void Money::input(istream &ins) {
//    char oneChar, decimalPoint, digit1, digit2;
//    long dollars;
//    int cents;
//    bool negative;
//
//    ins >> oneChar;
//    if (oneChar == ' ') {
//        negative = true;
//        ins >> oneChar;
//    }
//    else {
//        negative = false;
//    }
//    ins >> dollars >> decimalPoint >> digit1 >> digit2;
//}

//#include <iostream>
//
//using namespace std;
//
//class Money {
//public:
//    friend Money operator +(Money amount1, Money amount2);
//    friend bool equal(Money amount1, Money amount2);
//    Money(long dollars, int cents);
//    Money(long dollars);
//    Money();
//    double getValues();
//    void input(istream& ins);
//    void output();
//
//private:
//    long allCents;
//};
//
//int main () {
//    Money yourAmount, myAmount(10, 9), myAmount2(11, 12), ourAmount;
//    cout << "";
//    ourAmount = myAmount + myAmount2;
//    ourAmount.output();
//    return 0;
//}
//
//Money operator +(Money amount1, Money amount2) {
//    Money temp;
//    temp.allCents = amount1.allCents + amount2.allCents;
//    return temp;
//}
//
////bool equal(Money amount1, Money amount2) {
////    return (amount1.allCents == amount2.allCents);
////}
//
//Money::Money(long dollars, int cents) {
//    if (dollars * cents < 0) {
//        cout << "Illegal values for dollars and cents.\n";
//        exit(1);
//    }
//    allCents = dollars * 100 + cents;
//}
//
//Money::Money(long dollars) : allCents(dollars * 100) {}
//
//Money::Money() : allCents(0){}
//
//void Money::output() {
//    cout << allCents;
//}

// overloading << and >>
//#include <iostream>
//
//using namespace std;
//
//class Money {
//public:
//    friend Money operator +(Money amount1, Money amount2);
//    friend bool equal(Money amount1, Money amount2);
//    friend ostream& operator <<(ostream& outs, const Money& amount);
//    Money(long dollars, int cents);
//    Money(long dollars);
//    Money();
//    double getValues();
//    void input(istream& ins);
////    void output();
//
//private:
//    long allCents;
//};
//
//int main () {hj
//    Money yourAmount, myAmount(10, 9), myAmount2(11, 12), ourAmount;
//    cout << "";
//    ourAmount = myAmount + myAmount2;
//    cout << ourAmount;
////    ourAmount.output();
//    return 0;
//}
//
//// << overloaded operator
//ostream& operator <<(ostream& outs, const Money& amount) {
//    outs << amount.allCents;
//    return outs;
//}
//
//
//Money operator +(Money amount1, Money amount2) {
//    Money temp;
//    temp.allCents = amount1.allCents + amount2.allCents;
//    return temp;
//}
//
////bool equal(Money amount1, Money amount2) {
////    return (amount1.allCents == amount2.allCents);
////}
//
//Money::Money(long dollars, int cents) {
//    if (dollars * cents < 0) {
//        cout << "Illegal values for dollars and cents.\n";
//        exit(1);
//    }
//    allCents = dollars * 100 + cents;
//}
//Money::Money(long dollars) : allCents(dollars * 100) {}
//Money::Money() : allCents(0){}

//void Money::output() {
//    cout << allCents;
//}


// Arrays and Classes
//#include <iostream>
//
//struct WindInfo {
//    double velocity; // in miles per hour
//    char direction;
//};
//
//
//int main () {
//    WindInfo dataPoint[10];
//    int i;
//
//    for (i = 0; i < 10; i++) {}
//
//    return 0;
//}

// classes and dynamic arrays
#include <iostream>
#include <cstring>
using namespace std;

class StringVar {
public:
    StringVar(int size);
    StringVar();
    StringVar(const char a[]);
    StringVar(const StringVar& stringObject); // copy constructor
    ~StringVar(); // returns all the dynamic memory used by the object to the freestore.
    int length() const;
    void inputLine(istream& ins);
    friend ostream& operator <<(ostream& outs, const StringVar& theString);

private:
    char *value; // pointer to dynamic array that holds the string value.
    int maxLength; // declared max length of any string value.
};

void conversation(int maxNameSize);
void showString(StringVar theString);

//int main () {
//
//    conversation(30);
//    cout << "End of demonstration.\n";
//    return 0;
//}

void conversation(int maxNameSize) {
    StringVar yourName(maxNameSize), ourName("Borg"), greeting("Hello");

    showString(greeting);
    cout << "What is your name?\n";
    yourName.inputLine(cin);
    cout << "We are " << ourName << endl;
    cout << "We will meet again " << yourName << endl;
    cout << "After call: " << greeting << endl;
}

StringVar::StringVar(int size) :maxLength(size){
    value = new char[maxLength + 1];
    value[0] = '\0';
}

StringVar::StringVar() : maxLength(100){
    value = new char[maxLength + 1];
    value[0] = '\0';
}

StringVar::~StringVar() {
    delete [] value;
}

int StringVar::length() const {
    return strlen(value);
}

StringVar::StringVar(const StringVar& stringObject) : maxLength(stringObject.length()) {
    cout << "Copy constructor" ;
    value = new char[maxLength + 1];
    strcpy(value, stringObject.value);
}

void StringVar::inputLine(istream &ins) {
    ins.getline(value, maxLength + 1);
}

ostream& operator <<(ostream& outs, const StringVar& theString) {
    outs << theString.value;
    return outs;
}

StringVar::StringVar(const char a[]) : maxLength(strlen(a)) {
    value = new char[maxLength + 1];
    strcpy(value, a);
}

void showString(StringVar theString)
{
    cout << "The string is: "
         << theString << endl;
}
