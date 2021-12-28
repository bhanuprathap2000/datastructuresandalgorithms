#include <iostream>

using namespace std;

int main(){

    int number = 50;
    int *ptr = &number;
    cout<<*ptr;//* here is acting as the dereference operator which gives the value at the address stored in that pointer.
    return 0;
    //we always need to initialize the pointer with null value else sometimes we may access the random value unknowigly
    int *pptr=nullptr;
    cout << pptr;
}