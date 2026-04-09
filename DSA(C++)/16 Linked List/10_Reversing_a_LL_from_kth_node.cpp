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

int getLength(Node* &head){
    int length = 0;
    Node* temp = head;
    while(temp != NULL){
        temp = temp->next;
        length++;
    }
    return length;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse_k_Node(Node* &head, int k){
    // If LL is empty...
    if(head == NULL){
        cout << "LL is empty." << endl;
    }
    // If value of k is greater than lenght of LL...
    if(k > getLength(head)){
        return head;
    }
    // If k is valid to reverse LL...
    int count = 0;
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    while(count < k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head->next = reverse_k_Node(forward, k);
    }
    return prev;
}

int main(){
    Node* head = new Node(10);
    Node* first = new Node(20);
    Node* second = new Node(30);
    Node* third = new Node(40);
    Node* fourth = new Node(50);
    Node* fifth = new Node(60);
    Node* sixth = new Node(70);

    head->next = first;
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Original LL: ";
    print(head);
    head = reverse_k_Node(head, 2);
    cout << "Reversed LL from kth node: ";
    print(head);

    return 0;
}