#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr1{1,3,5,7,9};
    vector<int>arr2{2,3,5,10,11};
    vector<int>arr3;

    for(int i = 0; i<arr1.size(); i++){
        int element = arr1[i];
        for(int j = 0; j<arr2.size(); j++){
            if(element == arr2[j]){
                arr3.push_back(element);
            }
        }
    }

    cout << "The intersection of arrays is:" << endl;
    for(auto value: arr3){
        cout << value << " ";
    }
    

    return 0;
}