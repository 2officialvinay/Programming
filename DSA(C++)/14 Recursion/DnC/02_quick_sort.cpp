#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    // Choosing the pivot...
    int pivotIndex = s;
    int pivotElement = arr[pivotIndex];

    // Placing the pivot to it's right place...
    int count = 0;
    for(int i = s+1; i <= e; i++){
        if(arr[i] < pivotElement){
            count++;
        }
    }
    int rightIndex = s + count;
    swap(arr[rightIndex], arr[pivotIndex]);
    pivotIndex = rightIndex;

    // Placing smaller & greater element (than pivotElement) at correct position...
    int i = s;
    int j = e;
    while(i < pivotIndex && j > pivotIndex){
        while(i < pivotIndex && arr[i] <= pivotElement){
            i++;
        }

        while(j > pivotIndex && arr[j] > pivotElement){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // Base Case...
    if(s >= e) return;

    // Calling a function for partition of array...
    int p = partition(arr, s, e);

    // Recursive relation to sort left part...
    quickSort(arr, s, p-1);

    // Recursive relation to sort right part...
    quickSort(arr, p+1, e);
}

int main(){
    int arr[] = {8,9,5,34,55,98,6,20,7,30,23,6,40,10,3,47,63,45,12};
    int n = 19;

    int s = 0;
    int e = n-1;

    quickSort(arr, s, e);

    for(int i = 0; i < 19; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    return 0;
}