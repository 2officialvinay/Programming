#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void findMaximum(vector<int>& arr, int i, int sum, int& maxi){
    // Base Case...
    if(i >= arr.size()){
        maxi = max(maxi, sum);
        return;
    }

    // Inclusion...
    findMaximum(arr, i+2, sum + arr[i], maxi);

    // Exclusion...
    findMaximum(arr, i+1, sum, maxi);
}

int main(){
    vector<int>arr{2, 1, 4, 9};
    int sum = 0;
    int i = 0;
    int maxi = INT_MIN;

    findMaximum(arr, i, sum, maxi);

    cout << "The maximum sum of two non-adjacent elements is: " << maxi << endl;

    return 0;
}