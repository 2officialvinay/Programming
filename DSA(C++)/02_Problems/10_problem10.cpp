#include<iostream>
#include<vector>
using namespace std;

void waveprint(vector<vector<int> >arr){
    int row = arr.size();
    int col = arr[0].size();
    for (int startcol = 0; startcol < col; startcol++)
    {
        // Even no. of column ---> Top to Bottom
        if((startcol & 1) == 0){
            for (int i = 0; i < row; i++)
            {
                cout << arr[i][startcol] << " ";
            }
        }
        // Odd no. of column ---> Bottom to Top
        else{
            for (int i = row-1; i >= 0; i--)
            {
                cout << arr[i][startcol] << " ";
            }
        }
    }
}

int main(){
    vector<vector<int> >arr{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    waveprint(arr);
    return 0;
}