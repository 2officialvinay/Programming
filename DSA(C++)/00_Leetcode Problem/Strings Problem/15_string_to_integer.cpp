#include<iostream>
#include<string>
#include <climits>   // for INT_MAX & INT_MIN...
#include <cctype>    // for isdigit()...
using namespace std;

int myAtoi(string s){
    int ans = 0, i = 0, sign = 1; // sign used to determine sign & 1 shows +ve sign...

    while(s[i] == ' '){
        i++;
    }

    if(i < s.size() && (s[i] == '-' || s[i] == '+')){
        sign = s[i] == '+' ? 1 : -1;
        i++;
    }

    while(i < s.size() && isdigit(s[i])){
        if(ans > INT_MAX/10 || (ans == INT_MAX/10 && s[i] > '7')){
            return sign == 1 ? INT_MAX : INT_MIN;
        }

        ans = ans*10 + (s[i] - '0');
        i++;
    }
    return ans*sign;
}

int main(){
    string s = "    1234hello";

    int result = myAtoi(s);

    cout << "The integer is: " << result << endl;

    return 0;
}