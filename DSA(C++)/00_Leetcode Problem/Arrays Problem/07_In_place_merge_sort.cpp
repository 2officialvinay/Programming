#include<bits/stdc++.h>
using namespace std;

void InPlaceMerge(vector<int> &arr, int start, int mid, int end){
    int arr_len = end - start + 1;
    int gap = (arr_len/2) + (arr_len%2);  // Method of ceiling...
    while(gap > 0){
        int i = start, j = gap + start;
        while(j <= end){
            if(arr[i] > arr[j]){
                swap(arr[i],arr[j]);
            }
            i++, j++;
        }
        gap = gap <=1 ? 0 : (gap/2) + (gap%2);
    }
}

void mergeSort(vector<int> &arr, int start, int end){
    // Base Case...
    if(start >= end) return;
    int mid = (start + end) >> 1;

    // Recursive Relation...
    mergeSort(arr, start, mid);
    mergeSort(arr, mid+1, end);
    InPlaceMerge(arr, start, mid, end);
}

vector<int> sortArray(vector<int> &arr){
    mergeSort(arr, 0, arr.size()-1);
    return arr;
}

int main(){
    vector<int>arr{{-3, 5, -1, 7, -8, 2}};
    
    vector<int> result = sortArray(arr);

    cout << "Sorted array is: " << endl;
    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}