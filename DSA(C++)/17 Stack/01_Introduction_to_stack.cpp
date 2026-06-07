#include<bits/stdc++.h>
using namespace std;

int main(){
    // Decleration...
    stack<int> s;

    // Insertion...
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    // Removal...
    s.pop();

    // Checking top element...
    cout << "Top element of stack is " << s.top() << endl;

    // Checking stack is empty or not...
    if(s.empty()){
        cout << "Stack is empty." << endl;
    }
    else{
        cout << "Stack is not empty." << endl;
    }

    return 0;
}