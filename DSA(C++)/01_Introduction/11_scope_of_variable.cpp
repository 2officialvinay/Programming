#include<iostream>
using namespace std;

int main (){
    // SCOPE OF VARIABLE
    int a = 5;
    cout << a << endl;
    /* 
    We can't declare two variable in same block.
    But we can declare same variable in two 
    different block in same program.
    */
    if(1){
        int a = 4;
        cout << a << endl;
    }
    if(1){
       int a = 2;
       cout << a << endl;
       if(1){
          int a = 3;
          cout << a << endl;
       }
    }
}