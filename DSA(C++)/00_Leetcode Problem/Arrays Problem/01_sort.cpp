#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{2,0,2,1,1,0};
    int l = 0, m = 0, h = arr.size()-1;

    cout << "The given array is: " << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    while(m<=h){
        if(arr[m] == 0){
            swap(arr[m], arr[l]);
            m++;
            l++;
        }
        else if(arr[m] == 2){
            swap(arr[m], arr[h]);
            m++;
            h--;
        }
        else if(arr[m] == 1){
            m++;
        }
    }

    cout << "The sorted array is: " << endl;
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}