#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = { 
        {1,2,5,7},
        {3,5,7,9}, 
        {3,4,9,3},
        {1,3,0,5} };
    
    // Printing the 2-D array column wise...
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    

    return 0;
}