/*
QUESTION : Find factorial of a number.
*/
#include<iostream>
using namespace std;

int factorial(int n){
     int product = 1;
     for(int i = 1; i<=n; i++){
          product = product*i;
     }
     return product;
}
    
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int ans = factorial(n);  // Function call.
    cout << "The factorial of " << n << " is " << ans << endl;
    return 0;
}