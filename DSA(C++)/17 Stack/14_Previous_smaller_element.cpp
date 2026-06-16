#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {2,1,4,3};

    stack<int> s;
    s.push(-1);

    vector<int> ans;
    for(int i = 0; i < v.size(); i++){
        while(s.top() >= v[i]){
            s.pop();
        }
        ans.push_back(s.top());
        s.push(v[i]);
    }

    cout << "Output will be: ";
    for(auto x:ans){
        cout << x << " ";
    }

    return 0;
}