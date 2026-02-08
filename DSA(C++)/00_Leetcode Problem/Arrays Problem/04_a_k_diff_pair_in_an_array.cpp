#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void get_pair(vector<int>arr, int k){
    sort(arr.begin(),arr.end());
    int found = 0;
    int i = 0;
    int j = i + 1;

    while(j<arr.size()){
        int diff = arr[j]-arr[i];
        if(i == j){    // To avoid comparing same index...
            j++;
            continue;
        }
        else if(diff == k){
            found++;
            cout << arr[i] << " " << arr[j] << endl;
            i++, j++;
        }
        else if(diff < k){
            j++;
        }
        else{
            i++;
        }
    }
    if(found == 0){
        cout << "INVALID! INPUT" << endl;
    }
}

int main(){
    int k;
    vector<int>arr{1,5,6,3,9,8,2,4,7,};
    cout << "Enter the diff. value: ";
    cin >> k;

    get_pair(arr, k);
    return 0;
}