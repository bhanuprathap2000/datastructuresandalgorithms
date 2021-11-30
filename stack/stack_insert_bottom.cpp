#include <iostream>
#include <stack>
using namespace std;

//adding the eleemnt to stack at bottom recursively using the reference to modify the passed stack
void insertAtBottom(stack<int> &s,int data){

//if stack is empty then add the element this is the base case of recurssion
   if(s.empty()){
       s.push(data);
       return;
   }
   //if not get hold of the top element in a temporary variable then pop it
   //then pass remaining stack to the function
   //
    int temp = s.top();
    s.pop();
    insertAtBottom(s,data);//function call will remain at statement in the recurrsive calls until the base case is reached when it is reached we will add the element to the stack
    //then we push the element back to the stack which are stored in the temporary variable
    s.push(temp);

}

void reverseStack(stack<int> &s){
    //if stack is empty the return as there is nothing to reverse
    if(s.empty()){
        return;
    }

    //if stack is not empty then get hold of the top element in a temporary variable then pop it
    //then pass remaining stack to the function
    int temp = s.top();
    s.pop();
    reverseStack(s);//function call will remain at statement in the recurrsive calls until the base case is reached when it is reached we will just return
    insertAtBottom(s,temp);//then this function will add the element to the stack at the bottom which will actually reverse the stack

}

    int main()

{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    insertAtBottom(s,60);

    cout<<"The elements in the stack are: ";
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }



    return 0;
}