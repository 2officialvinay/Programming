/*
Question:
You are a professional robber planning to rob houses along a street.
Each house has a certain amount of money stashed, the only constraint
stopping you from robbing each of them is that adjacent houses have
security systems connected and it will automatically contact the police
if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house,
return the maximum amount of money you can rob tonight without alerting the police. 
*/

#include<bits/stdc++.h>
using namespace std;

int rob(vector<int>& nums){
    // Base Case...
    if(nums.size() == 0){
        return 0;
    }

    if(nums.size() == 1){
        return nums[0];
    }

    // Exclusion: Fist House Skip...
    vector<int> exclude(nums.begin() + 1, nums.end());
    int skipping = rob(exclude);

    // Inclusion: First House Rob...
    vector<int> include(nums.begin() + 2, nums.end());
    int robbing = nums[0] + rob(include);

    return max(skipping, robbing);
}

int main(){
    vector<int>nums{2, 7, 9, 3, 1};

    cout << "Maximum amount which can be robbed at a night: " << rob(nums) << endl;

    return 0;
}