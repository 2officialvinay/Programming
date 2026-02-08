#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cout << sentence.erase(10, 16) << endl;

    return 0;
}