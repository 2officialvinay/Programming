#include<iostream>
#include<vector> 
using namespace std;

void solve(string digits, vector<string> &ans, int index, string output, vector<string> &mapping){
    // Base Case...
    if(index >= digits.length()){
        ans.push_back(output);
        return;
    }

    // Recursive...
    int digit = digits[index] - '0';
    string value = mapping[digit];
    for(int i = 0; i < value.length(); i++){
        char ch = value[i];
        // Including...
        output.push_back(ch);
        // Recursive Call...
        solve(digits, ans, index+1, output, mapping);
        // Backtracking...
        output.pop_back();

    }
}

vector<string> letterCombination(string digits){
    vector<string> ans;
    if(digits.length() == 0){
        return ans;
    }

    int index = 0;
    string output = "";
    vector<string> mapping(10);
    mapping[2] = "abc";
    mapping[3] = "def";
    mapping[4] = "ghi";
    mapping[5] = "jkl";
    mapping[6] = "mno";
    mapping[7] = "pqrs";
    mapping[8] = "tuv";
    mapping[9] = "wxyz";

    solve(digits, ans, index, output, mapping);
    return ans;
}

int main(){
    string digits;
    cout << "Enter the number: ";
    cin >> digits;

    vector<string> result = letterCombination(digits);

    for(auto x:result){
        cout << x << "  ";
    }
    cout << endl;

    return 0;
}