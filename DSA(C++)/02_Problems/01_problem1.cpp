/*
QUESTION : Maximum value from the three values?
*/

#include<iostream>
using namespace std;

int max( int x, int y, int z){
       if(x>y && x>z){
       return x;
    }
    else if(y>x && y>z){
       return y;
    }
    else {
       return z;
    }
}

int main(){
    int a,b,c;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    cout << "Enter the third number:" << endl;
    cin >> c;
    
    int max_value = max(a,b,c);
    cout << "The max. value is : " << max_value << endl;
    return 0;
}