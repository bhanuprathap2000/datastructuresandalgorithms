#include <iostream>
using namespace std;
//forward declaration so that it can be defined later and no compiler errors will occur in Node class
class List;


class Node{

    int data;
    public:
    Node *next;
    Node(int d){
        data = d;
        next = NULL;
    }

    //this function returns the data of the node

    int getData(){
        return data;
    }

    friend class List;//this is a friend class so that it can access private members of List class
//this is for destorying the nodes recursively
//until the next of the node is not NULL till then we go and delete the nodes
    ~Node(){
        if(next!=NULL){
           cout<<"deleting node "<<data<<endl;

            delete next;
        }
    }

};

class List{

    Node *head;
    Node *tail;

    public:
    List(){
        head = NULL;
        tail = NULL;
    }

//push front function here there are two cases when the list is empty and when it is not empty
// if the list is empty then the head and tail will be the NULL and the new node will be the head and tail
// if the list is not empty then the new node will be the head and the old head will be the next of the new node
    void push_front(int d){

        if(head==NULL){
            Node *n = new Node(d);
            head = tail = n;
        }
        else{
            Node *n=new Node(d);
            n -> next = head;
            head=n;
        }
        return;
    }
//push back function here there are two cases when the list is empty and when it is not empty
// if the list is empty then the head and tail will be the NULL and the new node will be the head and tail
// if the list is not empty then the new node will be the tail and old tail next will be the new node
    void push_back(int d){
       if(head==NULL){
            Node *n = new Node(d);
            head = tail = n;
        }
        else{
            Node *n=new Node(d);
            tail->next = n;
            tail=n;
        }
        return;
    }

    void insert(int d,int pos){
        //if position to insert is 0 then we can call the push_front function

        if(pos==0){
            push_front(d);
        }
        //otherwise we have to traverse the list to find the position to insert for this we have to traverse till position-1 node and do the follwing operation
        else{

            Node *temp = head;

            for (int i = 1; i <= pos - 1;i++){
                temp = temp->next;
            }
            Node *n = new Node(d);
            n->next=temp->next;
            temp->next = n;
        }
    }
    void pop_front(){
        if(head==NULL){
            cout<<"list is empty"<<endl;
        }
        else{
            Node *temp = head;//we will create a temp ptr to store the head node
            head = head->next;//then point the head to the next node
            temp->next = NULL;//then make the next of the temp node to NULL so that when deleting the node it will not delete the next node
            delete temp;//then delete the temp node
        }
    }
//this is a linear search function
    bool search(Node *head,int key){
        //if the head is NULL then list is empty and we can return false
        if(head==NULL){
            return false;
        }
        //if head is not NULL then we have to traverse the list to find the key
        //if the key is found then we return true
        //if key not found we return false
        else{
            Node *temp = head;
            while(temp!=NULL){
                if(temp->data==key){
                    return true;
                }
                temp = temp->next;//going to next node in the list
            }
            return false;
        }
    }

bool searchRecursive(Node *head,int key){
    //if the head is NULL then list is empty and we can return false
        if(head==NULL){
            return false;
        }
        else{
            //if head is not NULL then we have to search for key in the list
            //if key is found then we return true
            //if key not found we call the function recursively with the next node as the head(remaining linked list)

            if(head->data==key){
                return true;
            }
            else{
                return searchRecursive(head->next,key); //recursive call to search for key
            }
        }
}
//given a linked list reverse the linke dlist and we are passing the head as refrence so it will be updated when we reverse the list and if pass by value then we can update the head
void reverse(Node *&head){
    //if the list is empty then we can return without doing anything
    if(head==NULL){
        return;
    }
    //if the list is not empty then we have to reverse the list
    //we will maintain there pointers previous,current,after
    Node *current=head;
    Node *prev = NULL;
    Node *after;
    while(current!=NULL){
        after = current->next;//first we will store the next node in after
        current->next = prev;//then we will make the next of the current node to previous so that reverse order will be maintained
        prev = current;//update the previous node before the current node
        current = after;//update the current node to the next node
    }
    head=prev;//update the head to the previous node so that the list will be reversed
}

//this function will return the address of the head node
    Node * begin(){
        return head;
    }
//this is a destructor for destorying the linked list which will call the destructer of Node class
    ~List(){
        if(head!=NULL){
            delete head;
            head=NULL;
        }
    }
};