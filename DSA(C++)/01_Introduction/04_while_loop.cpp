#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the even number to sum all even numbers to it:" << endl;
    cin >> n;
    int i = 2;
    int sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum is:"<< sum << endl;
}