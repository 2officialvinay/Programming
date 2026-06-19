#include<bits/stdc++.h>
using namespace std;

int celebrity(vector<vector<int>>& mat) {
    
    stack<int> s;
    int n = mat.size();
    
    for(int i = 0; i < n; i++){
        s.push(i);
    }
    
    while(s.size() > 1){
        int A = s.top();
        s.pop();
        int B = s.top();
        s.pop();
        
        if(mat[A][B]){
            // A can't be celebrity...
            s.push(B);
        }
        else{
            // B can't be celebrity...
            s.push(A);
        }
    }
    
    int celebrity = s.top();
    
    // Celebrity should know nobody...
    for(int i = 0; i < n; i++){
        if(celebrity == i) continue;
        
        if(mat[celebrity][i]){
            return -1;
        }
    }
    
    // Everyone should know celebrity...
    for(int i = 0; i < n; i++){
        if(i == celebrity) continue;
        
        if(mat[i][celebrity]){
            continue;
        }
        else{
            return -1;
        }
    }
    
    return celebrity;
}

int main(){
    vector<vector<int>> mat = {
        {1,1,0},
        {0,1,0},
        {0,1,1}
    };

    int ans = celebrity(mat);

    cout << "Celebrity is: " << ans << endl;

    return 0;
}