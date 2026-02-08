#include<iostream>
using namespace std;

bool isArraySorted(int arr[], int n, int i){
    // Base case...
    if(i == n-1){
        return true;
    }

    // Recursive Relation...
    if(arr[i] > arr[i+1]){
        return false;
    }

    return isArraySorted(arr, n, i+1);
}

int main(){
    int i = 0;
    int n;
    cout << "Enter the no. of element: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements in the array: " << endl;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    bool ans = isArraySorted(arr, n, i);

    if(ans){
        cout << "Given array is sorted." << endl;
    }
    
    else{
        cout << "Given array is not sorted." << endl;
    }

    return 0;
}