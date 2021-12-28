#include <iostream>
using namespace std;

class Animal{
    
    public:
    //constructor of the parent class will be called automatically when an object of the parent class is created but when a child class is created if the constructor of the child class is not defined then the constructor of the parent class will be called and if child class constructer is defined then both the constructors will be called.
    Animal(){
        cout << "Animal constructor" << endl;
    }
    //in heritence methods are written only once and reusability is achieved.
        void speak(){
            cout << "Animal Speaking" << endl;
        }
        void move(){
            cout << "Animal Moving" << endl;
        }

};
//public inheritance that means public and protected members of the base class can be accessed by the derived class and private members can't be accessed but they are inherited.
class Dog:public Animal{
    public:
    void brak(){
        cout << "Dog Braking" << endl;
    }
    //overridding of move function.This means derived class can have it's own implementation of the function.And the base class implementation won't be called.But if the function is not overridden then the base class implementation will be called.
    void move(){
        cout << "Dog Moving" << endl;
    }
    Dog()
    {
        cout << "Dog constructor" << endl;
    }
};

/*
is-a relationship
Inheritance is an is-a relationship. We use inheritance only if an is-a relationship is present between the two classes.

Here are some examples:

A car is a vehicle.
Orange is a fruit.
A surgeon is a doctor.
A dog is an animal.
---------------
The various ways we can derive classes are known as access modes. These access modes have the following effect:

public: If a derived class is declared in public mode, then the members of the base class are inherited by the derived class just as they are.
private: In this case, all the members of the base class become private members in the derived class.
protected: The public members of the base class become protected members in the derived class.

private memebers are inherited but not accessible in derived class.

private means no access outside the class.
protected means access only in the class and derived class.
public means access in the class and derived class and object of the class.
Like private members, protected members are inaccessible outside of the class. However, they can be accessed by derived classes and friend classes/functions.
-------------------
Member Function Overriding in Inheritance
Suppose, base class and derived class have member functions with the same name and arguments.

If we create an object of the derived class and try to access that member function, the member function in the derived class is invoked instead of the one in the base class.

The member function of derived class overrides the member function of base class.
*/
int main(){
    Animal a;
    //when we create the object of the derived class then there are two parts one is the parent class and other is the derived class.
    Dog d;

    return 0;
}