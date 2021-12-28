#include <iostream>

using namespace std;

/*
We can keep an analogy of bubble with when we heat the water the bubbles are formed and they rise up to the top
So for bubble sort
there will be two loops one for number of iterations and other for comparsion
number of iterations are n-1 where n is the number of elements in the array.
number of iterations are n-1 because when we sort n-1 elements last one is automatically sorted.
Now coming to the number of comparsions for each iteration will be decreasing as the iteration increases

say -4,3,2,-5,2 so for first iteration we do 4 and then 3,2,1 so the pattern is n-1 -i where i is the iteration
if present element is greater than next element we swap using the built in function.

There are no fixed rules for where iteration begins like i=0 or i=1 we need to see and arrange the values.
*/


void bubbleSort(int arr[],int n){

    for (int i = 0; i < n;i++){

        for (int j = 0; j <= n - 1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main(){

    int arr[] = {-2, -7, 6, 1, -8, 0, 9, 6, 7, 5, 3};
    int size = sizeof(arr) / sizeof(int);

    bubbleSort(arr, size);

    for(auto x:arr){
        cout << x << " ";
    }

    return 0;
}
