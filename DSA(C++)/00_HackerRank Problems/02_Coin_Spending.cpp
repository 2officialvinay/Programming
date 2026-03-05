#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of coins: ";
    cin >> n;

    if(n < 20){
        cout << "The number of coins should be spend are " << n/3 << endl;
    }
    else{
        cout << "The number of coins should be spend are " << n/2 << endl;
    }

    return 0;
}