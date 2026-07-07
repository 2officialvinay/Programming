#include<bits/stdc++.h>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    // Gas remaining on next gas station...
    int balance = 0;

    // Deficit on next gs station...
    int deficit = 0;

    // Starting point...
    int start = 0;

    for(int i = 0; i < gas.size(); i++){
        balance += gas[i] - cost[i];

        if(balance < 0){
            deficit += balance;
            balance = 0;
            start =  i+1;
        }
    }

    if(deficit + balance >= 0){
        return start;
    }
    return -1;
}

int main(){
    vector<int> gas = {1,2,3,4,5};
    vector<int> cost = {3,4,5,1,2};

    cout << "Car should start from " << canCompleteCircuit(gas, cost) << " gas station." << endl;

    return 0;
}