#include<iostream>
using namespace std;

bool findkey(int arr[][3], int row, int col,int n){
    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if (arr[i][j] == n){
                return true;
            }
            
        }
    }
    return false;
}

int main(){
    int arr[3][3] = {
        {1,4,7},
        {2,3,8},
        {5,9,0}
    };

    int n;
    cout << "Enter the value: ";
    cin >> n;

    bool result = findkey(arr,3,3,n);
    if(result){
        cout << "Element is present.";
    }
    else{
        cout << "Element is not present.";
    }

    return 0;
}