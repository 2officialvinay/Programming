#include<bits/stdc++.h>
using namespace std;

int minCostTickets(vector<int> &days, vector<int> &costs, int i){
    // Base Case...
    if(i >= days.size()) return 0;

    // Recursive Relation...
    // 1 Day Pass..
    int cost1 = costs[0] + minCostTickets(days, costs, i+1);

    // 7 Days Pass..
    int passEndDay = days[i] + 7 - 1;
    int j = i;
    while(j < days.size() && days[j] <= passEndDay){
        j++;
    }
    int cost7 = costs[1] + minCostTickets(days, costs, j);

    // 30 Days Pass..
    passEndDay = days[i] + 30 - 1;
    j = i;
    while(j < days.size() && days[j] <= passEndDay){
        j++;
    }
    int cost30 = costs[2] + minCostTickets(days, costs, j);

    return min(cost1, min(cost7, cost30));
}

int main(){
    vector<int>days{1,4,6,7,8,20};
    vector<int>costs{2,7,15};
    int i = 0;

    int ans = minCostTickets(days, costs, i);
    cout << "The minimum cost will be " << ans << endl;

    return 0;
}