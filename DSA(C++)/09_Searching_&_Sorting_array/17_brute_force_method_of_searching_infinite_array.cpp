#include<iostream>
using namespace std;

int main(){

    /*
    Array is as --> arr[] = {1,2,3,4,5,6,..........,n}
    */
    int i = 0;
    int ans = -1;
    int n;
    cout << "Enter the value to search: ";
    cin >> n;

    while(1){
        int array_element = i + 1; // Indicating the infinite array...
        if(array_element > n)
        break;
        if(array_element == n){
            ans = i;
        }
        i++;
    }

    cout << "The index of entered value is " << ans << endl;
    return 0;
}