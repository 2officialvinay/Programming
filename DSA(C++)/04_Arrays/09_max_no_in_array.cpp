#include<iostream>
#include<limits.h> // Included to use --> INT_MIN & INT_MAX.
using namespace std;

int main(){
    int arr[] = {1,12,3,45,6,9,89,67,45,34,23,11};
    int size = 12;
    int max = INT_MIN;
    int min = INT_MAX;

    for(int i = 0; i<size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    for(int i = 0; i<size; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }

    cout << "The max. value of an element in an array is: " << max << endl;
    cout << "The min. value of an element in an array is: " << min << endl;

    return 0;
}