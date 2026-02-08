#include<bits/stdc++.h>
using namespace std;

void reverseString(string &s, int start, int end){
    // Base Case...
    if(start > end){
        return;
    }

    swap(s[start], s[end]);

    // Recursive Relation...
    reverseString(s, start + 1, end - 1);
}

int main(){
    string s = "Hello Everyone!";
    int start = 0;
    int end = s.length() - 1;

    reverseString(s, start, end);

    cout << "The reversed string is: " << s << endl;

    return 0;
}