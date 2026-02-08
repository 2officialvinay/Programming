/*
Given two strings and t, determine if they are isomorphic.
Two strings sandt are isomorphic if the characters in s can be replaced to get t.
All occurrences of a character must be replaced with another character while preserving
the order of characters. No two characters may map to the same character, but a character
may map to itself.
*/

#include<iostream>
#include<string>
using namespace std;

bool isIsomorphicStrings(string s, string t){
    int hash[256] = {0};  // Used to mapping of each char. of s to t...
    bool istCharMapped[256] = {0};  // Used to check whether the t char. mapped or not...

    for (int i = 0; i < s.size() ; i++){
        if(hash[s[i]] == 0 && istCharMapped[t[i]] == 0){
            hash[s[i]] = t[i];
            istCharMapped[t[i]] = true;
        }
    }

    for(int i = 0; i < s.size(); i++){
        if(hash[s[i]] != t[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter first string: ";
    cin >> t;

    int result = isIsomorphicStrings(s, t);

    if(result){
        cout << "The given strings are isomorphic." << endl;
    }
    else{
        cout << "The given strings are not isomorphic." << endl;
    }

    return 0;
}