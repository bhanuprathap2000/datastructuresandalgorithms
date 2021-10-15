#include <iostream>
#include<cstring>
using namespace std;

int main(){


    // char arr[]={'a','b','c'} this is a wrong way although it works.because we need to put null character at the end.
    char arr[] = {'a', 'b', 'c', 'd', '\0'};
    int arri[] = {1, 2, 3};//if we try to print the integer array with cout we get the address
    //we can directly print the character array with the cout.
    char arr1[] = "abcd"; //this is also correct way because here null character is added for us.
    //we have to maintain the null charcter at the end of the charcter array because it stops there.
    // cout << arr;
    // cout << arri;

    cout << strlen(arr)<<endl; //gives length for visible elements not null charcter
    cout << sizeof(arr)<<endl; //it includes the the null character also.

    return 0;
}