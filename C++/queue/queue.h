class Queue{
//cs and ms are current size and maximum size of the queue and we are using the array to implement the queue
    int cs, ms;
    int *arr;//pointer to the array 
    int front, rear;//variables to store the index from where we add or remove the elements
//we are making them private so that no body access them.
    public:
//constructer for the queue default sixe 5 if not provided.
//here we initialize the ms with the default value and the craete a dynamic array of that size
//cs will be zero as no elements are added and front is 0 and rear is ms-1
    Queue(int default_size=5){

        ms=default_size;
        arr = new int[ms];
        cs = 0;
        front = 0;
        rear = ms - 1;
    }

//if current and maximum are equal this means queue is full
    bool isFull(){
        return cs == ms;
    }
//if current size is zero that means queue is empty
    bool isEmpty(){
        return cs == 0;
    }
//if the queue is not empty the push the element
//using the circular expression rear = (rear + 1) % ms so that after the end of maximum size we go back to 0
//then after adding increment the cs
    void push(int data){
        if(!isFull()){
            rear = (rear + 1) % ms;
            arr[rear] = data;
            cs++;
        }
    }

    void pop(){
//if the queue is not empty the we can remove the element
//increase the front in the circular fashion and then decrease the cs
        if(!isEmpty()){
            front = (front + 1) % ms;
            cs--;
        }

    }
//return the elements from the front of the queue
    int getFront(){
        return arr[front];
    }
};