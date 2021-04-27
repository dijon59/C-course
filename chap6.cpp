#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


//int main() {
//    using namespace std;
//    char inFileName[16], outFileName[16];
//    ifstream inStream;
//    ofstream outStream;
//
//    inStream.open("infile.txt");
//    outStream.open("outfile.txt"); // in order to append the data in the file add ios::app as a second argument
////     outStream.open("outfile.txt", ios::app);
//
//    int first, second, third;
//
//    inStream.fail();
//    if (inStream.fail()) {
//        cout << "This file does not exit";
//        exit(1);
//    }
//
//    inStream >> first >> second >> third;
//    cout << first << second << third;
//    outStream << "The sum of the first 3\n"
//              << "numbers in infile.txt\n"
//              << "is "<< (first + second + third)
//              << endl;
//    inStream.close();
//    outStream.close();
//    return 0;
//}


//int main() {
//    using namespace std;
//    char inFileName[16], outFileName[16];
//    ifstream inStream;
//    ofstream outStream;
//
//    cout << "I will sum three numbers taken from an input\n"
//         << "file and write the sum to an output file.\n";
//
//    cout << "Enter the input file name (maximum of 15 characters): \n";
//    cin >> inFileName;
//
//    cout << "Enter the output file name (maximum of 15 characters): \n";
//    cin >> outFileName;
//
//    cout << "I will read numbers from the file "
//         << inFileName << " and\n"
//         << "place the sum in the file "
//         << outFileName << endl;
//
//    inStream.open(inFileName);
//    if (inStream.fail()) {
//        cout << "The file " << inFileName << " does not exist";
//        exit(1);
//    }
//    outStream.open(outFileName);
//    if (outStream.fail()) {
//        cout << "The file " << outFileName << " does not exist";
//        exit(1);
//    }
//
//    int first, second, third;
////    cout <<
//
//    inStream >> first >> second >> third;
//    outStream << "The sum of the first 3\n"
//              << "numbers in " << inFileName << endl
//              << "is " << (first + second + third)
//              << endl;
//
//    inStream.close();
//    outStream.close();
//    return 0;
//}

//int main () {
//    char symbol;
//    cout << "Enter a line of input and I will echo it:\n";
//
//    do {
//        cin.get(symbol);
//        cout << symbol;
//    }while (symbol != '\n');
//    cout << "That's all for this demonstration.";
//
//    return 0;
//}


//int main() {
//    using namespace std;
//    char inFileName[16], outFileName[16];
//    ifstream inStream;
//    ofstream outStream;
//
//    cout << "I will sum three numbers taken from an input\n"
//         << "file and write the sum to an output file.\n";
//
//    cout << "Enter the input file name (maximum of 15 characters): \n";
//    cin >> inFileName;
//
//    cout << "Enter the output file name (maximum of 15 characters): \n";
//    cin >> outFileName;
//
////    cout << "I will read numbers from the file "
////         << inFileName << " and\n"
////         << "place the sum in the file "
////         << outFileName << endl;
////
////    inStream.open(inFileName);
////    if (inStream.fail()) {
////        cout << "The file " << inFileName << " does not exist";
////        exit(1);
////    }
////    outStream.open(outFileName);
////    if (outStream.fail()) {
////        cout << "The file " << outFileName << " does not exist";
////        exit(1);
////    }
////
////    char text;
//////    cout <<
////
////    inStream.get() >> first
////    outStream << "The sum of the first 3\n"
////              << "numbers in " << inFileName << endl
////              << "is " << (first + second + third)
////              << endl;
////
////    inStream.close();
////    outStream.close();
////    return 0;
////}
