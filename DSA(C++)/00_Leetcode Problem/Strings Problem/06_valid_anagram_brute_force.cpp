/*
Question:
Given two strings s and t, return true ift is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.
*/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isAnagram(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s;
    string t;

    cout << "Enter first string: ";
    cin >> s;

    cout << "Enter second string: ";
    cin >> t;

    int result = isAnagram(s, t);

    if(result){
        cout << "Yes, the given strings are anagram.";
    }
    else{
        cout << "No, the given strings are not anagram.";
    }

    return 0;
}