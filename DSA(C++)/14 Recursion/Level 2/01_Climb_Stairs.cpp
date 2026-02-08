#include<iostream>
using namespace std;

int climbStairs(int n){
    // Base Case...
    if(n == 0 || n == 1){
        return 1;
    }

    // Recursive Relation...
    int ans = climbStairs(n-1) + climbStairs(n-2);
    return ans;
}

int main(){
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;

    int result = climbStairs(n);

    cout << "The total number of ways to climb stairs are: " << result << endl;

    return 0;
}