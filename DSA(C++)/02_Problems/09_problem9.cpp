/*
Given an array arr[] of size n, find the first repeated element.
The element should occur more than once and the index of its 
first occurrence should be the smallest.
NOTE: The position you return should be according to 1 based indexing.
*/

#include<iostream>
using namespace std;

int first_repeated(int arr[],int n){
    for(int i = 0; i < n; i++){
        bool isrepeated = false;
        for(int j = i+1; j < n; j++){
            if(arr[i]  == arr[j]){
                isrepeated = true;
                return i + 1;
            }
        }
    }
    return -1;
}



int main(){
    int n;
    int arr[] = {1,3,4,3,5};
    n = sizeof(arr)/sizeof(int);
    int ans = first_repeated(arr, n);
    cout << "The smallest position of repeated element is: " << ans << endl;
    return 0;
}