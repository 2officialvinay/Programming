#include<bits/stdc++.h>
using namespace std;

void countingSort(vector<int> &arr){
    int maxi = *max_element(arr.begin(), arr.end());

    // Frequency counting array...
    vector<int> count(maxi+1,0);

    // Frequency counting...
    for(auto x:arr){
        count[x]++;
    }

    // Rebuilting the array...
    int index = 0;

    for(int i = 0; i <= maxi; i++){
        while(count[i] > 0){
            arr[index++] = i;
            count[i]--;
        }
    }
}

int main(){
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    cout << "Unsorted array is: ";
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;

    countingSort(arr);

    cout << "Sorted array is: ";
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}