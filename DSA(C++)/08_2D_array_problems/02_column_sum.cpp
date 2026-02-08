#include<iostream>
using namespace std;

int main(){
    int arr[4][4] = {
        {20,4,6,7},
        {3,6,83,0},
        {40,5,7,6},
        {8,90,6,4}
    };

    for(int i = 0; i<4; i++){
        int sum = 0;
        for(int j = 0; j<4; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl;
    }
    

    return 0;
}