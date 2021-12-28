#include <iostream>

using namespace std;

/*
This algorithm is better than linear search because in very few iterations we will be able to find out whether
the element we are trying to find is present or not.
so the algorithm is as follows
we can write a function for binary search alone it can accept the array,size of array and the key to be searched.


so we create two varibles start and end which are initially the index position of first and last variable
then we calculate the mid index and next compare the mid value to the key if found return the mid index
if key greate than mid then start-mid+1
if key less than mid then end=mid-1
repeat above three points till the start<=end 
once start exceeds the end that means element not found then we can return -1

This will finish the searching in very less time i.e in O(logN) logN to the base 2

The basic assumption of this search is it should be sorted.
*/
int binarySearch(int arr[],int n,int key){

    int start = 0;
    int end = n - 1;

    while(start<=end){

        int mid = (start + end) / 2;

        if(arr[mid]==key){
            return mid;
        }
        else if(key>mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
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

    int found = binarySearch(arr, size, key);

    if(found!=-1){
        cout << "Element found at index" << found;
    }
    else{
        cout << "Element not found";
    }



    return 0;
}