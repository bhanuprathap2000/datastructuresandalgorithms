#include <iostream>

using namespace std;

/*
here to function we are passing the pointer which holds the address so during the function call we need to pass the 
address and inside the function inorder to use the value we need to use the derefrence operator

Instead of these we can simply use the reference variables.

*/
void watchVideo(int *viewPtr){

    *viewPtr = *viewPtr + 1;
}

int main(){

    int count = 100;

    watchVideo(&count);

    cout << count;

    return 0;
}