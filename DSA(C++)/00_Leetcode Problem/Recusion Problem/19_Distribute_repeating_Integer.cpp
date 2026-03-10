#include<bits/stdc++.h>
using namespace std;

bool isDistributionPossible(vector<int> &counts, vector<int> &quantity, int ithCustomer){
    // Base Case...
    if(ithCustomer == quantity.size()){
        return true;
    }

    for(int i = 0; i < counts.size(); i++){
        if(counts[i] >= quantity[ithCustomer]){
            counts[i] -= quantity[ithCustomer];
            // Recursive Call...
            if(isDistributionPossible(counts, quantity, ithCustomer+1)){
                return true;
            }
            counts[i] += quantity[ithCustomer]; // Backtracking..
        }
    }
}

bool canDistribute(vector<int> &nums, vector<int> &quantity){
    unordered_map<int,int> mapcount;
    for(auto x:nums){
        mapcount[x]++;
    }
    vector<int>counts;
    for(auto y:mapcount){
        counts.push_back(y.second);
    }
    sort(quantity.rbegin(), quantity.rend()); // for desending order sorting...
    return isDistributionPossible(counts, quantity, 0);
}

int main(){
    vector<int> nums{1,1,2,2,2,2,3,3};
    vector<int> quantity{2,2,3};

    bool ans = canDistribute(nums, quantity);

    if(ans){
        cout << "Distribution is possible." << endl;
    }
    else{
        cout << "Distribution is not possible." << endl;
    }

    return 0;
}