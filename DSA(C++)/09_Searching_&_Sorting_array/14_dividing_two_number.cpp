#include<iostream>
using namespace std;

int get_quotient(int m, int n){
    int s = 1;
    int e = m;
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s<=e){
        if(mid*n == m){
            return mid;
        }
        else if(mid*n < m){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int dividend, diviser, quotient;
    cout << "Enter the number you want to divide: ";
    cin >> dividend;
    cout << "Enter the number by which you want to divide: ";
    cin >> diviser;

    quotient = get_quotient(dividend, diviser);
    cout << "The quotient is: " << quotient << endl;
    return 0;
}