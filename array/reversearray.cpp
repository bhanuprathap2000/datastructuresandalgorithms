#include <iostream>

using namespace std;

//we are reversing the array
/*
this method works both with even numbers or odd numbers of array
the algorithm is as follows 
first we create two variables start and end and initialize the values to be 0 and n-1
now we swap the elements at these positions and we increment start and decrement the end and repeat this till start<=end
in this we swap all the elements hence the array is reversed.
the time complexity is O(N) although the loop runs N/2 because we neglect constants in time complexity
*/
void reverseArray(int arr[],int n){

    int start = 0;
    int end = n-1;

    while(start <=end){

        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        start += 1;
        end -= 1;

    }
}


int main(){

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(int);

    for (int i = 0;i<size;i++){
        cout << arr[i]<<" ";
    }

    cout << "After reversing"<<endl;

    reverseArray(arr, size);

    for (int i = 0;i<size;i++){
        cout << arr[i];
    }

    return 0;
}