#include<iostream>
#include<limits.h>
using namespace std;

int findMinimum(int arr[], int &target, int &n, int temp){
    if(temp == target){
        return 0;
    }

    if(temp > target){
        return INT_MAX;
    }

    int mini = INT_MAX;
    for(int i = 0; i < n; i++){
        int ans = findMinimum(arr, target, n, temp + arr[i]);
        if(ans != INT_MAX)
        mini = min(mini, ans+1);
    }

    return mini;
}

int main(){
    int arr[] = {1,2};
    int target;
    int n = 2;
    int temp = 0;

    cout << "Enter the targeted value: ";
    cin >> target;

    int ans = findMinimum(arr, target, n, temp);

    cout << "The minimum element required to get sum is: " << ans << endl;

    return 0;
}