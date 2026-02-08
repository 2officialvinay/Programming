#include<iostream>
#include<vector>
using namespace std;

int findMissing(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        // Correct position check
        if(arr[mid] == mid + 1){
            start = mid + 1;   // missing right side
        }
        else{
            end = mid - 1;     // missing left side
        }
    }

    // start will point to missing number's correct position
    return start + 1;
}

int main(){
    vector<int> arr{1,2,3,4,6,7,8,9};

    int missing = findMissing(arr);

    cout << "Missing number is: " << missing << endl;

    return 0;
}