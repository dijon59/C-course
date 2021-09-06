//
// Created by dijon on 26 Aug 2021.
//

#include "Dictionary.h"
#include <vector>
#include <iostream>

using namespace std;

template<class K, class V>
Dictionary<K,V>::Dictionary()
{
    //nothing to do, vector member variables are empty on declaration
}

template<class K, class V>
void Dictionary<K,V>::add(K key, const V &value)
{
    keys.push_back(key);
    values.push_back(value);
}

//As you could see we had to return something to indicate if the value was not
//found. In the earlier one when we were sure it was a string
//we returned a custom string, but in this case when we do not know the class
//of value. Pointer is a safe option since we could then return NULL in case
//value is not found
template<class K, class V>
const V* Dictionary<K,V>::find (K key) const
{
    const V *value = NULL;

    for (unsigned int i = 0; i < keys.size(); i++)
        if (key == keys[i])
            value = &values[i];

    return value;
}

template<class K, class V>
void Dictionary<K,V>::display()
{
    for (unsigned int i = 0; i < keys.size(); i++)
        cout << keys[i] << ' ' << values[i] << endl;
    return;
}