#include <iostream>
#include "queue.h"
using namespace std;

int main(){

    Queue myq;
    myq.push(1);
    myq.push(2);
    myq.push(3);

    while(!myq.isEmpty()){
        cout << myq.getFront() << endl;
        myq.pop();
    }


    return 0;
}