#include<bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    string ans;

    for(auto ch:s){
        if(!ans.empty() && ans.back() == ch){
            ans.pop_back();
        }
        else{
            ans.push_back(ch);
        }
    }
    return ans;
}

int main(){
    string s = "abbaca";

    string ans = removeDuplicate(s);

    cout << "Before removal: " << s << endl;
    cout << "After removal: " << ans << endl;

    return 0;
}