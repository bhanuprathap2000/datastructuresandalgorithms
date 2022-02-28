// while defining multiple classes in a single Java file you need to make sure that only one class among them is public.
/*When we don't use any keyword explicitly, Java will set a default access to a given class, method or property. The default access modifier is also called package-private, which means that all members are visible within the same package but aren't accessible from other packages */


class Node {

    /*
     This class is for creating the nodes whenever needed.
    we will pass the data and a node will be created which has two properties data and next which is default null
    */

    int data;
    Node next;

    Node(int data) {

        this.data=data;
        this.next=null;
    }
}


class LinkedList {

    // This class is for creating the singly linked list.
    //this will have the head reference which will point to the first element.

    Node head;

    LinkedList() {

        this.head = null;
    }
    
    void addNode(int data) {
        /*
        in order to add the node first we will check whether the linked list is empty or not.
        if empty we will just create a node and update our head reference of linked list.
        if not empty we will create a node and then we will update the next field of the last node.
        for this we will iterate till the last node.
        */

        if (this.isEmpty()) {

            this.head = new Node(data);

        }

        else {
            

            Node temp = this.head;
            while (temp.next != null) {

                temp = temp.next;
            }
            temp.next = new Node(data);
        }

    }
    
    void printList() {

        //This method will print all the elements in the linked list.

        Node temp = this.head;
        while (temp != null) {

            System.out.print(temp.data + "->");
            temp = temp.next;
        }
        System.out.println("null");
    }
    

    boolean isEmpty() {
        //This method returns true if empty or false if not empty.
        

        return this.head == null;
    }

    public static void main(String[] args) {

        // LinkedList s=new LinkedList();
        var s = new LinkedList(); //we can use the var keyword instead of datatype which is figured out by the compiler.
        //using the new keyword we will create an object of the class in the heap section of memory and it will return the reference of the object.
        
        s.addNode(10);
        s.addNode(20);
        s.addNode(30);
        s.addNode(40);
        s.addNode(50);
        s.printList();
    }
}





















