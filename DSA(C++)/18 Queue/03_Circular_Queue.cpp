#include<bits/stdc++.h>
using namespace std;

class CircularQueue{
    int front;
    int rear;
    int *arr;
    int size;

    public:

    CircularQueue(int size){
        this->size = size;
        this->arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    void push(int data){
        // When queue is full...
        if((front == 0 && rear == size-1) || (front == (rear + 1) % size)){
            cout << "Can't push, Queue is full." << endl;
        }

        // When inserting single element...
        else if(front == -1){
            front = rear = 0;
            arr[rear] = data;
        }

        // Maintaining circular flow...
        else if(rear == size-1 && front != 0){
            rear = 0;
            arr[rear] = data;
        }

        // Normal flow...
        else{
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){
        // When queue  is empty...
        if(front == -1){
            cout << "Can't pop, Queue is empty." << endl;
        }

        // When removing single element...
        else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }

        // Mainting circular flow...
        else if(front == size-1){
            arr[front] = -1;
            front = 0;
        }

        // Normal pop...
        else{
            arr[front] = -1;
            front++;
        }
    }

    int getFront(){
        if(front == -1){
            cout << "Can't access, Queue is empty." << endl;
            return -1;
        }
        
        return arr[front];
    }

    ~CircularQueue(){
        delete[] arr;
    }
};

int main(){
    CircularQueue q(5);
    q.pop();
    q.push(10);
    cout << q.getFront() << endl;
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60); // Queue is full
    q.pop();
    q.pop();
    q.pop();
    cout << q.getFront() << endl;
    q.push(60);
    q.pop();
    q.pop();
    cout << q.getFront() << endl;

    return 0;
}