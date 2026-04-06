#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Default constructor...
    Node() {
        this->data = 0;
        this->next = NULL;
    }

    // Parametrized constructor...
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

int middleNode(Node* &head){
    int mid, length = getLength(head), middleElement, i = 1;
    if(length%2 == 0){
        mid = length/2; 
    }
    else{
        mid = (length/2) +1;
    }
    Node* temp = head;
    while(i <= mid){
        if(i == mid){
            middleElement = temp->data;
        }
        temp = temp->next;
        i++;
    }
    return middleElement;
}

int main(){
    Node* N1 = new Node(10);
    Node* N2 = new Node(20);
    Node* N3 = new Node(30);
    Node* N4 = new Node(40);
    Node* N5 = new Node(50);
    Node* N6 = new Node(60);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;

    cout << "LL is: ";
    print(N1);
    cout << endl;

    cout << "Middle element: " << middleNode(N1) << endl;

    return 0;
}