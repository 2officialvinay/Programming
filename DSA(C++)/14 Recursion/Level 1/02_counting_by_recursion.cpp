#include<iostream>
using namespace std;

void printCounting(int n){
    // Base Case..
    if(n == 0){
        return;
    }

    // Processing..
    cout << n << endl;

    // Recursive relation...
    printCounting(n-1);
}

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    printCounting(n);

    return 0;
}