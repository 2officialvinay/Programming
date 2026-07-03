#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    if(q.empty()){
        return;
    }

    int temp = q.front();
    cout << temp << " ";
    q.pop();

    reverseQueue(q);

    q.push(temp);

}

int main(){
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    cout << "Original Queue is: ";
    reverseQueue(q);
    
    cout << endl << "Reversed Queue is: ";

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}