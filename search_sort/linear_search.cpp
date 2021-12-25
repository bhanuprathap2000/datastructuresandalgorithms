#include <iostream>
using namespace std;


int  linear_search(int arr[],int n,int key){

    int temp = -1;
    int position = 0;

    for(int i=0;i<n;i++){
        if(arr[i]==key){
            temp = 0;
            position = i;
            break;
        }
    }

    if (temp == -1) {
        cout << "Key not found" << endl;
        return temp;
    } else {
        cout << "Key found" << endl;
        return position;
    }
}

int main(){

    int n;
    cout<<"Enter the number of elements in the list: ";
    cin >> n;
    int arr[n];
    cout<<"Enter the elements of the list: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value to be searched: ";
    cin>>key;
    int position = linear_search(arr,n,key);
    if(position!=-1){
        cout<<"The key is found at position "<<position<<endl;
    }
    return 0;
    

}