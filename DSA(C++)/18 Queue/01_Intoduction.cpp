#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "First element of queue is: " << q.front() << endl;
    cout << endl;
    cout << "Last element of queue is: " << q.back() << endl;
    cout << endl;
    cout << "Size of queue is: " << q.size() << endl;
    cout << endl;

    q.pop();  // Remove from first...

    cout << "Now first element of queue is: " << q.front() << endl;
    cout << endl;
    cout << "Last element of queue is still: " << q.back() << endl;
    cout << endl;
    cout << "Size of queue is: " << q.size() << endl;
    cout << endl;

    if(q.empty())
        cout << "Queue is empty." << endl;
    else
        cout << "Queue is not empty." << endl;
    cout << endl;
 
    return 0;
}