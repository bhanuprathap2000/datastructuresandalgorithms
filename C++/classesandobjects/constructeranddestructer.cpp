#include <iostream>
using namespace std;


/*
no return type for constructer
Constructer are the methods which are called when an object is created so we can do the intilization tasks using the 
constructer
and if we don't provide any consructer by default c++ provides an empty constructer
We can overload the constructer.
If we provide a constructer then the default no args consteructer will be given by c++
We ourseleves have to create a no args constructer for initilization in this case.
It' best practice to create a no args constructer because we don't want our objects attributes to be containing garbage value in no way

Instaed of having a lot of constructers we can use the default value for formal parameters in the Constructer and if one of them is missed then default value is taken.

Destructer are the methods which are called when the object goes out of scope in a function or block or it is deleted.
Destructer is useful incases where we wan to free any resources used by object just before destroying.4
we don't overload Destructer as it doesn't make any sense because it has to be called when destroyed.

There are some additional concepts like constructer lists,deligating constructer which I am skipping for now
*/
class Player{

    private:
        string name;
        int health;
        int xp;
    public:
    Player(){

        cout << "No args constructer is called." << endl;
    }
    Player(string name,int health){
        name = name;
        health = health;
        cout << "Two args constructer is called." << endl;
    }

    Player(string name,int health,int xp){
        name = name;
        health = health;
        xp = xp;
        cout << "Three args constructer is called." << endl;
    }

    ~Player(){

        cout << "Destructer is called." << endl;
    }

};

int main(){

//so this a block in which object exisits so when creating the constructer is called and when goes out of block then destructer is called.
    {
        Player player1("Bhanu Prathap", 100);
    }

    Player *player2 = new Player("John Doe", 100, 15);//constructer is called.

    delete player2;//destructer is called
    

    return 0;
}