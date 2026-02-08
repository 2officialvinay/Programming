#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int binarysearch(vector<int>arr, int start, int x){
    int end = arr.size() - 1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(x > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

void get_pair(vector<int>arr, int k){
    sort(arr.begin(), arr.end());
    set<pair<int,int>>ans;
    
    for(int i = 0; i < arr.size(); i++){
            if(binarysearch(arr, i+1, arr[i] + k) != -1){
                ans.insert({arr[i], arr[i]+k});
            }
    }

    for(auto p : ans){
        cout << p.first << " " << p.second << endl;
    }
}        

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int>arr(n);
    cout << "Enter the values in the array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the pair difference value: ";
    cin >> k;

    get_pair(arr, k);

    return 0;
}