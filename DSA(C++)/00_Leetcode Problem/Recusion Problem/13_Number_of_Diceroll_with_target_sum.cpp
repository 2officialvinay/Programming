#include<bits/stdc++.h>
using namespace std;

int numRollsToTarget(int n, int k, int target){
    // Base Case...
    if(target < 0) return 0;
    if(n == 0 && target == 0) return 1;
    if(n == 0 && target != 0) return 0;
    if(n != 0 && target == 0) return 0;

    // Recusive Relation...
    int ans = 0;
    for(int i = 0; i <= k; i++){
        ans = ans + numRollsToTarget(n-1, k, target-i);
    }
    return ans;
}

int main(){
    int n, k, target;
    cout << "Enter no. of rolls, faces & target sum: " << endl;
    cin >> n >> k >> target;

    int ans = numRollsToTarget(n, k, target);

    cout << "The possible ways are " << ans << endl;

    return 0;
}