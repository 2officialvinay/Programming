/*
QUESTION:
Given a string, reverse the string according to the following rules:
All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Returns after reversing it.
*/

#include<iostream>
#include<string>
#include <cctype>
using namespace std;

string reverseOnlyLetters(string s){
    int l = 0, h = s.size() - 1;

    while (l < h)
    {
        if(isalpha(s[l]) && isalpha(s[h])){
            swap(s[l], s[h]);
            l++;
            h--;
        }
        else if(!isalpha(s[l])){
            l++;
        }
        else{
            // if s[h] != alphabet...
            h--;
        }
    }
    return s;
}

int main(){
    string s = "Test1ng-Leet=code-Q!";

    string ans = reverseOnlyLetters(s);

    cout << "The reversed string with rules is: " << ans << endl;

    return 0;
}