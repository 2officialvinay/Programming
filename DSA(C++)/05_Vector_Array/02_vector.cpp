#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    vector<int>arr(n, 10); // Initialising array with 10.
    cout << "Size of array: " << arr.size() << endl;
    cout << "Capacity of array: " << arr.capacity() << endl;

    cout << "Elements in array: " ;
    for(int i = 0; i<arr.size(); i++){
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0;
}