class _Node:
    __slots__=['_element','_next']
    def __init__(self,element,next):
        self._element=element
        self._next=next

class StackLinkedList:
    """
    Stack is the data structure that follows the last in first out concept.
    we have push pop and top methods for stack abstarct data structure.
    we have used the linked list data structure for implementing the stack.

    pushing and pop takes only linear time.
    top takes O(1) time.
    we insert or remove elements from the top of the stack.

    """
    def __init__(self):
        self._top=None
        self._size=0
    
    def push(self,element):
        new_node=_Node(element,self._top)
        self._top=new_node
        self._size+=1
    
    def pop(self):
        if self.isEmpty():
            print("Stack is empty")
            return
        element=self._top._element
        self._top=self._top._next
        self._size-=1
        return element
    
    def top(self):
        if self.isEmpty():
            print("Stack is empty")
            return
        return self._top._element
    
    def isEmpty(self):
        return self._size==0
    
    def __len__(self):
        return self._size
    
    def display(self):
        p=self._top
        while p:
            print(p._element)
            p=p._next
    
stack=StackLinkedList()
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.push(5)
print(stack.pop())
print(stack.pop())
print(len(stack))
stack.display()
