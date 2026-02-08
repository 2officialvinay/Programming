#include<iostream>
using namespace std;

int powerof2(int n){
    // Base Case...
    if(n == 0){
        return 1;
    }

    // Recursive Relation...
    int result = 2 * powerof2(n-1);

    return result;
}

int main(){
    int n;
    cout << "Enter the power you want of 2: ";
    cin >> n;

    int ans = powerof2(n);

    cout << "The answer is " << ans << endl; 

    return 0;
}