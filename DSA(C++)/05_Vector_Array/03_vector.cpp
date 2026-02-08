#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // Initialising array...
    vector<int>arr{2,3,4,5,6,7,8};

    cout << "Elements in array are: " ;

    // Printing array...
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }
   
    return 0;
}