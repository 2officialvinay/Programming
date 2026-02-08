#include<iostream>
#include<limits.h>
using namespace std;

int findmax(int arr[4][4], int row, int col){
    int max = INT_MIN;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main (){
    int arr[4][4] = {
        {78,52,69,35},
        {45,23,96,85},
        {34,56,78,20},
        {82,26,24,46}
    };

    int max = findmax(arr, 4, 4);
    cout << "The max value in the array is: " << max << endl;

    return 0;
}