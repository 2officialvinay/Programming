#include<iostream>
using namespace std;

int main(){
    char s[] = "HELLO!";
    char* c = s;  // &s = s in case of array...

    cout << s[0] << "   " << c[0] << endl;

    return 0;
}