#include<iostream>
using namespace std;

void updateArr(int* p, int* q){
    *p = 100;
    *q = 200;
}

int main(){
    int arr[5] = {1,2,3,4,5};

    int* p = &arr[0];
    int* q = &arr[1];

    updateArr(p, q);

    cout << "The updated array is: " << endl;
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}