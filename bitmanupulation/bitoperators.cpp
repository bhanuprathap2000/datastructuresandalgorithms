#include <iostream>

using namespace std;

int main(){

    int x, y,z,a,b;
    x=2;
    y=4;

    z =~x;
    a = x << y;//this is 2*2^4=32
    b = x >> y;//this is 2/2^4=0.5 this will be zero as we took b as int
    cout << z << endl;
    cout << a << endl;
    cout << b << endl;

    // bitwise operators such as & | ^ ~ << >> operate on bits.
    //if 5 is 101, then ~5 is 010
    //another intersting thing is that ~0 is -1 and ~1 is -2 this is because we are taking the negation of integer and not the binary representation of it.
    //~0 is 1 if 0 is the bit and not the integer
    //the left shift operator << shifts the bits to the left by the number of positions specified.this is a<<b means a*2^b
    //the right shift operator >> shifts the bits to the right by the number of positions specified. this is a>>b means a/2^b


    return 0;
}