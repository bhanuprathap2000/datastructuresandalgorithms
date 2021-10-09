#include <iostream>

using namespace std;


//this is very much simillar to the pair printing 
//here we need to find the pairs and use another loop to iterate between those two pairs and print 
//time complexity is O(N^3)
void subArray(int arr[],int n){

    for (int i = 0; i < n;i++){

        for (int j = i; j < n;j++){

            for (int k = i; k <=j;k++){
                cout << arr[k] << ",";
            }
            cout << endl;
        }
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(int);

    subArray(arr, size);

    return 0;
}