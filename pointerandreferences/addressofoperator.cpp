#include <iostream>

using namespace std;

int main(){

    int number = 50;

    cout << &number;// & is the address of operator and this will print the address of the number variable
    // so 50 will be stored at address simillar to this 0x61fe1c

    return 0;
}