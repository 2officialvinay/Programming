/*
Intersection when same element present in both array.
*/

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main(){
    vector<int>arr1{1,2,2,3,1,4,5,6,7,8,9};
    vector<int>arr2{1,33,44,55,6,77,8,2};
    vector<int>arr3;

    for(int i = 0; i<arr1.size(); i++){
        int element = arr1[i];
        for(int j = 0; j<arr2.size(); j++){
            if(element == arr2[j]){
                arr2[j] = INT_MIN;
                arr3.push_back(element);
            }
        }
    }

    cout << "The intersection of two arrays is: " << endl;
    for(int i = 0; i<arr3.size(); i++){
        cout << arr3[i] << " ";
    }


    return 0;
}