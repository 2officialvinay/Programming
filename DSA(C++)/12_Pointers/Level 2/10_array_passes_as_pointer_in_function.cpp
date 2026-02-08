#include<iostream>
using namespace std;

void printinFunction(int arr[10]){
    cout << "The size of array in function is: " << sizeof(arr) << endl;
}

int main(){
    int arr[10] = {1,2,3,4,5};

    cout << "The size of array in main function is: " << sizeof(arr) << endl;

    printinFunction(arr);

    return 0;
}