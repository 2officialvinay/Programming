#include<iostream>
using namespace std;

int main(){
    char* ptr;
    char str[] = "abcdefghi";
    ptr = str;

    ptr += 5;

    cout << ptr << endl;

    return 0;
}