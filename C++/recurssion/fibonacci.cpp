#include <iostream>
using namespace std;

//using the recurssion to find the nth term of the fibonacci series
int fibonacci(int n){

//this is the base case or terminating condition
    if(n==0 or n==1){
        return n;
    }

//this is a recurssive case and it extensively uses call stack
//a recurssive tree can be seen during the execution of the program
    int f1 = fibonacci(n - 1);
    int f2= fibonacci(n - 2);

    return f1 + f2;

}

int main()
{

cout<<fibonacci(6)<<endl;//0 1 1 2 3 5 8 13 ...
    return 0;
}