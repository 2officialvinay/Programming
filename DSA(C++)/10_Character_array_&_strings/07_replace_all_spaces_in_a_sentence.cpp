// Space b/w words in a sentence is replaced by '@'...

#include<iostream>
#include<string.h>
using namespace std;

void replace_space(char sentence[]){
    int n = strlen(sentence);

    for(int i = 0; i < n; i++){
        if(sentence[i] == ' '){
            sentence[i] = '@';
        }
    }
}

int main(){
    char sentence[100];
    cout << "Enter sentence: ";
    cin.getline(sentence, 100);

    replace_space(sentence);

    cout << "Sentence with replaced space: " << sentence << endl;

    return 0;
}