#include<iostream>
using namespace std;

int main(){
    char name[10] = "Vinay";  // Good Practice...
    cout << name << endl;

    char* ch = "Vinay";      // Bad Practice...
    cout << ch << endl;

    return 0;
}