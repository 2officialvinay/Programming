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

int kthNode(Node* &head, int key){
    Node* temp = head;
    int len = length(head);
    key = len-key;
    while(temp != NULL){
        key--;
        if(key == 0){
            return temp->data;
        }
        temp = temp->next;
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

    int key = 5;
    cout << "Linked List: ";
    print(N1);
    cout << endl;
    int ans = kthNode(N1, key);
    cout << "kth Node from end will be " << ans << endl;

    return 0;
}