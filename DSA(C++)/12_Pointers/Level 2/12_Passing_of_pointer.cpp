#include<iostream>
using namespace std;

void update(int* ptr){
    *ptr = *ptr + 10;
    cout << "The address of ptr in update function is: " << &ptr << endl;
}

int main(){
    int a = 5;
    int* ptr = &a;
    cout << "The address of a is: " << &a << endl;
    cout << "The address stored in ptr is: " << ptr << endl;
    cout << "The address of ptr in main function is: " << &ptr << endl;

    update(ptr);

    cout << "The updated value of a is: " << a << endl;

    return 0;
}