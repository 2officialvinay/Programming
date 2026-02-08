#include<iostream>
using namespace std;

void changeSign(int* ptr){
    *ptr = *(ptr) * (- 1);
}

int main(){
    int a = 10;

    changeSign(&a);

    cout << a << endl;

    return 0;
}