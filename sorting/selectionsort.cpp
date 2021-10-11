#include <iostream>

using namespace std;

//selection sort
//in case of selection sort we find the minimun element in the unsorted array and place them in the right place.
/*
in case of selection sort the idea we will find the right element for right place or position and place them from left to right 
one after the other

4,8,1,3,2

if we sort n-2 elements positions then last one is sorted.



*/
void selectionSort(int arr[],int n){


for(int pos=0;pos<n-1;pos++){

    int current = arr[pos];

    int min_pos=pos;

    for (int j = pos+1; j < n;j++){
        if(arr[j]<current){
            min_pos = j;
        }
    }

    swap(arr[min_pos], arr[pos]);
}




}

int main()
{int arr[] = {-2, -7, 6, 1, -8, 0, 9, 6, 7, 5, 3};
    int size = sizeof(arr) / sizeof(int);

    selectionSort(arr, size);

    for(auto x:arr){
        cout << x << " ";
    }


    return 0;
    
}