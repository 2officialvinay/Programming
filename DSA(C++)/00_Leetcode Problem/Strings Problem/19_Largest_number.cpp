#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

static bool mycomp(string a, string b){
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}

string largestNumber(vector<int> &nums){
    vector<string>snums;
    for(auto n : nums){
        snums.push_back(to_string(n));
    }

    sort(snums.begin(), snums.end(), mycomp);
    if(snums[0] == "0") return "0";

    string ans = "";
    for(auto str : snums){
        ans += str;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the input: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The output is: " << largestNumber(arr) << endl;

    return 0;
}