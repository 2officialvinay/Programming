#include<bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &arr){
    int n = arr.size();
    int sum = INT_MIN;
    for(int i = 0; i < n; i++){
        int currentSum = 0;
        for(int j = i; j < n; j++){
            currentSum += arr[j];
            sum = max(sum, currentSum);
        }
    }

    return sum;
}

int main(){
    vector<int>arr{ 5, 4, -20, 6, 7 };

    int result = maxSum(arr);

    cout << "The maximum sum is: " << result << endl;

    return 0;
}