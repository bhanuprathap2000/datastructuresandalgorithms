#include <iostream>
#include <cstring>
using namespace std;

class Account{

    private:
        int acc_no;
        char name[20];
        float balance;
    public:
    
    Account(int acc_no, char name[20], float balance){
        this->acc_no = acc_no; 
        strcpy(this->name, name);
        this->balance = balance;
    }

        void get_data(){
            cout<<"Enter account number: ";
            cin>>acc_no;
            cout<<"Enter name: ";
            cin>>name;
            cout<<"Enter balance: ";
            cin>>balance;
        }
        void display(){
            cout<<"Account number: "<<acc_no<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};

int main(){

    Account a1(101, "John", 1000);
    Account a2(102, "Mary", 2000);
    Account a3(103, "Peter", 3000);
    return 0;
}