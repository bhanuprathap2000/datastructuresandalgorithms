#include <iostream>
#include <string>
using namespace std;

/*
This function will compress the string given 
input:aabbbccddd
output:a2b3c2d3

This performs good with only when strings repeated are greater than 1

input:abcd
output:a1b1c1d1

here output string is more than the input string.

we iterate through the string and we create a output string and maintain a count inside the for loop 
inside the for loop we again use a while to count the number of times a particular value is there for consecutively
we stop when next element is not equal to the present element else we increase the count and i also because we are actually looping but
i is not increased so that's why we need to increment i and after each while loop termination we update the output string 
and finally return string. 
*/
string compressString(string s){

    string output;

    for (int i = 0; i < s.length();i++){

        int count = 1;

        while(i<s.length() and s[i]==s[i+1]){
            count++;
            i++;
        }
        output += s[i];
        output += to_string(count);
    }
    return output;
}

int main(){

    string s1 = "aabbbccddd";
    string s2 = "abcd";

    cout<<compressString(s1);
    cout<<compressString(s2);
    return 0;
}