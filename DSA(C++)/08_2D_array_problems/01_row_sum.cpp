#include<iostream>
using namespace std;

int main(){
    int arr[5][4] = {
        {2,4,6,7},
        {3,6,8,0},
        {4,5,9,6},
        {8,9,6,4},
        {10,20,30,40}
    };

    for(int i = 0; i<5; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
    

    return 0;
}