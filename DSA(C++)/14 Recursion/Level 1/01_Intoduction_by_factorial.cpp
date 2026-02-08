#include<iostream>
using namespace std;

int factorial(int n){
    // Base case...
    if(n == 1){
        return 1;
    }
    int result = n * factorial(n-1);

    return result;
}

int main(){
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    int ans = factorial(n);

    cout << "The factorial of the " << n << " is: " << ans << endl;

    return 0;
}