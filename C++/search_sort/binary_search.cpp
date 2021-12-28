#include <iostream>
using namespace std;

int_least16_t binary_search(int arr[],int n,int key){

    int left,right,mid,temp=-1;
    left = 0;
    right= n-1;

    while(left<=right){

        mid = (left + right) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout<<"Key not found"<<endl;
    return temp;
    
}

int main(){
     int n;
    cout<<"Enter the number of elements in the list: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the list in only sorted order: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value to be searched: ";
    cin>>key;
    int position = binary_search(arr,n,key);
    if(position!=-1){
        cout<<"The key is found at position "<<position<<endl;
    }


    return 0;
}