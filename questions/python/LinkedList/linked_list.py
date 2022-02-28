#use self keyword in order to access the instance members of the class(fields and methods)  in python

class Node:
    """
    This class is for creating the nodes whenever needed.
    we will pass the data and a node will be created which has two properties data and next which is default None
    """

    def __init__(self,data):

        self.data=data
        self.next=None



class SinglyLinkedList:

    """
    This class is for creating the singly linked list.
    this will have the head reference which will point to the first element.
    """

    def __init__(self):
        
        self.head=None

    
    def add_node(self,data):
        """
        in order to add the node first we will check whether the linked list is empty or not.
        if empty we will just create a node and update our head reference of linked list.
        if not empty we will create a node and then we will update the next field of the last node.
        for this we will iterate till the last node.
        """

        if self.is_empty():
            self.head=Node(data)
        else:
            new_node=Node(data)
            temp=self.head

            while temp.next is not None:
                temp=temp.next
            
            temp.next=new_node

        new_node=Node(data)

    def print_list(self):

        """
        This method will print all the elements in the linked list.
        """

        temp=self.head

        while temp is not None:
            print(temp.data,end="->")
            temp=temp.next

        print("None")



    def is_empty(self):

        """
        This method returns true if empty or false if not empty.
        """

        if self.head is None:
            return True
        else:
            return False


if __name__ == '__main__':
    s=SinglyLinkedList()
    s.add_node(1)
    s.add_node(2)
    s.add_node(3)
    s.add_node(4)
    s.add_node(5)
    s.print_list()

