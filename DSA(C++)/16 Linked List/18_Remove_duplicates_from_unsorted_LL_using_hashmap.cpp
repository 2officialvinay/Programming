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

void removeDuplicates(Node* &head){
    if(head == NULL) return;

    unordered_set<int> seen;

    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        if(seen.find(curr->data) != seen.end()){ // seen.end() point to next to end element in set... means NULL
            // Duplicate element found...
            prev->next = curr->next;
            Node* temp = curr;
            curr = curr->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            // Unique element found...
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
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
    Node* N1 = new Node(1);
    Node* N2 = new Node(3);
    Node* N3 = new Node(2);
    Node* N4 = new Node(3);
    Node* N5 = new Node(4);
    Node* N6 = new Node(2);
    Node* N7 = new Node(1);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;

    cout << "Original LL: ";
    print(N1);
    cout << "LL after removal of duplicates: ";
    removeDuplicates(N1);
    print(N1);

    return 0;
}