#include<bits/stdc++.h>
using namespace std;

void countArrangementBeautifully(vector<int> &arr, int &n, int &ans, int CurrentNum){
    // Base Case...
    if(CurrentNum == n+1){
        ans++;
        return;
    }


    for(int i = 1; i <= n; i++){
        if(arr[i] == 0 && (CurrentNum % i == 0 || i % CurrentNum == 0)){
            arr[i] = CurrentNum;
            countArrangementBeautifully(arr, n, ans, CurrentNum+1); // Recursive Call...
            arr[i] = 0; // Backtracking...
        }
    }
}

int countArrangement(int n){
    vector<int> arr(n+1); // Initialising with n+1 size and default value 0...
    int ans = 0;
    countArrangementBeautifully(arr, n, ans, 1);
    return ans;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The number of arrangements are " << countArrangement(n) << endl;

    return 0;
}