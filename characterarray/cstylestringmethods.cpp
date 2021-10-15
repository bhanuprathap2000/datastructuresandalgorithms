#include <iostream>
#include <cstring>
using namespace std;

int main(){

    char arr[] = "Apple";

    char arr1[100];

    cout << strlen(arr);

    strcpy(arr1, arr);//parameters are destination and source

    cout << arr1;

    strcpy(arr1,strcat(arr1,arr));//in order to copy cstyle strigs we use the strcpy method strcat is to join to c style strigs and return them.
    cout << arr;

    //strcmp is used to compare two c style strings which are char arrays and return 0 if both are equal.

    return 0;
}