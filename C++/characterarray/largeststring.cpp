#include <iostream>

#include <cstring>

using namespace std;

int main(){

    int n;
    int sentence_length;
    char sentence[1000];
    char largest[1000];
    cout << "Enter the number of sentences" << endl;
    cin >> n;
    cin.get();
    int largest_string = 0;

    while(n--){
        cin.getline(sentence, 1000);
        sentence_length = strlen(sentence);

        if (sentence_length > largest_string)
        {
            largest_string = sentence_length;
            strcpy(largest, sentence);
         }

    }
    cout << largest;
    return 0;
}