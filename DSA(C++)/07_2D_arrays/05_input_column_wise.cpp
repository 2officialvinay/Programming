#include<iostream>
using namespace std;

int main(){
    int arr[4][4];
    // Taking input...
    cout << "Enter the element in array: " << endl;
    for (int i = 0; i < 4; i++){
        for(int j = 0; j<4; j++){
            cin >> arr[j][i];
        }
        
    }
    
    // Printing the 2-D array row wise...
    cout << "The array is:" << endl;
    for(int i = 0; i<4; i++){
        for(int j = 0; j<4; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}