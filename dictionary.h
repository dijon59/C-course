//
// Created by dijon on 26 Aug 2021.
//

#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

//K represents key and V is for value
template<class K, class V>
class Dictionary
{
public:
    Dictionary();
    void add(K key, const V &value);
    const V* find (K key) const;
    void display();

private:
    vector<K> keys;
    vector<V> values;
};
#endif // DICTIONARY_H
