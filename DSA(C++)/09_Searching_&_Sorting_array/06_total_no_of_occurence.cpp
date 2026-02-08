#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int>arr{1,2,3,3,3,3,3,3,3,3,4,5,6,7,8};
    int target = 3;

    auto first_occurence = lower_bound(arr.begin(), arr.end(), target);
    auto last_occurence = upper_bound(arr.begin(), arr.end(), target);

    cout << "The number of occurence is " << last_occurence - first_occurence + 1 << endl;

    return 0;
}