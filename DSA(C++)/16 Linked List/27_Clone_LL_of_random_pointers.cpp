#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* random;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << "Main Node: " << temp->data << " ";
        if(temp->random != NULL){
            cout << "and it's random Node: " << temp->random->data << endl;
        }
        else{
            cout << "and it's random Node: NULL" << endl;
        }
        temp = temp->next;
    }
}

Node* cloneLL(Node* &head){
    if(!head) return NULL;

    // Step 1: Making copy of LL linking with the old LL...
    Node* temp = head;
    while(temp != NULL){
        Node* cloneNode = new Node(temp->data);
        cloneNode->next = temp->next;
        temp->next = cloneNode;
        temp = temp->next->next;
    }

    // Step 2: Assigning random pointers to copy LL as in old LL...
    temp = head;
    while(temp != NULL){
        Node* cloneNode = temp->next;
        if(temp->random != NULL){
            cloneNode->random = temp->random->next;
        }
        temp = temp->next->next;
    }

    // Step 3: Seperating the Copy LL from old LL...
    temp = head;
    Node* cloneHead = temp->next;
    while(temp != NULL){
        Node* cloneNode = temp->next;
        temp->next = temp->next->next;
        if(cloneNode->next != NULL){
            cloneNode->next = cloneNode->next->next;
        }
        temp = temp->next;
    }
    return cloneHead;
}

int main(){
    Node* N1 = new Node(7);
    Node* N2 = new Node(13);
    Node* N3 = new Node(11);
    Node* N4 = new Node(10);
    Node* N5 = new Node(1);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N2->random = N1;
    N3->random = N5;
    N4->random = N3;
    N5->random = N1;

    Node* cloneHead = cloneLL(N1);
    print(cloneHead);

    return 0;
}