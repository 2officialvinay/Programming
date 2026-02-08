/*
# QUESTION:
Given an array arr[] where each element denotes the length of a board,
and an integer k representing the number of painters available.
Each painter takes 1 unit of time to paint 1 unit length of a board.

Determine the minimum amount of time required to paint all the boards,
under the constraint that each painter can paint only a contiguous sequence
of boards (no skipping or splitting allowed).
*/

#include<iostream>
#include<numeric>
using namespace std;

// Function to check the solution is possible or not...
bool isPossibleSolution(int arr[], int N, int K, int mid){
    int timeSum = 0;
    int count = 1; // Count for painters...

    for(int i = 0; i < N; i++){
        if(arr[i] > mid){
            return false;
        }
        if(arr[i] + timeSum > mid){
            count++;
            timeSum = arr[i];
            if(count > K){
                return false;
            }
        }
        else{
            timeSum += arr[i];
        }
    }
    return true;
}

// Function to find min. time required...
int minTime(int arr[], int N, int K){
    int start = 0;
    int end = accumulate(arr, arr + N, 0);
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(isPossibleSolution(arr, N, K, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {10,20,30,40,50};
    int N = 5;  // No. of Boards
    int K = 2;  // No. of Painters

    int ans = minTime(arr, N, K);

    cout << "The min. time of work completion is: " << ans << endl;

    return 0;
}