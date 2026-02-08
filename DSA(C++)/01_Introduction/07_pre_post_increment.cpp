#include<iostream>
using namespace std;

int main(){
    int i = 5;
    
    cout << (i++) << endl;  // ans = 5 , i=6
    cout << (++i) << endl;  // ans = 7 , i=7
    cout << (i--) << endl;  // ans = 7 , i=6
    cout << (--i) << endl;  // ans = 5 , i=5 
    
}