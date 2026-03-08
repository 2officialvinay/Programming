#include<bits/stdc++.h>
using namespace std;

void CombinationMaker(vector<int> &arr, vector<vector<int>> &ans, vector<int> v, int target, int index){
    // Base Case...
    if(target == 0){
        ans.push_back(v);
        return;
    }
    if(target < 0){
        return;
    }
    
    for(int i = index; i < arr.size(); i++){
        if(i > index && arr[i] == arr[i-1]){
            continue;
        }
        v.push_back(arr[i]);
        // Recursive call...
        CombinationMaker(arr, ans, v, target-arr[i], i+1);
        // Backtracking...
        v.pop_back();
    }

}

vector<vector<int>> combinationSum(vector<int> &arr, int target){
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> v;
    
    CombinationMaker(arr, ans, v, target, 0);
    return ans;
}

int main(){
    vector<int> arr{2,5,2,1,2};
    int target = 5;

    vector<vector<int>> ans = combinationSum(arr, target);

    cout << "The combinations are: " << endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}