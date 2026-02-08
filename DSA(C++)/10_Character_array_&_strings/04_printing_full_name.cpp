#include<iostream>
#include<string.h>
using namespace std;

int main(){
    char ch[50];

    cout << "Enter your name: ";
    cin.getline(ch, 50);

    cout << "Your name is " << ch << "." << endl;

    return 0;
}