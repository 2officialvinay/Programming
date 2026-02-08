#include<iostream>
using namespace std;

int main(){
    char x[] = "Vinay";
    char* y = &x[0];

    cout << y << endl;

    return 0;
}