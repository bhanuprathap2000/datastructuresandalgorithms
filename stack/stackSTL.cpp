#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
//we can use the stack class avialable in stl in the same way as we use the stack  class we created 
    stack<string> books;//create a stack object of data type string
    //the stl classes are not in pascal case
    books.push("C++");//pushing the elements
    books.push("Python");
    books.push("Java");
    books.push("C");
    books.push("C#");
    books.push("JavaScript");

    while(!books.empty()){
        cout<<books.top()<<endl;
        books.pop();
    }
}