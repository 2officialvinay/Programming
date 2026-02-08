#include<iostream>
using namespace std;

int main(){

    int arr[10];
    cout << "Enter the values in array: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    
    cout << "The values entered in array are followed: " << endl;
     for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "  " ;
    }

    return 0;
}