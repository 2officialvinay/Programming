#include<bits/stdc++.h>
using namespace std;

class StockSpan{
    public:

    stack<pair<int,int>> s;
    StockSpan(){

    }

    int next(int price){
        int span = 1;

        while(!s.empty() && s.top().first <= price){
            span += s.top().second;
            s.pop();
        }

        s.push({price, span});

        return span;
    }
};

int main(){
    StockSpan* stockSpan = new StockSpan();
    int day_1 = stockSpan->next(100);
    int day_2 = stockSpan->next(80);
    int day_3 = stockSpan->next(60);
    int day_4 = stockSpan->next(70);
    int day_5 = stockSpan->next(60);
    int day_6 = stockSpan->next(75);
    int day_7 = stockSpan->next(85);

    cout << "Span: " << day_1 << " " << day_2 << " " << day_3 << " " << day_4 << " " << day_5 << " " << day_6 << " " << day_7;

    return 0;
}