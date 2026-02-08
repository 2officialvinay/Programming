// Palindrome words --> NOON, KADAK, MADAM, etc.  

#include<iostream>
#include<string.h>
using namespace std;

bool checking_palindrome(char ch[]){
    int n = strlen(ch);
    int i = 0;
    int j = n - 1;

    while(i<=j){
        if(ch[i] != ch[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    char ch[100];
    cout << "Enter the word: ";
    cin >> ch;

    int result = checking_palindrome(ch);

    if(result){
        cout << "The word is a palindrome." << endl;
    }
    else{
        cout << "The word is not a palindrome." << endl;
    }

    return 0;
}