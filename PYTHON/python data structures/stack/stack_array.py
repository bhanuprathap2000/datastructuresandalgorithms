class StackArray:

    """
    Stack is the data structure that follows the last in first out concept.
    we have push pop and top methods for stack abstarct data structure.
    we have used the built in sequence data structure list for implementing the stack.
    """

    def __init__(self):
        self._data=[]

    def push(self,element):
        self._data.append(element)
    
    def pop(self):
        if self.isEmpty():
            print("Stack is empty")
            return
        return self._data.pop()
    
    def top(self):
        if self.isEmpty():
            print("Stack is empty")
            return
        return self._data[-1]
    
    def isEmpty(self):
        return len(self._data)==0
    
    def __len__(self):
        return len(self._data)


stack=StackArray()
stack.push(1)
stack.push(2)
stack.push(3)
stack.push(4)
stack.push(5)
print(stack.pop())
print(stack.pop())
print(len(stack))

     