#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void removeDuplicates(Node* &head){
    Node* prev = head;
    Node* prevToCurr = head;
    Node* curr = head->next;
    while(prev != NULL){
        prevToCurr = prev;
        curr = prev->next;
        while(curr != NULL){
            if(curr->data == prev->data){
                prevToCurr->next = curr->next;
                Node* temp = curr;
                curr = curr->next;
                temp->next = NULL;
                delete temp;

            }
            else{
                prevToCurr = curr;
                curr = curr->next;
            }
        }
        prev = prev->next;
    }
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* N1 = new Node(10);
    Node* N2 = new Node(20);
    Node* N3 = new Node(10);
    Node* N4 = new Node(30);
    Node* N5 = new Node(40);
    Node* N6 = new Node(20);
    Node* N7 = new Node(50);
    Node* N8 = new Node(40);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;
    N7->next = N8;

    cout << "Original Unsorted LL: ";
    print(N1);
    removeDuplicates(N1);
    cout << "LL after duplicates removal: ";
    print(N1);

    return 0;
}