// Application of exponential searching...

#include<iostream>
using namespace std;

int binary_search(int arr[], int s, int e, int x){
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid] < x){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return -1;
}

int get_index(int arr[], int x){
    int i = 0;
    int j = 1;
    while(arr[j] < x){
        i = j;
        j = j*2;
    }
    return binary_search(arr, i, j, x);
}

int main(){
    // Simulating as infinite array...
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10,
                 11,12,13,14,15,16,17,18,19,20,
                 21,22,23,24,25,26,27,28,29,30,
                 31,32,33,34,35,36,37,38,39,40,
                 41,42,43,44,45,46,47,48,49,50};

    int x = 25;

    int ans = get_index(arr, x);
    cout << "The index of 25 is " << ans << endl;
    return 0;
}