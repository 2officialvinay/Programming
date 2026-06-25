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

int maximalRectangle(vector<vector<char>> &matrix){
    vector<vector<int>> v;
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i = 0; i < row; i++){
        vector<int>temp;
        for(int j = 0; j < col; j++){
            temp.push_back(matrix[i][j] - '0');
        }
        v.push_back(temp);
    }

    int area = largestRectangleArea(v[0]);

    for(int i = 1; i < row; i++){
        for(int j = 0; j < col; j++){
            v[i][j] += v[i-1][j];
        }
        area = max(area, largestRectangleArea(v[i]));
    }

    return area;
}

int main(){
    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };

    int area = maximalRectangle(matrix);

    cout << "Rectangle of maximum area is: " << area << endl;

    return 0;
}