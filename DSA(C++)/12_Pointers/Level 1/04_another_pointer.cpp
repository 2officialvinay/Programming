#include<iostream>
using namespace std;

int main(){
    int a = 5;

    int* ptr = &a;

    // Another pointer...
    int* ptr2 = ptr;  // It will copt the ptr.

    // Let's check...
    cout << "Value at address stored in ptr: " << *ptr << endl;

    cout << "Value at address stored in ptr2: " << *ptr2 << endl;

    return 0;
}