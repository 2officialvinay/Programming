#include<iostream>
using namespace std;

void print(int arr[], int n){
    // Base Case...
    if(n == 0){
        return;
    }

    // Printing...
    cout << arr[0] << "  ";

    // Recursive Relation...
    print(arr+1, n-1);

}

int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;

    print(arr, n);

    return 0;
}