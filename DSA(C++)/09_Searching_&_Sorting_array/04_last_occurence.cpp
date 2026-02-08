#include<iostream>
#include<vector>
using namespace std;

int last_occurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start +(end - start)/2;
    int ans = -1;
    
    while(start <= end){
        if(target == arr[mid]){
            ans = mid;
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        mid = start +(end - start)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,3,3,3,3,3,3,4,5,5,5,5,5,5,5,5,6,7,8,9};
    int target = 5;

    int ans = last_occurence(arr, target);

    cout << "The index of last occurence of the element is " << ans << endl;
    return 0;
}