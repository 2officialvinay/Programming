#include<bits/stdc++.h>
using namespace std;

int x = 10; // global variable...

int main(){
    int x = 30;
    cout << ::x << endl; // Global
    cout << x << endl; // Local

    {
        int x = 40;
        cout << x << endl; // Local to scope
        cout << ::x << endl; // Global
    }

    return 0;
}