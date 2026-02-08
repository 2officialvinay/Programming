#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>arr, int s, int e, int mid, int key){
    // Base Case...1
    if(s > e){
        return -1;
    }

    mid = (s + e)/2;
    // Base Case...2
    if(arr[mid] == key){
        return mid;
    }

    // Recursive Relation for left window...
    if(arr[mid] > key){
        return binarySearch(arr, s, mid-1, mid, key);
    }

    // Recursive Relation for right window...
    if(arr[mid] < key){
        return binarySearch(arr, mid+1, e, mid, key);
    }
}

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    int mid = (s + e)/2;
    int key;
    cout << "Enter a key to search in array: ";
    cin >> key;

    int ans = binarySearch(arr, s, e, mid, key);

    cout << "The index of key is: " << ans << endl;
    return 0;
}