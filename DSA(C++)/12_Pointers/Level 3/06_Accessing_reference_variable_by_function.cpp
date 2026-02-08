#include<iostream>
using namespace std;

void solve(int& b){
    b++;
}

int main(){
    int a = 10;

    solve(a);

    cout << "The value of a is: " << a << endl;

    return 0;
}