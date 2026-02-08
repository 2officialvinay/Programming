/*
Find the total palindromic string in a given string.
*/

#include<iostream>
#include<string>
using namespace std;

int substringCount(string s, int left, int right){
    int count = 0;

    while(left >= 0 && right <= s.length() && s[left] == s[right]){
        count++;
        left--;
        right++;
    }
    return count;
}

int totalPalindromicSubstring(string s){
    int count = 0;
    int n = s.length();

    for(int center = 0; center < n; center++){
        // For odd string...
        int ans1 = substringCount(s, center, center);
        count = count + ans1;

        // For even string...
        int ans2 = substringCount(s, center, center + 1);
        count = count + ans2;
    }
    return count;
}

int main(){
    string s = "noon";
    
    int ans = totalPalindromicSubstring(s);

    cout << "The total substrings are: " << ans << endl;

    return 0;
}