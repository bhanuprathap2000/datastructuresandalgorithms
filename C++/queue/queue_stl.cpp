#include <iostream>
#include <queue>
using namespace std;

int main(){

    queue<int> myq;
    myq.push(1);
    myq.push(2);
    myq.push(3);

    while(!myq.empty()){
        cout << myq.front() << endl;
        myq.pop();
    }


    return 0;
}