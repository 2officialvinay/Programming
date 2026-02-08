#include<iostream>
using namespace std;

void square(int* ptr){
    int a = 10;
    ptr = &a;
    *ptr = (*ptr) * (*ptr);
}

int main(){
    int a = 10;
    square(&a);

    cout << a << endl;

    return 0;
}