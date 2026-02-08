#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> ans;
    int n;
    cout << "Enter the number to find its factorial: ";
    cin >> n;

    ans.push_back(1);   // initial value = 1
    int carry = 0;

    for(int i = 2; i <= n; i++){
        carry = 0;

        for(int j = 0; j < ans.size(); j++){
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }

        while(carry){
            ans.push_back(carry % 10);
            carry /= 10;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << "Factorial of " << n << " is:\n";
    for(int i = 0; i < ans.size(); i++){
        cout << ans [i]; 
    }
    return 0;
}