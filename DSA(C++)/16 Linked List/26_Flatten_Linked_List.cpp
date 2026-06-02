#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* bottom;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->bottom = NULL;
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

void conversionToVector(Node* &head, vector<int> &nodes){
    Node* temp = head;
    while(temp != NULL){
        Node* lowerNode = temp->bottom;
        nodes.push_back(temp->data);
        while(lowerNode != NULL){
            nodes.push_back(lowerNode->data);
            lowerNode = lowerNode->bottom;
        }
        temp = temp->next;
    }
}

Node* conversionToList(vector<int> &v){
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i = 1; i < v.size(); i++){
        Node* newNode = new Node(v[i]);
        temp->next = newNode;
        temp = newNode;
    }
    return head;
}

int main(){
    Node* H1 = new Node(5);
    Node* H2 = new Node(10);
    Node* H3 = new Node(19);
    Node* H4 = new Node(28);
    Node* L1 = new Node(7);
    Node* L2 = new Node(8);
    Node* L3 = new Node(20);
    Node* L4 = new Node(22);
    Node* L5 = new Node(40);
    Node* L6 = new Node(45);

    H1->next = H2;
    H2->next = H3;
    H3->next = H4;
    H1->bottom = L1;
    L1->bottom = L2;
    H2->bottom = L3;
    H3->bottom = L4;
    H4->bottom = L5;
    L5->bottom = L6;

    vector<int> nodes;
    conversionToVector(H1, nodes);

    sort(nodes.begin(), nodes.end());
    Node* newHead = conversionToList(nodes);

    print(newHead);

    return 0;
}