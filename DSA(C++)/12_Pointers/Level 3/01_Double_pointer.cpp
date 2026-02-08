#include<iostream>
using namespace std;

int main(){
    int a = 10;
    
    int* p = &a;   // Pointer to int data...
    int** q = &p;  // Pointer to int* data...

    cout << a << endl;      // 10
    cout << &a << endl;     // Add. of a
    cout << p << endl;      // Add. stored in p
    cout << &p << endl;     // Add. of p
    cout << *p << endl;     // 10
    cout << q << endl;      // Add. stored in q
    cout << &q << endl;     // Add. of q
    cout << **q << endl;    // 10

    return 0;
}