#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no. of char. in string: ";
    cin >> n;
    char ch[n];
    cout << "Enter the String: ";
    cin >> ch;

    int i = 0;
    int j = sizeof(ch)/sizeof(char) - 1;
    while(i <= j){
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
    cout << "The reversed string is: " << ch << endl;

    return 0;
}