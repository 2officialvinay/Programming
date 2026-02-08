#include<iostream>
using namespace std;

int main(){
    int a = 10;

    // Creating a reference variable...
    int& b = a;

    cout << "Value by normal variable: " << a << endl;
    cout << "Value by reference variable: " << b << endl;
    cout << endl;

    a++;
    cout << "Value by normal variable: " << a << endl;
    cout << "Value by reference variable: " << b << endl;
    cout << endl;

    b++;
    cout << "Value by normal variable: " << a << endl;
    cout << "Value by reference variable: " << b << endl;
    cout << endl;

    return 0;
}