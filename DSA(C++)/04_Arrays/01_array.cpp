#include<iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout << "⚠️ WARNING : The maximum size of array is 100.⚠️" << endl;
    cout << "Enter the size of array: " << endl;
    cin >> n;
    cout << "Enter the value of array: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cout << "The doubles of array: " << endl;
    for(int i = 0; i<n; i++){
        cout << 2*arr[i] << endl;
    }
    return 0;
}