#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int data;
    int size;
    int top1;
    int top2;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 > 1){
            top1++;
            arr[top1] = data;
        }
        else{
            cout << "Stack is Overflow." << endl;
        }
    }

    void push2(int data){
        if(top2-top1 > 1){
            top2--;
            arr[top2] = data;
        }
        else{
            cout << "Stack is Overflow." << endl;
        }
    }

    void pop1(){
        if(top1 == -1){
            cout  << "Stack 1 is underflow." << endl;
        }
        else{
            top1--;
        }
    }

    void pop2(){
        if(top1 == size){
            cout  << "Stack 2 is underflow." << endl;
        }
        else{
            top2++;
        }
    }

    int getTop1(){
        if(top1 > -1){
            return arr[top1];
        }
        else{
            cout << "Stack 1 is empty." << endl;
        }
    }

    int getTop2(){
        if(top2 < size){
            return arr[top2];
        }
        else{
            cout << "Stack 2 is empty." << endl;
        }
    }

    int getSize1(){
        return (top1 + 1);
    }

    int getSize2(){
        return (size - top2);
    }

    int getSize(){
        return ((top1 + 1) + (size - top2));
    }

    bool isEmpty1(){
        if(top1 == -1){
            return true;
        }
        else{
            false;
        }
    }

    bool isEmpty2(){
        if(top2 == size){
            return true;
        }
        else{
            false;
        }
    }
};

int main(){
    Stack s(10);

    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push1(60);
    s.push1(70);
    s.push2(80);
    s.push2(90);
    s.push2(100);

    while(!s.isEmpty1()){
        cout << s.getTop1() << " ";
        s.pop1();
    }

    while(!s.isEmpty2()){
        cout << s.getTop2() << " ";
        s.pop2();
    }

    return 0;
}