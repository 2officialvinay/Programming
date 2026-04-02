#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node() {
        this->data = 0;
        this->next = NULL;
    }

    Node (int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){

    }
};

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    } 
    return len;
}

void insertAtPosition(Node* &head, Node* &tail,int position, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 1){
        insertAtHead(head,tail,data);
        return;
    }
    int len = findLength(head);
    if(position > len){
        insertAtTail(head,tail,data);
        return;
    }
    // Finding the position: previous & current...
    int i = 1;
    Node* prev = head;
    while(i < position-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    Node* newNode = new Node(data);

    newNode->next = curr;

    prev->next = newNode;
}

void deleteNode(Node* &head, Node* &tail, int position){ 
    if(head == NULL){
        cout << "No node to delete because LL is empty." << endl;
        return;
    }

    // Deleting first node...
    if(position == 1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete(temp);
        return;
    }

    // Deleting last node...
    int len = findLength(head);
    if(position == len){
        int i = 1;
        Node* prev = head;
        while(i < position-1){
            prev = prev->next;
            i++;
        }
        prev->next = NULL;
        Node* temp = tail;
        tail = prev;
        delete temp;
        return;
    }

    // Deleting middle node...
    // Finding prev and curr...
    int i = 1;
    Node* prev = head;
    while(i < position-1){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    // Process for deletion...
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtPosition(head,tail,2,70);
    insertAtPosition(head,tail,3,80);

    print(head);
    cout << endl;

    deleteNode(head,tail,3);

    print(head);
    cout << endl;

    return 0;
}