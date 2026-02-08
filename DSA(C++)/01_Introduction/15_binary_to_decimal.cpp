#include<iostream>
#include<cmath>
using namespace std;

int binarytodecimal(int n){
     int i=0;
     int decimalnumber = 0;
     while(n>0){
        int bit = n%10;
        n /= 10;
        decimalnumber = bit*pow(2, i) + decimalnumber;
        i++;
     }
     return decimalnumber;
}

    
int main(){
    int n;
    cout << "Enter the binary number : " ;
    cin >> n;
   
    int decimal = binarytodecimal(n); //FUNCTION CALL 
    cout << "The decimal number is " << decimal << endl;
    return 0;
}