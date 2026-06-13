#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &s, int key){
    // Base Case...
    if(s.empty() || s.top() >= key){
        s.push(key);
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive Call...
    insert(s, key);

    // Backtracing...
    s.push(temp);
}

int main(){
    stack<int> s;
    s.push(8);
    s.push(6);
    s.push(4);
    s.push(2);

    int key = 5;

    insert(s, key);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}