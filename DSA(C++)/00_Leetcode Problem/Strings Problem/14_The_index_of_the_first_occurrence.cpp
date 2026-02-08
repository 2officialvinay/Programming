/*
Given two strings needle and haystack, return the index of the first
occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

#include<iostream>
#include<string>
using namespace std;

int strStr(string haystack, string needle){
    int n = haystack.size();
    int m = needle.size();

    for(int i = 0; i <= n - m; i++){
        for(int j = 0; j < m; j++){
            if(needle[j] != haystack[i+j]){
                break;
            }
            if(j == m-1){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    string haystack = "happybutsad";
    string needle = "sad";

    cout << "The index of needle is: " << strStr(haystack, needle) << endl;

    return 0;
}