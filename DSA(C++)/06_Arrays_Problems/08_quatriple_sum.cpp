#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,20,30,40,50,60,70,80,90};

    int sum = 100;

    cout << "The required pairs are: " << endl;
    for(int i = 0; i < arr.size(); i++){
        for (int j = i+1; j < arr.size(); j++){
            for(int k = j+1; k < arr.size(); k++){
                for(int l = k+1; l < arr.size(); l++){
                    if(sum == arr[i] + arr[j] + arr[k] + arr[l]){
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << "," << arr[l] << ")" << endl;
                    }
                }
            }
        }
        
    }

    return 0;
}