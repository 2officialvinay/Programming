#include<iostream>
#include<string.h>
using namespace std;

void getLowercase(char ch[]){
    int n = strlen(ch);
    
    for(int i = 0; i < n; i++){
        ch[i] = ch[i] - 'A' +'a';
    }
}

int main(){
    char ch[100];
    cout << "Enter the word: ";
    cin >> ch;

    getLowercase(ch);  // Array is pass by reference so any changes will be in original...

    cout << "The result is " << ch << endl;

    return 0;
}