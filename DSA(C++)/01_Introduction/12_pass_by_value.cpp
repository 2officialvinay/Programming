#include<iostream>
using namespace std;

void printa(int a){
    cout << a << endl;
    a++;
    cout << a << endl;
}

int main (){
    int a = 7;
    cout << a << endl;
    a++;
    cout << a << endl;
    printa(a);
    a--;
    cout << a << endl;
    return 0;
}