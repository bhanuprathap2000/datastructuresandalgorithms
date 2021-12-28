#include <iostream>
using namespace std;

/*
As we know, inheritance is a feature of OOP that allows us to create derived classes from a base class. The derived classes inherit features of the base class.

Suppose, the same function is defined in both the derived class and the based class. Now if we call this function using the object of the derived class, the function of the derived class is executed.

This is known as function overriding in C++. The function in derived class overrides the function in base class.
*/

class Base{

    public:
        void display(){
            cout<<"Base class"<<endl;
        }
};

class Derived: public Base{

    public:
        void display(){
            //if we want to use the base class function we need to do this and extend the functionality.
            Base::display();
            cout<<"Derived class"<<endl;
        }
};

int main(){
    Base b;
    Derived d;
    b.display();
    d.display();

    //if we want to access the base class method then we need to use the :: operator.
    //Base::display();

    //we can use this sytax also
    d.Base::display();//this is also a valid syntax and calls the base class function.


    return 0;
}