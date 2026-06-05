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

int length(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

Node* rotate(Node* head, int k){
    int n = length(head)-k-1;
    Node* it = head;
    while(n-- > 0){
        it = it->next;
    }
    Node* nextIterator = it->next;
    while(nextIterator->next != NULL){
        nextIterator = nextIterator->next;
    }
    nextIterator->next = head;
    head = it->next;
    it->next = NULL;
    return head;
}

Node* rotateRight(Node* head, int k) {
    if(head == NULL || k == 0) return head;
    int len = length(head);
    if(k%len == 0) return head;
    return rotate(head, k%len);
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* N1 = new Node(10);
    Node* N2 = new Node(20);
    Node* N3 = new Node(30);
    Node* N4 = new Node(40);
    Node* N5 = new Node(50);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;

    cout << "Original LL: ";
    print(N1);
    Node* head = rotateRight(N1, 3);
    cout << "Rotated LL by K: ";
    print(head);

    return 0;
}