#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices, int &minPrice, int &maxPrice, int i)
{
    // Base Case...
    if(i > prices.size()-1){
        return maxPrice;
    }

    // Progression...
    if (prices[i] < minPrice)
    {
        minPrice = prices[i];
    }

    int todaysProfit = prices[i] - minPrice;
    if (todaysProfit > maxPrice){
        maxPrice = todaysProfit;
    }

    // Recursive relation...
    return maxProfit(prices, minPrice, maxPrice, i+1);
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int minPrice = INT_MAX;
    int maxPrice = INT_MIN;

    int ans = maxProfit(prices, minPrice, maxPrice, 0);

    cout << "The maximum profit is: " << ans << endl;

    return 0;
}