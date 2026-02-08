#include<iostream>
using namespace std;

int main()
{
    int arr[500];
    int n;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    cout << "Enter the value of array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The values of array becomes: " << endl;
    for(int i = 0; i<n; i++){
        arr[i] = 1;
        cout << arr[i] << endl;
    }
    return 0;
}