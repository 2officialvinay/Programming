#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<char> s;
    
    string st = "Vinay Saini";
    
    for(int i = 0; i < st.size(); i++){
        s.push(st[i]);
    }

    cout << "Original String: " << st << endl;
    cout << "Reversed String: ";
    while(!s.empty()){
        cout << s.top();
        s.pop();
    }

    return 0;
}