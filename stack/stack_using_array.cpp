#include <iostream>

using namespace std;

class Stack{

//the stack is implemented using an array
//top is the variable which keeps track of the top of the stack
//here we are using the static array we can also use dynamic array or even a vector
    private:
    int top;
    int arr[5];

public:

//in the constructer we are initializing the top to -1 which means the stack is empty
    Stack(){
        top = -1;
    }

    //if no elements are present in the stack then the stack is empty

    bool isEmpty(){
        return top == -1;
    }

//if the stack is full then we cannot push the element in the stack
    bool isFull(){
        return top == 4;
    }

//we are pushing the element in the stack
//we will increment the top variable and then assign the element to the top of the stack before that we need to check whether the stack is full or not
    void push(int element){

        if(isFull()){
            cout<<"Stack is full"<<endl;
            return;
        }
        top++;
        arr[top] = element;
    }

//we are popping the element from the stack
//we need to check whether the stack is empty or not
//if the stack is empty then we cannot pop the element
//if the stack is not empty then we need store the element and decrement the top variable and then return the element
    int pop(){
        if(isEmpty()){

            cout<<"Stack is empty"<<endl;
            return -1;
        }
        int element = arr[top];
        top--;
        return element;
    }

    //we are changing element at given position

    void change(int element, int index){
        arr[index] = element;
    }

//this function is used to search the element in the stack by it's index
    int peek(int position){
        if(isEmpty()){

            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[position];
    }

    //this will return the count of the elements in the stack

    int count(){
        return top + 1;
    }

//this function is used to print the elements in the stack
    void display(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return;
        }
        for(int i = top; i >= 0; i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }




 
};

int main() {
  Stack s1;
  int option, postion, value;

  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. Clear Screen" << endl << endl;

    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isEmpty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isFull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;
    case 5:
      cout << "Enter position of item you want to peek: " << endl;
      cin >> postion;
      cout << "Peek Function Called - Value at position " << postion << " is " << s1.peek(postion) << endl;
      break;
    case 6:
      cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 9:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}