/*
QUESTION : Check entered number is prime or not?
*/
#include<iostream>
using namespace std;

void prime(int n){
     bool isprime = true;
     for(int i=2; i<n; i++){
         if(n%i==0){
             isprime = false;
             break;
         }
     }
     if(isprime == true){
         cout << "It is a prime number." << endl;
     }
     else{
         cout << "It is not a prime number." << endl;
     }
}
    
int main(){
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    prime(n);  // Function call.
    return 0;
}