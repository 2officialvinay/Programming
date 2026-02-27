#include<bits/stdc++.h>
using namespace std;

void Solve(vector<string> &ans, int n, int open, int close, string output){
    // Base Case...
    if(open == 0 && close == 0){
        ans.push_back(output);
        return;
    }

    // Include Open bracket...
    if(open > 0){
        output.push_back('(');
        Solve(ans, n, open-1, close, output);
        // Backtracking...
        output.pop_back();
    }

    // Include Close  bracket...
    if(close > open){
        output.push_back(')');
        Solve(ans, n, open, close-1, output);
        // Backtracking...
        output.pop_back();
    }
}

vector<string> generateParenthesis(int n){
    vector<string> ans;
    int open = n;
    int close = n;
    string output = "";
    Solve(ans, n, open, close, output);
    return ans;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    vector<string> ans = generateParenthesis(n);

    for(auto x:ans){
        cout << x << "  ";
    }
    cout << endl;

    return 0;
}