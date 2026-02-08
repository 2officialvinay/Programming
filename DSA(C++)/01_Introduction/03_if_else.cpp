#include<iostream>
using namespace std;

int main(){
    char n;
    
    cout << "Enter the term you want to check, it is lowercase, uppercase, numeric value or special character:" << endl;
    cin >> n;
    
    if(n >= 'a' && n <= 'z'){
        cout << "This is lowercase character." << endl;
    }
    
    else if(n >= 'A' && n <= 'Z'){
        cout << "This is uppercase character." << endl;
    }
    
    else if(n >= '0' && n <= '9'){
        cout << "This is numeric value." << endl;
    }
    
    else{
        cout << "This is special character." << endl;
    }
}