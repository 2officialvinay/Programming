#include<iostream>
using namespace std;

int main(){
    char ch[] = "Vinay";
    char* c = ch;

    cout << ch << endl;
    cout << &ch << endl;
    cout << ch[0] << endl;

    cout << &c << endl;
    cout << *c << endl;
    cout << c << endl;

    return 0;
}