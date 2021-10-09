#include <iostream>

using namespace std;

// int arr[] or int* arr both can used as under the hood the only address is passed.
//in case of pass by reference only an alias is created but not the seperate memory location but for pointer a memory location is created
//in c++ by default arrays are passed as refrence so to avoid that overhead of copying.

void printArray(int refrencearr[]){

    int arrSize = sizeof(refrencearr) / sizeof(int);
    cout << "Size of array in function is" << arrSize;

}


int main(){

    int arr[]={1,2,3,4,5};

    int arrSize = sizeof(arr) / sizeof(int);

    cout << "Size of array in main is" << arrSize << endl;
    

    printArray(arr);

    return 0;
}

/*
For array in c++ they are passed as reference that means the array passed in other functions is just another name given 
to the array that means it points to same address in the memory but in case of main it is avialable in main function 
itself but in case of other functions only address is available not the entire array.

As mentioned in the introduction, one of the major disadvantages of pass by value is that all arguments 
passed by value are copied into the function parameters. When the arguments are large structs or classes,
this can take a lot of time. References provide a way to avoid this penalty. When an argument is passed by reference,
a reference is created to the actual argument (which takes minimal time) and no copying of values takes place. 
This allows us to pass large structs and classes with a minimum performance penalty.

However, this also opens us up to potential trouble. References allow the function to change the value of the argument,
which is undesirable when we want an argument be read-only. If we know that a function should not change the value of
an argument, but don’t want to pass by value, the best solution is to pass by const reference.

https://www.cs.fsu.edu/~myers/c++/notes/references.html
important
Let me try to make you understand in easy way. When you declared any variable in your c++ program then compiler create an entry in the symbol table for that variable and later an appropriate space in memory provided for it. In case of reference variable there will be a new entry in the symbol table which having the same storage of referenced varible, there will be no space allocated for it later, it is just an alias name like you may be refer by two names (like name, nick name). Now lets take a case of pointer varible. Irrespective of it is a pointer but it is a variable so it will also have a symbol table entry and space will be allocated for it later.

So from above statements you can easily find the below difference between address(pointer) and reference variable 1) There will no extra memory allocated for the reference variable but for pointer variable there will be 4 or 8 bytes depends on the system (32 or 64 bit operating system) for which you are going to compile and run the code. 2) you can't deference the reference variable later on normally so you can't changed the reference but in case of pointer variable it can contain different pointer.
*/