#include<iostream>
#include<vector>
using namespace std;

int find_ooo(vector<int>arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s)/2;

    while(s<=e){
        // When single element exist in array...
        if(s==e){
            return s;
        }
        // When mid is even...
        if(mid%2==0){
            if(arr[mid] == arr[mid + 1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }
        // When mid is odd...
        else{
            if(arr[mid] == arr[mid - 1]){
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    vector<int> arr{1,1,2,2,3,3,4,4,3,6,6,4,4};
    int ans = find_ooo(arr);
    cout << "Answer is " << arr[ans] << endl;
    return 0;
}