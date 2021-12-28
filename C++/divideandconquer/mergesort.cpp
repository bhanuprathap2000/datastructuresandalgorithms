#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//merge sort
//divide and conquer
//divide the array into two halves
//sort the two halves
//merge the two sorted halves
void merge(vector<int>& arr, int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1);
    vector<int> R(n2);
    for(i = 0; i < n1; i++){
        L[i] = arr[l + i];
    }
    for(j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
    }
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low<high){
        int mid=(low+high)/2;
        mergeSort(arr, low, mid);//this recurssion tree will be done first
        mergeSort(arr, mid+1, high); //then this recurssion tree will be done
        merge(arr, low, mid, high);//at last they are merged
    }
}



int main(){
    vector<int> arr = {10,7,3,1,9,8,2,5,4,6};
    mergeSort(arr, 0, arr.size()-1);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ",";
    }
    cout << endl;
    return 0;

}