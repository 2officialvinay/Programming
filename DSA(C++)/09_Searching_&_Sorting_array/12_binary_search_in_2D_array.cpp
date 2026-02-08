#include<iostream>
using namespace std;

bool binary_search(int arr[][4], int row, int col, int target){
    int s = 0;
    int e = row*col - 1;
    int mid = s + (e-s)/2;
    
    while(s <= e){
        int row_index = mid/col;
        int col_index = mid%col;
        
        if(arr[row_index][col_index] == target){
            return true;
        }
        else if(arr[row_index][col_index] < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main(){
    int arr[5][4] = {{1,2,3,4},
                     {5,6,7,8},
                     {9,10,11,12},
                     {13,14,15,16},
                     {17,18,19,20}};
    int row = 5;
    int col = 4;
               
    int target = 19;
    bool ans = binary_search(arr, row, col, target);
    if(ans){
        cout << "Element is found." << endl;
    }
    else{
        cout << "Element is not found." << endl;
    }                 
    return 0;
}