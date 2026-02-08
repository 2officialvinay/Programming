#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr1{1,3,5,7,9};
    vector<int>arr2{2,4,6,8};
    vector<int>arr3;

    // Entering all elements of arr1 in arr3...
    for(int i = 0; i<arr1.size(); i++){
        arr3.push_back(arr1[i]);
    }

    // Entering all elements of arr2 in arr3...
    for(int i = 0; i<arr2.size(); i++){
        arr3.push_back(arr2[i]);
    }

    // Printing...
    for(int i = 0; i<arr3.size(); i++){
        cout << arr3[i] << " ";
    }

    return 0;
}