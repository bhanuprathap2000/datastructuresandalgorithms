#include <iostream>
#include "list.h"
using namespace std;

int main()

{

    List list;//this object is created on the stack when the program fineshes the respective destructor is called

    list.push_front(1);

    list.push_front(2);

    list.push_back(3);

    list.push_back(4);

    list.insert(10, 2);

    list.insert(20, 0);

    Node *head=list.begin();

        while(head!=NULL){
            cout << head->getData() << " ";
            head = head->next;
        
    }
    cout << endl;

//list.beign() will return the first node of the list
    if(list.search(list.begin(),10)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }

    if(list.searchRecursive(list.begin(),200)){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
//popping the first element
    list.pop_front();
    Node *head1=list.begin();

    while(head1!=NULL){
            cout << head1->getData() << " ";
            head1 = head1->next;
        
    }
    Node *head2=list.begin();
//reversing the linked list
    list.reverse(head2);

    while(head2!=NULL){
            cout << head2->getData() << " ";
            head2 = head2->next;
        
    }

    return 0;
}