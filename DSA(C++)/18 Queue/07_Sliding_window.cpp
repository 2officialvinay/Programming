#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int n, int k){
    queue<int> q;
    vector<int> ans;

    // Processing the first window first...
    for(int i = 0; i < k; i++){
        if(arr[i] < 0){
            q.push(i);
        }
    }

    // Now processing the rest windows...
    for(int i = k; i < n; i++){
        if(q.empty()){
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[q.front()]);
        }

        // Now removing the out of windows element when window slide to right...
        if(!q.empty() && (i-q.front()) >= k){
            q.pop();
        }

        // Now insert curr element in queue...
        if(arr[i] < 0){
            q.push(i);
        }
    }

    if(q.empty()){
        ans.push_back(0);
    }
    else{
        ans.push_back(arr[q.front()]);
    }

    return ans;
}

int main(){
    int arr[9] = {10,-20,-30,40,-50,60,70,80,-90};

    int size = 9;

    int k = 3;

    vector<int> ans = solve(arr, size, k);

    for(auto x:ans){
        cout << x << " ";
    }

    return 0;
}