// Peak Index in a Mountain Array...

#include<iostream>
#include<vector>
using namespace std;

int find_peak_index(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;

    while(start < end){
        int mid = start + (end - start)/2;
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main(){
    vector<int>arr{0,1,4,10,5,3,0};
    int result = find_peak_index(arr);

    cout << "The peak element in the array is: " << arr[result] << endl;

    return 0;
}