#include <iostream>
#include<cstring>
using namespace std;

int main(){

    char arr[10];
    char arr1[10];

    /*
    both the get and getline work the same the only difference is that the delimeter by default is \n is left in the stream
    by the get but the getline removes it from the stream

    if we use simple get() it will read only one character and return 
    one thing to notice is that in both the terminating character would be null character that means if we have a char 
    array of length 10 max we can store 9 chars beacuse the last position is taken by the null charcter incase of the 
    maxmium occupancy.

    both accept the same parameters (where to store,how much to store,delimeter)
    */

    cin.get(arr, 10);
    cin.getline(arr1, 10,'#');

    cout << strlen(arr);
    cout << sizeof(arr);
     cout << strlen(arr1);
    cout << sizeof(arr1);
    cout << arr<< endl;
    cout << arr1<<endl;

    return 0;
}