#include<iostream>
using namespace std;

int main(){
    int arr[4] = {1,2,3,4};
    char ch[10] = "Vinay";

    // Different implementation of cout with int and char array...
    cout << arr << endl;  // It wiil give base address of array...
    cout << ch << endl;   // It will give complete string...

    return 0;
}