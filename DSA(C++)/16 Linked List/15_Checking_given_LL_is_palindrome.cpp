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

void reverseAfterMid(Node* &mid){
    Node* curr = mid->next;
    Node* prev = NULL;
    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    mid->next = prev;
}

bool isPalindrome(Node* &head){
    // No node...
    if(head == NULL){
        return true;
    }

    // Single node...
    if(head->next == NULL){
        return true;
    }

    // Finding middle node...
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* mid = slow;
    reverseAfterMid(mid);
    Node* S1 = head;
    Node* S2 = mid->next;
    while(S2 != NULL){
        if(S1->data != S2->data){
            return false;
        }
        S1 = S1->next;
        S2 = S2->next;
    }
    return true;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(30);
    Node* sixth = new Node(20);
    Node* seventh = new Node(10);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;

    if(isPalindrome(first)){
        cout << "LL is a palindrome." << endl;
    }
    else{
        cout << "LL is not a palindrome." << endl;
    }

    return 0;
}