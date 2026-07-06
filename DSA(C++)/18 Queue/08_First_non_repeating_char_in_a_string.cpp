#include<bits/stdc++.h>
using namespace std;

string find(string &s){
    queue<char> q;
    string ans;
    int freq[26] = {0};

    for(int i = 0; i < s.size(); i++){
        char ch = s[i];

        // Increment frequency...
        freq[ch - 'a']++;

        // Pushing into queue...
        q.push(ch);

        while(!q.empty()){
            if(freq[q.front() - 'a'] > 1){
                q.pop();
            }
            else{
                ans.push_back(q.front());
                break;
            }
        }

        if(q.empty()){
            ans.push_back('#');
        }
    }

    return ans;
}

int main(){
    string s = "aabcdee";
    string ans = find(s);

    cout << "First non-repeating char in a stream: " << ans << endl;

    return 0;
}