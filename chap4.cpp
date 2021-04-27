////#include <iostream>
////using namespace std;
////
////int getOneTotal();
////
////
////int main() {
////    cout << "This program tallies conservationist reports\n";
////
////    int numberOfReports;
////    cout << "How many conservationist reports are there? ";
////    cin >> numberOfReports;
////
////    int grandTotal = 0, subtotal, count;
////    for (count = 1; count <= numberOfReports; count++) {
////        cout << endl << "Enter the report of conservation number " << count << endl;
////        subtotal = getOneTotal();
////        cout << "Total egg count for conservationist "
////             << " number " << count << " is "
////             << subtotal << endl;
//////        grandTotal = grand_total + subtotal;
////
////    }
////
////    return 0;
////}
////
////int getOneTotal() {
////    int total;
////    cout << "Enter the number of eggs in each nest. \n"
////         << "Place a negavite integer"
////         << "at the end of your list. \n";
////
////    total = 0;
////    int next;
////    cin >> next;
////    while (next >=0) {
////        total = total + next;
////        cin >> next;
////    }
////    return total;
////}
//
////  ---------------------------------------------------------------------------------------------------------
//
////#include <iostream>
////using namespace std;
////
////const double RATE = 150.00;
////double fee(int hoursWorked, int minutesWorked);
////
////
////int main() {
////    int hours, minutes;
////    double bill;
////
////    cout << "Welcome to the offices of \n"
////         << "Enter the hours and minutes"
////         << "of your consultation:\n";
////    cin >> hours >> minutes;
////
////    bill = fee(hours, minutes);
////    cout.setf(ios::fixed);
////    cout.setf(ios::showpoint);
////    cout.precision(2);
////    cout << "For " << hours << " hours and " << minutes
////         << " minutes, your bill is $" << bill << endl;
////}
////
////double fee(int hoursWorked, int minutesWorked) {
////    int quarterHours;
////
////    minutesWorked = hoursWorked * 60 + minutesWorked;
////    quarterHours = minutesWorked/15;
////    return (quarterHours * RATE);
////}
//
//// ---------------------------------------------------------------------------------------------------
//
//#include <iostream>
//#include <cmath>
//
//const double PI = 3.14159;
//double area(double radius);
//double volume(double radius);
//
//int main() {
//    using namespace std;
//    double radiusOfBoth, areaOfCircle, volumeOfSphere;
//
//    cout << "Enter a radius to use for both a circle\n"
//         << "and a sphere (in inches): ";
//
//    cin >> radiusOfBoth;
//
//    areaOfCircle = area(radiusOfBoth);
//    volumeOfSphere = volume(radiusOfBoth);
//
//    cout << "Radius = " << radiusOfBoth << " inches\n"
//         << "Area of circle = " << areaOfCircle
//         << " square inches\n"
//         << "Volume of sphere = " << volumeOfSphere
//         << " cubic inches\n";
//    return 0;
//}
//
//double area(double radius) {
//    using namespace std;
//
//    return (PI * pow(radius, 2));
//}
//
//double volume(double radius) {
//    using namespace std;
//
//    return ((4.0/3.0) * PI * pow(radius, 3));
//}

//#include <iostream>
//int mpg(int goals, double misses);
//double mpg(double miles, double gallons);
//
//int main () {
//    using namespace std;
//    cout << mpg(45, 2) << " miles per gallon\n";
//    cout << mpg(45, 2) << " miles per gallon";
//    return 0;
//}
//
//double mpg(double miles, double gallons) {
//    return (miles/gallons);
//}
//
//int mpg(int goals, double misses) {
//    return (goals - static_cast<int>(misses));
//}
