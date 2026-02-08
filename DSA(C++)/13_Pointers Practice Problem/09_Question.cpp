// Different implementation of cout with int array & char array...

#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    cout << arr << endl;     // This gives base address of array...

    char ch[] = "VINAY";
    cout << ch << endl;      // This give whole string until a null char found...

    return 0;
}