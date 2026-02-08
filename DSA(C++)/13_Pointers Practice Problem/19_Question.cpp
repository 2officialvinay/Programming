#include<iostream>
using namespace std;

void Q(int z){
    z += z;
    cout << "Value from Q function: " << z << endl;
}

void P(int* y){
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout << "Value from P function: " << x << endl;
}

int main(){
    int x = 5;
    P(&x);

    cout << "Value from main function: " << x << endl;

    return 0;
}