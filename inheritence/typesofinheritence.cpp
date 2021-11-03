#include <iostream>

using namespace std;

//creating classes with multilevel inheritence
//In C++ programming, not only you can derive a class from the base class but you can also derive a class from the derived class. This form of inheritance is known as multilevel inheritance.
class A
{
public:
    void print()
    {
        cout << "A" << endl;
    }
};

class B: public A
{
};
//C++ Multiple Inheritance
//In C++ programming, a class can be derived from more than one parent. For example, A class Bat is derived from base classes Mammal and WingedAnimal. It makes sense because bat is a mammal as well as a winged animal.
class Mammal
{
    public:
    Mammal(){
        cout << "Mammal" << endl;
    }
};

class WingedAnimal
{
    public:
    WingedAnimal(){
        cout << "WingedAnimal" << endl;
    }
};
//class inheriteing from two classes
class Bat:public Mammal,public WingedAnimal{
    public:
    Bat(){
        cout << "Bat";
    }
};
/*
Ambiguity in Multiple Inheritance
The most obvious problem with multiple inheritance occurs during function overriding.

Suppose, two base classes have a same function which is not overridden in derived class.

If you try to call the function using the object of the derived class, compiler shows error. It's because compiler doesn't know which function to call. 
This problem can be solved using the scope resolution function to specify which function to class either base classes.

-------------
C++ Hierarchical Inheritance
If more than one class is inherited from the base class, it's known as hierarchical inheritance. In hierarchical inheritance, all features that are common in child classes are included in the base class.

For example, Physics, Chemistry, Biology are derived from Science class. Similarly, Dog, Cat, Horse are derived from Animal class.
*/
int main(){

    Bat b;


    return 0;
}