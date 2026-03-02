#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &arr, vector<int> &temp, int start, int mid, int end){
    int i = start, j = mid+1, k = start;
    int c = 0;

    while(i <= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            c += mid - i + 1; // For Inversion count...
        }
    }
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=end){
        temp[k++] = arr[j++];
    }
    while(start <= end){
        arr[start] = temp[start];
        ++start;
    }
    return c;
}

int mergeSort(vector<int> &arr, vector<int> &temp, int start, int end){
    if(start >= end) return 0;
    int mid = start + (end - start)/2;
    int c = 0;
    c += mergeSort(arr, temp, start, mid);
    c += mergeSort(arr, temp, mid+1, end);
    c += merge(arr, temp, start, mid, end);
    return c;
}

int countInversion(vector<int> &arr){
    int c = 0; // Inversion count...
    vector<int>temp(arr.size(), 0);
    c = mergeSort(arr, temp, 0, arr.size() - 1);
    return c;
}

int main(){
    vector<int>arr{8,4,2,1};
    
    int count = countInversion(arr);
    cout << "The numbers of inversion counts to sort the array are: " << count << endl;

    return 0;
}