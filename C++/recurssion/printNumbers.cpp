#include <iostream>

using namespace std;

//in order to solve the recurssive we need to think about recurvuse case and base case 
void dec(int n){
    if(n==0){
        return;
    }

    cout << n << ",";
    dec(n-1);
}

void inc(int n){
    if(n==0){
        return;
    }
    inc(n-1);
    cout << n << ",";
    
}

int main(){
    dec(5);
    cout << endl;
    inc(5);
    
    return 0;

}