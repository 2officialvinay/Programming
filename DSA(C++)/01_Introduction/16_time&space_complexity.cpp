#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    for(int i = 0; i<n; i++){
         for(int j = n; j>i; j--){
              cout << "Time & Space Complexity ---> O(n²)" << endl;
         }
         cout << endl;
    }
    return 0;
}