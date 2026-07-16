#include<bits/stdc++.h>
using namespace std;

class KQueue{
    public:
    int n, k, freespot;
    int *arr, *front, *rear, *next;

    KQueue(int _n, int _k):n(_n),k(_k), freespot(0){
        arr = new int[n];
        next = new int[n];
        front = new int[k];
        rear = new int[k];

        for(int i = 0; i < k; i++){
            front[i] = rear[i] = -1;
        }

        for(int i = 0; i < n; i++){
            next[i] = i+1;
        }

        next[n-1] = -1;
    }

    // Push...
    bool push(int x, int qi){
        // Check Overflow...
        if(freespot == -1){
            return false;
        }

        // Find first free index...
        int index = freespot;

        // Update freespot...
        freespot = next[index];

        // If first element in q ith queue...
        if(front[qi] == -1){
            front[qi] = index;
        }
        else{
            // Link new element to that q's rear element..
            next[rear[qi]] = index;
        }

        // Update next...
        next[index] = -1;

        // Update rear...
        rear[qi] = index;

        arr[index] = x;
        return true;
    }

    // Pop...
    int pop(int qi){
        // Check Underflow...
        if(front[qi] == -1){
            return -1;
        }

        // Find index to pop...
        int index = front[qi];

        // Front update...
        front[qi] = next[index];

        // Update freespot...
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }

    ~KQueue(){
        delete[] arr;
        delete[] front;
        delete[] rear;
        delete[] next;
    }
};

int main(){
    KQueue kq(8, 3);
    cout << kq.push(7,0) << endl;
    cout << kq.push(2,0) << endl;
    cout << kq.push(5,1) << endl;
    cout << kq.push(3,0) << endl;
    cout << kq.pop(1) << endl;
    cout << kq.pop(0) << endl;

    return 0;
}