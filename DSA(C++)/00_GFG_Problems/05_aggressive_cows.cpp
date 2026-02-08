/*
# QUESTION:
You are given an array with unique elements of stalls[],
which denote the positions of stalls. You are also given
an integer k which denotes the number of aggressive cows.
The task is to assign stalls to k cows such that the minimum
distance between any two of them is the maximum possible.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to check can we place k cows, with atleast mid distance between k cows...
bool isPossibleSolution(vector<int>stalls, int k, int n, int mid){
    int count = 1;  // no. of cows placed
    int position = stalls[0];  // Position of cows

    for(int i = 0; i < n; i++){
        if(stalls[i] - position >= mid){
            count++;
            position = stalls[i];
        }
        if(count == k){
            return true;
        }
    }
    return false;
}

int find_min(vector<int>stalls, int k, int n){
    sort(stalls.begin() , stalls.end());
    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;
    
    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossibleSolution(stalls, k, n, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int>stalls{10,1,2,7,5};
    int k = 3;  // No. of Cows
    int n = stalls.size();   // No. of Stalls

    int ans = find_min(stalls, k, n);

    cout << "The minimum maximized distance between the cows is: " << ans << endl;

    return 0;
}