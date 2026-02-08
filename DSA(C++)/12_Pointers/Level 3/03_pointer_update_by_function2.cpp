#include<iostream>
using namespace std;

void ptrUpdate(int* ptr){
    *ptr = *ptr + 1;
}    

int main(){
    int a = 10;
    int* ptr = &a;

    cout << "Before Updatation:-" << endl;
    cout << a << endl;
    cout << ptr << endl;

    ptrUpdate(ptr);

    cout << "After Updatation:-" << endl;
    cout << a << endl;
    cout << ptr << endl;

    return 0;
}