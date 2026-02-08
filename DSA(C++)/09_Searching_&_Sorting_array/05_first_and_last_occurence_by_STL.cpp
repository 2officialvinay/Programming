#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{1,2,3,3,3,3,3,3,4,5,5,5,5,5,5,5,5,6,7,8,9};
    int target = 5;

    auto first_ans = lower_bound(arr.begin(), arr.end(), target);
    auto last_ans = upper_bound(arr.begin(), arr.end(), target);

    cout << "The index of first occurence of the element is " << first_ans - arr.begin() << endl;
    cout << "The index of last occurence of the element is " << last_ans - arr.begin() << endl;
    return 0;
}