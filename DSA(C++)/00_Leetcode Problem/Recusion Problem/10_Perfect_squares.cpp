#include<bits/stdc++.h>
using namespace std;

int numSquareSolver(int n){
    // Base Case...
    if(n == 0) return 1;
    if(n < 0) return 0;

    int mini = INT_MAX;
    int i = 1;
    int end = sqrt(n);
    while(i <= end){
        int perfectSquare = i*i;
        int numberOfPerfectSquare = 1 + numSquareSolver(n - perfectSquare);
        if(numberOfPerfectSquare < mini){
            mini = numberOfPerfectSquare;
        }
        ++i;
    }
    return mini;
}

int numSquare(int n){
    return numSquareSolver(n) - 1;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "The minimum number of perfect squares will be: " << numSquare(n) << endl;

    return 0;
}