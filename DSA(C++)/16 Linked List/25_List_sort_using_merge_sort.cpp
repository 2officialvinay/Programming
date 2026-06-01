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

Node* split(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        if(fast != NULL){
            slow = slow->next;
        } 
    }
    Node* temp = slow->next;
    slow->next = NULL;
    return temp;
}

Node* merge(Node* first, Node* second){
    if(first == NULL) return second;
    if(second == NULL) return first;

    if(first->data < second->data){
        first->next = merge(first->next, second);
        return first;
    }
    else{
        second->next = merge(first, second->next);
        return second;
    }
}

Node* mergeSort(Node* &head){
    // Checking if list is empty or single node...
    if(head == NULL || head->next == NULL) return head;

    // Split list into two halves...
    Node* second = split(head);

    // Now recursively sorting the two halves...
    head = mergeSort(head);
    second = mergeSort(second);

    return merge(head, second);
}

int main(){
    Node* N1 = new Node(30);
    Node* N2 = new Node(90);
    Node* N3 = new Node(20);
    Node* N4 = new Node(60);
    Node* N5 = new Node(40);
    Node* N6 = new Node(50);
    Node* N7 = new Node(70);
    Node* N8 = new Node(80);
    Node* N9 = new Node(10);

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
    Node* newHead = mergeSort(N1);
    cout << "Sorted LL: ";
    print(newHead);

    return 0;
}