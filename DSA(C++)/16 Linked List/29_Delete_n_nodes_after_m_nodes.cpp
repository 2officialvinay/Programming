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

void linkDelete(Node* head, int n, int m) {
    Node* curr = head;

    while(curr){
        // Skip m-Nodes...
        for(int i = 1; i < m && curr; i++){
            curr = curr->next;
        }

        if(curr == NULL) return;

        // Delete n-Nodes...
        Node* temp = curr->next;
        for(int i = 0; i < n && temp; i++){
            Node* nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        curr->next = temp;
        curr = temp;
    }
}

int main(){
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

    cout << "Original LL: ";
    print(N1);
    linkDelete(N1, 2, 3);
    cout << "LL after deletion of n node's Links: ";
    print(N1);

    return 0;
}