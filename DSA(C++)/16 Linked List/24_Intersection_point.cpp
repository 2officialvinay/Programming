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

int length(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

Node* commonNode(Node* &head1, Node* &head2){
    Node* a = head1;
    Node* b = head2;
    while(a != NULL && b != NULL){
        a = a->next;
        b = b->next;
    }

    if(a != NULL){
        int len = length(a);
        Node* a = head1;
        Node* b = head2;
        while(len-- > 0){
            a = a->next;
        }
        if(a==b) return a;
        while(a != NULL && b != NULL){
            if(a->next == b->next) return a->next;
            a = a->next;
            b = b->next;
        }
    }
    else if(b != NULL){
        int len = length(b);
        Node* a = head1;
        Node* b = head2;
        while(len-- > 0){
            b = b->next;
        }
        if(a==b) return a;
        while(a != NULL && b != NULL){
            if(a->next == b->next) return a->next;
            a = a->next;
            b = b->next;
        }
    }
    return NULL;
}

int main(){
    // First List...
    Node* N1 = new Node(10);
    Node* N2 = new Node(20);
    Node* N3 = new Node(30);
    Node* N4 = new Node(40);
    Node* N5 = new Node(50);
    Node* N6 = new Node(60);
    Node* N7 = new Node(70);
    Node* N8 = new Node(80);
    Node* N9 = new Node(90);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;
    N7->next = N8;
    N8->next = N9;

    // Second List...
    Node* N10 = new Node(10);
    Node* N11 = new Node(20);
    Node* N12 = new Node(30);
    Node* N13 = new Node(40);
    Node* N14 = new Node(50);
    Node* N15 = new Node(60);

    N10->next = N11;
    N11->next = N12;
    N12->next = N13;
    N13->next = N14;
    N14->next = N15;
    N15->next = N5;

    Node* ans = commonNode(N1, N10);

    if(ans == NULL){
        cout << "Linked lists are not intersecting." << endl;
    }
    else{
        cout << "The linked lists are intersecting at " << ans->data << " node." << endl;
    }

    return 0;
}