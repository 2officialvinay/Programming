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

bool isCircular(Node* &first){
    Node* temp = first;
    do{
        temp = temp->next;
    }while(temp != first && temp != NULL);

    if(temp == first){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node* first = new Node(11);
    Node* second = new Node(12);
    Node* third = new Node(13);
    Node* fourth = new Node(14);
    Node* fifth = new Node(15);
    Node* sixth = new Node(16);
    Node* seventh = new Node(17);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = first;

    bool ans = isCircular(first);

    if(ans){
        cout << "Yes, the LL is circular." << endl;
    }
    else{
        cout << "No, the LL is not circular." << endl;
    }

    return 0;
}