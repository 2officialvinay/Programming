#include<iostream>
using namespace std;

int f(int x, int* y, int** z){
    int m, n;
    **z += 1;
    n = **z;
    *y += 2;
    m = *y;
    x += 3;

    return x + m + n;
}

int main(){
    int c, *b, **a;

    c = 5;
    b = &c;
    a = &b;

    cout << f(c, b, a);

    return 0;
}