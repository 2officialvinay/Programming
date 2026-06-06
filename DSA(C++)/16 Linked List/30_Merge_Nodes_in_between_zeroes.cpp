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

Node* mergeNode(Node* &head){
    Node* zeroNode = head;
    Node* temp = head->next;

    int sum = 0;
    while(temp){
        if(temp->data != 0){
            sum += temp->data;
            temp = temp->next;
        }
        else{
            temp->data = sum;
            head->next = temp;
            sum = 0;
            temp = temp->next;
            head = head->next;
        }
    }
    return zeroNode->next;
}

void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* N1 = new Node(0);
    Node* N2 = new Node(3);
    Node* N3 = new Node(1);
    Node* N4 = new Node(0);
    Node* N5 = new Node(4);
    Node* N6 = new Node(5);
    Node* N7 = new Node(2);
    Node* N8 = new Node(0);
    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;
    N7->next = N8;

    cout << "Original LL: ";
    print(N1);
    Node* head = mergeNode(N1);
    cout << "After merge LL: ";
    print(head);

    return 0;
}