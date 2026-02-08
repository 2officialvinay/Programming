/*
QUESTION : Write a Function to display area of Circle.
*/
#include<iostream>
using namespace std;

float area(int r){
     return 3.14*r*r;
}
    
int main(){
    int r;
    cout << "Enter the radius of the circle : ";
    cin >> r;
    float a = area(r);  // Function call.
    cout << "Area of circle is " << a << endl;
    return 0;
}