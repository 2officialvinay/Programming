#include<iostream>
using namespace std;

int main(){
    char ch =  'k';
    char* c = &ch;

    cout << c;  // It will some garbage value untill a null char found... 

    return 0;
}