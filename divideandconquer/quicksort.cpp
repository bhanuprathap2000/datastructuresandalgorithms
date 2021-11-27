#include <iostream>
#include <vector>
using namespace std;

//parition
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}
//quick sort
//divide and conquer
//choose a pivot element
//partition the array around the pivot
//sort the left and right subarrays
void quickSort(vector<int>& arr, int l, int r){
    if(l < r){
        int p = partition(arr, l, r);
        quickSort(arr, l, p-1);
        quickSort(arr, p+1, r);
    }
}


int main(){
    vector<int> arr = {10, 7, 8, 9, 1, 5};
    quickSort(arr, 0, arr.size()-1);
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << ",";
    }
    return 0;

}