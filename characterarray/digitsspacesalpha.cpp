#include <iostream>

using namespace std;

int main(){

    int digits = 0;
    int spaces = 0;
    int alpha = 0;

    char ch;


    ch=cin.get();


    while(ch!='\n'){
        if(ch>='0' and ch<='9' ){
            digits++;
        }
        else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
            alpha++;
        }
        else if(ch==' ' or ch=='\t'){
            spaces++;
        }

        ch=cin.get();

    }

    cout<<"Total digits"<<digits<<endl;
    cout << "Total spaces" << spaces << endl;
    cout << "Total alphabets" << alpha << endl;

    return 0;
}