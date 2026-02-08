#include<iostream>
using namespace std;

int main(){

    int arr[] = {4, 5, 6, 7};
    int* p = (arr + 3);
    cout << *arr + 9;  // It will give 4 + 9 = 13 because p is not used here.

    return 0;
}