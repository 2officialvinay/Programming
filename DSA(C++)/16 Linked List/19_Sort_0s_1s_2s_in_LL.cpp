#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
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
    cout << endl;
}

void sorting(Node* &head){
    if(head == NULL) return;

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;

    while(temp != NULL){
        if(temp->data == 0) zeroCount++;
        else if(temp->data == 1) oneCount++;
        else twoCount++;
        temp = temp->next;
    }

    temp = head;
    for(int i = 1; i <= zeroCount; i++){
        temp->data = 0;
        temp = temp->next;
    }
    for(int i = 1; i <= oneCount; i++){
        temp->data = 1;
        temp = temp->next;
    }
    for(int i = 1; i <= twoCount; i++){
        temp->data = 2;
        temp = temp->next;
    }
}

int main(){
    Node* N1 = new Node(1);
    Node* N2 = new Node(0);
    Node* N3 = new Node(2);
    Node* N4 = new Node(0);
    Node* N5 = new Node(1);
    Node* N6 = new Node(2);
    Node* N7 = new Node(0);
    Node* N8 = new Node(2);
    Node* N9 = new Node(0);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;
    N7->next = N8;
    N8->next = N9;

    cout << "Original LL: ";
    print(N1);

    sorting(N1);

    cout << "LL after sorting: ";
    print(N1);

    return 0;
}