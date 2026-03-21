#include<bits/stdc++.h>
using namespace std;

int main(){
    // Constant pointer and Constant data...
    const int *const a = new int(10);
    cout << *a << endl;

    /*
    can't change by:
    either *a = 50;
    or int b = 20;
       a = &b;
    */
   
    return 0;
}