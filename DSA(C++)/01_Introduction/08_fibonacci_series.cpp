#include<iostream>
using namespace std;

int main (){
    
    int a = 0;
    int b = 1;
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << a << " " << b << " ";
    for(int i = 3; i<=n; i++){
        int next_number = a + b;
        cout << next_number << " ";
        a = b;
        b = next_number;
    }
    return 0;
}