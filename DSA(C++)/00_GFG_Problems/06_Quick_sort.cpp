#include<bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int start, int end){
    if(start >= end) return;
    int pivot = end;
    int i = start - 1;
    int j = start;

    while(j < pivot){
        if(arr[j] < arr[pivot]){
            i++;
            swap(arr[i], arr[j]);
        }
        j++;
    }
    i++; // It is done to place pivot at it right position...
    swap(arr[i], arr[pivot]);
    quickSort(arr, start, i-1);
    quickSort(arr, i+1, end);
}

int main(){
    int arr[] = {8,5,6,4,7,2,3,1};

    quickSort(arr, 0, 7);

    for(auto x:arr){
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}