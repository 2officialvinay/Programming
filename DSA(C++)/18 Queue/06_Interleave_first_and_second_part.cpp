#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int> &q){
    queue<int> f;

    if(q.empty()){
        cout << "Queue is empty." << endl;
        return;
    }

    int size = q.size();
    int n = size/2;

    while(n--){
        f.push(q.front());
        q.pop();
    }

    while(!f.empty()){
        q.push(f.front());
        f.pop();
        q.push(q.front());
        q.pop();
    }

    if(size&1){  // Odd check...
        q.push(q.front());
        q.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);

    interleave(q);

    cout << "Interleaved queue is: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}