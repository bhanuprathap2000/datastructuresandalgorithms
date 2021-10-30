#include <iostream>
using namespace std;

//In general, creating a copy of an object means to create an exact replica of the object having the same literal value, data type, and resources.
//In this case, the copy constructor is called to create a copy of the object.
//The copy constructor is called when the object is created.

/*
Depending upon the resources like dynamic memory held by the object, either we need to perform Shallow Copy or Deep Copy in order to create a replica of the object. In general, if the variables of an object have been dynamically allocated then it is required to do a Deep Copy in order to create a copy of the object.
In shallow copy, an object is created by simply copying the data of all variables of the original object. This works well if none of the variables of the object are defined in the heap section of memory. If some variables are dynamically allocated memory from heap section, then copied object variable will also reference then same memory location.
This will create ambiguity and run-time errors dangling pointer. Since both objects will reference to the same memory location, then change made by one will reflect those change in another object as well. Since we wanted to create a replica of the object, this purpose will not be filled by Shallow copy. 
Note: C++ compiler implicitly creates a copy constructor and overloads assignment operator in order to perform shallow copy at compile time.

MyClass A, B;//here the default no args constructer will be called
A = MyClass(); Redefinition of `A`; perfectly legal though superfluous: I'vedropped the `new` to defeat compiler error
B = A;  Assignment operator called (`B` is already constructed so no constrcuter is called.) here the operator overloads which is given by the compiler
MyClass C = B;  Copy constructor called.
c++ compiler will create a copy constructor and overloads assignment operator in order to perform shallow copy at compile time. if we want to perform deep copy then we need to write our own copy constructor and assignment operator.
*/

class Box{

    private:
        int length;
        int breadth;
        int height;

    public:
    //Constructor to initialize the member variables
        Box(int l, int b, int h)
        {
            length = l;
            breadth = b;
            height = h;
        }
        //copy constructor to create a copy of an object
        Box(const Box& b)
        {
            length = b.length;
            breadth = b.breadth;
            height = b.height;
        }

        void show()
        {
            cout << "Length: " << length << endl;
            cout << "Breadth: " << breadth << endl;
            cout << "Height: " << height << endl;
        }
};

class box{
    private:
    int length;
    int *breadth;
    int height;
    public:
    box(int l, int b, int h)
    {
        length = l;
        breadth = new int;
        *breadth = b;
        height = h;
    }
    //copy constructor to create a copy of an object here to this constructer object is passed as reference.
    //here inside this copy constructer for breadth it is a pointer to heap section what 
    //we are doing is we are creaing a new pointer everytime a new object is created and instead of copying the pointer we are creating a new pointer and copying values from previous object to this new memory location
    box(const box& b)
    {
        length = b.length;
        breadth = new int;
        *breadth = *(b.breadth);
        height = b.height;
        cout << "Called the copy constructer" << endl;
        
    }
    box operator=(const box& b)
    {
        length = b.length;
        breadth = new int;
        *breadth = *(b.breadth);
        height = b.height;
        cout<<"Called the assignment operator";
    }
    void show()
    {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << *breadth << endl;
        cout << "Height: " << height << endl;
    }
};
int main(){

    // Box b1(10, 20, 15);
    // Box b2(b1);
    // Box b3 = b1;//shallow copy so the object b3 will have the same value as b1 and b1 will be passed by reference to b3 copy constructor
    // //We are passing the object b1 to the object b2.     
    // b1.show();//Output: Length: 10
    //             //Breadth: 20
    //             //Height: 15
    // b2.show();
    //             //Length: 10
    //             //Breadth: 20
    //             //Height: 15


    box b4(10, 20, 15);
    box b5(b4);//here the copy constructer is called because b5 doesn't exist yet so it will create a new object and copy the values from b4 to b5
    box b6(10, 20, 15);
    b6 = b4;//here the assignment operator is called because b6 already exists so it will copy the values from b4 to b6

    return 0;

}