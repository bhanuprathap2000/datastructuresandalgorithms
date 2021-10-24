#include "Account.h"
#include <string>
//infront of name of the member we need to use the scope resolution operator and specify which class it belongs it to
//we have seperated the implementation and specification.
void Account::setName(std::string name){
    name = name;
}

std::string Account::getName(){
    return name;
}

bool Account::deposit(double amount){
    balance += amount;
}

bool Account::withdraw(double amount){
    balance -= amount;
}