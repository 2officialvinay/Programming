#include<bits/stdc++.h>
using namespace std;

void printPermutation(string &str, int i){
    // Base Case...
    if(i >= str.length()){
        cout << str << "  ";
        return;
    }

    for(int j = i; j < str.length(); j++){
        // Swapping..
        swap(str[i], str[j]);

        // Recursive Call..
        printPermutation(str, i+1);

        // Back-Tracking..
        swap(str[i], str[j]);
    }
}

int main(){
    string str = "abc";
    int i = 0;

    printPermutation(str, i);

    return 0;
}