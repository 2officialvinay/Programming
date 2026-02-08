#include<iostream>
#include<vector>
using namespace std;

int binary_search(vector<int>arr, int s, int e, int x){
    while(s<=e){
        int mid = s + (e - s)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] > x){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}

int exponential_search(vector<int>arr, int x){
    int n = arr.size();
    if(arr[0] == x){
        return 0;
    }
    int i = 1;
    while(i < n && arr[i] < x){
        i = i*2;
    }
    return binary_search(arr, i/2, min(i,n-1), x);
}

int main(){
    vector<int>arr{3,4,5,6,11,13,14,15,56,60,63,69,80,89,95};
    int x = 56; // Searching element...
    
    int result = exponential_search(arr,x);

    cout << "The element 56 is found at '" << result << "' index." << endl;

    return 0;
}