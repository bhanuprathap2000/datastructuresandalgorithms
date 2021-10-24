#include <iostream>
#include "Vector.h"
using namespace std;

int main(){
    Vector<int> v(5);//here we made the Vector more generic by including the data type as parameter

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(6);
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    //printing all the vector values

    for (int i = 0; i < v.size();i++){
        cout << v[i] << endl;//so here we have used the operator overloading.
    }

        return 0;
}