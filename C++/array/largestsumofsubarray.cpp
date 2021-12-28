#include <iostream>

using namespace std;


//here we need to find the pairs and use another loop to iterate between those two pairs and instead of printing we use the 
//currentSubarray sum and largest one after each subarray sum we take the maximum of that both from largest and current subarray sum 
//time complexity is O(N^3) brute force approach where we check each subarray sum
int subArrayLargestSum(int arr[],int n){

    int largestSum =0;
    int currentSubarraySum = 0;

    for (int i = 0; i < n;i++){

        for (int j = i; j < n;j++){

            for (int k = i; k <=j;k++){
                currentSubarraySum += arr[k];

            }
            largestSum = max(currentSubarraySum, largestSum);
            currentSubarraySum = 0;//here this is compulsory because if we don't make it zero then sum will increase and return wrong results
            
        }
    }
    return largestSum;
}

int main(){

    int arr[] = {1, 2, 3, 4, 5,-5,3,1,-4};
    int size = sizeof(arr)/sizeof(int);

    cout<< subArrayLargestSum(arr, size);

    return 0;
}