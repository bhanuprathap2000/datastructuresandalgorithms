#include <iostream>

using namespace std;

int main(){

    int marks[100] = {0};

    int n;

    cout << "Enter the number of students";

    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cin >> marks[i];
    }

    for (int i = 0; i < n;i++){
        cout << marks[i];
    }

        return 0;

}