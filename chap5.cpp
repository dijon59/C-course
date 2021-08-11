//#include <iostream>
//
//void initializeScreen();
//double celsius(double fahrenheit);
//void showResults(double fDegrees, double cDegrees);
//
//
//int main() {
//    using namespace std;
//    double fTemperature, cTemperature;
//
//    initializeScreen();
//    cout << "I will convert a Fahrenheit temperature"
//         << " to Celsius.\n"
//         << "Enter a temperature in Fahrenheit: ";
//    cin >> fTemperature;
//
//    cTemperature = celsius(fTemperature);
//    showResults(fTemperature, cTemperature);
//    return 0;
//}
//
//void initializeScreen() {
//    using namespace std;
//    cout << endl;
//}
//
//double celsius(double fahrenheit) {
//    return ((5.0/9.0)*(fahrenheit - 32));
//}
//
//void showResults(double fDegrees, double cDegrees) {
//    using namespace std;
//
//    cout.setf(ios::fixed);
//    cout.setf(ios::showpoint);
//    cout.precision(1);
//    cout << fDegrees
//         << " degrees Fahrenheit is equivalent to\n"
//         << cDegrees << " degrees Celsius.\n";
//}

// ======================================================================================
//#include <iostream>
//
//void update(int& val) {
//    val = val + 10;
//}
//
//int main() {
//    using namespace std;
//
//    int val = 10;
//    cout << "Val before change: " << val << endl;
//    update(val);
//    cout << "Val after change: " << val << endl;
//}

// =======================================================================================

//#include <iostream>
//
//void getNumbers(int& input1, int& input2);
////Reads two integers from the keyboard.
//void swapValues(int& variable1, int& variable2);
////Precondition: variable1 and variable2 have been given values
////Interchanges the values of variable1 and variable2.
//void showResults(int output1, int output2);
////Shows the values of variable1 and variable2, in that order.
//int main()
// {
// int firstNum = 0, secondNum = 0;
//
// getNumbers(firstNum, secondNum);
// swapValues(firstNum, secondNum);
// showResults(firstNum, secondNum);
// return 0;
// }
// //Uses iostream:
// void getNumbers (int& input1, int& input2)
// {
// using namespace std;
// cout << "Enter two integers: ";
// cin >> input1
// >> input2;
// }
// void swapValues(int& variable1, int& variable2)
// {
// int temp;
// temp = variable1;
//
//// test = temp;
// variable1 = variable2;
// variable2 = temp;
// }
// //Uses iostream:
// void showResults(int output1, int output2)
// {
// using namespace std;
// cout << "In reverse order the numbers are: "
// << output1 << " " << output2 << endl;
// }

// ============================================================================================

//#include <iostream>
//#define NDEBUG
//#include <cassert>
//
//double newtonSqroot(double n, int numIterations);
//
//int main() {
//    using namespace std;
//    double n {0};
//    int numIterations {0};
//    double answer;
//
//    answer = newtonSqroot(n, numIterations);
//    cout << "The value is: "
//         << answer;
//    return 0;
//}
//
//double newtonSqroot(double n, int numIterations) {
//    double answer = 1;
//    int i = 0;
//
//    assert((n>0 && (numIterations>0)));
//    while (i < numIterations) {
//        answer = 0.5 * (answer + n /answer);
//        i++;
//    }
//    return answer;
//}
