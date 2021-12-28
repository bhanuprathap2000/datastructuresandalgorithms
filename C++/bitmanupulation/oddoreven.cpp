#include <iostream>

using namespace std;

int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin >>x;

    // the logic is for a number to be odd if the last bit is 1
    // and for a number to be even if the last bit is 0
    //so we do bitwise and with 1 and check if it is 1 or not
    // if it is 1 then it is odd else it is even

    if(x&1==1){
        cout<<"odd"<<endl;
    }
    else{
        cout<<"even"<<endl;
    }

    return 0;
}
