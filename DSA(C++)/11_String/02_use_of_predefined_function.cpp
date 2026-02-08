#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Vinay";
    cout << str << endl;

    cout << "String length: " << str.length() << endl;  // Give String length..

    cout << "isEmpty: " << str.empty() << endl;  // Give '1' for true & '0' for false

    str.push_back('S');  // Used to add a element.. 
    cout << str << endl;

    str.pop_back();  // Used to remove last element..
    cout << str << endl;

    cout << str.substr(0, 2) << endl; // Used to print the subpart of a string...
    return 0;
}