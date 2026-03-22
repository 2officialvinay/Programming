#include<bits/stdc++.h>
using namespace std;

// macros..
#define pie 3.14

float area(float r){
    return pie*r*r;
}

float perimeter(float r){
    return 2*pie*r;
}

int main(){
    float r;
    cout << "Enter the radius of circle: ";
    cin >> r;
    
    cout << "Area of circle is " << area(r) << endl;
    cout << "Perimeter of circle is " << perimeter(r) << endl;

    return 0;
}