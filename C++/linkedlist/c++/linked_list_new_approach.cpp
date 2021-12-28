#include<iostream>

using namespace std;

//this is a node class for linked list
//it contains key,data and pointer to next node
class Node {
  public:
    int key;
  int data;
  Node * next;

//this is a constructor for node class
  Node() {
    key = 0;
    data = 0;
    next = NULL;
  }
  //this is a parameterized constructor for node class
  Node(int k, int d) {
    key = k;
    data = d;
    next = NULL;
  }
};

//this is a class for linked list
//it contains the head pointer

class SinglyLinkedList {
  public:
    Node * head;

//this is a constructor for linked list class
  SinglyLinkedList() {
    head = NULL;
  }
//if we pass any node then this constructor will be called and updates the head pointer
  SinglyLinkedList(Node * n) {
    head = n;
  }

  // 1. Check if node exists using key value
  /*
  The function checks if the node with key value k exists in the linked list.
    If the node exists, then the function returns that node address.
    If the node does not exist, then the function returns NULL.
  */
  Node * nodeExists(int k) {
    Node * temp = NULL;

    Node * ptr = head;
    while (ptr != NULL) {
      if (ptr -> key == k) {
        temp = ptr;
      }
      ptr = ptr -> next;

    }
    return temp;
  }

  // 2. Append a node to the list
  /*
  While appending the node we need to check if node with that already exists.
  if node exists with that key then we need to show an error message.
    if node does not exist then we need to append the node to the list.
    we need to check if the list is empty or not.
    if list is empty then we need to make the head pointer to point to the new node.
    if list is not empty then we need to traverse the list till the last node and then append the new node.
  */
  void appendNode(Node * n) {
    if (nodeExists(n -> key) != NULL) {
      cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
    } else {
      if (head == NULL) {
        head = n;
        cout << "Node Appended" << endl;
      } else {
        Node * ptr = head;
        while (ptr -> next != NULL) {
          ptr = ptr -> next;
        }
        ptr -> next = n;
        cout << "Node Appended" << endl;
      }
    }

  }
  // 3. Prepend Node - Attach a node at the start
  // This function attaches a node at the start of the list.
  // if node exists with that key then we need to show an error message.
  // if node does not exist then we need to attach the node to the list.
  void prependNode(Node * n) {
    if (nodeExists(n -> key) != NULL) {
      cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
    } else {
      n -> next = head;
      head = n;
      cout << "Node Prepended" << endl;
    }
  }

  // 4. Insert a Node after a particular node in the list
  // This function inserts a node after a particular node in the list.
    // if node exists with that key then we need to show an error message.
    // if node does not exist then we need to insert the node to the list.


  void insertNodeAfter(int k, Node * n) {
    Node * ptr = nodeExists(k);
    if (ptr == NULL) {
      cout << "No node exists with key value: " << k << endl;
    } else {
      if (nodeExists(n -> key) != NULL) {
        cout << "Node Already exists with key value : " << n -> key << ". Append another node with different Key value" << endl;
      } else {
          // first we need to find the node with key value k
          // first we need to link the right link and then link the left link

        n -> next = ptr -> next;
        ptr -> next = n;
        cout << "Node Inserted" << endl;
      }
    }
  }

  // 5. Delete node by unique key
  //for deleting the node first we need to check whether it exists or not.
  //if empty the show a error message
  //if head node is the node to be deleted then we need to update the head pointer. to be head=head->next
  //if not then we need to have 3 pointers temp,previous,current.
  //temp will be null
  //prev will be head
  //current will be head->next
  //then we need to search the node with key value k.
  //if node is found then we will update the temp with node and current to be null so that we can exit of the while
  //else we will update the previous and current to be next of previous and next of current respectively.
  //if temp not null then we will update the next of previous to be temp->next.
  //if temp is null that means node doesn't exist.
  void deleteNodeByKey(int k) {
    if (head == NULL) {
      cout << "Singly Linked List already Empty. Cant delete" << endl;
    } else if (head != NULL) {
      if (head -> key == k) {
        head = head -> next;
        cout << "Node UNLINKED with keys value : " << k << endl;
      } else {
        Node * temp = NULL;

        Node * prevptr = head;
        Node * currentptr = head -> next;
        while (currentptr != NULL) {
          if (currentptr -> key == k) {
            temp = currentptr;
            currentptr = NULL;
          } else {
            prevptr = prevptr -> next;
            currentptr = currentptr -> next;
          }
        }
        if (temp != NULL) {
          prevptr -> next = temp -> next;
          cout << "Node UNLINKED with keys value : " << k << endl;
        } else {
          cout << "Node Doesn't exist with key value : " << k << endl;
        }
      }
    }

  }
  // 6th update node/
  // This function updates the data of a node with key value k.
  // if node exists with that key then we get the ptr to that node and update the data.
  // if node does not exist then we need to show an error message.
  void updateNodeByKey(int k, int d) {

    Node * ptr = nodeExists(k);
    if (ptr != NULL) {
      ptr -> data = d;
      cout << "Node Data Updated Successfully" << endl;
    } else {
      cout << "Node Doesn't exist with key value : " << k << endl;
    }

  }

  // 7th printing
  // This function prints the linked list.`
  void printList() {
    if (head == NULL) {
      cout << "No Nodes in Singly Linked List";
    } else {
      cout << endl << "Singly Linked List Values : ";
      Node * temp = head;

      while (temp != NULL) {
        cout << "(" << temp -> key << "," << temp -> data << ") --> ";
        temp = temp -> next;
      }
    }

  }

};

int main() {

  SinglyLinkedList s;
  int option;
  int key1, k1, data1;
  do {
    cout << "\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. appendNode()" << endl;
    cout << "2. prependNode()" << endl;
    cout << "3. insertNodeAfter()" << endl;
    cout << "4. deleteNodeByKey()" << endl;
    cout << "5. updateNodeByKey()" << endl;
    cout << "6. print()" << endl;
    cout << "7. Clear Screen" << endl << endl;

    cin >> option;
    Node * n1 = new Node();
    //Node n1;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Append Node Operation \nEnter key & data of the Node to be Appended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.appendNode(n1);
      //cout<<n1.key<<" = "<<n1.data<<endl;
      break;

    case 2:
      cout << "Prepend Node Operation \nEnter key & data of the Node to be Prepended" << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;
      s.prependNode(n1);
      break;

    case 3:
      cout << "Insert Node After Operation \nEnter key of existing Node after which you want to Insert this New node: " << endl;
      cin >> k1;
      cout << "Enter key & data of the New Node first: " << endl;
      cin >> key1;
      cin >> data1;
      n1 -> key = key1;
      n1 -> data = data1;

      s.insertNodeAfter(k1, n1);
      break;

    case 4:

      cout << "Delete Node By Key Operation - \nEnter key of the Node to be deleted: " << endl;
      cin >> k1;
      s.deleteNodeByKey(k1);

      break;
    case 5:
      cout << "Update Node By Key Operation - \nEnter key & NEW data to be updated" << endl;
      cin >> key1;
      cin >> data1;
      s.updateNodeByKey(key1, data1);

      break;
    case 6:
      s.printList();

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