/*
QUESTION:
Write a function to find the longest common
prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

string LongestCommonPrefix(vector<string>strs){
    string ans;
    int i = 0;

    while(true){
        char curr_ch = 0;

        for(auto str : strs){
            if(i >= str.size()){
                curr_ch = 0;
                break;
            }

            if(curr_ch == 0){
                curr_ch = str[i];
            }
            else if(str[i] != curr_ch){
                curr_ch = 0;
                break;
            }
        }
        if(curr_ch == 0){
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;
}

int main(){
    vector<string>strs = {"flower", "flow", "flight"};

    string result = LongestCommonPrefix(strs);

    cout << "The longest common prefix is: " << result << endl;

    return 0;
}