#include <iostream>

using namespace std;

/*

This is a pair printing printing program like

if array is [1,2,3,4,5]
 then 
1,2
1,3
1,4
1,5
1,6
   
2,3
2,4
2,5
2,6
   
3,4
3,5
3,6

4,5
4,6

5,6


here we  try to find the different pairs by using the two diffrent for loops 
and print the pairs accordingly.
time complexity is O(N^2)

*/
void pairPrinting(int arr[],int n){

    for (int i = 0;  i < n;i++){

        int x = arr[i];
        for (int j = i + 1; j < n;j++){
            int y = arr[j];
            cout<<x<<","<<y<<endl;
        }

        cout << endl;
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);

    pairPrinting(arr, size);

    return 0;
}