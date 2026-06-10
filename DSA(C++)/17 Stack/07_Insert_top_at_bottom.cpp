#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int &Top){
    // Base Case...
    if(s.empty()){
        s.push(Top);
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive call...
    insertAtBottom(s, Top);

    // Backtracking...
    s.push(temp);
}

int main(){
    stack<int> s;
    s.push(11);
    s.push(32);
    s.push(27);
    s.push(15);
    s.push(10);

    int Top = s.top();
    s.pop();
    insertAtBottom(s, Top);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}