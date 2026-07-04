#include<bits/stdc++.h>
using namespace std;

void reverse_K_element(queue<int> &q, int k){
    // Base case...
    if(k == 0 || q.empty()){
        return;
    }

    int temp = q.front();
    q.pop();

    reverse_K_element(q, --k);

    q.push(temp);
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    int k = 5;

    reverse_K_element(q, k);

    int x = q.size()-k;

    while(x--){
        int temp = q.front();
        q.pop();
        q.push(temp);
    }

    cout << "Queue after k elements reversed: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}