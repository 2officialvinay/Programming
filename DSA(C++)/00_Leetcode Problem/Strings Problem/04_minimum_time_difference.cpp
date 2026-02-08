/*
Given a list of 24-hour clock time points in "HH:MM" format,
return the minimum minutes difference between any two time-points in the list.
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int findMinDifference(vector<string>timepoints){
    vector<int>minute;

    // Converting string into int minute vector...
    for(int i = 0; i < timepoints.size(); i++){
        string current = timepoints[i];
        int hour = stoi(current.substr(0 , 2));
        int minutes = stoi(current.substr(3, 2));
        int totalminutes = (60*hour + minutes);
        minute.push_back(totalminutes);
    }

    // Sorting this vector...
    sort(minute.begin(), minute.end());

    // Calculating min. difference...
    int mini = INT_MAX;
    int n = minute.size();

    for(int i = 0; i < n - 1; i++){  // minute.size() - 1 is done to avoid overflow..
        int diff = minute[i+1] - minute[i];
        mini = min(mini, diff);
    }

    // Last and the generally forgottable concept...
    int lastdiff1 = (minute[0] + 1440) - minute[n-1];    // 1440 are the minutes in 1 day.
    int lastdiff2 = minute[n-1] - minute[0];
    int lastdiff = min(lastdiff1, lastdiff2);
    mini = min(lastdiff, mini);

    return mini;
}

int main(){
    vector<string>s = {"23:59", "00:00"};

    int get_minimum = findMinDifference(s);

    cout << "The min. difference is: " << get_minimum << endl;

    return 0;
}