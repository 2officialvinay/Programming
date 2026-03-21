#include<bits/stdc++.h>
using namespace std;

int main(){
    const int *a = new int(2); // Here, Data is constant but pointer is non-constant.
    cout << *a << endl;

    // *a = 10; It will not change because data is constant.

    int b = 10;
    a = &b; // Pointer is re-assigned.
    cout << *a << endl;

    return 0;
}