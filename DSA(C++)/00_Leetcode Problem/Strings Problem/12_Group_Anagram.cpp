/*
Given an array of strings strs, group the anagrams together.
You can return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters
of a different word or phrase, typically using all the original letters exactly once.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

vector<vector<string>> groupAnagram(vector<string>& strs){
    map<string, vector<string> >mp;

    for(auto str:strs){
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>>ans;
    for(auto it = mp.begin(); it != mp.end(); it++){
        ans.push_back(it -> second);
    }
    return ans;
}

int main(){
    vector<string>strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    vector<vector<string>>result = groupAnagram(strs);

    cout << "The Output is: " << endl;
    for(int i = 0; i<result.size(); i++){
        for(int j = 0; j<result[i].size(); j++){
            cout << result[i][j] << " ";
        }
    }

    return 0;
}