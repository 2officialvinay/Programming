#include<bits/stdc++.h>
using namespace std;

void insertToSort(stack<int> &s, int key){
    // Base Case...
    if(s.empty() || s.top() >= key){
        s.push(key);
        return;
    }

    int temp = s.top();
    s.pop();

    // Recusive Call..
    insertToSort(s, key);

    // Backtracking...
    s.push(temp);
}

void sortStack(stack<int> &s){
    // Base Case...
    if(s.empty()){
        return;
    }

    int key = s.top();
    s.pop();

    // Recursive Call...
    sortStack(s);

    // Call for sort...
    insertToSort(s,key);
}

int main(){
    stack<int> s;
    s.push(45);
    s.push(78);
    s.push(65);
    s.push(89);
    s.push(25);
    s.push(11);
    s.push(99);
    s.push(54);

    sortStack(s);

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}