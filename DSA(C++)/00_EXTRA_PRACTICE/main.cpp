#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int& b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int a, b;

    cout << "1st no. ";
    cin >> a;

    cout << "2nd no. ";
    cin >> b;

    swap(a,b);
    cout << "Swapping elements are: " << a << " " << b << endl;

    return 0;
}