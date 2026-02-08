#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> find_closest(vector<int>arr, int k, int x){
    sort(arr.begin(), arr.end());
    int l = 0;
    int h = arr.size() - 1;
    while(h-l >= k){
        if(abs(arr[l] - l) > abs(arr[h] - x)){
            l++;
        }
        else{
            h--;
        }
    }
    vector<int>result;
    for(int i = l; i <=h; i++){
        result.push_back(arr[i]);
    }
    return result;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int>arr(n);
    
    cout << "Enter the values in array: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cout << "Enter the number of required elements: ";
    cin >> k;

    int x;
    cout << "Enter the value of closest deciding element: ";
    cin >> x;

    vector<int>ans = find_closest(arr, k, x);

    cout << "The closest elements are: " << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}