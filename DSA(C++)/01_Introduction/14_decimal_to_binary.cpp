#include<iostream>
#include<cmath>
using namespace std;

// By Division Method:-
int binaryno1(int n){
     int i=0;
     int binarynumber = 0;
     while(n>0){
        int bit = n%2;
        n=n/2; //Gives integer value, ignoring digits after decimal due to declareation as int type. 
        binarynumber = bit*pow(10, i)+binarynumber;
        i++;
     }
     return binarynumber;
}

// By Bitwise Method:-
int binaryno2(int n){
     int i=0;
     int binarynumber = 0;
     while(n>0){
        int bit = (n & 1);
        n = n >> 1;
        binarynumber = bit*pow(10, i)+binarynumber;
        i++;
     }
     return binarynumber;
}

    
int main(){
    int n;
    cout << "Enter the value : " ;
    cin >> n;
   
    int binary = binaryno2(n); //FUNCTION CALL 
    cout << binary << endl;
    return 0;
}