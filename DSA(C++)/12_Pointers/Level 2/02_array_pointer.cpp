#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};

    cout << *arr << endl;          // arr[0]
    cout << arr[0] << endl;        // arr[0]
    cout << *arr + 1 << endl;      // arr[0] + 1
    cout << *(arr) + 1 << endl;    // arr[0] + 1
    cout << *(arr + 1) << endl;    // arr[1]
    cout << *(arr + 2) << endl;    // arr[2]

    return 0;
}