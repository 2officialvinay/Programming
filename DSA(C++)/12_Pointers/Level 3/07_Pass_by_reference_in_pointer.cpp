#include<iostream>
using namespace std;

void update(int* p){
    *p = *p + 1;
}

int main(){
    int a = 10;

    int* ptr = &a;

    update(ptr);

    cout << "The updated value is: " << a << endl;

    return 0;
}