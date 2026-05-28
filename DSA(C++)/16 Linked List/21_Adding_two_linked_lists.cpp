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

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextToCurr = NULL;

    while(curr != NULL){
        nextToCurr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextToCurr;
    }
    return prev;
}

void print(Node* &head){
    Node* temp = head;
    while(head != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* add(Node* &head1, Node* &head2){
    // Step 1: Reverse the linked lists...
    head1 = reverse(head1);
    head2 = reverse(head2);

    // Step 2: Adding the reversed linked lists...
    Node* head = NULL;
    Node* tail = NULL;
    int carry = 0;
    while(head1 != NULL && head2 != NULL){
        int sum = carry + head1->data + head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    while(head1 != NULL){
        int sum = carry + head1->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        tail->next = newNode;
        tail = newNode;
        head1 = head1->next;
    }

    while(head2 != NULL){
        int sum = carry + head2->data;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        tail->next = newNode;
        tail = newNode;
        head2 = head2->next;
    }

    while(carry != 0){
        int sum = carry;
        int digit = sum%10;
        carry = sum/10;

        Node* newNode = new Node(digit);
        tail->next = newNode;
        tail = newNode;
    }

    // Step 3: Returning the reversed answer linked list...
    Node* ans = reverse(head);
    return ans;
}

int main(){
    Node* h1 = new Node(9);
    Node* d1 = new Node(9);
    h1->next = d1;

    Node* h2 = new Node(9);
    Node* d2 = new Node(9);
    Node* d3 = new Node(9);
    h2->next = d2;
    d2->next = d3;

    Node* ans = add(h1, h2);
    print(ans);

    return 0;
}