#include<iostream>
using namespace std;

void transpose(int arr[][3], int row, int col, int transposed_array[][3]){
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            transposed_array[j][i] = arr[i][j];
        }
        
    }
    cout << "The transposed array is: " << endl;
    for(int i = 0; i < 3; i++){
        for (int  j = 0; j < 3; j++){
            cout << transposed_array[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arr[3][3] = {
        {2,5,9},
        {3,4,7},
        {9,0,1}
    };

    int transposed_array[3][3];
    transpose(arr, 3, 3, transposed_array);
    
    return 0;
}