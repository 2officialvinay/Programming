#include<iostream>
using namespace std;

int main(){
    // Variable creation...
    int a = 5;

    // Pointer creation...
    int* ptr = &a;
    
    // Accessing the pointer...
    cout << "The address stored of a in ptr is: " << ptr << endl;

    // Accessing the address of pointer...
    cout << "The address of pointer is: " << &ptr << endl;

    // Accessing the value ptr is pointing to...
    cout << "The value of a is: " << *ptr << endl;

    return 0;
}