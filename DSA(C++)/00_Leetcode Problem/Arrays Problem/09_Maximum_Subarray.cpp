#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr, int start, int end){
    if(start == end) return arr[start];
    int maxLeftBorderSum = INT_MIN, maxRightBorderSum = INT_MIN;
    int mid = start + (end-start) / 2;

    int maxLeftSum = maxSubarraySum(arr, start, mid);
    int maxRightSum = maxSubarraySum(arr, mid+1, end);

    // Now max. cross border sum...
    int leftBorderSum = 0, rightBorderSum = 0;
    for(int i = mid; i >= start; i--){
        leftBorderSum += arr[i];
        if(leftBorderSum > maxLeftBorderSum) maxLeftBorderSum = leftBorderSum;
    }

    for(int i = mid+1; i <= end; i++){
        rightBorderSum += arr[i];
        if(rightBorderSum > maxRightBorderSum) maxRightBorderSum = rightBorderSum;
    }

    int crossBorderSum = maxLeftBorderSum + maxRightBorderSum;
    return max(maxLeftSum, max(maxRightSum, crossBorderSum));
}

int main(){
    vector<int> arr{-2,1,-3,4,-1,2,1,-5,4};
    
    int sum = maxSubarraySum(arr, 0, arr.size()-1);

    cout << "The maximum sum of a subarray is: " << sum << endl;

    return 0;
}