#include<iostream>
#include<vector>
using namespace std;

int get_pivot(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;
    
    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] >= arr[start]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return end;
}

int main(){
    vector<int>arr{7,9,1,2,3};
    int ans = get_pivot(arr);
    cout << "The pivot element is: " << arr[ans] <<endl;
    return 0;
}