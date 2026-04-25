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

Node* Sort(Node* &head){
    Node* tailZeroNode = new Node(-1);
    Node* tailOneNode = new Node(-1);
    Node* tailTwoNode = new Node(-1);
    Node* headZeroNode = tailZeroNode;
    Node* headOneNode = tailOneNode;
    Node* headTwoNode = tailTwoNode;
    Node* temp = head;

    // Step 1: Dividing 0's, 1's, 2's node separately...
    while(temp != NULL){
        if(temp->data == 0){
            tailZeroNode->next = temp;
            tailZeroNode = tailZeroNode->next;
            temp = temp->next;
        }
        else if(temp->data == 1){
            tailOneNode->next = temp;
            tailOneNode = tailOneNode->next;
            temp = temp->next;
        }
        else{
            tailTwoNode->next = temp;
            tailTwoNode = tailTwoNode->next;
            temp = temp->next;
        }
    }
    
    // Step 2: Joining Lists...
    tailZeroNode->next = (headOneNode->next) != NULL ? headOneNode->next : headTwoNode;
    tailOneNode->next = headTwoNode->next;
    tailTwoNode->next = NULL;

    Node* newHead;
    if(headZeroNode->next != NULL)
        newHead = headZeroNode->next;
    else if(headOneNode->next != NULL)
        newHead = headOneNode->next;
    else
        newHead = headTwoNode->next;
    
    // Delete dummy node...
    headZeroNode->next = NULL;
    headOneNode->next = NULL;
    headTwoNode->next = NULL;
    delete headZeroNode;
    delete headOneNode;
    delete headTwoNode;

    return newHead;
}

int main(){
    Node* N1 = new Node(1);
    Node* N2 = new Node(0);
    Node* N3 = new Node(0);
    Node* N4 = new Node(2);
    Node* N5 = new Node(1);
    Node* N6 = new Node(2);
    Node* N7 = new Node(0);
    Node* N8 = new Node(1);

    N1->next = N2;
    N2->next = N3;
    N3->next = N4;
    N4->next = N5;
    N5->next = N6;
    N6->next = N7;
    N7->next = N8;

    cout << "Original LL: ";
    print(N1);

    cout << "Sorted LL: ";
    Node* head = Sort(N1);
    print(head);

    return 0;
}