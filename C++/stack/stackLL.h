//we are doing a forward declaration of the Stack class
template<typename T>//T is a placeholder for any type
class Stack;


template<typename T>
class Node{
public:
	T data;//here the data is of type T and replaced the datatype we pass  by the compiler 
	Node<T> *next;//this is a pointer to the next node

//constructor for initializing the data and next pointer
	Node(T d){
		data = d;
        next = NULL;
	}
};

template<typename T>
//stack class will contain the head pointer as a private member
class Stack{
	Node<T> * head;
public:
//constructor for initializing the head pointer
	Stack(){
		head = NULL;
	}
//stack pushing is like linkedlist push_front operation and takes only O(1) time
//we will create a new Node and assign it to temporary pointer n
//then we assign the next pointer of new node to head pointer
//then we assign the new node to head pointer
//this function works when the stack is empty and when the stack is not empty also
//inn order to understand please dry run the code for push
	void push(T data){
		Node<T> * n = new Node<T>(data);
		n->next = head;
		head = n;
	}

    //returns whether the stack is empty or not
	bool empty(){
		return head==NULL;
	}

//return the top element of the stack
	T top(){
		return head->data;	
	}

//pop the top element of the stack
//this function works when the stack is not empty
//before deleting first we need to store the head pointer in a temporary pointer
//then forward the head pointer to the next node
//then delete the temporary pointer which will delete the Node
	void pop(){
		if(head!=NULL){
			Node<T> * temp = head;
			head = head->next;
			delete temp;
		}

	}
};