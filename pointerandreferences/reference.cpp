#include <iostream>
using namespace std;

void applyTax(int &money){//this refrence variable name can be same as original or different and it's scope is within this tax function only.

    money = money - money * 0.1;
}

int main(){

    int number1 = 50;
    int &number2 = number1;
    //here number2 is reference variable to the number1
    //reference variable is an another name to the variable
    //reference must be intialized when declared only and it can be chnaged once declared
    //using references we can pass objects to other functions very easily.
    //& can be used for address of operator,refrence variable and bit manupulation

    cout << number1<<endl;
    cout << number2 << endl;

    int income = 700000;
    applyTax(income);
    cout << income;

    return 0;
}