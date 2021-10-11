#include <iostream>

using namespace std;

//insertion sort

/*
Working of insertion sort

so in insertion sort we go from 1 to n-1 elements and we try to place them in right position

so the outer loop is to iterate over n-1 elements

inside that we take i th element as the current element and the previous as i-1

so what we do is now compare the current with previous values and if previous value is greater than current the move
forward the previous value and repeat this until previous becomes zero and out the while loop now we get to the right
position of the current element and place it there.In the while loop we compare current value with all the previous elements.


*/
void insertionSort(int arr[],int n){

    for (int i = 1; i <= n - 1;i++){

        int current = arr[i];
        int previous = i - 1;

        while(previous>=0 and arr[previous]>current){
            arr[previous + 1] = arr[previous];
            previous -= 1;

        }

        arr[previous + 1] = current;
    }
}


int main(){

    int arr[] = {-2, -7, 6, 1, -8, 0, 9, 6, 7, 5, 3};
    int size = sizeof(arr) / sizeof(int);

    insertionSort(arr, size);

    for(auto x:arr){
        cout << x << " ";
    }


    return 0;
}