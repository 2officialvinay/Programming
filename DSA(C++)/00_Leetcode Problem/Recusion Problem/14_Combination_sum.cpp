#include<bits/stdc++.h>
using namespace std;

void combinationSum_maker(vector<int> &arr, int target, vector<vector<int>> &ans, vector<int> &v, int index){
    // Base Case...
    if(target == 0){
        ans.push_back(v);
        return;
    }
    if(target < 0){
        return;
    }

    for(int i = index; i < arr.size(); i++){
        v.push_back(arr[i]);
        // Recursive Relation...
        combinationSum_maker(arr, target-arr[i], ans, v, i);
        // Backtracking...
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &arr, int target){
    vector<vector<int>> ans;
    vector<int> v;
    combinationSum_maker(arr, target, ans, v, 0);
    return ans;
}

int main(){
    vector<int> arr{2,3,6,7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(arr, target);

    cout << "The combination for target sum are: " << endl;
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}