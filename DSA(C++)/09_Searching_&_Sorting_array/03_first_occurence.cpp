#include<iostream>
#include<vector>
using namespace std;

int first_occurrence(vector<int>arr, int key){
    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end){
        if(key == arr[mid]){
        ans = mid;
        end = mid - 1;
        }
        else if(key < arr[mid]){
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    vector<int>arr{1,2,3,4,5,6,6,6,6,6,6,7,8,9};
    int key = 6;

    int result = first_occurrence(arr, key);

    cout << "The index of first occurrence of element 6 is : " << result << endl;
    return 0;
}