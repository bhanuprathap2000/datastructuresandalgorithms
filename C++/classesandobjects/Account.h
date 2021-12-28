#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
//these are some gaurds
#include <string>
//for system header files we use the <> to include and for our own custom header files we use ".h"


//the process of creating the header files is

class Account{
private:
    std:: string name;
    double balance;
public:
    //methods inline function defination
    void setBalance(double bal){
        balance += bal;
    }
    double getBalance(){
        return balance;
    }
    //we can seperate the class specification and implementation
    //so here we only written the prototypes and their implementation can be written in .cpp files
    //we can declare the function outside the class or even in different cpp file using the scope resolution operator
    void setName(std::string name);
    std::string getName();
    bool deposit(double amount);
    bool withdraw(double amount);
};

#endif