#include<iostream>
using namespace std;

int fibonacci(int n){
    // Base Case...
    if(n == 1) return 0;
    if(n == 2) return 1;

    // Recursive relation => i.e, f(n) = f(n-1) + f(n-2)...
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    cout << "Enter the term you want to see in fibonacci series: ";
    cin >> n;

    int ans = fibonacci(n);

    cout << "The " << n << "th term of the series is " << ans << endl;

    return 0;
}