#include <iostream>

using namespace std;

int main(){

    int number = 50;
    int *ptr = &number;//pointer is a variable which stores the address of another variable where data type should be same for both.

    cout << ptr<<endl;
    //since the pointer is also a variable and it's size is fixed  8 bytes and we can print it's size and address also

    cout << sizeof(ptr) <<endl;

    int **pptr = &ptr;//this is a pointer to a pointer
    cout << pptr << endl;
    return 0;
}