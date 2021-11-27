#include <iostream>
using namespace std;


// Function to find factorial of a number using the recurssion
int factorial(int n){
     //base case or terminating condition
    if(n==1){
        return 1;
    }

    int factorialOfNumber;
    factorialOfNumber=n*factorial(n-1);//this is the recursive call and a expression

    return factorialOfNumber;
}

int main(){

    cout<<factorial(6)<<endl;

    return 0;
}