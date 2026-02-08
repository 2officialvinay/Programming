#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout << "Size of array is: " << sizeof(arr) << endl;

    int* p = arr;
    cout << "Size of pointer is: " << sizeof(p) << endl;

    return 0;
}