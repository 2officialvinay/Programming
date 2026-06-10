#include<bits/stdc++.h>
using namespace std;

void printMiddle(stack<int> &s, int initialSize){
    // Base case...
    if(s.size() == (initialSize/2)+1){
        cout << "Middle element is: " << s.top() << endl;
        return;
    }

    int temp = s.top();
    s.pop();

    // Recursive call...
    printMiddle(s, initialSize);

    // Backtracking...
    s.push(temp);
}

int main(){
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);

    int initialSize = s.size();
    printMiddle(s, initialSize);

    return 0;
}