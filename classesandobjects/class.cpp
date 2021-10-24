#include <iostream>
#include <vector>
using namespace std;
//this class is now in the global scope and can used by any function
//access specifiers
//public-anywhere accessible
//private-accesible only by members of the class or friends of the class
//protected-used with inheritence only inherted class will be able to access
class Player{
public:
    //attributes
    string name;
    int health;
    int xp;

    //methods

    void talk(string text){
        cout << name << " says " << text << endl;
    }
    bool isDead(){
        if(health==0){
            return true;
        }
        else{
            return false;
        }
    }
};

class Account{

    string name;
    double balance;

    bool deposit(double bal){
        balance += bal;
    }
    bool withdraw(double bal){
         balance -= bal;
    }

    double showBalance(){
        cout << "Balance:" << balance << endl;
    }
};

int main(){

    Player player1;//this creates an object called player1 in stack

    Player *player2 = nullptr;//whenever we create pointers it is best practice to intialize them with nullptr

    player2 = new Player;//this creates a  player in the heap secion and returns the address so the pointer should of Player class

    Player players[] = {player1, *player2};//this is an array of player objects here we are derefrence the player2 as it is address and derefrence will give the value at that location which is the object.

    vector<Player> players_vector = {player1, *player2};//we can also create a vector of objects 

    //acessing the class members.By default they are provate so let's make them public

    player1.name = "john";
    player1.health = 100;
    player1.xp = 12;

    player1.talk("You are a good player");

    //player2 is a pointer   to object how do we access the members
    //first we need to derefrence that pointer to get the object and then access the memebrs;

    (*player2).name = "Yio";
    (*player2).health = 90;
    player2->xp = 15; //we can use the arrow operator oor member of operator to access the members in easy syntax;

    player2->talk("Hi from heap section of memory");

    return 0;
}