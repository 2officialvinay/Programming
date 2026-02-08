#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4,5,6,7,8,9};

    int sum = 9;

    for(int i = 0; i<arr.size(); i++){
        for (int j = i+1; j < arr.size(); j++){
            if(sum == arr[i]+arr[j]){
                cout << "The required pairs are " << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
        
    }

    return 0;
}