#include<bits/stdc++.h>
using namespace std;

bool palindromeCheck(string &s, int i, int j){
    // Base Case...
    if(i > j){
        return true;
    }

    // Progression...
    if(s[i] == s[j]){
        i++;
        j--;
    }
    if(s[i] != s[j]){
        return false;
    }

    // Recursive Relation...
    palindromeCheck(s, i, j);
}

int main(){
    string s;
    cout << "Enter string to check is it palindrome: ";
    cin >> s;
    int i = 0;
    int j = s.length() - 1;

    bool ans = palindromeCheck(s, i, j);

    if(ans){
        cout << "String is a palindrome." << endl;
    }
    else{
        cout << "String is not a palindrome." << endl;
    }

    return 0;
}