#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i<=j){
        // Check by removig i first and then j second...
        if(s[i] != s[j]){
            return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
        }
        else{
            // if s[i] == s[j]
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s;

    cout << "Enter the string: ";
    cin >> s;

    int ans = validPalindrome(s);

    if(ans == 1){
        cout << "String can be converted into a valid palindrome." << endl;
    }
    else{
        cout << "String can not be converted into a valid palindrome." << endl;
    }

    return 0;
}