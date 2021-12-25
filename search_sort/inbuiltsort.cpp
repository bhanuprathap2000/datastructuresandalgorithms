#include <iostream>
#include <algorithm>
using namespace std;

//if a>b then descending order if a<b then ascending order this function is used internally by sort function.
bool comapre(int a,int b){
    return a > b;
}

int main(){

    int arr[] = {-8, 6, 2, 4, -3, 1};

    int size = sizeof(arr) / sizeof(int);


    //this inbuilt sort is much faster than other basic sorts and takes O(NLOGN)
    //it takes two parameters array starting and array ending and a optinal parameter as a function for ascending or 
    //descending 
    /*
    It generally takes two parameters, the first one being the point of the array/vector from where the sorting needs to begin and the second parameter being the length up to which we want the array/vector to get sorted. The third parameter is optional and can be used in cases such as if we want to sort the elements lexicographically.
    */
    sort(arr, arr+size,comapre);

    for(int x:arr){
        cout << x << endl;
    }




    return 0;
}