#include<iostream>
using namespace std;

void ptrUpdate(int** ptr){
    **ptr = **ptr + 1;
}    

int main(){
    int a = 10;
    int* p = &a;
    int** q = &p;

    cout << "Before Updatation:-" << endl;
    cout << a << endl;

    ptrUpdate(q);

    cout << "After Updatation:-" << endl;
    cout << a << endl;

    return 0;
}