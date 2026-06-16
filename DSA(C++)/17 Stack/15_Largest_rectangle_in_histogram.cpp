#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerIndex(vector<int>& v){
    vector<int> next(v.size());
    stack<int> s;
    s.push(v.size());

    for(int i = v.size()-1; i >= 0; i--){
        while(s.top() != v.size() && v[s.top()] >= v[i]){
            s.pop();
        }
        next[i] = s.top();
        s.push(i);
    }

    return next;
}

vector<int> prevSmallerIndex(vector<int>& v){
    vector<int> prev(v.size());
    stack<int> s;
    s.push(-1);

    for(int i = 0; i < v.size(); i++){
        while(s.top() != -1 && v[s.top()] >= v[i]){
            s.pop();
        }
        prev[i] = s.top();
        s.push(i);
    }

    return prev;
}

int Area(int l, int w){
    return l*w;
}

int largestRectangleArea(vector<int>& heights) {
    vector<int> prev = prevSmallerIndex(heights);
    vector<int> next = nextSmallerIndex(heights);
    
    int maxArea = INT_MIN;
    for(int i = 0; i < heights.size(); i++){
        int area = Area(heights[i], (next[i]-prev[i]-1));
        maxArea = max(maxArea,area);
    }
    return maxArea;
}

int main(){
    vector<int> heights = {2,1,5,6,2,3};
    int ans = largestRectangleArea(heights);

    cout << "Area of largest rectangle will be " << ans << endl;

    return 0;
}