#include<bits/stdc++.h>
using namespace std;

int main(){
    int *const a = new int(2); // Here, const pointer but non-const data.
    cout << *a << endl;
    *a = 10;
    cout << *a << endl;
    // This will not work because pointer is constant.
    // int b = 20;
    // a = &b;
    // cout << *a << endl;

    return 0;
}