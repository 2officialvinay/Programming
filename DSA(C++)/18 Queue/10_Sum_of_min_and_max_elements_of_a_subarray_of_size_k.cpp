#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> arr, int k){
    deque<int> dq1, dq2;
    vector<int> maxi, mini;

    // Processing 1st window...
    for(int i = 0; i < k; i++){

        // Removing smaller element...
        while(!dq1.empty() && arr[i] >= arr[dq1.back()]){
            dq1.pop_back();
        }

        // Removing greater element...
        while(!dq2.empty() && arr[i] <= arr[dq2.back()]){
            dq2.pop_back();
        }

        dq1.push_back(i);
        dq2.push_back(i);
    }

    // Storing max & min for Ist window...
    maxi.push_back(arr[dq1.front()]);
    mini.push_back(arr[dq2.front()]);

    // Processing further windows...
    for(int i = k; i < arr.size(); i++){

        // Removing out of window element
        if(!dq1.empty() && i-dq1.front() >= k){
            dq1.pop_front();
        }

        if(!dq2.empty() && i-dq2.front() >= k){
            dq2.pop_front();
        }

        // Removing smaller element...
        while(!dq1.empty() && arr[i] >= arr[dq1.back()]){
            dq1.pop_back();
        }

        // Removing greater element...
        while(!dq2.empty() && arr[i] <= arr[dq2.back()]){
            dq2.pop_back();
        }

        //  Storing curr element...
        dq1.push_back(i);
        dq2.push_back(i);

        // Storing max & min...
        maxi.push_back(arr[dq1.front()]);
        mini.push_back(arr[dq2.front()]);
    }

    int ans = 0;

    for(int i = 0; i < maxi.size(); i++){
        ans += maxi[i] + mini[i];
    }

    return ans;
}

int main(){
    vector<int> arr{2, 5, -1, 7, -3, -1, -2};
    int k = 4;

    cout << "Sum of max and min of a subarray  of size " << k << " is: " << sum(arr, k) << endl;

    return 0;
}