#include<iostream>
using namespace std;

void solve(int arr[]){
    cout << "The address of pointer created for array in solve function is: " << &arr << endl;
    
    arr[0] = 10;
}

int main(){
    int arr[10] = {1,2,3,4,5};

    cout << "The address of array in main function is: " << arr << endl;

    solve(arr);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}