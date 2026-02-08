#include<iostream>
#include<string>
using namespace std;

int main(){
    string sentence = "This is my first project.";
    string target = "second";

    cout << sentence.replace(11, 5, target) << endl;

    return 0;
}