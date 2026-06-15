#include<bits/stdc++.h>
using namespace std;

int longestValidParenthesis(string s){
    stack<int> st;
    st.push(-1);
    int length = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty()){
                length = max(length, i-st.top());
            }
            else{
                st.push(i);
            }
        }
    }
    
    return length;
}

int main(){
    string s1 = ")()())";
    string s2 = "(()";
    string s3 = "";
    int arr[3];

    for(int i = 0; i < 3; i++){
        if(i==0)
        arr[i] = longestValidParenthesis(s1);
        if(i==1)
        arr[i] = longestValidParenthesis(s2);
        if(i==2)
        arr[i] = longestValidParenthesis(s3);
    }

    int i = 1;
    for(auto x:arr){
        cout << "Length of longest valid parenthesis for " << i++ << " string is: " << x << endl;
    }

    return 0;
}