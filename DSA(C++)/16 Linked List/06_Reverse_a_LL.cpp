// Question : REVERSING A LINKED LIST...

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Default Constructor...
    Node(){
        this->data = 0;
        this->next = NULL;
    }

    // Parametrized Constructor...
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
}

Node* reverse(Node* &prev, Node* &curr){
    // Base Case..
    if(curr == NULL) return prev;

    Node* forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
    reverse(prev, curr);
}

int main(){
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* tail = new Node(60);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;

    cout << "Original LL: ";
    print(head);

    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev,curr);

    cout << endl << "Reversed LL: "; 
    print(head);

    return 0;
}