//Question 1
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int calcDogsAge(int dogAge);
//int calcDogsAge(int dogAge, bool empEquation);
//
//
//int main () {
//    int dogAge;
//    bool empEquation = true;
//
//    cout << "Please enter a dog age:";
//    cin >> dogAge;
//
//    cout << "The dog's age in human years "
//         << " using the conventional method is: " << calcDogsAge(dogAge);
//    cout << "\n";
//
//    cout << "The dog's age in human years "
//         << " using Empirical equation method is: " << calcDogsAge(dogAge, empEquation);
//
//    return 0;
//}
//
//int calcDogsAge(int dogAge) {
//    return dogAge * 7;
//}
//
//int calcDogsAge(int dogAge, bool empEquation) {
//    return ceil((16 * log(dogAge))) + 31;
//}

//Question 2
//#include <iostream>
//#include <cassert>
//
//using namespace std;
//
//void checkLeapYear(int year);
//int calcAge(int year);
//
//
//int main() {
//    int year;
//    int day;
//    int month;
//    cout << "Enter your birth date year(d/m/y):";
//    cin >> day >> month >> year;
//
//    // validate day
//    assert(day <= 31);
//
//    // validate month
//    assert(month <= 12);
//
//    // validate year
//    assert(year <= 2021);
//
//    cout << "Your age is: " << calcAge(year);
//    cout << "\n";
//    checkLeapYear(year);
//
//    return 0;
//}
//
//int calcAge(int year) {
//    return 2021 - year;
//}
//
//void checkLeapYear(int year) {
//    if (year % 4 == 0) {
//        if (year % 100 == 0) {
//            if (year % 400 == 0) {
//                cout << "Your birth year is a leap year.";
//            }
//            else {
//                cout << "Your birth year is not a leap year.";
//            }
//        }
//        else
//            cout << "Your birth year is a leap year.";
//    }
//    else
//        cout << "Your birth year is not a leap year.";
//}


// Question 3
//#include <iostream>
//#include <fstream>
//
//
//using namespace std;
//
//int main() {
//    string courseCode;
//    double assign1Total, assign1Mark, assign2Total, assign2Mark;
//
//    ifstream inStream;
//    ofstream outStream;
//
//    inStream.open("assignments.dat");
//
//    if (inStream.fail()) {
//        cout << "This file does not exit";
//        exit(1);
//    }
//
//    outStream.open("yearmark.dat");
//    while(inStream >> courseCode >> assign1Total >> assign1Mark >> assign2Total >> assign2Mark) {
//        outStream << courseCode << " " << ((assign1Mark / 100) * assign1Total + (assign2Mark /100) * assign2Total)
//                  << "%" << "\n";
//    }
//    inStream.close();
//    outStream.close();
//    return 0;
//}

// Question 4
//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    return 0;
//}

// Question 5

// Question 6
//#include <iostream>
//#include <string>
//#include <vector>
//#include <sstream>
//
//using namespace std;
//
//vector<string> split(string &target, char delimiter);
//
//int main()
//{
//    string target = "do,re,me,fa,so,la,ti,do";
//    char delimiter = ',';
//    vector<string> arr = split(target, delimiter);
//    string output;
//
//    output = arr[0] + "," + arr[1] + "," + arr[2] + "," + arr[3] + "," + arr[4] + "," + arr[5] + "," + arr[6] + "," + arr [7];
//    cout << output;
//    return 0;
//}
//
//vector<string> split(string &target, char delimiter)
//{
//    vector<string> array;
//    stringstream str(target);
//    string s;
//    while (getline(str, s, delimiter)) {
//        array.push_back(s);
//    }
//    return array;
//}

// Question 7
