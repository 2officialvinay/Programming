#include<bits/stdc++.h>
using namespace std;

int countMinReversals(string s) {
    if(s.length() % 2 != 0)
        return -1;

    stack<char> st;

    for(char ch : s) {
        if(ch == '{') {
            st.push(ch);
        }
        else {
            if(!st.empty() && st.top() == '{')
                st.pop();
            else
                st.push(ch);
        }
    }

    int open = 0, close = 0;

    while(!st.empty()) {
        if(st.top() == '{')
            open++;
        else
            close++;

        st.pop();
    }

    return (open + 1) / 2 + (close + 1) / 2;
}

int main() {
    string s = "{{";
    cout << countMinReversals(s);
}