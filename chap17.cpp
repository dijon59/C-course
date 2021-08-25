//
// Created by dijon on 23 Aug 2021.
//
#include <iostream>
using namespace std;

template <class value>
value add(value a, value b) {
    return a + b;
}


int main () {
    double a = 10.5;
    int b = 15;
//    add(a, b);

    cout << add<double>(a, b);


    return 0;
}
