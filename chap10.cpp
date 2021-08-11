//
// Created by dijon on 28 Jun 2021.
//


// How to use structure in c++
//#include <iostream>
//using namespace std;
//
//struct CDAccount {
//    double balance;
//    double interestRate;
//    int term;
//};
//
//void getData(CDAccount& theAccount);
//CDAccount shrinkWrap (double theBalance, double theRate, int theTerm);
//
//int main () {
//    CDAccount account;
//    getData(account);
//
//    double rateFraction, interest;
//    rateFraction = account.interestRate / 100.0;
//    interest = account.balance * rateFraction * (account.term / 12.0);
//    account.balance = account.balance + interest;
//
//    cout.setf(ios::fixed);
//    cout.setf(ios::showpoint);
//    cout.precision(2);
//
//    cout << "When your CD matures in "
//         << account.term << " months, \n"
//         << "it will have a balance of $"
//         << account.balance << endl;
//
//    return 0;
//}
//
//
//void getData(CDAccount& theAccount) {
//    cout << "Enter account balance: $";
//    cin >> theAccount.balance;
//
//    cout << "Enter account interest rate: ";
//    cin >> theAccount.interestRate;
//
//    cout << "Enter the number of months until maturity\n"
//         << "(must be 12 or fewer months): ";
//    cin >> theAccount.term;
//}
//
//// Structure as Function arguments
//// a structure can be also be used as type for the value returned
// CDAccount shrinkWrap (double theBalance, double theRate, int theTerm) {
//    CDAccount temp;
//    temp.balance = theBalance;
//    temp.interestRate = theRate;
//    temp.term = theTerm;
//
//    return temp;
//}


// How to use classes
//#include <iostream>
//using namespace std;
//
//class DayOfYear {
//public:
//    friend bool equal(DayOfYear date1, DayOfYear date2);
//    DayOfYear(int theMonth, int theDay);
//    DayOfYear();
//    void input();
//    int getMonth();
//    int getDay();
//    void output();
//
//private:
//    void checkDate();
//    int month;
//    int day;
//};
//
//bool equal (DayOfYear date1, DayOfYear date2);
//
//
//int main () {
//    DayOfYear today, birthday(3, 21);
//
//    cout << "Enter today's date: \n";
//    today.input();
//
//    cout << "Today's date is ";
//    today.output();
//
//    cout << "J. S. Bach's birthday is ";
//    birthday.output( );
//
//    if (equal(today, birthday))
//        cout << "Happy Birthday Dijon Mboko!\n";
//    else
//        cout << "Happy unbirthday Dijon Mboko!\n";
//
//    return 0;
//}
////
////// :: is called scope resolution operator,it is used with class name not objects.
////
////DayOfYear::DayOfYear(int theMonth, int theDay):month(theMonth), day(theDay){}
////
//void DayOfYear::output(){
//    cout << "month = " << month << ", day = " << day << endl;
//}
//
//void DayOfYear::input() {
//    cout << "Enter the month as a number: ";
//    cin >> month;
//    cout << "Enter the day of the month: ";
//    cin >> day;
//}
//
//int DayOfYear::getMonth() {return month;}
//
//int DayOfYear::getDay() {return day;}
//
////bool equal(DayOfYear date1, DayOfYear date2) {
////    return (date1.getMonth() == date2.getMonth() && date1.getDay() == date2.getDay());
////}
//
//bool equal (DayOfYear date1, DayOfYear date2) {return (date1.month == date2.month && date1.day == date2.day);}


// constructor for initialization
//#include <iostream>
//using namespace std;
//
//class BankAccount
//{
//public:
//    BankAccount(int dollars, int cents, double rate);
////Initializes the account balance to $dollars.cents and
////initializes the interest rate to rate percent.
//    void set(int dollars, int cents, double rate);
//    void set(int dollars, double rate);
//    void update();
//    double getBalance();
//    double getRate();
//    void output(ostream& outs);
//private:
//    double balance;
//    double interestRate;
//    double fraction(double percent);
//};

// self exercise
// this program will save person's details
//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//    Person(string n, string s, int a);
//    void setPersonDetails(string n, string s, int a);
//    void displayProduct();
//
//
//private:
//    string name;
//    string surname;
//    int age;
//
//};
//
//
//int main () {
//    string name;
//    string surname;
//    int age;
//
//    cout << "Please enter your name: ";
//    cin >> name;
//
//    cout << "Please enter you surname: ";
//    cin >> surname;
//
//    cout << "Please enter your age: ";
//    cin >> age;
//
//    Person person(name, surname, age);
//
//    person.displayProduct();
//    return 0;
//}
//
//Person::Person(string n, string s, int a) {
//    setPersonDetails(n, s, a);
//}
//
//void Person::setPersonDetails(string n, string s, int a) {
//    name = n;
//    surname = s;
//    age = a;
//}
//
//void Person::displayProduct() {
//    cout << "Here are the details entered: \n"
//         << name << "\n"
//         << surname << "\n"
//         << age;
//}
