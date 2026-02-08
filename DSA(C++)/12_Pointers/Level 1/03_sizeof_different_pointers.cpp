#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* p = &a;
    cout << "Size of p is: " << sizeof(p) << endl;

    char ch = 'g';
    char* q = &ch;
    cout << "Size of q is: " << sizeof(q) << endl;

    double b = 5;
    double* r = &b;
    cout << "Size of r is: " << sizeof(r) << endl;

    return 0;
}