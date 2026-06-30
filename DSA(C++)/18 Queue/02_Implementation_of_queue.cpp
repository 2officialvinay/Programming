#include<bits/stdc++.h>
using namespace std;

class Queue{
    int front;
    int rear;
    int size;
    int *arr;

    public:

    Queue(int size){
        this->size = size;
        this->front = 0;
        this->rear = 0;
        arr = new int[size];
    }

    void push(int x){
        if(rear == size){
            cout << "Queue is full." << endl;
            return;
        }

        arr[rear] = x;
        rear++;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }

        arr[front] = -1;
        front++;

        if (front == rear) {
            front = 0;
            rear = 0;
        }
    }

    bool isEmpty(){
        if(front == rear){
            return true;
        }
        return false;
    }

    int getFront(){
        if(front == rear){
            return -1;
        }
        
        return arr[front];
    }

    ~Queue(){
        delete[] arr;
    }
};

int main(){
    Queue q(5);

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    while(!q.isEmpty()){
        cout << q.getFront() << " ";
        q.pop();
    }

    return 0;
}