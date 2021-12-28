#include <iostream>

using namespace std;

class Queue{

    private:
    //the queue is implemented using an array
    //front is the variable which keeps track of the front of the queue
    //rear is the variable which keeps track of the rear of the queue
    int arr[5];
    int front, rear;

    public:
//in the constructer we are initializing the front and rear to -1 which means the queue is empty
    Queue(){
        front=rear=-1;
    }

    bool isFull(){
        //circular queue
        //return (rear+1)%5==front;here we are using the modul so that if position is empty then we can re use it instead of full
        return rear == 4;
    }
    bool isEmpty(){
        
        return front == -1;
    }

//we are pushing the element in the queue
//we will increment the rear variable and then assign the element to the rear of the queue before that we need to check whether the queue is full or not
//and also we need to check whether the queue is empty or not
//if the queue is empty then we need to assign the front and rear variable to 0

    void enqueue(int eleemnt){
        if(isFull()){
            cout<<"Queue is full"<<endl;
            return;
        }
        else if(isEmpty()){
            front = rear = 0;

        }
        else{
            //circular queue
            //rear = (rear + 1) % 5;
            rear++;
        }
        arr[rear] = eleemnt;
    }
//we are removing the element from the queue
//we need to check whether the queue is empty or not
//if the queue is empty then we cannot remove the element
//if the queue is not empty then we need to store the element and increment the front variable and then return the element
//if only one element is present in the queue get that element then we need to assign the front and rear variable to -1 and then return the element
    int  dequeue(){

        int x;
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            x=-1;
            return -x;
        }
        //this happens only when one element is present in the queue
        else if(front==rear){
            x=arr[front];
            front=rear=-1;
            return x;

            
        }
        else{
            x=arr[front];
            //front = (front + 1) % 5;circular queue
            front++;
            return x;
        }
    }

    int count(){
        return rear-front+1;
    }

    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
  Queue q1;
  int value, option;

  do {
    cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Enqueue()" << endl;
    cout << "2. Dequeue()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. count()" << endl;
    cout << "6. display()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
      cin >> value;
      q1.enqueue(value);
      break;
    case 2:
      cout << "Dequeue Operation \nDequeued Value : " << q1.dequeue() << endl;
      break;
    case 3:
      if (q1.isEmpty())
        cout << "Queue is Empty" << endl;
      else
        cout << "Queue is not Empty" << endl;
      break;
    case 4:
      if (q1.isFull())
        cout << "Queue is Full" << endl;
      else
        cout << "Queue is not Full" << endl;
      break;
    case 5:
      cout << "Count Operation \nCount of items in Queue : " << q1.count() << endl;
      break;
    case 6:
      cout << "Display Function Called - " << endl;
      q1.display();
      break;
    case 7:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }

  } while (option != 0);

  return 0;
}