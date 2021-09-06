//
// Created by dijon on 25 Aug 2021.
//

// Question 1
//#include <iostream>
//using namespace std;
//
//float raised_to_power (int number, int power){
//    if (power < 0) {
//        cout << "\nError - can't raise to a negative power\n";
//        exit(1);
//    }
//    else if (power == 0) {
//        return (1);
//    }
//    else {
//        return (number * raised_to_power(number, power - 1 ));
//    }
//}

// a) int number, int power
// b) Line 10: power == 0, Line 11: 1
// Because we have to stop recursive function without base case recursive function will call itself infinitely.
// To stop calling recursive function for unwanted results.





// Question 2
//define all setters and getters
// a)
//string Customer::GetName() const {
//    return Name;
//}
//
//string Customer::GetAddress() const {
//    return Address;
//}
//
//void Customer::SetBalance(double balance){
//    BalanceDue = balance;
//}
//
//void Customer::IncreaseLimit(double amount){
//    CreditLimit += amount;
//}
//
//double Customer::GetBalance() const{
//    return Balance;
//}
//
//// b)
//
//class CheckerCustomer: public Customer {
//public:
//    CheckerCustomer();
//};

// i) Line 1: GetName() is not a member function of Employee class
//    Line 3: Address is a private member variable of Parent class Person
//    Line 6: : the Pay() function is protected in the class hence it cannot be accessed in main function.

// ii) It will show an error because the data member DateOfBirth is private in the Parent class Person
// iii) By using an accessor that return the year value. And also by making the data member public.

// Question 3

// b)
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class InsurancePolicy
//{
//public:
//    InsurancePolicy();
//    InsurancePolicy(int pNr, string pHolder, double aRate);
//    ~InsurancePolicy();
//    void setPolicy(int pNr, string pHolder, double aRate);
//    int get_pNr();
//    string get_pHolder();
//    double get_aRate();
//
//private:
//    int policyNr;
//    string policyHolder;
//    double annualRate;
//};
//
//class CarInsurance: public InsurancePolicy {
//public:
//    void set_excess(double excess);
//    double get_excess();
//    void setPolicy(int pNr, string pHolder, double aRate, double eValue);
//
//private:
//    double excess;
//};
//
//void CarInsurance::setPolicy(int pNr, string pHolder, double aRate, double eValue) {
//    InsurancePolicy::setPolicy(pNr, pHolder, aRate);
//    this->excess = eValue;
//}
//
//void CarInsurance::set_excess(double excess) {
//    this->excess = excess;
//}
//
//double CarInsurance::get_excess() {
//    return this->excess;
//}

// c)Reason setPolicy() is not legal definition in derived class
//
//Now in InsurancePolicy class we have declared
// all the member variable as a private. So outside of this class we can no access
// this variable because its private access specifier.. .
//CarInsurance class is derived from the InsurancePolicy class so CarInsurance
// class can no directly access the private member of the InsurancePolicy class. For this we have to use
// its public method to get and set member property

// Question 4
// a)

//#include <iostream>
//#include <vector>
//using namespace std;
//
//int count(vector<int> v, int val);
//
//int main () {
////    vector<int> vector {1, 2, 3, 1, 5, 1};
////    cout << count(vector, 1);
//
//
//    return 0;
//}
//
//int count(vector<int> v, int val) {
//    int count = 0;
//    for (int i=0; i < v.size(); i++) {
//        if (v[i] == val) {
//            count++;
//        }
//    }
//    return count;
//}

// b)
#include <iostream>
#include <vector>
using namespace std;

template <class value>
int count(vector<value> v, value val);

int main () {
    vector<int> i_vector {1, 2, 3, 1, 5, 1};
    vector<double> d_vector{1.5, 1.5, 1.8, 1.9};
    vector<string> myV {"HI", "Hello"};

//    cout << count(myV, 'Hi');

    cout << "Number of time value occure is: " << count(i_vector, 1)  << "\n";
    cout << "Number of time value occure is: " << count(d_vector, 1.5)  << "\n";
    return 0;
}

template <class value>
int count(vector<value> v, value val) {
    int count = 0;
    for (int i=0; i < v.size(); i++) {
        if (v[i] == val) {
            count++;
        }
    }
    return count;
}

// Question 5

