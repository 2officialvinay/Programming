#include<iostream>
#include<vector>
using namespace std;

void waveprint(vector<vector<int> >arr){
    int row = arr.size();
    int col = arr[0].size();
    for (int startrow = 0; startrow < row; startrow++)
    {
        // Even no. of rows ---> Left to Right
        if((startrow & 1) == 0){
            for (int i = 0; i < col; i++)
            {
                cout << arr[startrow][i] << " ";
            }
        }
        // Odd no. of rows ---> Right to Left
        else{
            for (int i = col-1; i >= 0; i--)
            {
                cout << arr[startrow][i] << " ";
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