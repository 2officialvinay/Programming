// This code gives run-time error because we can't create null pointer.

#include<iostream>
using namespace std;

int main(){
    int* p = 0;
    int a = 7;
    *p = a;

    cout << *p << endl;

    return 0;
}