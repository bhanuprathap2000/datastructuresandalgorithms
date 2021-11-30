#include <iostream>
#include "stackLL.h"
using namespace std;

int main(){

    Stack<int> s;//create a stack object of data type int
    s.push(10);//pushing the elements
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
//popping the elements until the stack is empty
    while (!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

}