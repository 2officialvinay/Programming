#include<bits/stdc++.h>
using namespace std;

void permutationCombination(vector<int> &arr, vector<vector<int>> &ans, int start){
    // Base Case...
    if(start >= arr.size()){
        ans.push_back(arr);
        return;
    }

    unordered_map<int, bool>visited;
    for(int i = start; i < arr.size(); i++){
        if(visited.find(arr[i]) != visited.end()){
            continue;
        }
        visited[arr[i]] = true;
        swap(arr[i], arr[start]);
        // Recursive Call...
        permutationCombination(arr, ans, start+1);
        // Backtracking...
        swap(arr[i], arr[start]);
    }
}

vector<vector<int>> permutateUnique(vector<int> &arr){
    vector<vector<int>> ans;
    permutationCombination(arr, ans, 0);
    return ans;
}

int main(){
    vector<int> arr{1,1,2};

    vector<vector<int>> ans = permutateUnique(arr);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}