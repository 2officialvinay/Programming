#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string s, string t){
    int freqTable[256] = {0};

    if(s.size() != t.size()){
        return false;
    }

    for(int i = 0; i < s.size(); i++){
        freqTable[s[i]]++;   // It is the way of typecasting character to integer...
    }

    for(int i = 0; i < t.size(); i++){
        freqTable[t[i]]--;  // It will remove character from frequency table to check valid anagaram...
    }

    for(int i = 0; i < 256; i++){
        if(freqTable[i] != 0){
            return false;
        }
    }
    return true;
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