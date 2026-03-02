#include<iostream>
using namespace std;

int countInversion(int arr[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            count = arr[i] > arr[j] ? count + 1 : count; 
        }
    }
    return count;
}

int main(){
    int arr[4] = {8,4,2,1};
    int n = 4;

    int ans = countInversion(arr, n);

    cout << "The numbers of inversion counts to sort the array are: " << ans << endl;

    return 0;
}