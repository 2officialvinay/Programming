#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    if(s[0] != 'a'){
        return false;
    }

    stack<char>st;
    for(auto ch:s){
        if(ch == 'a'){
            st.push(ch);
        }
        else if(ch == 'b'){
            if(!st.empty() && st.top() == 'a'){
                st.push(ch);
            }
            else{
                return false;
            }
        }
        else{
            if(!st.empty() && st.top() == 'b'){
                st.pop();
                if(!st.empty() && st.top() == 'a'){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }
    return st.empty();
}

int main(){
    string s1 = "aabcbc";
    string s2 = "abcabcababcc";
    string s3 = "abccba";
    string s4 = "aaabc";

    cout << isValid(s1) << endl;
    cout << isValid(s2) << endl;
    cout << isValid(s3) << endl;
    cout << isValid(s4) << endl;

    return 0;
}