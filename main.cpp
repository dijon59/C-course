//1 cor 9: 24-27
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

//int main() {
//    int favorite_number;
//    std::cout << "Enter you favorite number between 1 and 100:";
//    std::cin >> favorite_number;
//    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
//    std::cout << "Not Really, " << favorite_number << " is my favorite number!";
//    return 0;
//}

//int main() {
//    int num1;
////    int num2;
//    double num3;
//
//    cout << "Enter an integer: ";
//    cin >> num1;
//
//    cout << "Enter a double: ";
//    cin >> num3;
//
//    cout << "The integer is: " << num1 << endl;
//    cout << "And the double is: " << num3 << endl;
//
////    cout << "Enter a first integer:";
////    cin >> num1;
////
////    cout << "Enter a second integer:";
////    cin >> num2;
////
////    cout << "You entered " << num1 << " and " << num2 << endl;
//
//    return 0;
//}

//int room_width; // Global variable
//int room_length;
//
//int main() {
////    int room_width {0};
////    int room_length {0};
//    cout << "Enter the width of the room: ";
//    cin >> room_width;
//    cout << "Enter the Length of the room: ";
//    cin >> room_length;
//    cout << "The area of the room is " << room_width * room_length << endl;
//    return 0;
//}


//int main() {
//    int test_scores [5] {100, 95, 99, 87, 88};
//    int val = test_scores[0];
//    cout << val;
//    return 0;
//}

//int main() {
//    int movie_rating [3] [2] {{0, 1}, {0, 2}, {0, 3}};
//    cout << movie_rating[0][1];
//    return 0;
//}


//int main() {
//    vector <int> test_scores {100, 95, 99, 87, 88};
//    test_scores.push_back(70);
//    cout << test_scores.at(5) << endl;
//    cout << test_scores.size() << endl;
//
//    return 0;
//}

// example of 2D- Vector
//vector<vector<int>> movie_ratings {{1, 2, 3, 4}, {2, 3, 5, 9}, {0, 5, 10, 11}};
// cout << movie_ratings[0][0]; // no bound checking
// cout << movie_ratings.at(0).at(0); // perform bound checking

// Example - preincrement
//int main() {
//    int counter {10};
//    int result {0};
//
//    cout << "Counter: " << counter << endl; // 10
//    result = ++counter; // Note the pre increment
//    cout << "Counter: " << counter << endl; // 11
//    cout << "Result: " << result << endl; // 11
//    return 0;
//}

// Example - postincrement
//int main() {
//    int counter {10};
//    int result {0};
//
//    cout << "Counter: " << counter << endl; // 10
//    result = counter++; // Note the post increment
//    cout << "Counter: " << counter << endl; // 11
//    cout << "Result: " << result << endl; // 10
//    return 0;
//}

//int main() {
//    char ans;
//    do {
//        cout << "Hello\n";
//        cout << "Do you want another greeting?\n"
//             << "Press y for yes, n for no, \n"
//             << "and then press return: ";
//        cin >> ans;
//    } while (ans == 'y' || ans == 'Y');
//}


//int main() {
//    int total_amount {100};
//    int total_number {8};
//    char ans;
////    string name;
//    string test {"the road to hell is paved with good intentions"};
//    double average;
//
////    average = total_amount/total_number;
//    // cout << average << endl;
//    // average = (double)total_amount/count; Old-style
//    cout << "Please perform: ";
////    test = "lol" + name + "Lol" + "dijon";
//    cin >> total_number >> total_amount;
//    cout << test;
//    average = static_cast<double>(total_amount) / total_number;
//    cout << average << endl;
//    return 0;
//}
//
//int main() {
//    double fuelGaugeReading;
//
//    cout << "Enter fuel gauge reading: ";
//    cin >> fuelGaugeReading;
//
//    cout << "First with braces:\n";
//    if(fuelGaugeReading < 0.75) {
//        if(fuelGaugeReading < 0.25) {
//            cout << "Fuel very low. Caution!\n";
//        }
//    }else {
//        cout << "Fuel over 3/4. Don't stop now!\n";
//    }
//    return 0;
//}

//
//int main() {
//    int sales[5] = {10000, 12000, 900, 500, 20000};
//    sales[4] = sales[4-2];
//    cout << sales[4];
//
//    return 0;
//}
// =====================================chap12====================
