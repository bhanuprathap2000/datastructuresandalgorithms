#include <iostream>
using namespace std;

/*
The literal meaning of Polymorphism is to have many forms. In programming, this means that the same entity acts in different ways depending on situations. Polymorphism is a key concept of OOPs.

Consider yourself as a real life example of polymorphism. Depending on situations, you perform different roles like a student, a son/daughter, a brother/sister, etc.

Types of Polymorphism in C++
There are two types of polymorphism in C++:

1. Compile-time Polymorphism in C++(method overloading and operator overloading)
This type of polymorphism is also referred to as static binding or early binding. It takes place during compilation.
We use function overloading and operator overloading to achieve compile-time polymorphism.

a. Function Overloading in C++
In C++, two or more functions can have the same name if the number and/or type of parameters are different, this is called function overloading. Thus, overloaded functions are functions that have the same name but different parameters.

An overloaded function is called based on the number and type of parameters passed. Thus, the compiler picks the correct function during compilation of the program.

 Operator Overloading in C++
We can also overload operators in C++. We can change the behavior of operators for user-defined types like objects and structures.

For example, the ‘+’ operator, used for addition, can also be used to concatenate two strings of std::string class. Its behavior will depend on the operands.

method overloading is determined at compile time.and method overriding is determined at run time.
-----------------------------------------------------------------------------------------------------------------------------

Polymorphism
Compile-time /early binding/static binding
Runtime / late binding / dynamic binding

Runtime polymorphism
Being able to assign different meanings to the same function at runtime

Allows us to program more abstractly
Think general vs specific
Let c++ figure out which function to call at runtime

Not the default in c++ run time polymorphism is achieved
Inheritence
Base class pointers or references
virtual functions

Compile time polymorphism
function overloading
operator overloading

Runtime polymorphism
Function overriding

An non-polymorphic example-Static Binding

Account a;
a.withdraw(100); //Account::withdraw(100)

SavingsAccount s;
s.withdraw(100); //SavingsAccount::withdraw(100)

CheckingAccount c;
c.withdraw(100); //CheckingAccount::withdraw(100)

TrustAccount t;
t.withdraw(100); //TrustAccount::withdraw(100)

Above four examples are static binding that means during the compile time which function to call is decided by the compiler.

Account *p= new TrustAccount();
p->withdraw(100); //Account::withdraw(100)

//the behaviour we want is to call the function written in TrustAccount class by function overriding but function in Account class is called.
//This is because compiler is doing the static binding the pointer p is of type Account and TrustAccount is derived from Account and so the compiler at compile time will bind the Account::withdraw() to the pointer p.
This is accheived because of inheritence and function overriding.

Another example non-polymorphic example-Static Binding

void display_account(const Account &a)
{
    a.withdraw(100); //Account::withdraw(100)
}

No matter whichever type of account object is passed to the function display_account() it will call the withdraw() function of Account class.
Here also compile time binding is done.
Account a;
display_account(a); //Account::withdraw(100)

SavingsAccount s;
display_account(s); //Account::withdraw(100)

CheckingAccount c;
display_account(c); //Account::withdraw(100)

TrustAccount t;
display_account(t); //Account::withdraw(100)

A Polymorphic example-Dynamic Binding

Here withdraw is a virtual function in Account class.

Account a;
a.withdraw(100); //Account::withdraw(100)

SavingsAccount s;
s.withdraw(100); //SavingsAccount::withdraw(100)

CheckingAccount c;
c.withdraw(100); //CheckingAccount::withdraw(100)

TrustAccount t;
t.withdraw(100); //TrustAccount::withdraw(100)

Above four examples are static binding that means during the compile time which function to call is decided by the compiler.

Account *p= new TrustAccount();
p->withdraw(100); //TrustAccount::withdraw(100)


virtual function tells the compiler that not to bind the function to a particular object at compile time but to bind it at run time.
*/

/*
Run-time Polymorphism in C++
Run-time polymorphism takes place when functions are invoked during run time. It is also known as dynamic binding or late binding. Function overriding is used to achieve run-time polymorphism.

a. Function Overriding in C++
When a member function of a base class is redefined in its derived class with the same parameters and return type, it is called function overriding in C++. The base class function is said to be overridden.

The function call is resolved during run time and not by the compiler.
*/

class base {
    public:
    virtual void display() {
        cout<<"Function of base class"<<endl;
    }
};
class derived : public base {
    public:
    void display() {
        cout<<"Function of derived class"<<endl;
    }
};

/*
Virtual Function in C++
A virtual function is a function defined in the base class with virtual keyword. The purpose of virtual function is to ensure that the function is overridden.

If we do not use virtual keyword with the base class function, it may not be overridden. We can still access it using a base class pointer. If the base class pointer points to the derived class object, the base class function will get executed.

*/
int main(){
     derived d1;
  d1.display();//which display to call is determined at the run time.
  derived d;
  base *b = &d;   //base class pointer
  b->display();   //base class function executes

    return 0;
}

/*
Compile-time Polymorphism	                                        Run-time Polymorphism
Also called static or early binding.	                            Also called dynamic or late binding.
Achieved through overloading.	                                    Achieved through overriding.
The function to be executed is known during compile time.	        The function to be executed is known during run time.
Faster is execution.	                                            Slow in execution.
Provides less flexibility.	                                        Provides more flexibility.

*/

/*
Run-time Polymorphism with Data Members
Run-time polymorphism can also be achieved through data members.

Example of run-time polymorphism with data members

#include <iostream>
#include <string>
using namespace std;
class Animal {
    public:
    string name = "Animal";
};
class Dog : public Animal {
    public:
    string name = "Dog";
};
int main() {
  Dog d;
  cout<<d.name;
  return 0;
}
*/