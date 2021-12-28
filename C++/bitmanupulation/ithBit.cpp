#include <iostream>

using namespace std;

//n is number and i is the bit position
int getIthBit(int n, int i){
    //main idead we need to get a number which is having zero at all positions expect at the position we want to find
    //by right shifting the 1 by i times we get the required number which we do the bitwise and with n and if greater than 0 then it is 1 else 0 
    int mask=1<<i;
    return n&mask>0?1:0;


}

void setIthBit(int &n, int i){
    //main idea is to get a number which is having 0 at all positions except the position we want to set and there it should be 1
    //by right shifting the 1 by i times we get the required number which we do the bitwise or with n 
    int mask=1<<i;
    n=n|mask;//in order to set we need to do bitwise or with mask
}

void clearIthBit(int &n, int i){
    //main idea is to get a number which is having 1 at all positions except the position we want to clear
    //by right shifting the 1 by i times we get the required number which we do the bitwise and with n 
    int mask=~(1<<i);
    n=n&mask;
}

void updateIthBit(int &n, int i, int v){
   clearIthBit(n,i);
   int mask=v<<i;//this creates a mask 
    n=n|mask;//this is for setting the bit
   
}

int main(){
    int n, i;
    cout<<"enter the number"<<endl;
    cin >>n;
    cout<<"enter the bit position"<<endl;
    cin >>i;
    cout<<"ith bit is "<<getIthBit(n, i)<<endl;
    setIthBit(n, i);
    cout<<"ith bit is "<<getIthBit(n, i)<<endl;
    clearIthBit(n, i);
    cout<<"ith bit is "<<getIthBit(n, i)<<endl;
    return 0;

}