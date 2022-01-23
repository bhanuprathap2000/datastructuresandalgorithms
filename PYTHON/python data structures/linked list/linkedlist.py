class _Node:
    """
    This class creates a node containing the data which we call element and next to reference to next Node.
    we are using the _ with prefix the class and attribute because we want to tell other programmers that these are the
    for the internal purpose and they should not be used by them.
    we are using the dunder slots to avoid the dictionary mapping of the attributes.
    """
    __slots__=['_element','_next']


    def __init__(self,element,next):
        self._element=element
        self._next=next


class LinkedList:
    """
    we are having three attributes _head,_tail,_size.
    _head for starting node and _tail is for last node and size for length of the linked list.

    for atributes and methods for public we just the names without any conventions.
    """
    def __init__(self):

        self._head=None
        self._tail=None
        self._size=0

    def isempty(self):
        """
        returns whether the linkedlist is empty or not
        """
        if self._size ==0:
            return True

    def addElement(self,element):
        """
        we will create the new node if check for empty if empty then _head and _tail will point to new node.
        else we will use the _tail.next which will be last node and update that to the newest node and next update the _tail itself to newest node.
        then at last increment the size of the linked list
        The time complexity is O(1) because we just need to append at the last node.
        """
        newest=_Node(element,None)

        if self.isempty():
            self._head=newest
            self._tail=newest
        else:
            self._tail._next=newest
            self._tail=newest

        self._size+=1
    
    def __len__(self):
            """
            returns the size of the linked list
            """
            return self._size

    def display(self):
        """
        print the linked list 
        Time complexity of this method is O(n) because we need to traverse the linked list to print the elements.
        """
        p=self._head
        while p:
            print(p._element,end='->')
            p=p._next
        print()


    def search(self,key):
        """
        search the element in the linked list
        first we will get the reference to the root node.
        then we will traverse the linked list until we find the element or reach the end of the linked list.
        we are keeping a index variable to keep track of the position of the element found.
        if we reach the end of the linked list then we will return -1.
        Time complexity of this method is O(n) because we need to traverse the linked list to search the element.

        """
        p=self._head
        index=0
        while p:
            if p._element==key:
                return index
            p=p._next
            index+=1
        return -1

    def addFirst(self,element):
        """
        add the element at the first position of the linked list
        first we will create the new node.
        if the linked list is empty then we will update the _head and _tail to the new node.
        else we will update the newset node _next to the _head and _head to the new node.
        then increment the size of the linked list.
        Time complexity of this method is O(1) because we just need to append at the first node.
        """
        newest=_Node(element,None)

        if self.isempty():
            self._head=newest
            self._tail=newest
        else:
            newest._next=self._head
            self._head=newest
        self._size+=1
    
    def addany(self,element,position):
        """
        add the element at the any position of the linked list
        first we will create the new node.
        then traverse till the node after which we want to add the new node.
        then update the new node _next to the _next of the node after which we want to add the new node.
        then update the _next of the node after which we want to add the new node to the new node.
        """
        newest=_Node(element,None)
        p=self._head

        i=1

        while i<position-1:
            p=p._next
            i+=1
        newest._next=p._next
        p._next=newest

    def delete_first(self):

        """
        first we check if linked list is empty if yes print the message.
        then we will get the value from the first node and the  _head will point ot the second node
        then we will decrement the size of the linked list.
        then if size of linked is empty after deleting then point the tail to None and then return the value
        In python we need to explicitly delete the node we just update the reference to next node and 
        python will automatically delete the objects which are no longer referenced.
        Time complexity of this method is O(1) because we just need to delete the first node.

        """

        if self.isempty():
            print('Linked list is empty')
        
        value=self._head._element
        self._head=self._head._next
        self._size-=1

        if self.isempty():
            self._tail=None

        return value

    def delete_last(self):
        """
        unfortunately even having the tail we cannot cannot delete the node in linear time.It takes O(N)
        first we check if linked list is empty if yes print the message.
        then we get the value from the tail._element 
        next we need to travese till the last but one node and update the _next of the last but one node to None.
        then update the tail to the last but one node.
        then decrement the size of the linked list.
        and return the value.
        
        """

        if self.isempty():
            print('Linked list is empty')
        
        value=self._tail._element
        p=self._head
        i=1

        while i<self._size-1:
            p=p._next
            i+=1
        p._next=None
        self._tail=p
        self._size-=1
        return value

    def delete_any(self,position):
        """
        first we check if linked list is empty if yes print the message.
        then we need to travese till the node after which we want to delete the node.
        p._next=p._next._next
        here p._next is the node before the node we want to delete.
        p._next._next is the node after which  we want to delete the node.
        so if we establish the link between them the middle node is deleted.
        then decrement the size of the linked list.
        and return the value.
        """

        if self.isempty():
            print('Linked list is empty')
        
        p=self._head

        i=1

        while i<position-1:
            p=p._next
            i+=1
        value=p._next._element
        p._next=p._next._next
        self._size-=1
        return value





ll=LinkedList()
ll.addElement(2)
ll.addElement(3)
ll.addElement(4)
ll.addElement(5)
ll.display()
print(len(ll))
print(ll.search(3))
print(ll.search(5))
ll.addFirst(1)
ll.display()
ll.addany(6,3)
ll.display()
ll.delete_first()
ll.display()
ll.delete_last()
ll.display()
ll.delete_any(2)
ll.display()


