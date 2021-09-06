//#include <iostream>
//#include <cstdlib>
//#include "Dictionary.h"
//#include "Dictionary.hpp"
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    //To make things simpler the code has been kept very similar to the previous one
//    //two dictionaries have been used for price and parts
//    //they will share the key though
//    Dictionary<int,string> parts;
//    Dictionary<int, double> prices;
//    string part;
//    int key;
//    double price;
//
//    //add 4 values to the parts dictionary
//    for (int i = 0; i <= 3; i++)
//    {
//        cout << "\nPlease enter a part name, it's price and a key to add to the parts dictionary." << endl;
//        cout << "Part name: ";
//        getline(cin, part);
//        cout << "Part price: ";
//        cin >> price;
//        cout << "Key for part: ";
//        cin >> key;
//
//        //inserting values in corresponding dictionaries
//        parts.add(key, part);
//        prices.add(key,price);
//        cin.get();
//    }
//
//    //Displaying each
//    cout << endl << endl;
//    cout << "Key and Part Name: " << endl;
//    parts.display();
//    cout << endl;
//    cout << "Key and Part Price(in $): " << endl;
//    prices.display();
//    cout << endl << endl;
//
//    //find the part for a key
//    cout << "For which key do you want to find the part? ";
//    cin >> key;
//
//    //checking if the value is there or not
//    if(parts.find(key) == NULL)
//    {
//        cout << "No such key can be found" << endl;
//    }
//    else
//    {
//        part = *parts.find(key);
//        price = *prices.find(key);
//
//        cout << "The part for key " << key << " is ";
//        cout << part;
//        cout << " and it's price is $";
//        cout<< price << endl;
//    }
//
//    return 0;
//}