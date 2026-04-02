#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    // Default constructor...
    Node() {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }

    // Parameterized constructor...
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        cout << "Node with value " << this->data << " is deleted." << endl;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int getLength(Node* &head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtHead(Node* &head, Node* &tail, int data){
    if(head == NULL){
        // Means LL is empty..
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // When LL is not empty...
    Node* newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node* &head, Node* &tail, int data){
    if(tail == NULL){
        // Means LL is empty...
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // When LL is not empty..
    Node* newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position){
    if(head == NULL){
        // Means LL is empty...
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    if(position == 1){
        insertAtHead(head, tail, data);
        return;
    }

    int len = getLength(head);
    if(position > len){
        insertAtTail(head, tail, data);
        return;
    }

    // Finding -> prevNode & curr...
    int i = 1;
    Node* prevNode = head;
    while(i < position-1){
        prevNode = prevNode->next;
        i++; 
    }
    Node* curr = prevNode->next;

    Node* newNode = new Node(data);
    prevNode->next = newNode;
    newNode->prev = prevNode;
    curr->prev = newNode;
    newNode->next = curr;
    
}

void deleteNode(Node* &head, Node* &tail, int position){
    if(head == NULL){
        cout << "There is no node to delete." << endl;
        return;
    }
    if(position > getLength(head)){
        cout << "This position does't exist.";
        return;
    }

    // Deleting first node...
    if(position == 1){
        Node* temp = head;
        head = head->next;
        head->prev = NULL;
        temp->next = NULL;
        delete(temp);
        return;
    }

    // Deleting last node...
    int len = getLength(head);
    if(position == len){
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete(temp);
        return;
    }

    // Finding position to delete any node...
    int i = 1;
    Node* prevNode = head;
    while(i < position-1){
        prevNode = prevNode->next;
        i++;
    }
    Node* curr = prevNode->next;

    // For deletion...
    prevNode->next = curr->next;
    curr->next->prev = prevNode;
    curr->next = NULL;
    curr->prev = NULL;
    delete(curr);
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtTail(head,tail,40);
    insertAtTail(head,tail,50);
    insertAtTail(head,tail,60);
    insertAtPosition(head,tail,70,6);

    print(head);
    cout << endl;

    deleteNode(head,tail,7);
    cout << endl;
    print(head);

    return 0;
}