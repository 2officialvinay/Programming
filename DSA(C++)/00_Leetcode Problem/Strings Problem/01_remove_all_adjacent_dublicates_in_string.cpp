#include<iostream>
#include<string>
using namespace std;

string removeDublicate(string s){
    string ans = "";

    for(int i = 0; i < s.length(); i++){
        if(!ans.empty() && ans[ans.length() - 1] == s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main(){
    string s = "abcddcbz";

    string ans = removeDublicate(s);

    cout << "The required string is: " << ans << endl;

    return 0;
}