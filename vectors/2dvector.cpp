#include <iostream>
#include <vector>
using namespace std;
//vector identifier is avialable under the standard namespace

int main(){

    vector< vector<int> > arr = {{1, 2, 3}, {4, 5, 6, 7}, {8, 9, 10}};

    for (int i = 0;i<arr.size();i++){//arr.size() returns back the number of rows

        for (int j = 0; j<arr[i].size();j++){//here arr[i] is the 1d vector 
            cout<<arr[i][j]<<",";

        }
        //instead of the normal for loop we can also use the for each loop

        // for(int x:arr[i]){
        //     cout << x << ",";
        // }
        cout << endl;
    }

        return 0;
}