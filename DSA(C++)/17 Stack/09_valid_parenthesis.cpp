#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string st){
    stack<char> s;
    
    for(int i = 0; i < st.size(); i++){
        char ch = st[i];
        if(ch == '(' || ch == '{' || ch == '['){
            s.push(st[i]);
        }
        else{
            if(s.empty()){
                return false;
            }
            else{
                char chTop = s.top();
                if(chTop == '(' && ch == ')'){
                    s.pop();
                }
                else if(chTop == '{' && ch == '}'){
                    s.pop();
                }
                else if(chTop == '[' && ch == ']'){
                    s.pop();
                }
                else{
                    return false;
                }
            }
        }
    }

    return s.empty();
}

int main(){
    string st = "[{()}]";

    bool ans = isValidParenthesis(st);

    if(ans){
        cout << "Yes, given string is a example of valid parenthesis." << endl;
    }
    else{
        cout << "No, given string is not a example of valid parenthesis." << endl;
    }

    return 0;
}