#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>ans;
    vector<vector<int> >arr{
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25},
        {26,27,28,29,30},
        {31,32,33,34,35}
    };
    int m = arr.size();    // No. of rows...
    int n = arr[0].size(); // No. of columns...
    int total_elements = m*n;

    int starting_row = 0;
    int ending_col = n-1;
    int ending_row = m-1;
    int starting_col = 0;

    int count = 0;
    while (count < total_elements){

        for(int i = starting_col; i <= ending_col && count < total_elements; i++){
        ans.push_back(arr[starting_row][i]);
        count++;
        }
        starting_row++;

        for(int i = starting_row; i <= ending_row && count < total_elements; i++){
        ans.push_back(arr[i][ending_col]);
        count++;
        }
        ending_col--;

        for(int i = ending_col; i >= starting_col && count < total_elements; i--){
        ans.push_back(arr[ending_row][i]);
        count++;
        }
        ending_row--;

        for(int i = ending_row; i >= starting_row && count < total_elements; i--){
        ans.push_back(arr[i][starting_col]);
        count++;
        }
        starting_col++;
    }
    
    cout << "The spiral printed elements are: " << endl;
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    } 

    return 0;
}