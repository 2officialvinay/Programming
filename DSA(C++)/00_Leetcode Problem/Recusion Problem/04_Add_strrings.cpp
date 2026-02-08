#include<bits/stdc++.h>
using namespace std;

string addRecursively(string num1, int p1, string num2, int p2, int carry){
    // Base Case...
    if(p1 < 0 && p2 < 0){
        if(carry != 0){
            return string(1, carry + '0');
        }
        return "";
    }

    // Progression...
    int x = (p1 >= 0 ? num1[p1] - '0' : 0);
    int y = (p2 >= 0 ? num2[p2] - '0' : 0);
    int sum = x + y + carry;
    int digit = sum % 10;
    carry = sum / 10;
    string ans = "";
    ans.push_back(digit + '0');

    // Recursive Relation...
    ans = ans + addRecursively(num1, p1 - 1, num2, p2 - 1, carry);
    return ans;
}

string addString(string num1, string num2){
    string ans = addRecursively(num1, num1.length()-1, num2, num2.length()-1, 0);
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string num1;
    cout << "Enter first number: ";
    cin >> num1;

    string num2;
    cout << "Enter second number: ";
    cin >> num2;

    string ans = addString(num1, num2);

    cout << "The sum is: " << ans << endl;

    return 0;
}