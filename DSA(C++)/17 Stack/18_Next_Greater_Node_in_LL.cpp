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

int length(Node* head){
    Node* temp = head;
    int len = 0;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

vector<int> nextLargerNodes(Node* head){
    stack<pair<int,int>> s;
    int len =  length(head);
    vector<int> ans(len);

    Node* temp = head;
    int i = 0;
    while(temp != NULL){
        if(s.empty()){
            s.push({temp->data,i++});
            temp = temp->next;
        }
        else{
            if(s.top().first < temp->data){
                ans[s.top().second] = temp->data;
                s.pop();
            }
            else{
                s.push({temp->data, i++});
                temp = temp->next;
            }
        }
    }
    return ans;
}

int main(){
    Node* first = new Node(2);
    Node* second = new Node(7);
    Node* third = new Node(4);
    Node* fourth = new Node(3);
    Node* fifth = new Node(5);
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    vector<int> ans = nextLargerNodes(first);

    cout << "Next Larger Nodes are: ";
    for(auto x:ans){
        cout << x << " ";
    }

    return 0;
}