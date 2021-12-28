#include <iostream>

using namespace std;


//this is a brute force approcah because we are checking for each value in the array till we find
//in worst case if not found it will search the entire array.
/*
Working of algorithm
First we will start from 0 th index and until we find the element we will do the search and return index if found 
if not found then return -1

then time complexity is O(N)


*/
int linearSearch(int arr[],int n,int key){

    for(int i=0;i<n;i++){

        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int key;
    int size = sizeof(arr) / sizeof(int);


    cout<< "Enter the value to search";
    cin >> key;

    int found = linearSearch(arr, size, key);

    if(found!=-1){
        cout << "Element found at index" << found;
    }
    else{
        cout << "Element not found";
    }



    return 0;
}