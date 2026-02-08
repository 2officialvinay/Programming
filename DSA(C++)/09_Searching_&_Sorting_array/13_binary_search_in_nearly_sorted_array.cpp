#include<iostream>
#include<vector>
using namespace std;

int get_ans(vector<int>arr, int target){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target)
        return mid;
        if(mid-1 >=s && arr[mid-1] == target)
        return mid-1;
        if(mid+1 <= e && arr[mid+1] == target)
        return mid+1;

        if(target > arr[mid]){
            s = mid + 2; // Right Searching...
        }
        else{
            e = mid - 2; // Left Searching...
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{10,3,40,20,50,80,70};
    int target = 40;

    int ans = get_ans(arr, target);
    cout << "The index of the target " << target << " is " << ans << endl;
    return 0;
}