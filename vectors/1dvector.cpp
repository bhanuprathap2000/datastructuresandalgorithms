#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> arr;//ths is an vector of size zero.

    vector<int> arr1 = {1, 2, 3, 4, 5};

    for (int i = 0;i<arr1.size();i++){
        cout << arr1[i] << endl;//internally compiler converts this to *(arr1+i) base address +index
    }

//arr.size() returns back the size of the vector
//arr.capacity() returns back the capacity of the vector which is how many elements it can hold at present it changes as elements are inserted.

    arr1.push_back(6);//adding the elements at the end.there are other methods also like pop
    arr1.pop_back();//removes the last element
    for (int i = 0;i<arr1.size();i++){
        cout << arr1[i] << endl;//internally compiler converts this to *(arr1+i) base address +index
    }

    return 0;
}