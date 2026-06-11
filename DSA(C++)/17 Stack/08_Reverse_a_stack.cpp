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

void reverseStack(stack<int> &s){
    // Base Case...
    if(s.empty()){
        return;
    }

    int target = s.top();
    s.pop();

    // Recursive calling...
    reverseStack(s);

    // Inserting in reverse order using inserAtBottom function...
    insertAtBottom(s, target);
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);

    reverseStack(s);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}