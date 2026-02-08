#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

bool isVowel(char ch){
    ch = tolower(ch);  // If uppercase comes then it will convert it in lowercase...

    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

string reverseVowels(string s){
    int l = 0;
    int h = s.length();

    while(l<h){
        if(isVowel(s[l]) && isVowel(s[h])){
            swap(s[l], s[h]);
            l++;
            h--;
        }
        else if(isVowel(s[l]) == 0){
            l++;
        }
        else{
            h--;
        }
    }
    return s;
}

int main(){
    string s;
    cout << "Enter the word: ";
    cin >> s;

    string result = reverseVowels(s);

    cout << "The required answer is: " << result << endl;

    return 0;
}