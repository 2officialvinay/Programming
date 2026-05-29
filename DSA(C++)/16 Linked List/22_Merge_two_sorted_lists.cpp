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

Node* merge(Node* &head1, Node* &head2){
    Node* head = NULL;
    Node* tail = NULL;

    while(head1 != NULL && head2 != NULL){
        // Step 1: If any of list is empty...
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;

        // Step 2: Merging the lists...
        if(head1->data <= head2->data){
            Node* newNode = new Node(head1->data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            head1 = head1->next;
        }
        else{
            Node* newNode = new Node(head2->data);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }
            else{
                tail->next = newNode;
                tail = newNode;
            }
            head2 = head2->next;
        }
    }

    // Step 3: Adding 1st list's nodes further if it is non-empty...
    while(head1 != NULL){
        Node* newNode = new Node(head1->data);
        tail->next = newNode;
        tail = newNode;
        head1 = head1->next;
    }

    // Step 4: Adding 2nd list's nodes further if it is non-empty...
    while(head2 != NULL){
        Node* newNode = new Node(head2->data);
        tail->next = newNode;
        tail = newNode;
        head2 = head2->next;
    }

    return head;
}

int main(){
    Node* head1 = new Node(1);
    Node* N1 = new Node(5);
    Node* N2 = new Node(9);
    Node* N3 = new Node(10);
    head1->next = N1;
    N1->next = N2;
    N2->next = N3;

    Node* head2 = new Node(3);
    Node* N4 = new Node(6);
    Node* N5 = new Node(7);
    Node* N6 = new Node(8);
    Node* N7 = new Node(11);
    head2->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;

    Node* ans = merge(head1, head2);
    print(ans);

    return 0;
}